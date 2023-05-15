using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using Hashtable = ExitGames.Client.Photon.Hashtable; //Replace default Hashtables with Photon hashtables

public class PlayerNetwork : Photon.MonoBehaviour
{

	//This is main script that coordinate our player in game, it decides which component to enable/disable
	//Also it sync's our data with remote instances over network

	public bool isBot
	{
		get { return transform.tag == "Bot"; }
	}
	public SoldierAnimation soldierAnimation;
	public GameObject Counter;
	public GameObject Teror;
	public RoomController rc;
	public PlayerWeapons playerWeapons;
	public GameObject firstPersonView;
	public GameObject CounterBox;
	public GameObject C4Box;
	public GameObject C4Box4;
	public Transform ThrowPoint;
	public float ForwardThrowForce;
	public float UpwardThrowForce;
	public GameObject WeaponC;
	public GameObject WeaponT;
	public GameObject PlayerC;
	public GameObject PlayerT;
	public GameObject RoomCk;
	public GameObject CameraFollow;

	public Transform C4ThrowPoint; // New Code

	public Transform nameLabelTransform;
	public Text nameLabel;
	public Text nameLabelShadow;

	public AudioSource playerAudio;
	public AudioSource walkingAudio;

	public AudioClip hitSound;
	public AudioClip[] walkingSounds;
	public AudioClip[] ladderSounds;

	public Collider[] headHitBoxes;
	public Collider[] torsoHitBoxes;
	public Collider[] limbsHitBoxes;

	Vector3 playerPos = Vector3.zero;
	[HideInInspector]
	public Vector3 aimPos = Vector3.zero;
	Vector3 smoothAimPos = Vector3.zero;
	float positionSmoother = 17.5f;
	float d;

	[HideInInspector]
	public FPSController fpsController;
	FPSMouseLook localMouseLook;
	RadarSystem rs;
	//FlashbangEffectScript fbes;
	[HideInInspector]
	public FPSMouseLook cameraMouseLook;
	[HideInInspector]
	public Transform thisT;

	[HideInInspector]
	public int playerID;
	//[HideInInspector]
	public bool playerKilled = false;
	[HideInInspector]
	public int KillSay = 1;
	[HideInInspector]
	public string TeamName = "";
	[HideInInspector]
	public string MeName = "";

	int currentWeaponIndex = -1;
	int previousWeaponIndex = -1;
	bool isFiringRemote = false;
	public int playerTeam;
	Camera mainCamera;
	Transform mainCameraT;
	Vector3 screenPos; //For name label display
	float offset;
	//Save references incase we kill this player
	public string lastWeaponName = "";
	int lastBodyPart = -1;
	int allPlayer = 0;

	//Position Interpolation Sync
	double interpolationBackTime = 0.37d;

	internal struct State
	{
		internal double timestamp;
		internal Vector3 pos;
		internal Quaternion rot;
	}

	//double currentTime;

	// We store twenty states with "playback" information
	State[] m_BufferedState = new State[20];
	// Keep track of what slots are used
	int m_TimestampCount;
	int movementStateLocal = -1;
	int receivedMovementState = -1;
	float stepLength; //Used for playing walking sounds

	BuyMenu bm;
	bool teamWhoSelect = false;
	void Start()
	{
		teamWhoSelect = false;
        if (rc.offlineMode)
        {
			EnemyManager.instance.NotifyBotsAboutPlayer();
		}
	}

	// Use this for initialization


	void WeaponsSelect()
	{
		teamWhoSelect = true;
		photonView.synchronization = ViewSynchronization.Unreliable;
		rs = GetComponent<RadarSystem>();
		//fbes = GetComponent<FlashbangEffectScript>();
		localMouseLook = GetComponent<FPSMouseLook>();
		fpsController = GetComponent<FPSController>();
		fpsController.pn = this;
		playerWeapons.playerNetwork = this;
		playerWeapons.soldierAnimation = soldierAnimation;
		playerWeapons.fpsController = fpsController;
		playerWeapons.QuickSetup(photonView.isMine);

		if (!GameSettings.rc.offlineMode)
		{
			gameObject.name = photonView.owner.NickName;
			gameObject.layer = 2;
		}
		else
		{
			gameObject.name = "OfflinePlayer";
			
		}

		thisT = transform;

		if (!GameSettings.rc.offlineMode)
		{
			MeName = photonView.owner.NickName;
			gameObject.layer = 2;
		}
		else
		{
			MeName = "OfflinePlayer";
			
		}

		playerKilled = false;
		KillSay = 1;
		 //Set layer to Ignore Raycast

		if (!photonView.isMine)
		{
			//Deactivate all scripts and object that are not used by remote instance
			localMouseLook.enabled = false;
			fpsController.enabled = false;
			playerWeapons.enabled = false;
			rs.enabled = false;
			//fbes.enabled = false;
			firstPersonView.SetActive(false);
			if (!soldierAnimation.gameObject.activeSelf)
			{
				soldierAnimation.gameObject.SetActive(true);
			}
			soldierAnimation.playerWeapons = playerWeapons;
			soldierAnimation.playerNetwork = this;
			soldierAnimation.Setup();

			SetupShield(headHitBoxes);
			SetupShield(torsoHitBoxes);
			SetupShield(limbsHitBoxes);
			//Add this player to reference
			GameSettings.rc.otherPlayers.Add(this);
			this.StopCoroutine("ShieldOnNow");
			this.StartCoroutine("ShieldOnNow");
			nameLabelTransform.gameObject.SetActive(true);
		}
		else
		{
			firstPersonView.SetActive(true);
			rs.enabled = true;
			//fbes.enabled = true;
			soldierAnimation.gameObject.SetActive(false);
			cameraMouseLook = playerWeapons.playerCamera.GetComponent<FPSMouseLook>();
			nameLabelTransform.gameObject.SetActive(true);
		}

		if (GameSettings.rc.offlineMode)
		{
			firstPersonView.SetActive(true);
			rs.enabled = true;
			//fbes.enabled = true;
			soldierAnimation.gameObject.SetActive(false);
			cameraMouseLook = playerWeapons.playerCamera.GetComponent<FPSMouseLook>();

			playerWeapons.GetWeaponToSelect(1);
			GameSettings.menuOpened = false;
			GetComponent<FPSController>().startWhoTeam();
			soldierAnimation.playerWeapons = playerWeapons;
			rc = FindObjectOfType<RoomController>();
			GetComponent<FPSController>().enabled = true;
			GetComponent<FPSMouseLook>().enabled = true;
			nameLabelTransform.gameObject.SetActive(true);
			playerWeapons.enabled = true;
			GameSettings.rc.currentHP = 100;
			GameSettings.MoveOn = true;
			//GameSettings.rc.ourPlayer.playerWeapons.currentSelectedWeapon = ;
		}


		GameSettings.MoveOn = false;
		this.StopCoroutine("MoveON");
		this.StartCoroutine("MoveON");


		if (PhotonNetwork.isMasterClient && !rc.offlineMode)
		{
			//Set player HP
			Hashtable setPlayerData = new Hashtable();
			setPlayerData.Add("PlayerHP", (int)100);
			photonView.owner.SetCustomProperties(setPlayerData);
		}

		if (!GameSettings.rc.offlineMode)
		{
			playerTeam = (int)photonView.owner.CustomProperties["Team"];
			playerID = photonView.owner.ID;
		}
		else
		{
			playerTeam = 1;
			playerID = 11223344;
		}


		if (playerTeam == 1 || playerTeam == 2)
		{
			if (playerTeam == 1)
			{

				TeamName = "CT";
				Teror.SetActive(false);
				Counter.SetActive(true);
				CounterBox.SetActive(true);
				//C4Box.SetActive (false);
			}
			else
			{

				TeamName = "T";
				Counter.SetActive(false);
				CounterBox.SetActive(false);
				Teror.SetActive(true);
				//if (MeName == GameSettings.C4Who && playerTeam == 2 && GameSettings.currentGameMode == "NORMAL") {
				//	C4Box.SetActive (true);
				//}
			}

			if (photonView.isMine)
			{
				nameLabelTransform.gameObject.SetActive(true);
			}
			else
			{
				nameLabel.text = photonView.name;
				nameLabelShadow.text = photonView.name;
				nameLabel.color = playerTeam == 1 ? GameSettings.teamAColor : GameSettings.teamBColor;
			}
		}

	}

	void SetupBoxes(Collider[] tmpBoxes, HitBox.BodyPart bp)
	{
		for (int i = 0; i < tmpBoxes.Length; i++)
		{
			tmpBoxes[i].enabled = true;
			tmpBoxes[i].isTrigger = true;
			tmpBoxes[i].gameObject.AddComponent<HitBox>().AssignVariables(this, bp);
			tmpBoxes[i].tag = "Body";
		}
	}

	IEnumerator ShieldOnNow()
	{
		yield return new WaitForSeconds(4);
		SetupBoxes(headHitBoxes, HitBox.BodyPart.Head);
		SetupBoxes(torsoHitBoxes, HitBox.BodyPart.Torso);
		SetupBoxes(limbsHitBoxes, HitBox.BodyPart.Limbs);
	}

	IEnumerator MoveON()
	{
		yield return new WaitForSeconds(4);
		GameSettings.MoveOn = true;
	}

	void SetupShield(Collider[] tmpBoxes)
	{
		for (int i = 0; i < tmpBoxes.Length; i++)
		{
			tmpBoxes[i].enabled = false;
		}
	}

	//Sync player over network
	void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
	{
		if (stream.isWriting)
		{
			//Send data
			if (!thisT)
				return;

			stream.SendNext(thisT.position);
			stream.SendNext(playerWeapons.playerCamera.position + playerWeapons.playerCamera.forward * 100);
			stream.SendNext(playerWeapons.globalWeaponIndex);
			stream.SendNext(playerWeapons.isFiring);
			stream.SendNext(fpsController.movementState);
		}
		else
		{
			//Receive data
			playerPos = (Vector3)stream.ReceiveNext();
			aimPos = (Vector3)stream.ReceiveNext();
			currentWeaponIndex = (int)stream.ReceiveNext();
			isFiringRemote = (bool)stream.ReceiveNext();
			if (soldierAnimation != null)
				soldierAnimation.movementState = (int)stream.ReceiveNext();


			// Shift buffer contents, oldest data erased, 18 becomes 19, ... , 0 becomes 1
			for (int i = m_BufferedState.Length - 1; i >= 1; i--)
			{
				m_BufferedState[i] = m_BufferedState[i - 1];
			}

			// Save currect received state as 0 in the buffer, safe to overwrite after shifting
			State state = new State();
			state.timestamp = info.timestamp;
			state.pos = playerPos;
			//state.rot = rot;
			m_BufferedState[0] = state;

			// Increment state count but never exceed buffer size
			m_TimestampCount = Mathf.Min(m_TimestampCount + 1, m_BufferedState.Length);

			// Check integrity, lowest numbered state in the buffer is newest and so on
			for (int i = 0; i < m_TimestampCount - 1; i++)
			{
				if (m_BufferedState[i].timestamp < m_BufferedState[i + 1].timestamp)
					Debug.Log("State inconsistent");
			}
		}
	}

	//	[PunRPC]
	//	void BoxC4Fire()
	//	{

	//		GameObject C4BX;
	//		C4BX = Instantiate(C4Box4, C4ThrowPoint.transform.position, transform.rotation) as GameObject;

	//		//C4BX.transform.position = ThrowPoint.transform.position;
	//		//C4BX.transform.rotation = ThrowPoint.transform.rotation;
	//		C4BX.SetActive(true);
	//		C4BX.GetComponent<Rigidbody>().AddRelativeForce(0, UpwardThrowForce, ForwardThrowForce, ForceMode.Impulse);

	//        //GameObject[] C4Box5 = GameObject.FindGameObjectsWithTag("C4Box");


	//        //////Debug.Log(C4Box5.Length);

	//        ////if (C4BX != null)
	//        ////{

	//        //foreach (var item in C4Box5)
	//        //{


	//        //    while (C4Box5.Length > 1)
	//        //    {

	//        //        Destroy(item);
	//        //    }
	//        //    //Debug.Log(C4Box5.Length);
	//        //}

	//}




	// Update is called once per frame
	void Update()
	{

		//GameObject[] C4Box5 = GameObject.FindGameObjectsWithTag("C4Box");


		//     ////Debug.Log(C4Box5.Length);

		//     //if (C4BX != null)
		//     //{

		//     foreach (var item in C4Box5)
		//     {


		//         while (C4Box5.Length > 1)
		//         {

		//             Destroy(item);
		//         }
		//         //Debug.Log(C4Box5.Length);
		//     }

		//GameObject C4Box4 = GameObject.Find("C4Box1(Clone)");
		//if (C4Box4 != null)
		//{
		//	Destroy(C4Box4);
		//}
		if (playerKilled)
		{
			rs.enabled = false;
			//fbes.enabled = false;
		}
		RoomCk = GameObject.Find("_RoomController(Clone)");
		bm = RoomCk.GetComponent<BuyMenu>();
		if (!isBot && !GameSettings.rc.offlineMode)
		{
			playerTeam = (int)photonView.owner.CustomProperties["Team"];
		}
		else
		{
			playerTeam = 1;
		}

		if ((playerTeam == 1 || playerTeam == 2) && !isBot)
		{
			if (playerTeam == 1)
			{
				if (soldierAnimation == null)
				{
					PlayerC.SetActive(true);
					PlayerT.SetActive(false);
					soldierAnimation = PlayerC.GetComponent<SoldierAnimation>();
				}
				if (firstPersonView == null)
				{
					WeaponC.SetActive(true);
					WeaponT.SetActive(false);
					playerWeapons = WeaponC.GetComponent<PlayerWeapons>();
					firstPersonView = WeaponC.gameObject;
					bm.Weapons();
					if (!teamWhoSelect)
					{
						WeaponsSelect();
					}
					if (!fpsController.WhoTeam)
					{
						fpsController.startWhoTeam();
					}

				}


				Counter.SetActive(true);
				CounterBox.SetActive(true);
				C4Box.SetActive(false);
				if (playerKilled)
				{

					Counter.tag = "Null";
					Counter.SetActive(false);
				}
				else
				{
					Counter.SetActive(true);
					Counter.tag = "CT";
				}
			}
			else
			{
				if (soldierAnimation == null)
				{
					Debug.Log("CAT1");
					PlayerC.SetActive(false);
					PlayerT.SetActive(true);
					soldierAnimation = PlayerT.GetComponent<SoldierAnimation>();
				}
				if (firstPersonView == null)
				{
					Debug.Log("CAT2");
					WeaponC.SetActive(false);
					WeaponT.SetActive(true);
					playerWeapons = WeaponT.GetComponent<PlayerWeapons>();
					firstPersonView = WeaponT.gameObject;
					RoomCk.GetComponent<BuyMenu>().Weapons();
					if (!teamWhoSelect)
					{
						WeaponsSelect();
					}
					if (!fpsController.WhoTeam)
					{
						fpsController.startWhoTeam();
					}
				}

				Teror.SetActive(true);
				CounterBox.SetActive(false);
				if (playerKilled)
				{
					Teror.tag = "Null";
					Teror.SetActive(false);
				}
				else
				{
					Teror.SetActive(true);
					Teror.tag = "T";
				}
				if (MeName == GameSettings.C4Who && playerTeam == 2 && !GameSettings.C4on && GameSettings.currentGameMode == "NORMAL" && !playerKilled && !GameSettings.TimeOff)
				{
					C4Box.SetActive(true);
				}
				else if (fpsController.C4XTG && playerTeam == 2 && !GameSettings.C4on && GameSettings.currentGameMode == "NORMAL" && !playerKilled && !GameSettings.TimeOff)
				{
					C4Box.SetActive(true);
				}
				else
				{
					C4Box.SetActive(false);
				}
			}

		}
		if (!isBot && !photonView.isMine)
		{
			InterpolatePosition();

			smoothAimPos = Vector3.Lerp(smoothAimPos, aimPos, Time.deltaTime * positionSmoother);

			if (aimPos != Vector3.zero)
			{
				thisT.LookAt(new Vector3(smoothAimPos.x, thisT.position.y, smoothAimPos.z));
				playerWeapons.playerCamera.LookAt(smoothAimPos);
			}

			if (isFiringRemote)
			{
				playerWeapons.FireRemote();
			}

			if (previousWeaponIndex != currentWeaponIndex)
			{
				previousWeaponIndex = currentWeaponIndex;
				playerWeapons.globalWeaponIndex = currentWeaponIndex;
				playerWeapons.SwitchWeaponRemote();
			}

			//Show name label for our teammates
			if (!playerKilled && ((playerTeam == GameSettings.ourTeam && GameSettings.currentGameMode != "FFA") || GameSettings.ourTeam == 0))
			{
				if (!nameLabelTransform.gameObject.activeSelf)
				{
					nameLabelTransform.gameObject.SetActive(true);
				}

				if (!mainCamera || !mainCamera.gameObject.activeInHierarchy)
				{
					if (Camera.main)
					{
						mainCamera = Camera.main;
						mainCameraT = mainCamera.transform;
					}
				}
				else
				{
					offset = Vector3.Distance(mainCameraT.position, thisT.position) / 50;
					screenPos = mainCamera.WorldToViewportPoint(new Vector3(thisT.position.x, thisT.position.y + 2.6f + offset, thisT.position.z));

					if (screenPos.z > 0)
					{
						//nameLabelTransform.position = new Vector3(screenPos.x, screenPos.y);
					}
					else
					{
						//nameLabelTransform.position = new Vector3(-350, -350);
					}
				}

				//nameLabelTransform.eulerAngles = Vector3.zero;
			}
			else
			{
				if (nameLabelTransform.gameObject.activeSelf)
				{
					nameLabelTransform.gameObject.SetActive(true);
				}
			}

			receivedMovementState = soldierAnimation.movementState;
		}
		else
		{
            //Send cameraFOV to reduce mouse sensitivity when aiming
            //localMouseLook.cameraFOV = playerWeapons.mainPlayerCamera.fieldOfView;
            //cameraMouseLook.cameraFOV = playerWeapons.mainPlayerCamera.fieldOfView;
            if (!isBot)
            {
				receivedMovementState = fpsController.movementState;
			}
			
		}

		//Play footstep sound for both local and remote player instances
		if (!playerKilled)
		{
			if (movementStateLocal != receivedMovementState)
			{
				movementStateLocal = receivedMovementState;
				PlayWalkingSound();
			}
		}
		else
		{
			if (walkingAudio.isPlaying)
			{
				walkingAudio.Stop();
			}
		}
	}

	void InterpolatePosition()
	{
		d = Vector3.Distance(thisT.position, m_BufferedState[0].pos);
		soldierAnimation.isMoving = d > 0.15f;

		double currentTime = PhotonNetwork.time;
		double interpolationTime = currentTime - interpolationBackTime;
		// We have a window of interpolationBackTime where we basically play 
		// By having interpolationBackTime the average ping, you will usually use interpolation.
		// And only if no more data arrives we will use extrapolation

		// Use interpolation
		// Check if latest state exceeds interpolation time, if this is the case then
		// it is too old and extrapolation should be used

		if (m_BufferedState[0].timestamp > interpolationTime)
		{
			for (int i = 0; i < m_TimestampCount; i++)
			{
				// Find the state which matches the interpolation time (time+0.1) or use last state
				if (m_BufferedState[i].timestamp <= interpolationTime || i == m_TimestampCount - 1)
				{
					// The state one slot newer (<100ms) than the best playback state
					State rhs = m_BufferedState[Mathf.Max(i - 1, 0)];
					// The best playback state (closest to 100 ms old (default time))
					State lhs = m_BufferedState[i];

					// Use the time between the two slots to determine if interpolation is necessary
					double length = rhs.timestamp - lhs.timestamp;
					float t = 0.0F;
					// As the time difference gets closer to 100 ms t gets closer to 1 in 
					// which case rhs is only used
					if (length > 0.0001)
					{
						t = (float)((interpolationTime - lhs.timestamp) / length);
					}

					// if t=0 => lhs is used directly
					thisT.position = Vector3.Lerp(lhs.pos, rhs.pos, t);
					//transform.localRotation = Quaternion.Slerp(lhs.rot, rhs.rot, t);
					return;
				}
			}
		}
		else
		{
			// Use extrapolation. Here we do something really simple and just repeat the last
			// received state. You can do clever stuff with predicting what should happen

			State latest = m_BufferedState[0];

			thisT.position = latest.pos;
			//transform.localRotation = latest.rot;

			//print ("Moving DIrectly to latest pos " + Random.Range(111, 333).ToString());
		}
	}

	//Called from Weapon.cs when player shooting single fire weapons
	public void FireSingleRemote()
	{
		photonView.RPC("FireRemoteRPC", PhotonTargets.Others);
	}

	[PunRPC]
	void FireRemoteRPC()
	{
		playerWeapons.FireRemote();
	}

	public void FireSingleRemoteC4Fire()
	{
		photonView.RPC("FireRemoteRPCC4Fire", PhotonTargets.All);
	}

	[PunRPC]
	void FireRemoteRPCC4Fire()
	{
		playerWeapons.FireRemoteC4();
	}

	public void FireSingleRemoteC4Idle()
	{
		photonView.RPC("FireRemoteRPCC4Idle", PhotonTargets.Others);
	}

	[PunRPC]
	void FireRemoteRPCC4Idle()
	{
		playerWeapons.IdleRemoteC4();
	}

	//Reload Sync
	public void DoReload()
	{
		photonView.RPC("DoReloadRemote", PhotonTargets.Others);
	}

	[PunRPC]
	void DoReloadRemote()
	{
		if (playerWeapons.currentSelectedWeapon)
		{
			playerWeapons.currentSelectedWeapon.ReloadNetworkSync();
		}
	}

	//Do player damage, called from HitBox.cs
	public void ApplyDamage(int[] values)
	{
		if (!playerKilled && (playerTeam != GameSettings.ourTeam || photonView.isMine || GameSettings.currentGameMode == "FFA"))
		{
			photonView.RPC("DamageRemote", PhotonTargets.All, values, PhotonNetwork.player.ID);
		}
	}

	[PunRPC]
	void DamageRemote(int[] values, int killerID)
	{
		if (photonView.isMine)
		{
			GameSettings.rc.DoHitDetector((int)values[2]);
			fpsController.fallSlowDown = 0.5f;

			PlayHitSound();
		}
		else
		{
			soldierAnimation.DoHitMovement();
		}

		if (!playerKilled)
		{
			if (PhotonNetwork.player.ID == killerID)
			{
				//Save temp references
				lastWeaponName = GameSettings.rc.ourPlayer ? GameSettings.rc.ourPlayer.playerWeapons.currentSelectedWeapon.weaponName : "";
				lastBodyPart = values[1];
			}

			if (PhotonNetwork.isMasterClient)
			{
				DecreaseHealth(values,killerID);
				
			}
		}
	}


	public void DecreaseHealth(int[] values, int killerID)
    {
		int currentHP = photonView.owner.CustomProperties["PlayerHP"] != null ? (int)photonView.owner.CustomProperties["PlayerHP"] : 100;
		currentHP -= GetDMG((int)values[0], (int)values[1]);
		Hashtable setPlayerData = new Hashtable();
		setPlayerData.Add("PlayerHP", currentHP); //Setup player HP by master client
		photonView.owner.SetCustomProperties(setPlayerData);


		if (currentHP < 1)
		{
			photonView.RPC("KillPlayer", PhotonTargets.All, killerID);
			playerKilled = true;
		}
	}
	[PunRPC]
	public void DamageRemoteBot(int[] values, string killerName, int team, string WepName)
	{
		if (photonView.isMine)
		{
			GameSettings.rc.DoHitDetector((int)values[2]);
			fpsController.fallSlowDown = 0.5f;

			PlayHitSound();
		}
		else
		{
			soldierAnimation.DoHitMovement();
		}

		if (!playerKilled)
		{

			if (PhotonNetwork.isMasterClient)
			{
				int currentHP = photonView.owner.CustomProperties["PlayerHP"] != null ? (int)photonView.owner.CustomProperties["PlayerHP"] : 100;
				currentHP -= GetDMG((int)values[0], (int)values[1]);
				Hashtable setPlayerData = new Hashtable();
				setPlayerData.Add("PlayerHP", currentHP); //Setup player HP by master client
				photonView.owner.SetCustomProperties(setPlayerData);


				if (currentHP < 1)
				{
					RoomCk.GetComponent<RoomController>().PostActivityRemoteWeapons("  " + killerName, "          " + WepName, photonView.name, team, (int)photonView.owner.CustomProperties["Team"]);
					//GameObject.Find(killerName).GetComponent<BotAi>().KillAll++;
					//GameObject.Find(killerName).GetComponent<BotAi>().shootOn = true;
					photonView.RPC("KillPlayer", PhotonTargets.All, PhotonNetwork.player.ID);
					playerKilled = true;
				}
			}
		}
	}

	[PunRPC]
	public void BombDmg(int killerID)
	{
		if (photonView.isMine)
		{
			GameSettings.rc.DoHitDetector(2);
			fpsController.fallSlowDown = 0.5f;

			PlayHitSound();
		}
		else
		{
			soldierAnimation.DoHitMovement();
		}

		if (!playerKilled)
		{
			if (PhotonNetwork.player.ID == killerID)
			{
				//Save temp references
				lastWeaponName = "GRENADE";
				lastBodyPart = 2;
			}

			if (PhotonNetwork.isMasterClient)
			{
				int bombHP = photonView.owner.CustomProperties["PlayerHP"] != null ? (int)photonView.owner.CustomProperties["PlayerHP"] : 100;
				bombHP -= 101;
				Hashtable setPlayerData = new Hashtable();
				setPlayerData.Add("PlayerHP", bombHP); //Setup player HP by master client
				photonView.owner.SetCustomProperties(setPlayerData);


				if (bombHP < 1)
				{
					photonView.RPC("KillPlayer", PhotonTargets.All, killerID);
					playerKilled = true;
				}
			}
		}
	}

	[PunRPC]
	public void BombDmgLong(int killerID)
	{
		if (photonView.isMine)
		{
			GameSettings.rc.DoHitDetector(2);
			fpsController.fallSlowDown = 0.5f;

			PlayHitSound();
		}
		else
		{
			soldierAnimation.DoHitMovement();
		}

		if (!playerKilled)
		{
			if (PhotonNetwork.player.ID == killerID)
			{
				//Save temp references
				lastWeaponName = "GRENADE";
				lastBodyPart = 2;
			}

			if (PhotonNetwork.isMasterClient)
			{
				int bombLongHP = photonView.owner.CustomProperties["PlayerHP"] != null ? (int)photonView.owner.CustomProperties["PlayerHP"] : 100;
				bombLongHP -= 33;
				Hashtable setPlayerData = new Hashtable();
				setPlayerData.Add("PlayerHP", bombLongHP); //Setup player HP by master client
				photonView.owner.SetCustomProperties(setPlayerData);


				if (bombLongHP < 1)
				{
					photonView.RPC("KillPlayer", PhotonTargets.All, killerID);
					playerKilled = true;
				}
			}
		}
	}

	[PunRPC]
	public void C4Dmg()
	{
		if (photonView.isMine)
		{
			GameSettings.rc.DoHitDetector(2);
			fpsController.fallSlowDown = 0.5f;

			PlayHitSound();
		}
		else
		{
			soldierAnimation.DoHitMovement();
		}

		if (!playerKilled)
		{
			//Save temp references
			lastWeaponName = "C4";
			lastBodyPart = 2;

			if (PhotonNetwork.isMasterClient)
			{
				int bombHP = photonView.owner.CustomProperties["PlayerHP"] != null ? (int)photonView.owner.CustomProperties["PlayerHP"] : 100;
				bombHP -= 101;
				Hashtable setPlayerData = new Hashtable();
				setPlayerData.Add("PlayerHP", bombHP); //Setup player HP by master client
				photonView.owner.SetCustomProperties(setPlayerData);


				if (bombHP < 1)
				{
					photonView.RPC("KillPlayer", PhotonTargets.All, photonView.owner.ID);
					playerKilled = true;
				}
			}
		}
	}

	[PunRPC]
	public void C4DmgLong()
	{
		if (photonView.isMine)
		{
			GameSettings.rc.DoHitDetector(2);
			fpsController.fallSlowDown = 0.5f;

			PlayHitSound();
		}
		else
		{
			soldierAnimation.DoHitMovement();
		}

		if (!playerKilled)
		{
			//Save temp references
			lastWeaponName = "C4";
			lastBodyPart = 2;

			if (PhotonNetwork.isMasterClient)
			{
				int bombLongHP = photonView.owner.CustomProperties["PlayerHP"] != null ? (int)photonView.owner.CustomProperties["PlayerHP"] : 100;
				bombLongHP -= 33;
				Hashtable setPlayerData = new Hashtable();
				setPlayerData.Add("PlayerHP", bombLongHP); //Setup player HP by master client
				photonView.owner.SetCustomProperties(setPlayerData);


				if (bombLongHP < 1)
				{
					photonView.RPC("KillPlayer", PhotonTargets.All, photonView.owner.ID);
					playerKilled = true;
				}
			}
		}
	}

	public void DiffuseC4()
	{
		if (photonView.isMine)
		{
			photonView.RPC("DiffuseC4Now", PhotonTargets.All);
		}
	}

	[PunRPC]
	void DiffuseC4Now()
	{
		GameSettings.C4Diffuse = true;
	}

	public void WonCounter()
	{
		if (photonView.isMine)
		{
			photonView.RPC("WonCT", PhotonTargets.All);
		}
	}

	[PunRPC]
	void WonCT()
	{
		GameSettings.WinTeam = "Counter";
	}

	public void WonTeror()
	{
		if (photonView.isMine)
		{
			photonView.RPC("WonT", PhotonTargets.All);
		}
	}

	[PunRPC]
	void WonT()
	{
		GameSettings.WinTeam = "Terorist";
	}

	[PunRPC]
	public void AddKill()
	{
		int newDeaths = photonView.owner.CustomProperties["Kills"] == null ? 1 : (int)photonView.owner.CustomProperties["Kills"] + 1;
		Hashtable setPlayerProperties = new Hashtable();
		setPlayerProperties.Add("Kills", newDeaths);
		photonView.owner.SetCustomProperties(setPlayerProperties);
	}

	[PunRPC]
	public void KillPlayer(int killerID)
	{
		playerKilled = true;
		KillSay = 1;
        if (GameSettings.rc.offlineMode)
        {
			firstPersonView.SetActive(false);

			localMouseLook.enabled = false;
			//fpsController.enabled = false;
			playerWeapons.enabled = false;
			playerWeapons.isFiring = false;

			GameSettings.rc.StartCoroutine("PrepareRespawnCoroutine");

		}
		if (photonView.isMine)
		{
			soldierAnimation.gameObject.SetActive(true);
			firstPersonView.SetActive(false);

			localMouseLook.enabled = false;
			//fpsController.enabled = false;
			playerWeapons.enabled = false;
			playerWeapons.isFiring = false;

			GameSettings.rc.PrepareRespawn(-killerID, false, false);
		}

		if (PhotonNetwork.isMasterClient)
		{
			//Set killed player deaths
			if (photonView.owner != null)
			{
				int newDeaths = photonView.owner.CustomProperties["Deaths"] == null ? 1 : (int)photonView.owner.CustomProperties["Deaths"] + 1;
				Hashtable setPlayerProperties = new Hashtable();
				setPlayerProperties.Add("Deaths", newDeaths);
				photonView.owner.SetCustomProperties(setPlayerProperties);

				//Do not add kills nor team score if we killed ourselves (fell down etc.)
				if (photonView.owner.ID != killerID)
				{
					//Find killer player instance
					PhotonPlayer killerPLayer = null;
					PhotonPlayer[] allPlayers = PhotonNetwork.playerList;
					for (int i = 0; i < allPlayers.Length; i++)
					{
						if (allPlayers[i].ID == killerID)
						{
							killerPLayer = allPlayers[i];
						}
					}

					if (killerPLayer != null)
					{
						//Add kills for killer
						int newKills = killerPLayer.CustomProperties["Kills"] == null ? 1 : (int)killerPLayer.CustomProperties["Kills"] + 1;
						setPlayerProperties = new Hashtable();
						setPlayerProperties.Add("Kills", newKills);
						killerPLayer.SetCustomProperties(setPlayerProperties);

						//Update team scores
						if (GameSettings.currentGameMode == "TDM" || GameSettings.currentGameMode == "NORMAL")
						{
							Hashtable setRoomProperties = new Hashtable();
							int currentTeamScore = 0;

							if ((int)killerPLayer.CustomProperties["Team"] == 1)
							{
								currentTeamScore = PhotonNetwork.room.CustomProperties["TeamAScore"] != null ? (int)PhotonNetwork.room.CustomProperties["TeamAScore"] + 1 : 1;
								setRoomProperties.Add("TeamAScore", currentTeamScore);
							}
							if ((int)killerPLayer.CustomProperties["Team"] == 2)
							{
								currentTeamScore = PhotonNetwork.room.CustomProperties["TeamBScore"] != null ? (int)PhotonNetwork.room.CustomProperties["TeamBScore"] + 1 : 1;
								setRoomProperties.Add("TeamBScore", currentTeamScore);
							}

							if (setRoomProperties.Count > 0)
							{
								PhotonNetwork.room.SetCustomProperties(setRoomProperties);
							}
						}
					}
				}
			}
		}

		if (PhotonNetwork.player.ID == killerID)
		{
			//Check what weapon we used right before
			string selectedWeaponNameTmp = "               [" + lastWeaponName + "]";
			string killedPlayerName = photonView.owner.NickName;
			int killedPlayerTeam = (int)photonView.owner.CustomProperties["Team"];

			if (lastBodyPart == -35)
			{
				selectedWeaponNameTmp = "                      [SK]";
				killedPlayerName = "FALL";
				killedPlayerTeam = 0;
				PhotonPlayer[] allPlyrs = PhotonNetwork.playerList;
				allPlayer = allPlyrs.Length;
				Hashtable setRoomProperties = new Hashtable();
				setRoomProperties.Add("HowPlayer", allPlayer);
				PhotonNetwork.room.SetCustomProperties(setRoomProperties);
			}
			else
			{
				if (lastBodyPart == 0)
				{
					selectedWeaponNameTmp += "Hd";
				}
			}
			//Notify others on kill and add cash
			if (photonView.owner.ID != killerID)
			{
				GameSettings.rc.ReportKill(killedPlayerName, selectedWeaponNameTmp, killedPlayerTeam);
			}
			else
			{
				GameSettings.rc.ReportKill("  ", selectedWeaponNameTmp, killedPlayerTeam);
			}
			if (photonView.owner.ID != killerID)
				GameSettings.rc.AddKillCash(lastBodyPart);
		}
		if (lastBodyPart == 0)
		{
			soldierAnimation.PlayKillAnimationHead();
		}
		else
		{
			soldierAnimation.PlayKillAnimation();

			//int pn = GameSettings.rc.howPlayer;
			//Debug.Log("How player = " + pn);

			////Add time remaining before going next



			//if (photonView.isMine)
			//{
			//	if (GameSettings.rc.ourPlayer.playerKilled)
			//	{ 
			//		if (GameSettings.rc.currentGameMode == "NORMAL")
			//		{

			//                     if (pn >= 3)
			//                     {

			//			   ADManager.instance.PlayAdvertisement();

			//                     }

			//		}
			//		else 
			//		{		

			//                     if (pn >= 2)
			//                     {

			//				ADManager.instance.PlayAdvertisement();

			//                     }

			//                 }


			//	}

			//}

			//if (MeName == GameSettings.C4Who && playerTeam == 2 && !GameSettings.C4on && GameSettings.currentGameMode == "NORMAL" && !GameSettings.TimeOff) {

			//		photonView.RPC("BoxC4Fire", PhotonTargets.Others);
			//}
			//else if (fpsController.C4XTG && playerTeam == 2 && !GameSettings.C4on && GameSettings.currentGameMode == "NORMAL" && !GameSettings.TimeOff) {

			//		photonView.RPC("BoxC4Fire", PhotonTargets.Others);
			//}

		}

	}

	int GetDMG(int weaponIndex, int bodyPart)
	{
		if (weaponIndex > -1 && weaponIndex < playerWeapons.totalWeapons.Count)
		{
			//For shotgun we divide damage for number of fractions
			int divideBy = playerWeapons.totalWeapons[weaponIndex].fireType == PlayerWeapons.FireType.Shotgun ? 6 : 1;

			if (bodyPart == 0 || bodyPart == 1)
			{
				if (bodyPart == 0)
				{
					return playerWeapons.totalWeapons[weaponIndex].headDamage / divideBy;
				}
				else
				{
					return playerWeapons.totalWeapons[weaponIndex].torsoDamage / divideBy;
				}
			}
			else
			{
				return playerWeapons.totalWeapons[weaponIndex].limbsDamage / divideBy;
			}
		}
		else
		{
			return Mathf.Abs(weaponIndex);
		}
	}

	void PlayHitSound()
	{
		playerAudio.Stop();
		if (playerAudio.clip != hitSound)
		{
			playerAudio.clip = hitSound;
		}
		playerAudio.Play();
	}

	void PlayWalkingSound()
	{
		//print ("Changed walking state");

		CancelInvoke("PlayWalkingSoundInvoke");

		stepLength = 0;

		if (movementStateLocal == 0 || movementStateLocal == 1 || movementStateLocal == 2 || movementStateLocal == 4)
		{
			if (movementStateLocal == 4)
			{
				//On ladder
				stepLength = 2.5f / fpsController.ladderSpeed;
			}
			else
			{
				if (movementStateLocal == 2)
				{

				}
				else
				{
					if (movementStateLocal == 0)
					{
						stepLength = 3.5f / fpsController.walkSpeed;
					}
					else
					{
						stepLength = 3.5f / fpsController.runSpeed;
					}
				}
			}
		}

		if (stepLength > 0)
		{
			InvokeRepeating("PlayWalkingSoundInvoke", 0.09f, stepLength);
		}
	}

	void PlayWalkingSoundInvoke()
	{
		walkingAudio.Stop();

		if (fpsController.isMoving || soldierAnimation.isMoving)
		{
			if (movementStateLocal == 4)
			{
				//On ladder
				walkingAudio.clip = ladderSounds[Random.Range(0, ladderSounds.Length - 1)];
			}

			if (movementStateLocal == 0 && !fpsController.isCrouching)
			{
				//Walkig
				walkingAudio.clip = walkingSounds[Random.Range(0, walkingSounds.Length - 1)];
			}

			walkingAudio.Play();
		}
	}
}
