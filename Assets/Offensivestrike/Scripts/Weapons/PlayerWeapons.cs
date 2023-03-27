using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class PlayerWeapons : MonoBehaviour
{

    public Transform playerCamera;
    //public Transform playerCameraw;
    //Impact particles used by every weapon
    public GameObject concreteParticles;
	//public GameObject dsds;
	public GameObject metalParticles;
	public GameObject bloodParticles;
	public GameObject scopeModel;
	public GameObject scopeModelMuzleflash1;
	public GameObject scopeModelMuzleflash2;
	public AudioSource firstPersonAudioSource;
	public AudioSource thirdPersonAudioSource;

	public enum FireType { MachineGun, Pistol, Shotgun, SniperRifle, Knife, GRENADE_LAUNCHER, MachinePistol, SniperRifleAuto, Dual, m246, C4, FlashBang }
	public enum AimType { None, CameraOnly, CameraAndIronsights }

	[System.Serializable]
	public class WeaponSet
    {
		public FPSWeapon firstPersonWeapon;
		public FPSWeapon thirdPersonWeapon;
		public int weaponCost;
		public FireType fireType;
		public float timeToDeploy; //How long it should take to take this weapon
		public float reloadTime; //How long it should take to reload this weapon
		public float fireRate;
		public float clipOutTime;
		public float clipInTime;
		public float clipPullTime;
		//Note: You can only change bullet count in Edit mode
		public int bulletsPerClip;
		public int reserveBullets;
		public int headDamage;
		public int torsoDamage;
		public int limbsDamage;
		public AudioClip fireSound;
		public AudioClip clipOut;
		public AudioClip clipIn;
		public AudioClip clipPull;
		public AudioClip takeInSound;
		//Aiming
		public AimType aimType;
		public float aimFOV;
		public Transform aimObject;
		public Sprite scopeTexture;
		public Texture gunPreview;

		[HideInInspector]
		public int obfuscatedPrice;

		[HideInInspector]
		public bool showThis; //Used by custom editor to hide individual weapons in inspector

		public WeaponSet (FPSWeapon fpw, FPSWeapon tpw)
        {
			firstPersonWeapon = fpw;
			thirdPersonWeapon = tpw;
			weaponCost = 0;
			timeToDeploy = 1;
			reloadTime = 1;
			fireRate = 0.05f;
			bulletsPerClip = 30;
			reserveBullets = 150;
			headDamage = 30;
			torsoDamage = 15;
			limbsDamage = 10;

			aimType = AimType.None;
			aimFOV = GameSettings.defaultFOV;
			aimObject = null;
			scopeTexture = null;
			gunPreview = null;

			obfuscatedPrice = 0;
			showThis = true;
		}
	}

	public List<WeaponSet> primaryWeapons;
	public List<WeaponSet> secondaryWeapons;
	public List<WeaponSet> specialWeapons;
	public List<WeaponSet> Grenade;
	public List<WeaponSet> Flash;
	public List<WeaponSet> C4;
	//For reference purposes
	[HideInInspector]
	public List<WeaponSet> totalWeapons = new List<WeaponSet>();

	//Primary, Secondary and Special weapons should be index from weapons array
	//For example if primaryWeapon = 0, than player will select Element 1 from weapons (primaryWeapons[1])
	public int selectedPrimary = 0;
	public int selectedSecondary = 0;
	public int selectedSpecial = 0;
	public int selectedGrenade = 0;
	public int selectedFlash = 0;
	public int selectedC4 = 0;

	Vector3 defaultSwayPosition;
	float bobbingSpeed = 0.0155f; 
	float bobbingAmount = 0.0195f; 
	float timer = 0.0f; 
	float currentBobbingSpeed = 0;

	Transform firstPersonWeapons;

	[HideInInspector]
	public FPSWeapon currentSelectedWeapon;
	[HideInInspector]
	public int globalWeaponIndex = -1; //This value will be sent over network to alert other players what wepaon we have selected
	[HideInInspector]
	public bool isFiring = false;

	//These vairbales are assigned at PlayerNetwork.cs
	[HideInInspector]
	public SoldierAnimation soldierAnimation;
	[HideInInspector]
	public PlayerNetwork playerNetwork;
	[HideInInspector]
	public FPSController fpsController;
	[HideInInspector]
	public Camera mainPlayerCamera;
	//public Camera mainPlayerCameraw;
	bool isAimed = false;
	bool MeC4 = false;

#if UNITY_ANDROID || UNITY_IOS || UNITY_WP8 || UNITY_WP8_1
    int previousWeaponIndex = 0;
#endif

	//Called from PlayerNetwork.cs
	public void QuickSetup(bool isLocal)
    {
		firstPersonWeapons = firstPersonAudioSource.transform;

		//Prepare weapons
		totalWeapons.Clear();
		PrepareWepaons(primaryWeapons);
		PrepareWepaons(secondaryWeapons);
		PrepareWepaons(specialWeapons);
		PrepareWepaons(Grenade);
		PrepareWepaons(Flash);
		PrepareWepaons(C4);
		MeC4 = false;
		if (isLocal)
		{
			defaultSwayPosition = firstPersonWeapons.localPosition;
			mainPlayerCamera = playerCamera.GetComponent<Camera>();
            mainPlayerCamera.fieldOfView = GameSettings.defaultFOV;
		}

	}

    private void Start()
    {
		Debug.Log("currentSelectedWeapon = " + currentSelectedWeapon);
    }

    void PrepareWepaons(List<WeaponSet> tmpWeapons)
    {
		for(int i = 0; i < tmpWeapons.Count; i++)
        {
			tmpWeapons[i].firstPersonWeapon.playerWeapons = this;
			tmpWeapons[i].firstPersonWeapon.wSettings = tmpWeapons[i];
			tmpWeapons[i].firstPersonWeapon.audioSource = firstPersonAudioSource;
			tmpWeapons[i].firstPersonWeapon.gameObject.SetActive(false);
			tmpWeapons[i].firstPersonWeapon.playerNetwork = playerNetwork;
			tmpWeapons[i].firstPersonWeapon.isThirdPerson = false;

			if(tmpWeapons[i].thirdPersonWeapon != null)
            {
				tmpWeapons[i].thirdPersonWeapon.playerWeapons = this;
				tmpWeapons[i].thirdPersonWeapon.wSettings =  tmpWeapons[i];
				tmpWeapons[i].thirdPersonWeapon.audioSource = thirdPersonAudioSource;
				tmpWeapons[i].thirdPersonWeapon.gameObject.SetActive(false);
				tmpWeapons[i].thirdPersonWeapon.soldierAnimation = soldierAnimation;
				tmpWeapons[i].thirdPersonWeapon.playerNetwork = playerNetwork;
				tmpWeapons[i].thirdPersonWeapon.isThirdPerson = true;
			}

			totalWeapons.Add(tmpWeapons[i]);
		}
	}

	void BombAfter()
	{
		if (selectedPrimary > 1) {
			SwitchWeapon (primaryWeapons [selectedPrimary].firstPersonWeapon, true);
		} 
		else {
			SwitchWeapon (secondaryWeapons [selectedSecondary].firstPersonWeapon, true);
			Debug.Log("ZAK0");
		}
	}
		
	// Update is called once per frame
	void Update ()
    {
		if (selectedGrenade == 1) 
		{
			Grenade[1].bulletsPerClip = 1;
		}

		if (selectedFlash == 2) 
		{
			Flash[2].bulletsPerClip = 1;
		}

		if(GameSettings.menuOpened)
        {
			isFiring = false;
			return;
		}

#if !UNITY_ANDROID && !UNITY_IOS && !UNITY_WP8 && !UNITY_WP8_1
            //Switch weapons
            if (Input.GetKeyDown(GameSettings.playerKeys[2]))
            {
			    GetWeaponToSelect(1);
		    }

		    if(Input.GetKeyDown(GameSettings.playerKeys[3]))
            {
			    GetWeaponToSelect(2);
		    }

		    if(Input.GetKeyDown(GameSettings.playerKeys[4]))
            {
			    GetWeaponToSelect(3);
		    }
#else
		//Switch weapons mobile
		if (previousWeaponIndex != GameSettings.switchWeaponIndex)
		{
			if (selectedPrimary > 1)
			{
				if (GameSettings.switchWeaponIndex > 3 || GameSettings.switchWeaponIndex < 1)
				{
					GameSettings.switchWeaponIndex = 1;
				}
			}
			else
			{
				if (GameSettings.switchWeaponIndex > 2 || GameSettings.switchWeaponIndex < 1)
				{
					GameSettings.switchWeaponIndex = 1;
				}
			}

			previousWeaponIndex = GameSettings.switchWeaponIndex;
			Debug.Log("ZAK-5");
			GetWeaponToSelect(previousWeaponIndex);
		}

		if(playerNetwork.MeName == GameSettings.C4Who && playerNetwork.playerTeam == 2 && GameSettings.currentGameMode == "NORMAL"){
			if (MeC4 == false) {
				Invoke("SwitchWeaponC4Show", 0.5f);
				MeC4 = true;
			}
		}
		else if(fpsController.C4XTG && playerNetwork.playerTeam == 2 && GameSettings.currentGameMode == "NORMAL"){
			if (MeC4 == false) {
				Invoke("SwitchWeaponC4Show", 0.5f);
				MeC4 = true;
			}
		}

#endif

        if(currentSelectedWeapon)
        {

#if !UNITY_ANDROID && !UNITY_IOS && !UNITY_WP8 && !UNITY_WP8_1
			//Reload
			if(Input.GetKeyDown(GameSettings.playerKeys[5]) && !currentSelectedWeapon.isReloading)
            {
				currentSelectedWeapon.ReloadRemote();
			}

			//Fire
			if(currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.MachineGun || currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.MachinePistol)
            {
				//Automatic fire
				if(Input.GetKey(GameSettings.playerKeys[0]))
                {
					currentSelectedWeapon.Fire();
				}
                else
                {
					isFiring = false;
				}
			}
			else if(currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.GRENADE_LAUNCHER)
			{
				//Single fire
				if(Input.GetKeyDown(GameSettings.playerKeys[0]))
				{
					currentSelectedWeapon.Fire2();
				}
				if(Input.GetKeyUp(GameSettings.playerKeys[0])){
					currentSelectedWeapon.Fire();
					isFiring = false;
					if (selectedSpecial == 1) 
					{
						selectedSpecial = 0;
						Invoke ("BombAfter", 0.75f);
					}
				}
			}
            else
            {
				//Single fire
				if(Input.GetKeyDown(GameSettings.playerKeys[0]))
                {
					currentSelectedWeapon.Fire();
				}

				isFiring = false;
			}

			//Aiming
			if(currentSelectedWeapon.wSettings.aimType != AimType.None)
            {
				if(Input.GetKeyDown(GameSettings.playerKeys[1]))
                {
					isAimed = !isAimed;

					if(isAimed && currentSelectedWeapon.wSettings.aimType == AimType.CameraOnly && currentSelectedWeapon.wSettings.scopeTexture != null)
                    {
						GameSettings.currentScopeTexture = currentSelectedWeapon.wSettings.scopeTexture;
					}
                    else
                    {
						GameSettings.currentScopeTexture = null;
					}
				}
			}
#else
            //Mobile reloading
            if (GameSettings.mobileReloading && !currentSelectedWeapon.isReloading)
            {
                currentSelectedWeapon.ReloadRemote();
            }

            if (GameSettings.mobileReloading)
            {
                GameSettings.mobileReloading = false;
            }

			if (GameSettings.mobileLook && !currentSelectedWeapon.isLooking)
			{
				currentSelectedWeapon.LookWeapons();
			}

			if (GameSettings.mobileLook)
			{
				GameSettings.mobileLook = false;
			}

            //Mobiel Fire
			if (currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.MachineGun || currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.m246 || currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.Dual || currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.Pistol || currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.SniperRifleAuto || currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.Shotgun || currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.MachinePistol && currentSelectedWeapon.wSettings.fireType != PlayerWeapons.FireType.GRENADE_LAUNCHER && currentSelectedWeapon.wSettings.fireType != PlayerWeapons.FireType.FlashBang)
            {
                //Automatic fire
                if (GameSettings.mobileFiring)
                {
                    currentSelectedWeapon.Fire();
                }
                else
                {
                    isFiring = false;
                }
            }
			else if(currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.GRENADE_LAUNCHER)
			{
				//Single fire
				if(GameSettings.mobileFiring)
				{
					currentSelectedWeapon.Fire2();
				}
				if(GameSettings.grenadeShoot){
					currentSelectedWeapon.Fire();
					isFiring = false;
					selectedGrenade = 0;
					Invoke ("BombAfter", 0.75f);
				}
			}
			else if(currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.FlashBang)
			{
				//Single fire
				if(GameSettings.mobileFiring)
				{
					currentSelectedWeapon.Fire2();
				}
				if(GameSettings.flashShoot){
					currentSelectedWeapon.Fire();
					isFiring = false;
					selectedFlash = 0;
					Invoke ("BombAfter", 0.75f);
				}
			}
			else if(currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.C4)
			{
                //Automatic fire
                if (GameSettings.C4Fire)
                {

                    currentSelectedWeapon.Fire();
                    isFiring = false;
                    Invoke("BombAfter", 0.25f);
                }
                if (GameSettings.C4CreateUI && fpsController.C4tg && !GameSettings.AnimOn){
					GameSettings.AnimOn = true;
					currentSelectedWeapon.C4Fire2();
				}

				if(GameSettings.C4CreateUI && !fpsController.C4tg && !GameSettings.AnimOn){
					currentSelectedWeapon.C4idle2();
					GameSettings.AnimOn = false;
				}

				if(GameSettings.C4idle){
					currentSelectedWeapon.C4idle2();
					GameSettings.AnimOn = false;
				}
			}
            else
            {
                //Single fire
                if (GameSettings.mobileFiring)
                {
                    currentSelectedWeapon.Fire();
                    GameSettings.mobileFiring = false;
                }

                isFiring = false;
            }

            //Aiming
            if (currentSelectedWeapon.wSettings.aimType != AimType.None)
            {
                if (GameSettings.mobileAiming)
                {
                    isAimed = !isAimed;

                    if (isAimed && currentSelectedWeapon.wSettings.aimType == AimType.CameraOnly && currentSelectedWeapon.wSettings.scopeTexture != null)
                    {
						GameSettings.currentScopeTexture = currentSelectedWeapon.wSettings.scopeTexture;
                    }
                    else
                    {
                        GameSettings.currentScopeTexture = null;
                    }
                }
            }

            if (GameSettings.mobileAiming)
            {
                GameSettings.mobileAiming = false;
            }

#endif

            //Stop aiming when we reload
            if (currentSelectedWeapon.isReloading)
            {
				isAimed = false;
			}

            if (currentSelectedWeapon.weaponName != "AUG" || currentSelectedWeapon.weaponName != "SG552")
            {
				scopeModel.gameObject.SetActive(false);
			}

            if (isAimed)
            {
				if (currentSelectedWeapon.weaponName == "AUG" || currentSelectedWeapon.weaponName == "SG552") {
					scopeModelMuzleflash1.SetActive (false);
					scopeModelMuzleflash2.SetActive (false);
					scopeModel.gameObject.SetActive (true);
				}
				mainPlayerCamera.fieldOfView = Mathf.Lerp(mainPlayerCamera.fieldOfView, currentSelectedWeapon.wSettings.aimFOV, Time.deltaTime * 19);

				if(currentSelectedWeapon.aimOffset != Vector3.zero)
                {
					currentSelectedWeapon.thisT.localPosition = Vector3.Lerp(currentSelectedWeapon.thisT.localPosition, currentSelectedWeapon.aimOffset,  Time.deltaTime * 19);
				}
			}
            else
            {
				if (currentSelectedWeapon.weaponName == "AUG" || currentSelectedWeapon.weaponName == "SG552") {
					scopeModelMuzleflash1.SetActive (true);
					scopeModelMuzleflash2.SetActive (true);
					scopeModel.gameObject.SetActive (false);
				}
				mainPlayerCamera.fieldOfView = Mathf.Lerp(mainPlayerCamera.fieldOfView, GameSettings.defaultFOV, Time.deltaTime * 19);

				if(currentSelectedWeapon.aimOffset != Vector3.zero)
                {
					currentSelectedWeapon.thisT.localPosition = Vector3.Lerp(currentSelectedWeapon.thisT.localPosition, currentSelectedWeapon.defaultPosition,  Time.deltaTime * 19);
				}

				if(GameSettings.currentScopeTexture  != null)
                {
					GameSettings.currentScopeTexture  = null;
				}
			}

			//Notify other FPSMouseLook.cs what is current Field Of View
			GameSettings.currentFOV = isAimed ? currentSelectedWeapon.wSettings.aimFOV : GameSettings.defaultFOV;
		}

		//DoWeaponBobbing();
	}

	public void GetWeaponToSelect (int type)
	{
		Debug.Log("ZAK-1");
		if (selectedPrimary > 1) {
			Debug.Log("ZAK-6");

			if (type == 1) {
				SwitchWeapon (primaryWeapons [selectedPrimary].firstPersonWeapon, true);
			}

			if (type == 2) {
				SwitchWeapon (secondaryWeapons [selectedSecondary].firstPersonWeapon, true);
			}

			if (type == 3) {
				SwitchWeapon (specialWeapons [selectedSpecial].firstPersonWeapon, true);
			}
		}
		else {
			Debug.Log("ZAK-8");

			if (type == 1) {
				Debug.Log("ZAK-7");
				SwitchWeapon(secondaryWeapons [selectedSecondary].firstPersonWeapon, true);
			}

			if (type == 2) {
				SwitchWeapon (specialWeapons [selectedSpecial].firstPersonWeapon, true);
			}
		}
	}

	void FixedUpdate ()
    {
		DoWeaponBobbing();
	}

	void SwitchWeapon(FPSWeapon tmpWeapon,  bool firstPerson)
    {
		Debug.Log("ZAK");
		if(tmpWeapon != null && tmpWeapon != currentSelectedWeapon )
        {
			if(currentSelectedWeapon)
            {
				currentSelectedWeapon.gameObject.SetActive(false);
				currentSelectedWeapon = null;
			}

			isAimed = false;

			currentSelectedWeapon = tmpWeapon;
			currentSelectedWeapon.gameObject.SetActive(true);
			currentSelectedWeapon.Deploy();

			if(firstPerson)
            {
				for(int i = 0; i < totalWeapons.Count; i++)
                {
					if(totalWeapons[i].firstPersonWeapon == tmpWeapon)
                    {
						globalWeaponIndex = i;
						currentSelectedWeapon.weaponIndex = i;
					}
				}
		    }
		}
	}

	void DoWeaponBobbing()
    {
		if(fpsController.isMoving && fpsController.isGrounded)
        {
			//currentBobbingSpeed = (bobbingSpeed * 100)/GameSettings.currentFPS;
			currentBobbingSpeed = bobbingSpeed;
			currentBobbingSpeed *= fpsController.speed;
			
			float waveslice = Mathf.Sin(timer); 
			timer = timer + currentBobbingSpeed; 
			if (timer > Mathf.PI * 2)
            { 
				timer = timer - (Mathf.PI * 2); 
			} 
			
			if (waveslice != 0)
            { 
				float translateChange = waveslice * bobbingAmount; 
				float totalAxes = Mathf.Abs(1) + Mathf.Abs(1); 
				totalAxes = Mathf.Clamp (totalAxes, 1.0f, 1.0f); 
				translateChange = totalAxes * translateChange; 
				firstPersonWeapons.localPosition = new Vector3(defaultSwayPosition.x, defaultSwayPosition.y, defaultSwayPosition.z - translateChange);
			}
		}
        else
        {
			timer = 0.0f; 
			firstPersonWeapons.localPosition = Vector3.Lerp(firstPersonWeapons.localPosition,  defaultSwayPosition, Time.deltaTime * 5);
		}
	}

	//Called from PlayerNetworkController.cs
	public void SwitchWeaponRemote()
    {
		SwitchWeapon(totalWeapons[globalWeaponIndex].thirdPersonWeapon, false);
	}

	public void SwitchWeaponC4()
	{
		SwitchWeapon (C4 [selectedC4].firstPersonWeapon, true);
	}

	public void SwitchWeaponGrenade()
	{
		SwitchWeapon (Grenade [selectedGrenade].firstPersonWeapon, true);
	}

	public void SwitchWeaponFlash()
	{
		SwitchWeapon (Flash [selectedFlash].firstPersonWeapon, true);
	}

	public void SwitchWeaponC4Show()
	{
		GameSettings.ShowMessageBombMe = true;
		SwitchWeapon (C4 [selectedC4].firstPersonWeapon, true);
	}

	public void FireRemote()
    {
		if(currentSelectedWeapon)
        {
			currentSelectedWeapon.Fire();
		}
	}

	public void FireRemoteC4()
	{
		if(currentSelectedWeapon)
		{
			currentSelectedWeapon.C4Fire();
		}
	}

	public void IdleRemoteC4()
	{
		if(currentSelectedWeapon)
		{
			currentSelectedWeapon.C4idle();
		}
	}
}
