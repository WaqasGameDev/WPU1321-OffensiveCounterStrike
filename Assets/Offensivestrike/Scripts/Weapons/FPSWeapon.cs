using UnityEngine;
using System.Collections;

public class FPSWeapon : MonoBehaviour
{

	public enum WeaponType { Primary, Secondary, Special, Grenade, Flash, C4 }
	public WeaponType weaponType;
	public MeshRenderer muzzleFlash;
	public MeshRenderer muzzleFlash2;
	public ParticleSystem Capsules;
	public ParticleSystem Fumaca;
	public ParticleSystem Capsules2;
	public ParticleSystem Fumaca2;
	public SkinnedMeshRenderer GrenadeTop;
	public SkinnedMeshRenderer FlashTop;
	public SkinnedMeshRenderer FlashDown;
	public Transform ThrowPoint;
	public Transform C4Throw;
	public GameObject Grenade;
	public GameObject Flash;
	public GameObject C4;
	public float ForwardThrowForce;
	public float UpwardThrowForce;
	public GameObject CounterTag;
	public GameObject TerorTag;
	public Transform [] casingSpawnPoints;
	public Transform casingPrefab;
	RaycastHit automaticFire;

	public bool ShotGunReload = false;

	[HideInInspector]
	public string weaponName;
	[HideInInspector]
	public PlayerWeapons.WeaponSet wSettings; //This value set from PlayerWeapons.cs
	[HideInInspector]
	public bool isThirdPerson = false; //Asigned externally from PlayerWeapons.cs
	[HideInInspector]
	public AudioSource audioSource;
	[HideInInspector]
	public bool isReloading = false;
	[HideInInspector]
	public bool isLooking = false;
	//These vairbales are assigned at PlayerWeapons.cs
	[HideInInspector]
	public PlayerWeapons playerWeapons; 
	[HideInInspector]
	public SoldierAnimation soldierAnimation;
	[HideInInspector]
	public PlayerNetwork playerNetwork;
	[HideInInspector]
	public int weaponIndex = 0; //This is used when displaying kill report

	[HideInInspector]
	public Vector3 aimOffset = Vector3.zero; //Used in combination with aim object to set aim position
	[HideInInspector]
	public Vector3 defaultPosition = Vector3.zero; //Default weapon position

	//First person animations
	[System.Serializable]
	public class FPSAnimations
    {
		public AnimationClip idle;
		public AnimationClip fire;
		public AnimationClip fire2;
		public AnimationClip reload;
		public AnimationClip deploy;
		public AnimationClip reload2;
		public AnimationClip reload3;
		public AnimationClip look;
	}
	public FPSAnimations fpsAnimations;

	int bulletRange = 500; //How far bullet can reach
	int knifeRange = 3; //How far knife can reach
	float nextFireTime;
	[HideInInspector]
	public Animation animationController;
	bool setupDone = false;
	bool doneTaking = false;
	int defaultBulletsPerClip = 0;
	int defaultReserveBulelts = 0;
	int bulletsLeft = 0;
	int reserveBulletsLeft = 0;
	int animSay = 0;

	Transform muzzleFlashTransform;
	Transform muzzleFlashTransform2;
	[HideInInspector]
	public Transform thisT;

	public GameObject EliteDual;

	//Recoil values
	float highestBulletSpread = 6.0f; //Greater value mean greater bullet spread
	//This bulelt spread will be increased over time while shooting, only applied for non shotgun  and non sniper weapons
	float bulletSpread = 5; 
	//How many seconds after shooting should it take to reduce spread back to zero
	float timeToSpreadCooldown = 2; 
	RoomController rc;
	GameObject rcF;
	RoomUI	rU;
	bool isFire = false;

	//Called from FPS_PlayerWeapons.cs when selecting this weapon
	public void Deploy()
    {
		if(!setupDone)
        {
			aimOffset = Vector3.zero; 
			defaultPosition = Vector3.zero;

			//We create a static random number at StaticData.cs
			//Now we sum that number and bullet count to obscure ammo values
			//Which will make it harder to modify them with CheatEngine
			defaultBulletsPerClip = GameSettings.cnst + wSettings.bulletsPerClip;
			defaultReserveBulelts = GameSettings.cnst + wSettings.reserveBullets;
			bulletsLeft = defaultBulletsPerClip;
			reserveBulletsLeft = defaultReserveBulelts;

			//Setup animations
			if(GetComponent<Animation>() != null)
            {
				animationController = GetComponent<Animation>();
				animationController.playAutomatically = false;
				if(fpsAnimations.idle)
                {
					fpsAnimations.idle.wrapMode = WrapMode.Once;
				}
				if(fpsAnimations.fire)
                {
					fpsAnimations.fire.wrapMode = WrapMode.Once;
				}
				if(fpsAnimations.fire2)
				{
					fpsAnimations.fire2.wrapMode = WrapMode.Once;
				}
				if(fpsAnimations.deploy)
                {
					fpsAnimations.deploy.wrapMode = WrapMode.Once;
				}
				if(fpsAnimations.reload)
                {
					fpsAnimations.reload.wrapMode = WrapMode.Once;
				}
				if(fpsAnimations.reload2)
				{
					fpsAnimations.reload2.wrapMode = WrapMode.Loop;
				}
				if(fpsAnimations.reload3)
				{
					fpsAnimations.reload3.wrapMode = WrapMode.Once;
				}
				if(fpsAnimations.look)
				{
					fpsAnimations.look.wrapMode = WrapMode.Once;
				}
			}
            else
            {
				if(!isThirdPerson)
                {
					Debug.LogError("First person weapon require Animation component to be assigned near FPSWeapon.cs");
				}
			}

			if(wSettings.fireRate <= 0)
            {
				wSettings.fireRate = 0.01f;
			}
			if(wSettings.timeToDeploy <= 0)
            {
				wSettings.timeToDeploy = 0.01f;
			}
			if(wSettings.reloadTime <= 0)
            {
				wSettings.reloadTime = 0.01f;
			}

			isReloading = false;
			isLooking = false;
			ShotGunReload = false;

			thisT = transform;

			defaultPosition = thisT.localPosition;

			weaponName = gameObject.name;

			if(muzzleFlash != null)
            {
				muzzleFlashTransform = muzzleFlash.transform;
			}

			if(muzzleFlash2 != null)
			{
				muzzleFlashTransform2 = muzzleFlash2.transform;
			}

			if(wSettings.aimObject)
            {
				/*aimOffset = wSettings.aimObject.position - thisT.position;
				aimOffset.z = defaultPosition.z;
				aimOffset.y *= -1;
				aimOffset.x = 0;*/

				aimOffset = new Vector3(wSettings.aimObject.localPosition.x * thisT.localScale.x, wSettings.aimObject.localPosition.y * thisT.localScale.y,  defaultPosition.z);
				aimOffset.y *= -1;
				aimOffset.x *= - 1;
			}

			setupDone = true;
		}

		if(muzzleFlash)
        {
			muzzleFlash.enabled = false;
		}

		if(muzzleFlash2)
		{
			muzzleFlash2.enabled = false;
		}

		if (EliteDual != null) {
			if (wSettings.fireType == PlayerWeapons.FireType.Dual) {
				EliteDual.SetActive (true);
			} else {
				EliteDual.SetActive (false);
			}
		}

		this.StopAllCoroutines();
		isReloading = false;
		ShotGunReload = false;

		if(!isThirdPerson)
        {
			if(gameObject.activeSelf)
            {
				StartCoroutine(TakeInAnimation());
			}
		}
        else
        {
			doneTaking = true;
			if (wSettings.fireType != PlayerWeapons.FireType.C4) {
				if (soldierAnimation) {
					soldierAnimation.PlayFireC4Stop ();
				}
			}
		}

		//Play take in sound
		audioSource.clip = wSettings.takeInSound;
		audioSource.Play();

		thisT.localPosition = defaultPosition;
		
		bulletSpread = 0;
	}

	IEnumerator TakeInAnimation()
    {
		doneTaking = false;

		//Play "Take-in" animation
		if(fpsAnimations.deploy)
        {
			animationController.Rewind(fpsAnimations.deploy.name);
			animationController[fpsAnimations.deploy.name].speed = animationController[fpsAnimations.deploy.name].length/wSettings.timeToDeploy;
			animationController[fpsAnimations.deploy.name].time = 0;
			animationController.Play(fpsAnimations.deploy.name);
		}

		yield return new WaitForSeconds(wSettings.timeToDeploy);

		doneTaking = true;
	}

	public void Fire ()
    {
		//NOTE: Input is handles at FPSPlayerWeapons.cs

		if (!doneTaking || bulletsLeft - GameSettings.cnst <= 0 && !isThirdPerson || isReloading)
        {
			playerWeapons.isFiring = false;
			return;
		}

		if(wSettings.fireType == PlayerWeapons.FireType.MachineGun || wSettings.fireType == PlayerWeapons.FireType.m246 || wSettings.fireType == PlayerWeapons.FireType.Dual || wSettings.fireType == PlayerWeapons.FireType.Pistol || wSettings.fireType == PlayerWeapons.FireType.SniperRifleAuto || wSettings.fireType == PlayerWeapons.FireType.MachinePistol || wSettings.fireType == PlayerWeapons.FireType.Shotgun)
        {
			//Automatic fire sync over network
			playerWeapons.isFiring = true;
		}

		if (wSettings.fireType == PlayerWeapons.FireType.GRENADE_LAUNCHER) 
		{
			GameSettings.grenadeShoot = false;
		}

		if (wSettings.fireType == PlayerWeapons.FireType.FlashBang) 
		{
			GameSettings.flashShoot = false;
		}
		
		// If there is more than one bullet between the last and this frame
		// Reset the nextFireTime
		if (Time.time - wSettings.fireRate > nextFireTime)
        {
			nextFireTime = Time.time - Time.deltaTime;
		}
		
		// Keep firing until we used up the fire time
		while( nextFireTime < Time.time)
        {
			FireOneShot();
			nextFireTime += wSettings.fireRate;
		}

	}

	public void Fire2 ()
	{
		if( nextFireTime < Time.time)
		{
		animationController[fpsAnimations.fire2.name].speed = 1.5f;
		animationController.Play(fpsAnimations.fire2.name);
		GameSettings.mobileFiring = false;
		}
	}

	public void C4Fire2(){
		StopCoroutine (ReloadTimesC4 ());
		animationController [fpsAnimations.fire.name].speed = 0.70f;
		animationController.Play (fpsAnimations.fire.name);
		if (GameSettings.AnimOn) {
			playerNetwork.FireSingleRemoteC4Fire();
			StartCoroutine (ReloadTimesC4 ());
		}
	}

	public void C4Fire ()
	{
		if (isThirdPerson) {
			if (soldierAnimation) {
				soldierAnimation.PlayFireAnimationC4 ();
			}
			audioSource.Stop();
			audioSource.clip = wSettings.clipIn;
			audioSource.Play();
		}
	}

	public void C4idle2(){
		playerNetwork.FireSingleRemoteC4Idle();
		StopCoroutine (ReloadTimesC4 ());
		animationController [fpsAnimations.idle.name].speed = 1;
		animationController.Play (fpsAnimations.idle.name);
		StopCoroutine (ReloadTimesC4 ());
	}

	public void C4idle ()
	{
		if (isThirdPerson) {
			if (soldierAnimation) {
				soldierAnimation.PlayİdleC4 ();
			}
		}
	}

	void GrenadeShootm(){
		GameObject expode;
		Grenade.gameObject.name = "Grenade"+ playerNetwork.playerTeam.ToString();
		Grenade.GetComponent<Grenade>().kilrID = playerNetwork.playerID;
		expode=Instantiate(Grenade,transform.position,transform.rotation) as GameObject;
		expode.transform.position = ThrowPoint.transform.position;
		expode.transform.rotation = ThrowPoint.transform.rotation;
		expode.SetActive(true);
		expode.GetComponent<Rigidbody>().AddRelativeForce(0,UpwardThrowForce,ForwardThrowForce,ForceMode.Impulse);
	}

	void FlashShootm(){
		GameObject flashexpode;
		flashexpode=Instantiate(Flash,transform.position,transform.rotation) as GameObject;
		flashexpode.transform.position = ThrowPoint.transform.position;
		flashexpode.transform.rotation = ThrowPoint.transform.rotation;
		flashexpode.SetActive(true);
		flashexpode.GetComponent<Rigidbody>().AddRelativeForce(0,UpwardThrowForce,ForwardThrowForce,ForceMode.Impulse);
	}

	void C4Shoot(){
		GameObject C4n;
		C4n=Instantiate(C4,transform.position,transform.rotation) as GameObject;
		C4n.transform.position = C4Throw.transform.position;
		C4n.SetActive(true);
		GameSettings.C4Fire = false;
		GameSettings.C4CreateUI = false;
		GameSettings.C4idle = false;
		GameSettings.mobileFiring = false;
	}

	void FireOneShot()
    {
		if(!isThirdPerson)
        {
			//Sync single shot over network
			if(wSettings.fireType != PlayerWeapons.FireType.MachineGun || wSettings.fireType != PlayerWeapons.FireType.m246 || wSettings.fireType != PlayerWeapons.FireType.Dual || wSettings.fireType != PlayerWeapons.FireType.Pistol || wSettings.fireType != PlayerWeapons.FireType.SniperRifleAuto || wSettings.fireType != PlayerWeapons.FireType.MachinePistol || wSettings.fireType != PlayerWeapons.FireType.Shotgun)
            {
				playerNetwork.FireSingleRemote();
			}

			//Play fire animation
			if (wSettings.fireType != PlayerWeapons.FireType.Dual) {
				if (wSettings.fireType == PlayerWeapons.FireType.C4) {
				} 
				else {
					if (animationController && fpsAnimations.fire) {
						animationController.Rewind (fpsAnimations.fire.name);
						animationController [fpsAnimations.fire.name].speed = 1;
						animationController.Play (fpsAnimations.fire.name);
					}
				}
			} 
			else {
				if (animSay == 1) {
					if (animationController && fpsAnimations.fire2) {
						animationController.Rewind (fpsAnimations.fire2.name);
						animationController [fpsAnimations.fire2.name].speed = 1;
						animationController.Play (fpsAnimations.fire2.name);
					}
					if (muzzleFlash2) {
						StopCoroutine (DoMuzzleFlash ());
						StartCoroutine (DoMuzzleFlash ());
					}
				}
				if (animSay == 0) {
					if (animationController && fpsAnimations.fire) {
						animationController.Rewind (fpsAnimations.fire.name);
						animationController [fpsAnimations.fire.name].speed = 1;
						animationController.Play (fpsAnimations.fire.name);
					}
					if (muzzleFlash) {
						StopCoroutine (DoMuzzleFlash2 ());
						StartCoroutine (DoMuzzleFlash2 ());
					}
				}	
			}
				GameSettings.rc.distance = 15.5f;
				//Do Recoil

				float recoilPushAmount = wSettings.fireType != PlayerWeapons.FireType.Shotgun && wSettings.fireType != PlayerWeapons.FireType.SniperRifle && wSettings.fireType != PlayerWeapons.FireType.SniperRifleAuto ? 0.41f : 1.95f;
				//Reduce recoil shake if we croaching or slowly walking
				if (playerNetwork.fpsController.isCrouching || playerNetwork.fpsController.isSprintingSlowly) {
					recoilPushAmount *= 0.5f;
				}
				playerNetwork.fpsController.firstPersonViewRotation = new Vector2 (-recoilPushAmount, recoilPushAmount);
		}
        else
        {
			//Play fire animation on third person character
			if (wSettings.fireType == PlayerWeapons.FireType.Dual) {
				if (animSay == 1) {
					if (soldierAnimation) {
						soldierAnimation.PlayFireAnimation ();
					}
					if (muzzleFlash2) {
						StopCoroutine (DoMuzzleFlash ());
						StartCoroutine (DoMuzzleFlash ());
					}
				}
				if (animSay == 0) {
					if (soldierAnimation) {
						soldierAnimation.PlayFireAnimation ();
					}
					if (muzzleFlash) {
						StopCoroutine (DoMuzzleFlash2 ());
						StartCoroutine (DoMuzzleFlash2 ());
					}
				}
			} 
			else {
				if (soldierAnimation) {
					soldierAnimation.PlayFireAnimation ();
				}
			}

			if (!playerNetwork.playerKilled) {
				if (CounterTag != null && TerorTag != null) {
					if (playerNetwork.playerTeam == 1) {
						CounterTag.tag = "Counter";
						CounterTag.GetComponent<TagFire>().AllClear();
					}

					if (playerNetwork.playerTeam == 2) {
						TerorTag.tag = "Teror";
						TerorTag.GetComponent<TagFire>().AllClear();
					}
				}
			}

		}

		//Play Weapon audio
		audioSource.Stop();
		audioSource.clip = wSettings.fireSound;
		audioSource.Play();

		if(!isThirdPerson && wSettings.fireType != PlayerWeapons.FireType.Knife)
		{
			if (wSettings.fireType != PlayerWeapons.FireType.GRENADE_LAUNCHER && wSettings.fireType != PlayerWeapons.FireType.FlashBang) {
				if (wSettings.fireType != PlayerWeapons.FireType.C4) {
					bulletsLeft--;
					wSettings.bulletsPerClip = bulletsLeft - GameSettings.cnst;
				}
			} 
			else {
				wSettings.bulletsPerClip = 0;
			}
		}

		if (wSettings.fireType != PlayerWeapons.FireType.Dual) {
			if(muzzleFlash)
			{
				StopCoroutine(DoMuzzleFlash());
				StartCoroutine(DoMuzzleFlash());
			}
			if (casingPrefab != null) {
				StopCoroutine(CasingDelay());
				StartCoroutine(CasingDelay());
			}
		}

		if (wSettings.fireType == PlayerWeapons.FireType.GRENADE_LAUNCHER) {
			if (GrenadeTop) {
				StopCoroutine (BombGrenade ());
				StartCoroutine (BombGrenade ());
			}
		}

		if (wSettings.fireType == PlayerWeapons.FireType.FlashBang) {
			if (FlashTop) {
				StopCoroutine (FlashBang ());
				StartCoroutine (FlashBang ());
			}
		}

			//Setup fire direction and fire point, for third person we push fire point slightly to front to not hit our Hitboxes
			Vector3 fireDirection = isThirdPerson ? (playerWeapons.playerCamera.position + playerWeapons.playerCamera.forward * 100) - thisT.position : playerWeapons.playerCamera.forward * 100;
			Vector3 firePoint = isThirdPerson ? thisT.position + fireDirection * 0.001f : playerWeapons.playerCamera.position;

		//Shoot bullet
		if (wSettings.fireType == PlayerWeapons.FireType.Shotgun) {
			//Shotgun shooting 7 fractions
			for (int i = 0; i < 7; i++) {
				//Do bullet spread, always do spread for shotgun even if aiming
				Vector3 spread = new Vector3 (Random.Range (-highestBulletSpread, highestBulletSpread), Random.Range (-highestBulletSpread, highestBulletSpread), Random.Range (-highestBulletSpread, highestBulletSpread));
				ShootBullet (firePoint, fireDirection + spread);
			}
		} 
		else if (wSettings.fireType == PlayerWeapons.FireType.GRENADE_LAUNCHER) {
			Invoke ("GrenadeShootm", 0.25f);
		}
		else if (wSettings.fireType == PlayerWeapons.FireType.FlashBang) {
			Invoke ("FlashShootm", 0.25f);
		}
		else if (wSettings.fireType == PlayerWeapons.FireType.C4) {
			Invoke ("C4Shoot", 0.05f);
		} 
        else
        {
			//Other weapons
			Vector3 spread = new Vector3(Random.Range(-bulletSpread, bulletSpread), Random.Range(-bulletSpread, bulletSpread), Random.Range(-bulletSpread, bulletSpread));
			if(GameSettings.currentFOV != GameSettings.defaultFOV)
            {
				//We aiming, do not apply bullet spread
				spread = Vector3.zero;
			}

			ShootBullet(firePoint, fireDirection + spread);

			//Start do bullet spread only after first shot
			if(highestBulletSpread > bulletSpread)
            {
				if(bulletSpread == 0)
                {
					StartCoroutine(ReduceSpreadOverTime());
				}
				bulletSpread += wSettings.fireRate * highestBulletSpread;
			}
		}

		if (wSettings.fireType == PlayerWeapons.FireType.Shotgun && ShotGunReload == false && bulletsLeft - GameSettings.cnst <= 0 && reserveBulletsLeft - GameSettings.cnst > 0) {
			StopCoroutine ("ReloadCoroutineShotGun");
			StartCoroutine (ReloadCoroutineShotGun (false));
		}

		if(!isThirdPerson && bulletsLeft - GameSettings.cnst <= 0 && reserveBulletsLeft - GameSettings.cnst > 0 && wSettings.fireType != PlayerWeapons.FireType.Shotgun)
        {
				StopCoroutine ("ReloadCoroutine");
				StartCoroutine (ReloadCoroutine (true));
		}
	}

	void Update(){
		rcF = GameObject.Find ("_RoomController(Clone)");
		rc = rcF.GetComponent<RoomController> ();
		rU = rcF.GetComponent<RoomUI> ();
		//Setup fire direction and fire point, for third person we push fire point slightly to front to not hit our Hitboxes
		Vector3 fireDirection = isThirdPerson ? (playerWeapons.playerCamera.position + playerWeapons.playerCamera.forward * 100) - thisT.position : playerWeapons.playerCamera.forward * 100;
		Vector3 firePoint = isThirdPerson ? thisT.position + fireDirection * 0.001f : playerWeapons.playerCamera.position;
		int tmpFireRange = 150;
		if (Physics.Raycast (firePoint, fireDirection, out automaticFire, tmpFireRange)) {
			if (wSettings.fireType != PlayerWeapons.FireType.Knife && wSettings.fireType != PlayerWeapons.FireType.FlashBang && wSettings.fireType != PlayerWeapons.FireType.GRENADE_LAUNCHER) {
				if (rc.ourTeam == 1 && automaticFire.transform.tag == "T" && !isFire) {
					isFire = true;
					//StartCoroutine ("MaticFire");
				} 
				if (rc.ourTeam == 2 && automaticFire.transform.tag  == "CT" && !isFire) {
					isFire = true;
					//StartCoroutine ("MaticFire");
				}
				if (rc.ourTeam == 2 && automaticFire.transform.tag == "CT" || rc.ourTeam == 1 && automaticFire.transform.tag == "T") {
					rU.aColor = Color.red;
				} 
				else {
					rU.aColor = Color.yellow;
				}

			}
		}
	}
		


	void ShootBullet (Vector3 firePoint, Vector3 fireDirection)
    {
		RaycastHit hit;
		RaycastHit hit2;
		int tmpFireRange = wSettings.fireType == PlayerWeapons.FireType.Knife ? knifeRange : bulletRange;
		
		// Did we hit anything?
		if (Physics.Raycast (firePoint, fireDirection, out hit, tmpFireRange))
        {
			if (hit.transform.gameObject.name == "AI_Bot(Clone)")
			{
				//Blood particle

				Debug.LogError("PLAYER HIT THE BOT");
				Instantiate(playerWeapons.bloodParticles, hit.point, Quaternion.LookRotation(hit.normal));
				hit.transform.GetComponent<HealthScript>().ApplyDamage(25f);
			}

			if (hit.transform.CompareTag("Ai") && (int)playerNetwork.photonView.owner.CustomProperties["Team"] == 2)
            {
				if(GameSettings.rc.ourPlayer.playerWeapons.currentSelectedWeapon.weaponName == "AWP")
                {
					hit.transform.GetComponent<PhotonView>().RPC("AiDamage", PhotonTargets.AllBuffered, 101, GameSettings.rc.ourPlayer.playerWeapons.currentSelectedWeapon.weaponName);
				}
                else { hit.transform.GetComponent<PhotonView>().RPC("AiDamage", PhotonTargets.AllBuffered, Random.Range(1, 50), GameSettings.rc.ourPlayer.playerWeapons.currentSelectedWeapon.weaponName); }

				//hit.transform.GetComponent<BotAi>().killedPlayerName = playerNetwork.photonView.owner.NickName;
				//hit.transform.GetComponent<BotAi>().killedPlayerTeam = (int)playerNetwork.photonView.owner.CustomProperties["Team"];
				//hit.transform.GetComponent<BotAi>().PlayerAITargetRadar();
				Instantiate(playerWeapons.bloodParticles, hit.point, Quaternion.LookRotation(hit.normal));
			}

			if (hit.transform.CompareTag("AiTr") && (int)playerNetwork.photonView.owner.CustomProperties["Team"] == 1)
			{
				if (GameSettings.rc.ourPlayer.playerWeapons.currentSelectedWeapon.weaponName == "AWP")
				{
					hit.transform.GetComponent<PhotonView>().RPC("AiDamage", PhotonTargets.AllBuffered, 101, GameSettings.rc.ourPlayer.playerWeapons.currentSelectedWeapon.weaponName);
				}
				else { hit.transform.GetComponent<PhotonView>().RPC("AiDamage", PhotonTargets.AllBuffered, Random.Range(1, 50), GameSettings.rc.ourPlayer.playerWeapons.currentSelectedWeapon.weaponName); }

				//hit.transform.GetComponent<BotAi>().killedPlayerName = playerNetwork.photonView.owner.NickName;
				//hit.transform.GetComponent<BotAi>().killedPlayerTeam = (int)playerNetwork.photonView.owner.CustomProperties["Team"];
				//hit.transform.GetComponent<BotAi>().PlayerAITargetRadar();

				Instantiate(playerWeapons.bloodParticles, hit.point, Quaternion.LookRotation(hit.normal));
			}

           

			if (hit.transform.CompareTag("Body"))
            {
				//Blood particle
				Instantiate(playerWeapons.bloodParticles, hit.point, Quaternion.LookRotation(hit.normal));
				
				if(!isThirdPerson)
                {
					HitBox tmp;
					if((tmp = hit.transform.GetComponent<HitBox>()) != null)
                    {
						//Compose values we are going to pass
						int[] values = new int[3]; 
						values[0] = weaponIndex; //What weapon we used to make damage
						values[1] = (int)tmp.bodyPart; //What body part we hit
						values[2] = 0; //What side of player was hit (For hit marks), this is assigned later at HitBox.cs
						tmp.Damage(values, hit.point);
					}
				}
			}
            else
            {
				if(hit.transform.CompareTag("Metal") && wSettings.fireType != PlayerWeapons.FireType.Knife)
                {
					Instantiate(playerWeapons.metalParticles, hit.point, Quaternion.LookRotation(hit.normal));
				}
                else
                {
					if (!hit.transform.CompareTag ("Walo") && wSettings.fireType != PlayerWeapons.FireType.Knife && !hit.transform.CompareTag ("Sea") && !hit.transform.CompareTag ("C4") && !hit.transform.CompareTag ("C4Box") && !hit.transform.CompareTag ("A") && !hit.transform.CompareTag ("B") && !hit.transform.CompareTag("Ai") && !hit.transform.CompareTag("AiTr"))
					if (automaticFire.transform.tag != "T" && automaticFire.transform.tag != "CT" && !hit.transform.CompareTag("T") && !hit.transform.CompareTag("CT")) {
						Instantiate (playerWeapons.concreteParticles, hit.point, Quaternion.LookRotation (hit.normal));
					}
					if (wSettings.fireType != PlayerWeapons.FireType.Knife) {
						Vector3 firePoint2 = hit.point + fireDirection * 0.001f;
						if (Physics.Raycast (firePoint2, fireDirection, out hit2, tmpFireRange / 2)) {
							if (hit2.transform.CompareTag ("Body")) {
								//Blood particle
								Instantiate (playerWeapons.bloodParticles, hit2.point, Quaternion.LookRotation (hit2.normal));

								if (!isThirdPerson) {
									HitBox tmp;
									if ((tmp = hit2.transform.GetComponent<HitBox> ()) != null) {
										//Compose values we are going to pass
										int[] values = new int[3]; 
										values [0] = weaponIndex; //What weapon we used to make damage
										values [1] = (int)tmp.bodyPart; //What body part we hit
										values [2] = 0; //What side of player was hit (For hit marks), this is assigned later at HitBox.cs
										tmp.Damage (values, hit2.point);
									}
								}
							} else {
								if (hit2.transform.CompareTag ("Metal")) {
									Instantiate (playerWeapons.metalParticles, hit2.point, Quaternion.LookRotation (hit2.normal));
								} 
								else {
									if(!hit2.transform.CompareTag ("Walo") && wSettings.fireType != PlayerWeapons.FireType.Knife && !hit2.transform.CompareTag ("Sea") && !hit2.transform.CompareTag ("C4") && !hit2.transform.CompareTag ("C4Box") && !hit2.transform.CompareTag ("A") && !hit2.transform.CompareTag ("B") && !hit2.transform.CompareTag("T") && !hit2.transform.CompareTag("CT")&&automaticFire.transform.tag != "T" && automaticFire.transform.tag != "CT")
									Instantiate (playerWeapons.concreteParticles, hit2.point, Quaternion.LookRotation (hit2.normal));
								}
							}
						}
					}
				}
			}
		}
	}

	//Called from FPSPlayerWeapons.cs
	public void ReloadRemote ()
    {
		if (wSettings.fireType == PlayerWeapons.FireType.Shotgun && ShotGunReload == false && bulletsLeft < defaultBulletsPerClip && reserveBulletsLeft - GameSettings.cnst > 0) {
			StopCoroutine ("ReloadCoroutineShotGun");
			StartCoroutine (ReloadCoroutineShotGun (false));
		}
		if(!isThirdPerson)
        {
			if (bulletsLeft < defaultBulletsPerClip && reserveBulletsLeft - GameSettings.cnst > 0 && wSettings.fireType != PlayerWeapons.FireType.Shotgun) {
					StopCoroutine ("ReloadCoroutine");
					StartCoroutine (ReloadCoroutine (false));
			}
		}
	}

	public void LookWeapons(){
		isLooking = true;
		StartCoroutine ("WeaponsLook");
	}
		

	public void ReloadNetworkSync ()
    {
		//Called from PlayerNetwork.cs to sync reload with remote instances
		if(soldierAnimation)
        {
			soldierAnimation.PlayReloadAnimation(wSettings.reloadTime);
		}

		//Play reload sound
		audioSource.Stop();
		audioSource.clip = wSettings.clipOut;
		audioSource.Play();
	}

	IEnumerator WeaponsLook(){
		if(fpsAnimations.look)
		{
			animationController.Rewind(fpsAnimations.look.name);
			animationController[fpsAnimations.look.name].speed = 1;
			animationController[fpsAnimations.look.name].time = 0;
			animationController.Play(fpsAnimations.look.name);
		}
		yield return new WaitForSeconds(2f);
		isLooking = false;
	}



	IEnumerator ReloadCoroutine (bool extraDelay)
    {
		isReloading = true;

		if(extraDelay)
        {
			yield return new WaitForSeconds(0.5f);
		}

		if(fpsAnimations.reload)
        {
			animationController.Rewind(fpsAnimations.reload.name);
			animationController[fpsAnimations.reload.name].speed = animationController[fpsAnimations.reload.name].length/wSettings.reloadTime;
			animationController[fpsAnimations.reload.name].time = 0;
			animationController.Play(fpsAnimations.reload.name);
		}

		//Sync reload over network
		if(!isThirdPerson)
        {
			playerNetwork.DoReload();
		}

		//Play reload sound
		StopCoroutine (ReloadTimes ());
		StartCoroutine (ReloadTimes ());

		yield return new WaitForSeconds(wSettings.reloadTime);

		if(bulletsLeft - GameSettings.cnst > 0)
        {
			int bulletsWeNeed = defaultBulletsPerClip - bulletsLeft;
			if(bulletsWeNeed > reserveBulletsLeft - GameSettings.cnst)
            {
				bulletsLeft += bulletsWeNeed;
				reserveBulletsLeft = GameSettings.cnst;
			}
            else
            {
				bulletsLeft = defaultBulletsPerClip;
				reserveBulletsLeft -= bulletsWeNeed;
			}
		}
        else
        {
			if(reserveBulletsLeft > defaultBulletsPerClip)
            {
				bulletsLeft = defaultBulletsPerClip;
				reserveBulletsLeft -= (defaultBulletsPerClip - GameSettings.cnst);
			}
            else
            {
				bulletsLeft = Mathf.Clamp(reserveBulletsLeft, 0, defaultBulletsPerClip);
				reserveBulletsLeft = GameSettings.cnst;
			}
		}


		wSettings.reserveBullets = reserveBulletsLeft - GameSettings.cnst;
		wSettings.bulletsPerClip = bulletsLeft - GameSettings.cnst;

		isReloading = false;
	}


	IEnumerator ReloadCoroutineShotGun (bool extraDelay)
	{
		ShotGunReload = true;
		if(extraDelay)
		{
			yield return new WaitForSeconds(0.5f);
		}
			animationController.Rewind(fpsAnimations.reload.name);
			animationController[fpsAnimations.reload.name].speed = 1;
			animationController.Play(fpsAnimations.reload.name);
			if(!isThirdPerson)
			{
				playerNetwork.DoReload();
			}
			yield return new WaitForSeconds(0.5f);
			int bulletsWeNeed = defaultBulletsPerClip - bulletsLeft;
			if (bulletsWeNeed >= wSettings.reserveBullets) {bulletsWeNeed = wSettings.reserveBullets;}
			for (int i = 0; i < bulletsWeNeed; i++) {
				animationController.Rewind (fpsAnimations.reload2.name);
				animationController [fpsAnimations.reload2.name].speed = 0.75f;
				animationController.Play (fpsAnimations.reload2.name);
				yield return new WaitForSeconds (0.4f);
				audioSource.Stop ();
				audioSource.clip = wSettings.clipIn;
				audioSource.Play ();
				bulletsLeft++;
				reserveBulletsLeft--;
				wSettings.bulletsPerClip = bulletsLeft - GameSettings.cnst;
				wSettings.reserveBullets = reserveBulletsLeft - GameSettings.cnst;
			}
			animationController.Rewind (fpsAnimations.reload3.name);
			animationController [fpsAnimations.reload3.name].speed = 1;
			animationController.Play (fpsAnimations.reload3.name);
			yield return new WaitForSeconds (0.6f);
		if (wSettings.bulletsPerClip == 8) {
			audioSource.Stop ();
			audioSource.clip = wSettings.clipPull;
			audioSource.Play ();
		}
			yield return new WaitForSeconds (0.75f);

			ShotGunReload = false;

	}

	IEnumerator DoMuzzleFlash ()
    {
		muzzleFlash.enabled = true;
		if (Capsules != null) {
			Capsules.Emit (1);
		}
		if (Fumaca != null) {
			Fumaca.Emit (1);
		}
		if (wSettings.fireType == PlayerWeapons.FireType.Dual && !isThirdPerson) {
			Instantiate (casingPrefab, 
				casingSpawnPoints [1].transform.position, 
				casingSpawnPoints [1].transform.rotation);
		}
		//muzzleFlashTransform.localEulerAngles = new Vector3(Random.Range(1, 179), muzzleFlashTransform.localEulerAngles.y, muzzleFlashTransform.localEulerAngles.z);
		muzzleFlashTransform.Rotate(0, Random.Range(-360, 360), 0, Space.Self);
		yield return new WaitForSeconds(0.05f);
		muzzleFlash.enabled = false;
		animSay = 0;
	}

	IEnumerator CasingDelay () {
		//Spawn a casing at every casing spawnpoint
		yield return new WaitForSeconds (0.10f);
		for (int i = 0; i < casingSpawnPoints.Length; i++) {
			Instantiate (casingPrefab, 
				casingSpawnPoints [i].transform.position, 
				casingSpawnPoints [i].transform.rotation);
		}
	}

	IEnumerator DoMuzzleFlash2()
	{
		muzzleFlash2.enabled = true;
		if (Capsules2 != null) {
			Capsules2.Emit (1);
		}
		if (Fumaca2 != null) {
			Fumaca2.Emit (1);
		}
		if (wSettings.fireType == PlayerWeapons.FireType.Dual && !isThirdPerson) {
			Instantiate (casingPrefab, 
				casingSpawnPoints [0].transform.position, 
				casingSpawnPoints [0].transform.rotation);
		}
		//muzzleFlashTransform.localEulerAngles = new Vector3(Random.Range(1, 179), muzzleFlashTransform.localEulerAngles.y, muzzleFlashTransform.localEulerAngles.z);
		muzzleFlashTransform2.Rotate(0, Random.Range(-360, 360), 0, Space.Self);
		yield return new WaitForSeconds(0.05f);
		muzzleFlash2.enabled = false;
		animSay = 1;
	}

	IEnumerator BombGrenade ()
	{
		yield return new WaitForSeconds(0.025f);
		GrenadeTop.enabled = false;
		yield return new WaitForSeconds(1.75f);
		GrenadeTop.enabled = true;
	}

	IEnumerator FlashBang ()
	{
		yield return new WaitForSeconds(0.025f);
		FlashTop.enabled = false;
		FlashDown.enabled = false;
		yield return new WaitForSeconds(1.75f);
		FlashTop.enabled = true;
		FlashDown.enabled = true;
	}

	IEnumerator ReloadTimes ()
	{
		yield return new WaitForSeconds(wSettings.clipOutTime);
		audioSource.Stop ();
		audioSource.clip = wSettings.clipOut;
		audioSource.Play();
		yield return new WaitForSeconds(wSettings.clipInTime);
		audioSource.Stop ();
		audioSource.clip = wSettings.clipIn;
		audioSource.Play();
		yield return new WaitForSeconds(wSettings.clipPullTime);
		audioSource.Stop ();
		audioSource.clip = wSettings.clipPull;
		audioSource.Play();
	}

	IEnumerator ReloadTimesC4 ()
	{
		yield return new WaitForSeconds (wSettings.clipOutTime);
			audioSource.Stop ();
			audioSource.clip = wSettings.clipOut;
		if (GameSettings.AnimOn) {
			audioSource.Play ();
		}
			yield return new WaitForSeconds (wSettings.clipInTime);
			audioSource.Stop ();
			audioSource.clip = wSettings.clipIn;
		if (GameSettings.AnimOn) {
			audioSource.Play ();
		}
			yield return new WaitForSeconds(wSettings.clipPullTime);
			audioSource.Stop ();
			audioSource.clip = wSettings.clipPull;
		if (GameSettings.AnimOn) {
			audioSource.Play ();
		}

	}

	//Called from BuySpot.cs
	public bool RefillAmmo ()
    {
		if(reserveBulletsLeft < defaultReserveBulelts)
        {
			reserveBulletsLeft += defaultBulletsPerClip - GameSettings.cnst;
			if(reserveBulletsLeft > defaultReserveBulelts)
            {
				reserveBulletsLeft = defaultReserveBulelts;
			}

			wSettings.reserveBullets = reserveBulletsLeft - GameSettings.cnst;
			wSettings.bulletsPerClip = bulletsLeft - GameSettings.cnst;

			return true;
		}

		return false;
	}

	IEnumerator ReduceSpreadOverTime ()
    {
		yield return new WaitForEndOfFrame();

		while(bulletSpread > 0.001f)
        {
			bulletSpread = Mathf.Lerp(bulletSpread, 0, Time.deltaTime/timeToSpreadCooldown );
			yield return null;
		}

		bulletSpread = 0;
	}

	//IEnumerator MaticFire ()
	//{
	//	GameSettings.mobileFiring = true;
	//	yield return new WaitForSeconds (0.01f);
	//	GameSettings.mobileFiring = false;
	//	isFire = false;
	//}
}
