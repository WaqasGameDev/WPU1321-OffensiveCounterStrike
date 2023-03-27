#pragma warning disable 0168 //Variable declared, but not used.
#pragma warning disable 0219 //Variable assigned, but not used.
#pragma warning disable 0414 //Private field assigned, but not used.
#pragma warning disable 0649 //Variable asisgned to, and will always have default value.
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using Hashtable = ExitGames.Client.Photon.Hashtable; //Replace default Hashtables with Photon hashtables

public class RoomController : Photon.MonoBehaviour
{

	//This is main script that control in-room logic

	public GameObject playerPrefab;
	public GameObject botAi;
	public GameObject botAiTr;
	public Camera welcomeCamera;
	public bool offlineMode;



	public int HowPlayerBot = 0;

	public AudioClip buySound;
	public AudioClip cashRegisterSound;
	public AudioClip ctWin;
	public AudioClip tWin;
	public AudioClip headShot;
	public AudioClip killingSpree;
	public AudioClip DoubleKill;
	public AudioClip Hattrick;
	public AudioClip Unstoppable;
	public AudioClip MonsterKill;
	public AudioClip MegaKill;
	public AudioClip UltraKill;
	public AudioClip GodLike;
	public AudioClip KillNormalDie;
	public AudioClip bombDisarm;
	public AudioClip Diffuse;
	public AudioClip DiffuseTake;
	//public GameObject[] C4BoxFD;


	public List<Transform> teamANormalPoints = new List<Transform>();
	public List<Transform> teamBNormalPoints = new List<Transform>();



	[HideInInspector]
	public List<Transform> teamASpawnPoints = new List<Transform>();
	[HideInInspector]
	public List<Transform> teamBSpawnPoints = new List<Transform>();

	//[HideInInspector]
	public List<PhotonPlayer> teamAPlayers = new List<PhotonPlayer>();
	[HideInInspector]
	public List<PhotonPlayer> teamBPlayers = new List<PhotonPlayer>();

	public List<GameObject> teamABots = new List<GameObject>();

	public List<GameObject> teamBBots = new List<GameObject>();


	public List<Transform> spawnA = new List<Transform>();
	public List<Transform> spawnB = new List<Transform>();

	public List<GameObject> FollowCamAll = new List<GameObject>();

	[HideInInspector]
	public string spectatorNames = "";

	public List<string> FollowCam = new List<string>();

	[HideInInspector]
	public bool showScoreBoard = false;
	[HideInInspector]
	public bool eneteredGrenadeSpot = false;
	[HideInInspector]
	public bool leavingRoom = false;
	[HideInInspector]
	public bool showFPS = true;
	[HideInInspector]
	public bool showBuyMenu = false;
	[HideInInspector]
	public bool showOptions;
	[HideInInspector]
	public bool StartFollow = false;
	[HideInInspector]
	public bool FollowCamera = false;
	[HideInInspector]
	public bool C4Tag = false;

	[HideInInspector]
	public bool DiffuseTag = false;
	[HideInInspector]
	public bool DiffuseCreateUI = false;
	[HideInInspector]
	public bool C4XTag = false;
	[HideInInspector]
	public bool SwitchTeam = false;
	[HideInInspector]
	public bool CashOn = false;

	//[HideInInspector]
	public PlayerNetwork ourPlayer;
	[HideInInspector]
	public List<PlayerNetwork> otherPlayers = new List<PlayerNetwork>(); //Keep references of other spawned players

	Transform welcomeCameraTransform;
	Vector3 defaultCamPos;
	Quaternion defaultCamRot;

	//bool playerKilled = false;
	[HideInInspector]
	public float distance; //Crosshair distance is also set at Weapon.cs when we fire

	[HideInInspector]
	public float redScreenFade = 0;
	[HideInInspector]
	public float hitTopFade = 0;
	[HideInInspector]
	public float hitBottomFade = 0;
	[HideInInspector]
	public float hitLeftFade = 0;
	[HideInInspector]
	public float hitRightFade = 0;
	[HideInInspector]
	public bool doingHitDetector = false;

	//Get current fps
	float updateInterval = 1f;
	float accum = 0.0f;
	int frames = 0;
	float timeleft;
	float roundDuration = 0;
	float referenceTime = 0;
	string C4WHO = "";
	public int howPlayer = 0;
	[HideInInspector]
	public float currentRoundTime;
	float seconds;
	float minutes;


	string languagesPrefsName = "SelectedLanguages";
	string playerNameJoinPrefsName = "JoinPlayerName";

	[HideInInspector]
	public string roundTimeString = "";
	[HideInInspector]
	public int teamAScore = 0;
	[HideInInspector]
	public int teamANormalScore = 0;
	[HideInInspector]
	public int teamBNormalScore = 0;
	[HideInInspector]
	public int teamBScore = 0;
	[HideInInspector]
	public int ourTeam = 0;
	[HideInInspector]
	public int meTeam = 0;
	[HideInInspector]
	public string currentGameMode = "";
	[HideInInspector]
	public int currentRespawnTime = -1;
	[HideInInspector]
	public int currentGameStatus = 0;

	//Used only for FFA (Free For All) mode
	[HideInInspector]
	public int currentKillLimit;
	[HideInInspector]
	public PhotonPlayer winningPlayer;

	[HideInInspector]
	public int totalCash = 0;
	[HideInInspector]
	public int currentHP = 0;
	[HideInInspector]
	public string scoreToAddTmp = "+ 100";
	[HideInInspector]
	public string KilledAddTmp = "";
	[HideInInspector]
	public Color currentAddingCashColor;
	[HideInInspector]
	public Color currentKilledColor;
	[HideInInspector]
	public Color currentKilledOutColor;
	[HideInInspector]
	public Color currentTotalCashColor;

	int previousGameStatus = 0;
	bool doneSetup = false;
	int i = 0;
    int waitBeforeRespawn
	{
		get
		{
			if (i == 0)
			{
				i++;
				return 5;
			}
			else
			{
				return 5;
			}
		} //How much seconds player need to wait before respawn again
	}

        Color addingColor = new Color(0, 1, 0, 0.75f);
	Color substractingColor = new Color(1, 0.71f, 0.109f, 0.75f);
	Color KillingSpreeColor = new Color(72 / 255.0f, 72 / 255.0f, 72 / 255.0f, 1);
	Color HeadShotOut = new Color(196 / 255.0f, 0 / 255.0f, 0 / 255.0f, 1);

	Color addingColorFadeTo;
	Color addingColorKillTo;
	bool addingKillCash = false;

	int lockState = -1;

	[System.Serializable]
	public class ActionReport
	{
		public string leftText;
		public string middleText;
		public string rightText;
		public Color leftTextColor;
		public Color rightTextColor;
		public float timer; //How long this itema appear on screen in seconds

		public ActionReport(string lt, string mt, string rt, Color ltc, Color rtc, float t)
		{
			leftText = lt;
			middleText = mt;
			rightText = rt;
			leftTextColor = ltc;
			rightTextColor = rtc;
			timer = t;
		}
	}

	[HideInInspector]
	public List<ActionReport> actionReports = new List<ActionReport>();
	[HideInInspector]
	public List<ActionReport> actionWeaponsReports = new List<ActionReport>();

	[HideInInspector]
	public MultiplayerChat mc;
	//[HideInInspector]
	public OptionsSettings os;

	FPSMouseLook cameraMouseLook;
	public Scoreboard sb;

	BuyMenu bm;
	MultiplayerChat mtp;
	RoomUI ru;
	public AudioSource audioSource;
	public xmlReader xml;
	public AudioSource ZeroStrikeX;

	[HideInInspector]
	public int timeToPurchase = 0;

	[HideInInspector]
	public int timeToShield = 0;

	[HideInInspector]
	public int SoundBas = 0;

	string startMoneyPrefsName = "StartMoney";
	string killsayPrefsName = "KillSayLevel";
	string killsayScorePrefsName = "KillSayScore";

	public int WFollowCam = 0;

    private void Awake()
    {
		if (PlayerPrefs.GetInt("OfflineMode", 0) == 1) 
		{
			offlineMode = true;
			currentGameMode = "FFA";
			PhotonNetwork.offlineMode = true;
		}
		else 
		{
			offlineMode = false;
		}
	}

    //Compare players by kills (sort by list)
    private static int SortPlayers(PhotonPlayer A, PhotonPlayer B)
	{
		return (int)B.CustomProperties["Kills"] - (int)A.CustomProperties["Kills"];
	}
	// Use this for initialization
	IEnumerator Start()
	{

		WFollowCam = 0;
		HowPlayerBot = 0;
		PhotonNetwork.isMessageQueueRunning = true;
		photonView.viewID = 100;
		GameSettings.rc = this;
		GameSettings.menuOpened = true;

		for (int x = 0; x < teamANormalPoints.Count; x++)
		{


			//if (teamANormalPoints[x] == null)
			//{
			//	teamANormalPoints.RemoveAt(x);
			//}

			//if (teamANormalPoints[x] == null || teamAPlayers == null)
			//{
			//	continue;

			//}
			spawnA.Add(teamANormalPoints[x]);
		}

		for (int x = 0; x < teamBNormalPoints.Count; x++)
        {
            //	if (teamBNormalPoints[x] == null || teamBPlayers == null)
            //	{
            //		continue;

            //	}
            spawnB.Add(teamBNormalPoints[x]);
		}

		leavingRoom = false;
		showScoreBoard = true;
		showOptions = false;
		eneteredGrenadeSpot = false;
		showBuyMenu = false;
		totalCash = GameSettings.cnst - PlayerPrefs.GetInt(startMoneyPrefsName);
		timeToPurchase = 0;
		timeToShield = 0;
		SoundBas = 0;
		showFPS = true;
		StartFollow = false;
		FollowCamera = false;
		C4Tag = false;
		DiffuseTag = false;
		DiffuseCreateUI = false;
		C4XTag = false;

		redScreenFade = 0;
		hitTopFade = 0;
		hitBottomFade = 0;
		hitLeftFade = 0;
		hitRightFade = 0;
		doingHitDetector = false;

		currentAddingCashColor = addingColorFadeTo;
		currentKilledColor = addingColorKillTo;
		currentTotalCashColor = GameSettings.HUDColor;

		mc = GetComponent<MultiplayerChat>();
		os = GetComponent<OptionsSettings>();
		os.rc = this;
		sb = GetComponent<Scoreboard>();

		sb.rc = this;
		bm = GetComponent<BuyMenu>();
		xml = GetComponent<xmlReader>();
		mtp = GetComponent<MultiplayerChat>();
		ru = GetComponent<RoomUI>();

		audioSource = GetComponent<AudioSource>();
		xml.currentLanguage = PlayerPrefs.GetInt(languagesPrefsName);

		cameraMouseLook = welcomeCamera.GetComponent<FPSMouseLook>();
		cameraMouseLook.AssignTarget(null);
		yield return new WaitForEndOfFrame();

		//Set out initial properties
		Hashtable setPlayerProperties = new Hashtable();
		setPlayerProperties.Add("Kills", (int)0);
		setPlayerProperties.Add("Deaths", (int)0);
		setPlayerProperties.Add("Ping", (int)PhotonNetwork.GetPing());
		setPlayerProperties.Add("Team", (int)0); //0 = Spectators, 1 = teamA, 2 = teamB, 3 = Draw
		setPlayerProperties.Add("PlayerHP", (int)-1);

		if (!offlineMode)
		{
			PhotonNetwork.player.SetCustomProperties(setPlayerProperties);
			RefreshPlayerList();
		}

		welcomeCameraTransform = welcomeCamera.transform;
		defaultCamPos = welcomeCameraTransform.position;
		defaultCamRot = welcomeCameraTransform.rotation;

		timeleft = updateInterval;

		yield return new WaitForEndOfFrame();

		//Set Room properties
		if (PhotonNetwork.isMasterClient)
		{
			GameSettings.TimeOff = false;
			GameSettings.C4on = false;
			GameSettings.C4Who = "";

			if (!offlineMode)
			{
				referenceTime = (float)PhotonNetwork.time;
			}

			currentGameStatus = 0;
			if (teamBPlayers.Count > 0)
			{
				int rnd = Random.Range(0, teamBPlayers.Count);
				GameSettings.C4Who = teamBPlayers[rnd].NickName;
			}
			else
			{
				GameSettings.C4Who = "";
			}
			C4WHO = GameSettings.C4Who;
			howPlayer = teamAPlayers.Count + teamBPlayers.Count;
			if (!offlineMode)
			{
				Hashtable setRoomProperties = new Hashtable();
				setRoomProperties.Add("ReferenceTime", (float)PhotonNetwork.time);
				setRoomProperties.Add("GameStatus", (int)0); //0 = Play, 1 = team A won, 2 = team B won
				setRoomProperties.Add("TeamAScore", (int)0);
				setRoomProperties.Add("TeamBScore", (int)0);
				setRoomProperties.Add("TeamANormalScore", (int)0);
				setRoomProperties.Add("TeamBNormalScore", (int)0);
				setRoomProperties.Add("C4Who", (string)C4WHO);
				setRoomProperties.Add("HowPlayer", (int)howPlayer);
				PhotonNetwork.room.SetCustomProperties(setRoomProperties);
			}

		}
		else
		{
			if (!offlineMode)
			{
				referenceTime = (float)PhotonNetwork.room.CustomProperties["ReferenceTime"];
				currentGameStatus = (int)PhotonNetwork.room.CustomProperties["GameStatus"];
				C4WHO = (string)PhotonNetwork.room.CustomProperties["C4Who"];
				howPlayer = (int)PhotonNetwork.room.CustomProperties["HowPlayer"];
				GameSettings.C4Who = C4WHO;
			}
		}

		yield return new WaitForEndOfFrame();

		if (!offlineMode)
		{
			currentGameMode = (string)PhotonNetwork.room.CustomProperties["GameMode"];
			roundDuration = (float)PhotonNetwork.room.CustomProperties["RoundDuration"];
			GetTeamScores();
		}
		else 
		{
            currentGameMode = "FFA";
			roundDuration = 30;

        }

		previousGameStatus = currentGameStatus;

		if (offlineMode)
		{
			//Offline mode for only FFA
			currentKillLimit = 30;
		}
		else
		{
			//Used only for FFA mode
			if (PhotonNetwork.room.CustomProperties["KillLimit"] != null)
			{
				currentKillLimit = (int)PhotonNetwork.room.CustomProperties["KillLimit"];
			}
			else
			{
				currentKillLimit = -1;
			}

			if (PhotonNetwork.room.CustomProperties["WinningPlayer"] != null)
			{
				winningPlayer = (PhotonPlayer)PhotonNetwork.room.CustomProperties["WinningPlayer"];
			}
			else
			{
				winningPlayer = null;
			}

			//Display notification that we joined room (locally)
			PostActivityRemote("", PhotonNetwork.player.NickName + xml.button65, "", 0, 0);
			InvokeRepeating("RefreshPing", 3.5f, 3.5f);

			GameSettings.currentGameMode = currentGameMode;

			yield return new WaitForEndOfFrame();

			doneSetup = true;
		}

		if (offlineMode) 
		{
			SpawnPlayer(1);
		}
	}

	void GetTeamScores()
	{
		teamAScore = (int)PhotonNetwork.room.CustomProperties["TeamAScore"];
		teamBScore = (int)PhotonNetwork.room.CustomProperties["TeamBScore"];
		if (currentGameMode == "NORMAL")
		{
			teamANormalScore = (int)PhotonNetwork.room.CustomProperties["TeamANormalScore"];
			teamBNormalScore = (int)PhotonNetwork.room.CustomProperties["TeamBNormalScore"];
		}
	}

	void RefreshPlayerList()
	{
		Debug.Log("h11");

		PhotonPlayer[] playerList = PhotonNetwork.playerList;

		teamAPlayers.Clear();
		teamBPlayers.Clear();
		spectatorNames = "";

		for (int i = 0; i < playerList.Length; i++)
		{

			int playerTeamTmp = playerList[i].CustomProperties["Team"] != null ? (int)playerList[i].CustomProperties["Team"] : 0;

			if (playerTeamTmp == 0 || playerTeamTmp < 1 || playerTeamTmp > 2)
			{
				if (spectatorNames != "")
				{
					spectatorNames += ", ";
				}
				spectatorNames += playerList[i].NickName;
			}
			else
			{
				if (playerTeamTmp == 1)
				{
					teamAPlayers.Add(playerList[i]);
				}
				else
				{
					teamBPlayers.Add(playerList[i]);
				}
			}
		}


		if (currentGameMode != "")
		{
			teamAPlayers.Sort(SortPlayers);
			teamBPlayers.Sort(SortPlayers);
		}
		if (PhotonNetwork.player.CustomProperties["Team"] != null)
		{
			Debug.Log("h14");
			ourTeam = (int)PhotonNetwork.player.CustomProperties["Team"];
			GameSettings.ourTeam = ourTeam;
        }
        else {
			RefreshPlayerList();
		}
	}

	void RefreshPing()
	{
		Hashtable setPlayerProperties = new Hashtable();
		setPlayerProperties.Add("Ping", (int)PhotonNetwork.GetPing());
		PhotonNetwork.player.SetCustomProperties(setPlayerProperties);
	}

	void ResetGameStatus(int statusIndex, PhotonPlayer wp)
	{
		//GameObject C4Box4 = GameObject.Find("C4Box1(Clone)");
		//if (C4Box4 != null)
		//{
		//    Destroy(C4Box4);
		//}
		Debug.Log("h10");
		referenceTime = (float)PhotonNetwork.time;
		howPlayer = teamAPlayers.Count + teamBPlayers.Count;
		Hashtable setRoomProperties = new Hashtable();
		setRoomProperties.Add("ReferenceTime", referenceTime);
		setRoomProperties.Add("HowPlayer", howPlayer);
		setRoomProperties.Add("GameStatus", statusIndex);//0 = Play, 1 = team A won, 2 = team B won, 3 = Draw
		if (statusIndex == 0 && currentGameMode != "NORMAL")
		{
			setRoomProperties.Add("TeamAScore", (int)0);
			setRoomProperties.Add("TeamBScore", (int)0);
		}
		setRoomProperties.Add("WinningPlayer", wp); //Used only for FFA (Fre For All) mode to notify other the winning player
		PhotonNetwork.room.SetCustomProperties(setRoomProperties);
	}

	// Update is called once per frame
	void Update()
	{
        //GameObject C4Box4 = GameObject.Find("C4Box1(Clone)");
        //if (C4Box4 != null)
        //{
        //    Destroy(C4Box4);
        //}
        //if (C4BoxFD[1] != null)
        //{
        //	C4BoxFD = GameObject.FindGameObjectsWithTag("C4Box(Clone)");
        //	foreach (GameObject c4box in C4BoxFD)
        //		GameObject.Destroy(c4box);
        //}

        if (!doneSetup)
			return;

		if (ourPlayer)
		{
			if (!ourPlayer.playerKilled)
			{
				if (ourPlayer.fpsController)
				{
					DiffuseTag = ourPlayer.fpsController.Diffusetg;
					C4XTag = ourPlayer.fpsController.C4XTG;
					C4Tag = ourPlayer.fpsController.C4tg;
				}
			}
		}
		else
		{
			C4Tag = false;
			DiffuseTag = false;
			C4XTag = false;
		}

		//if (Input.GetKeyDown(KeyCode.Tab))
		//{
		//	ShowScoreboard();
		//}

		os.enabled = showOptions;
		sb.enabled = showScoreBoard;
		bm.enabled = showBuyMenu;

		//if (Input.GetKeyDown(GameSettings.playerKeys[13]))
		//{
		//	//print ("Buy menu key pressed");
		//	OpenBuyMenu();
		//}

		//When some menu opened, block mouse views, walking, shooting etc.
		GameSettings.menuOpened = showScoreBoard ||  showBuyMenu || mc.chatState != MultiplayerChat.ChatState.None || showOptions   ;

		if (!ourPlayer)
		{
			eneteredGrenadeSpot = false;
		}

		timeleft -= Time.deltaTime;
		accum += Time.timeScale / Time.deltaTime;
		++frames;

		// Interval ended - update GUI text and start new interval
		if (timeleft <= 0.0)
		{
			// display two fractional digits (f2 format)
			//fps = (accum/frames).ToString("f2") + "FPS";
			GameSettings.currentFPS = accum / frames;
			timeleft = updateInterval;
			accum = 0.0f;
			frames = 0;
		}

		//Gradually reduce crosshair distance
		distance = Mathf.Lerp(distance, 5, Time.deltaTime * 10.5f);

		//Lock cursor when needed
		if (showScoreBoard || showBuyMenu || showOptions)
		{

	
			if (lockState != 0)
			{
				lockState = 0;
				LockCursor(false);
			}
		}
		else
		{
			if (lockState != 1)
			{
				lockState = 1;
				LockCursor(true);
			}
		}

	}

	public void ShowScoreboard()
	{
		showScoreBoard = !showScoreBoard;
		showBuyMenu = false;
		showOptions = false;

		if (showScoreBoard)
		{
			RefreshPlayerList();
		}

		if (offlineMode) 
		{
			Debug.Log("ZAKON");
			sb.enabled = true;
			sb.gameObject.SetActive(true);
		}
	}

	public void OpenBuyMenu()
	{
		if (!ourPlayer || timeToPurchase > 0)
		{
			//print ("Buy menu key pressed");
			showBuyMenu = !showBuyMenu;
			showScoreBoard = false;
			showOptions = false;
			bm.buySection = BuyMenu.BuySection.Secondary;
			GameSettings.updateActionReports = false;
		}
		if (offlineMode && timeToPurchase > 0) 
		{
			Debug.Log("ZAK98");
			showBuyMenu = !showBuyMenu;
			showScoreBoard = false;
			showOptions = false;
			bm.buySection = BuyMenu.BuySection.Secondary;
			GameSettings.updateActionReports = false;
			bm.enabled = !showBuyMenu;
		}
	}

	void LockCursor(bool lockCursor)
	{

#if !UNITY_ANDROID && !UNITY_IOS && !UNITY_WP8 && !UNITY_WP8_1
        Cursor.lockState = lockCursor ? CursorLockMode.Locked : CursorLockMode.None;
		Cursor.visible = !lockCursor;
#endif

	}

	void FixedUpdate()
	{
		if (!doneSetup)
			return;

		if (actionReports.Count > 0)
		{
			for (int i = 0; i < actionReports.Count; i++)
			{
				if (actionReports[i].timer > 0)
				{
					actionReports[i].timer -= Time.deltaTime;
				}
				else
				{
					actionReports.RemoveAt(i);
					GameSettings.updateActionReports = true;
				}
			}
		}

		if (actionWeaponsReports.Count > 0)
		{
			for (int i = 0; i < actionWeaponsReports.Count; i++)
			{
				if (actionWeaponsReports[i].timer > 0)
				{
					actionWeaponsReports[i].timer -= Time.deltaTime;
				}
				else
				{
					actionWeaponsReports.RemoveAt(i);
					GameSettings.updateWeaponActionReports = true;
				}
			}
		}

		//Room logic, track round time
		if (currentGameStatus == 0)
		{

			if (teamAPlayers.Count + teamBPlayers.Count == 1 && teamAPlayers.Count + teamBPlayers.Count < 2 && currentGameMode == "NORMAL" && PhotonNetwork.isMasterClient && !GameSettings.TimeOff && teamABots.Count + teamBBots.Count >= 5)
			{
				int deadT = 0;
				int deadC = 0;
				int tmpGameState = 0;
				for (int i = 0; i < teamAPlayers.Count; i++)
				{
					if (teamAPlayers[i].CustomProperties["PlayerHP"] == null || (int)teamAPlayers[i].CustomProperties["PlayerHP"] <= 0)
					{
						deadC += 1;
					}
				}
				for (int i = 0; i < teamBPlayers.Count; i++)
				{
					if (teamBPlayers[i].CustomProperties["PlayerHP"] == null || (int)teamBPlayers[i].CustomProperties["PlayerHP"] <= 0)
					{
						deadT += 1;
					}
				}

				if (deadC == teamAPlayers.Count + teamABots.Count && deadT != teamBPlayers.Count + teamBBots.Count)
				{
					if (GameSettings.C4on)
					{
						GameObject C4 = GameObject.Find("C4n(Clone)");
						if (C4 != null)
						{
							Destroy(C4);
							GameSettings.C4on = false;
						}
					}
					Debug.Log("h7");
					GameSettings.TimeOff = true;
					tmpGameState = 2;
					roundTimeString = "";
					StartCoroutine(Restart(tmpGameState, 3f));
				}
				if (deadC != teamAPlayers.Count + teamABots.Count && deadT == teamBPlayers.Count + teamBBots.Count && !GameSettings.C4on)
				{
					Debug.Log("h6");
					GameSettings.TimeOff = true;
					tmpGameState = 1;
					roundTimeString = "";
					StartCoroutine(Restart(tmpGameState, 3f));
				}


				if (deadC == teamAPlayers.Count + teamABots.Count && deadT == teamBPlayers.Count + teamBBots.Count)
				{
					Debug.Log("h9");
					GameSettings.TimeOff = true;
					tmpGameState = 0;
					roundTimeString = "";
					StartCoroutine(Restart(tmpGameState, 3f));
				}
			}



		


			if (currentGameMode == "NORMAL")
			{
				if (!GameSettings.C4on && !GameSettings.TimeOff)
				{
					currentRoundTime = roundDuration - Mathf.Round(((float)PhotonNetwork.time - referenceTime) * 10) / 10;

					seconds = Mathf.FloorToInt(Mathf.CeilToInt(currentRoundTime) % 60);
					minutes = Mathf.FloorToInt((Mathf.CeilToInt(currentRoundTime) / 60) % 60);
					roundTimeString = string.Format("{0:00}:{1:00}", minutes, seconds);
				}
			}
			else
			{
				currentRoundTime = roundDuration - Mathf.Round(((float)PhotonNetwork.time - referenceTime) * 10) / 10;

				seconds = Mathf.FloorToInt(Mathf.CeilToInt(currentRoundTime) % 60);
				minutes = Mathf.FloorToInt((Mathf.CeilToInt(currentRoundTime) / 60) % 60);
				roundTimeString = string.Format("{0:00}:{1:00}", minutes, seconds);
			}
			if (PhotonNetwork.isMasterClient)
			{
				if (currentRoundTime < 1 && PhotonNetwork.time > 0 && referenceTime > 0)
				{
					//Round time ended, check who won
					int tmpGameState = 3;
					PhotonPlayer tmpWinningPlayer = null;

					if (currentGameMode == "TDM")
					{

						GetTeamScores();

						if (teamAScore > teamBScore)
						{
							tmpGameState = 1;
						}
						if (teamAScore < teamBScore)
						{
							tmpGameState = 2;
						}
					}

					if (currentGameMode == "NORMAL")
					{
						tmpGameState = 1;
					}

					if (currentGameMode == "FFA")
					{
						RefreshPlayerList();
						tmpWinningPlayer = teamAPlayers.Count > 0 ? teamAPlayers[0] : null;
					}

					if (currentGameMode != "NORMAL")
					{
						ResetGameStatus(tmpGameState, tmpWinningPlayer);
					}
					else
					{
						if (!GameSettings.TimeOff)
						{
							GameSettings.TimeOff = true;
							StartCoroutine(Restart(tmpGameState, 1f));
						}
					}
				}
				else if (GameSettings.WinTeam == "Counter" && currentGameMode == "NORMAL" && !GameSettings.TimeOff)
				{
					GameSettings.TimeOff = true;
					GameObject c4Find = GameObject.Find("C4n(Clone)");
					if (c4Find != null)
					{
						Destroy(c4Find);
					}
					int tmpGameState = 1;
					roundTimeString = "";
					StartCoroutine(Restart(tmpGameState, 3f));
				}
				else if (GameSettings.WinTeam == "Terorist" && currentGameMode == "NORMAL" && !GameSettings.TimeOff)
				{
					GameSettings.TimeOff = true;
					int tmpGameState = 2;
					roundTimeString = "";
					StartCoroutine(Restart(tmpGameState, 3f));
				}
				else
				{
					if (referenceTime < 1)
					{
						referenceTime = (float)PhotonNetwork.time;
						Hashtable setRoomProperties = new Hashtable();
						setRoomProperties.Add("ReferenceTime", referenceTime);
						PhotonNetwork.room.SetCustomProperties(setRoomProperties);
						print("Reference time missing, setting it again");
					}

					if (teamBPlayers.Count > 0 && C4WHO == "" && currentGameMode == "NORMAL")
					{
						if (teamBPlayers.Count > 0)
						{
							int rnd = Random.Range(0, teamBPlayers.Count);
							GameSettings.C4Who = teamBPlayers[rnd].NickName;
						}
						else
						{
							GameSettings.C4Who = "";
						}
						C4WHO = GameSettings.C4Who;
						Hashtable setRoomProperties = new Hashtable();
						setRoomProperties.Add("C4Who", C4WHO);
						PhotonNetwork.room.SetCustomProperties(setRoomProperties);
						print("C4 Who missing, setting it again");
					}
				}
			}
		}
		else
		{
			if (currentGameMode != "NORMAL")
			{
				//Interval before next round
				currentRoundTime = 5 - Mathf.Round(((float)PhotonNetwork.time - referenceTime) * 10) / 10;
				roundTimeString = "";

				if (PhotonNetwork.isMasterClient)
				{
					if (currentRoundTime < 1)
					{
						//Restart round
						ResetGameStatus(0, null);
						SoundBas = 0;
					}
				}
			}
		}

		if (currentGameMode == "NORMAL")
		{

			//if (meTeam == 1)
			//{
			//	if (teamAPlayers.Count > 0)
			//	{
			//		for (int i = 0; i < teamAPlayers.Count; i++)
			//		{
			//			if (teamAPlayers[i].CustomProperties["PlayerHP"] == null || (int)teamAPlayers[i].CustomProperties["PlayerHP"] < 1)
			//			{
			//				if (FollowCam.Count > 0)
			//				{
			//					for (int f = 0; f < FollowCam.Count; f++)
			//					{
			//						if (FollowCam[f] == teamAPlayers[i].NickName)
			//						{
			//							FollowCam.Remove(FollowCam[f]);
			//						}
			//					}
			//				}
			//			}
			//			else
			//			{
			//				bool find = false;
			//				if (FollowCam.Count > 0)
			//				{
			//					if (teamAPlayers[i].NickName != PlayerPrefs.GetString(playerNameJoinPrefsName))
			//					{
			//						for (int z = 0; z < FollowCam.Count; z++)
			//						{
			//							if (teamAPlayers[i].NickName == FollowCam[z])
			//							{
			//								find = true;
			//							}
			//						}
			//						if (find == false)
			//						{
			//							FollowCam.Add(teamAPlayers[i].NickName);
			//						}
			//					}
			//				}
			//				else
			//				{
			//					if (teamAPlayers[i].NickName != PlayerPrefs.GetString(playerNameJoinPrefsName))
			//					{
			//						FollowCam.Add(teamAPlayers[i].NickName);
			//					}
			//				}
			//			}
			//		}
			//	}
			//	else
			//	{
			//		FollowCam.Clear();
			//	}
			//}

			//if (meTeam == 2)
			//{
			//	if (teamBPlayers.Count > 0)
			//	{
			//		for (int i = 0; i < teamBPlayers.Count; i++)
			//		{
			//			if (teamBPlayers[i].CustomProperties["PlayerHP"] == null || (int)teamBPlayers[i].CustomProperties["PlayerHP"] < 1)
			//			{
			//				if (FollowCam.Count > 0)
			//				{
			//					for (int f = 0; f < FollowCam.Count; f++)
			//					{
			//						if (FollowCam[f] == teamBPlayers[i].NickName)
			//						{
			//							FollowCam.Remove(FollowCam[f]);
			//						}
			//					}
			//				}
			//			}
			//			else
			//			{
			//				bool find = false;
			//				if (FollowCam.Count > 0)
			//				{
			//					if (teamBPlayers[i].NickName != PlayerPrefs.GetString(playerNameJoinPrefsName))
			//					{
			//						for (int z = 0; z < FollowCam.Count; z++)
			//						{
			//							if (teamBPlayers[i].NickName == FollowCam[z])
			//							{
			//								find = true;
			//							}
			//						}
			//						if (find == false)
			//						{
			//							FollowCam.Add(teamBPlayers[i].NickName);
			//						}
			//					}
			//				}
			//				else
			//				{
			//					if (teamBPlayers[i].NickName != PlayerPrefs.GetString(playerNameJoinPrefsName))
			//					{
			//						FollowCam.Add(teamBPlayers[i].NickName);
			//					}
			//				}
			//			}
			//		}
			//	}
			//	else
			//	{
			//		FollowCam.Clear();
			//	}
			//}

			/*if (ourPlayer) {
				if (ourPlayer.playerKilled) {
					if (FollowCam.Count > 0 && otherPlayers.Count > 0) {
						if (!FollowCamera) {
							Transform targetTmp = null;
							for (int i = otherPlayers.Count - 1; i >= 0; i--) {
								if (otherPlayers [i] == null) {
									otherPlayers.RemoveAt (i);
								} else {
									if (otherPlayers [i].MeName == FollowCam [mtp.CameraFollow]) {
										targetTmp = otherPlayers [i].playerAudio.transform;
										//print ("Target player ID: " + otherPlayers[i].playerID.ToString());
									}
								}
							}
							if (targetTmp != null) {
								FollowCamera = true;
								cameraMouseLook.AssignTarget (targetTmp);
							}
						}
					} 
					else {
						welcomeCamera.transform.position = defaultCamPos;
						welcomeCamera.transform.rotation = defaultCamRot;
					}
				}
			}

			if (StartFollow) {
				if (FollowCam.Count > 0 && otherPlayers.Count > 0) {
					if (!FollowCamera) {
						Transform targetTmp = null;
						for (int i = otherPlayers.Count - 1; i >= 0; i--) {
							if (otherPlayers [i] == null) {
								otherPlayers.RemoveAt (i);
							} else {
								if (otherPlayers [i].MeName == FollowCam [mtp.CameraFollow]) {
									targetTmp = otherPlayers [i].playerAudio.transform;
									//print ("Target player ID: " + otherPlayers[i].playerID.ToString());
								}
							}
						}
						if (targetTmp != null) {
							FollowCamera = true;
							cameraMouseLook.AssignTarget (targetTmp);
						}
					}
				} 
				else {
					welcomeCamera.transform.position = defaultCamPos;
					welcomeCamera.transform.rotation = defaultCamRot;
				}
			}*/
			//if (FollowCamAll.Count > 0 && teamAPlayers.Count + teamBPlayers.Count <= 1 && teamABots.Count + teamBBots.Count > 0)
			//{
			//	for (int a = 0; a < FollowCamAll.Count; a++)
			//	{
			//		if (FollowCamAll[a] != null && FollowCamAll[a].GetComponent<BotAi>().health <= 0)
			//		{
			//			FollowCamAll.Remove(FollowCamAll[a]);
			//		}
			//	}
			//}
			//else
			//{

			if (teamAPlayers.Count > 0 /*&& ourPlayer.playerKilled || ourTeam != 1 || ourTeam != 2*/)
			{
				for (int i = 0; i < teamAPlayers.Count; i++)
				{
					if (teamAPlayers[i] == null) continue;
					bool PlayerFind = false;
					if (teamAPlayers[i].CustomProperties["PlayerHP"] != null && (int)teamAPlayers[i].CustomProperties["PlayerHP"] > 0)
					{
						if (FollowCamAll.Count > 0)
						{
							for (int f = 0; f < FollowCamAll.Count; f++)
							{
								if (FollowCamAll[f] == null)
								{
									FollowCamAll.Remove(FollowCamAll[f]);
								}
								else if (FollowCamAll[f] != null && FollowCamAll[f].name == teamAPlayers[i].NickName)
								{
									PlayerFind = true;
								}

							}
							if (PlayerFind == false)
							{
								FollowCamAll.Add(GameObject.Find(teamAPlayers[i].NickName));
							}
						}
						else { FollowCamAll.Add(GameObject.Find(teamAPlayers[i].NickName)); }
					}
					else
					{
						for (int f = 0; f < FollowCamAll.Count; f++)
						{
							if (FollowCamAll[f] != null && FollowCamAll[f].name == teamAPlayers[i].NickName)
							{
								FollowCamAll.Remove(FollowCamAll[f]);
							}
						}
					}
				}
			}
			if (teamBPlayers.Count > 0 /*&& ourPlayer.playerKilled || ourTeam != 1 || ourTeam != 2*/)
			{
				for (int i = 0; i < teamBPlayers.Count; i++)
				{
					if (teamBPlayers[i] == null) continue;
					bool PlayerFind = false;
					if (teamBPlayers[i].CustomProperties["PlayerHP"] != null && (int)teamBPlayers[i].CustomProperties["PlayerHP"] > 0)
					{
						if (FollowCamAll.Count > 0)
						{
							for (int f = 0; f < FollowCamAll.Count; f++)
							{
								if (FollowCamAll[f] == null)
								{
									FollowCamAll.Remove(FollowCamAll[f]);
								}

								else if (FollowCamAll[f] != null && FollowCamAll[f].name == teamBPlayers[i].NickName)
								{
									PlayerFind = true;
								}

							}
							if (PlayerFind == false)
							{
								FollowCamAll.Add(GameObject.Find(teamBPlayers[i].NickName));
							}
						}
						else { FollowCamAll.Add(GameObject.Find(teamBPlayers[i].NickName)); }
					}
					else
					{
						for (int f = 0; f < FollowCamAll.Count; f++)
						{
							if (FollowCamAll[f] != null && FollowCamAll[f].name == teamBPlayers[i].NickName)
							{
								FollowCamAll.Remove(FollowCamAll[f]);
							}
						}
					}
				}
			}

			//}


			if (ourPlayer)
			{
				if (ourPlayer.playerKilled /* || ourTeam != 1 || ourTeam != 2*/)
				{
					if (FollowCamAll.Count > 0)
					{
						if (WFollowCam <= FollowCamAll.Count - 1)
						{
							if (FollowCamAll.Count > 0 && teamAPlayers.Count + teamBPlayers.Count <= 1 && teamABots.Count + teamBBots.Count > 0)
							{
								if (FollowCamera == false)
								{
									cameraMouseLook.AssignTarget(FollowCamAll[WFollowCam].GetComponent<PlayerNetwork>().CameraFollow.transform);
									FollowCamera = true;
								}
								//welcomeCameraTransform.position = FollowCamAll[WFollowCam].GetComponent<BotAi>().CameraFollow.transform.position;
								//welcomeCameraTransform.rotation = FollowCamAll[WFollowCam].GetComponent<BotAi>().CameraFollow.transform.rotation;
							}
							if (FollowCamAll.Count > 0 && teamAPlayers.Count + teamBPlayers.Count > 1)
							{
								if (FollowCamera == false)
								{
									cameraMouseLook.AssignTarget(FollowCamAll[WFollowCam].GetComponent<PlayerNetwork>().CameraFollow.transform);
									FollowCamera = true;
								}
								//welcomeCameraTransform.position = FollowCamAll[WFollowCam].GetComponent<PlayerNetwork>().CameraFollow.transform.position;
								//welcomeCameraTransform.rotation = FollowCamAll[WFollowCam].GetComponent<PlayerNetwork>().CameraFollow.transform.rotation;
							}

						}
						else { WFollowCam = 0; return; }
					}
					else
					{
						welcomeCamera.transform.position = defaultCamPos;
						welcomeCamera.transform.rotation = defaultCamRot;
					}

				}
			}

			if (!ourPlayer/* || ourTeam == 0*/)
			{
				if (FollowCamAll.Count > 0)
				{
					if (WFollowCam <= FollowCamAll.Count - 1)
					{
						if (FollowCamAll.Count > 0 && teamAPlayers.Count + teamBPlayers.Count <= 1 && teamABots.Count + teamBBots.Count > 0)
						{
							if (FollowCamera == false)
							{
								cameraMouseLook.AssignTarget(FollowCamAll[WFollowCam].GetComponent<PlayerNetwork>().CameraFollow.transform);
								FollowCamera = true;
							}
							//welcomeCameraTransform.position = FollowCamAll[WFollowCam].GetComponent<BotAi>().CameraFollow.transform.position;
							//welcomeCameraTransform.rotation = FollowCamAll[WFollowCam].GetComponent<BotAi>().CameraFollow.transform.rotation;
						}
						if (FollowCamAll.Count > 0 && teamAPlayers.Count + teamBPlayers.Count > 1)
						{
							if (FollowCamera == false)
							{
								cameraMouseLook.AssignTarget(FollowCamAll[WFollowCam].GetComponent<PlayerNetwork>().CameraFollow.transform);
								FollowCamera = true;
							}
							//welcomeCameraTransform.position = FollowCamAll[WFollowCam].GetComponent<PlayerNetwork>().CameraFollow.gameObject.transform.position; 
							//welcomeCameraTransform.rotation = FollowCamAll[WFollowCam].GetComponent<PlayerNetwork>().CameraFollow.gameObject.transform.rotation;
						}

					}
					else { WFollowCam = 0; return; }
				}
				else
				{
					welcomeCamera.transform.position = defaultCamPos;
					welcomeCamera.transform.rotation = defaultCamRot;
				}

			}


			if (GameSettings.WinTeam == "Counter" && meTeam == 1 && !CashOn)
			{
				if (teamANormalScore != 12 && teamBNormalScore != 12)
				{
					CashOn = true;
					scoreToAddTmp = "250";
					totalCash -= 250;
					currentAddingCashColor = addingColor;
					currentTotalCashColor = addingColor;
					audioSource.clip = cashRegisterSound;
					audioSource.Play();
					if (!addingKillCash && scoreToAddTmp != "")
					{
						StartCoroutine(AddKIllCashCoroutine());
					}
				}
			}

			if (GameSettings.WinTeam == "Terorist" && meTeam == 2 && !CashOn)
			{
				if (teamANormalScore != 12 && teamBNormalScore != 12)
				{
					CashOn = true;
					scoreToAddTmp = "250";
					totalCash -= 250;
					currentAddingCashColor = addingColor;
					currentTotalCashColor = addingColor;
					audioSource.clip = cashRegisterSound;
					audioSource.Play();
					if (!addingKillCash && scoreToAddTmp != "")
					{
						StartCoroutine(AddKIllCashCoroutine());
					}
				}
			}

		}


	}

	IEnumerator CashZero()
	{
		yield return new WaitForSeconds(2);
		totalCash = 0;
		totalCash = GameSettings.cnst - PlayerPrefs.GetInt(startMoneyPrefsName);
	}

	IEnumerator Restart(int Who, float delay)
	{
		Debug.Log("h5");
		//     GameObject C4Box4 = GameObject.Find("C4Box1(Clone)");
		//     if (C4Box4 != null)
		//     {
		//DestroyImmediate(C4Box4);
		//     }
		RefreshPlayerList();
		spawnA.Clear();
		spawnB.Clear();

		for (int x = 0; x < teamANormalPoints.Count; x++)
		{
			//if (teamANormalPoints[x] == null || teamAPlayers == null)
			//{
			//	continue;

			//}
			spawnA.Add(teamANormalPoints[x]);
		
		}

		for (int x = 0; x < teamBNormalPoints.Count; x++)
		{
			//if (teamBNormalPoints[x] == null || teamAPlayers == null)
			//{
			//	continue;

			//}
			spawnB.Add(teamBNormalPoints[x]);

		
		}
		yield return new WaitForSeconds(delay);
		Hashtable setRoomProperties = new Hashtable();
		int currentTeamScore = 0;
		scoreToAddTmp = "";
		if (Who == 1)
		{
			currentTeamScore = PhotonNetwork.room.CustomProperties["TeamANormalScore"] != null ? (int)PhotonNetwork.room.CustomProperties["TeamANormalScore"] + 1 : 1;
			setRoomProperties.Add("TeamANormalScore", currentTeamScore);
			if (setRoomProperties.Count > 0)
			{
				PhotonNetwork.room.SetCustomProperties(setRoomProperties);
			}
			if (ourPlayer)
			{
				ourPlayer.WonCounter();
			}
		}
		if (Who == 2)
		{
			currentTeamScore = PhotonNetwork.room.CustomProperties["TeamBNormalScore"] != null ? (int)PhotonNetwork.room.CustomProperties["TeamBNormalScore"] + 1 : 1;
			setRoomProperties.Add("TeamBNormalScore", currentTeamScore);
			if (setRoomProperties.Count > 0)
			{
				PhotonNetwork.room.SetCustomProperties(setRoomProperties);
			}
			if (ourPlayer)
			{
				ourPlayer.WonTeror();
			}
	

		}
		//if (Who != 1 || Who != 2)
		//{
		//	//currentTeamScore = PhotonNetwork.room.CustomProperties["TeamBNormalScore"] != null ? (int)PhotonNetwork.room.CustomProperties["TeamBNormalScore"] + 1 : 1;
		//	//setRoomProperties.Add("TeamBNormalScore", currentTeamScore);
		//	if (setRoomProperties.Count > 0)
		//	{
		//		PhotonNetwork.room.SetCustomProperties(setRoomProperties);
		//	}
		//	if (ourPlayer)
		//	{
		//		ourPlayer.WonTeror();
		//	}


		//}
		ResetGameStatus(Who, null);


		yield return new WaitForSeconds(11.5f);
		if (teamBPlayers.Count > 0)
		{
			int rnd = Random.Range(0, teamBPlayers.Count);
			GameSettings.C4Who = teamBPlayers[rnd].NickName;
		}
		else
		{
			GameSettings.C4Who = "";
		}
		C4WHO = GameSettings.C4Who;
		setRoomProperties.Add("C4Who", C4WHO);
		setRoomProperties.Add("GameStatus", 0);
		PhotonNetwork.room.SetCustomProperties(setRoomProperties);
		GameSettings.randomA = new int[] { 0, 0, 0, 0, 0, 0, 0, 0 };
		GameSettings.randomB = new int[] { 0, 0, 0, 0, 0, 0, 0, 0 };


	}

	//SPAWN PLAYER CONTROLLER ###############################################################################################################################################
	public void PrepareRespawn(int team, bool wasSwitched, bool ResetOn)
	{
		Debug.Log("h4");
		//playerKilled = true;
		if (!wasSwitched)
		{
			ZeroStrikeX.clip = KillNormalDie;
			ZeroStrikeX.Play();
		}

		if (wasSwitched)
		{
			showScoreBoard = false;
			showBuyMenu = false;
			showOptions = false;
		}
        else
        {
            //Reset weapons if we got killed
            bm.ResetSelectedWeapons();
        }

		Renderer[] enemySMRs = null;
		
        if (team < 0)
		{
			if (currentGameMode != "NORMAL")
			{
				team = Mathf.Abs(team);
				Transform targetTmp = null;

				//print ("Killer ID: " + team.ToString());

				//Clear empty slots
				for (int i = otherPlayers.Count - 1; i >= 0; i--)
				{
					if (otherPlayers[i] == null)
					{
						otherPlayers.RemoveAt(i);
					}
					else
					{
						if (otherPlayers[i].playerID == team)
						{
							targetTmp = otherPlayers[i].playerAudio.transform;
							//print ("Target player ID: " + otherPlayers[i].playerID.ToString());
							enemySMRs = otherPlayers[i].GetComponentsInChildren<Renderer>(true);
						}
					}
				}

				if (ourPlayer)
				{
					welcomeCameraTransform.position = ourPlayer.thisT.position;
					if (targetTmp == null)
					{
						targetTmp = ourPlayer.playerAudio.transform;
					}
				}

				welcomeCamera.gameObject.SetActive(true);
				
				cameraMouseLook.AssignTarget(targetTmp, enemySMRs);




			}
			else
			{
				welcomeCamera.gameObject.SetActive(true);
			}
		}
		else
		{
			meTeam = team;
			if (ourPlayer)
			{
				PhotonNetwork.Destroy(ourPlayer.gameObject);
			}

			welcomeCamera.transform.position = defaultCamPos;
			welcomeCamera.transform.rotation = defaultCamRot;
			welcomeCamera.gameObject.SetActive(true);

			Hashtable setPlayerProperties = new Hashtable();
			setPlayerProperties.Add("Team", team); //0 = Spectators, 1 = teamA, 2 = teamB
			PhotonNetwork.player.SetCustomProperties(setPlayerProperties);

			if (currentGameMode == "NORMAL")
			{
				if (!ResetOn)
				{

					setPlayerProperties.Add("PlayerHP", (int)-1);
					PhotonNetwork.player.SetCustomProperties(setPlayerProperties);
					howPlayer = teamAPlayers.Count + teamBPlayers.Count;
					Hashtable setRoomProperties = new Hashtable();
					setRoomProperties.Add("HowPlayer", howPlayer);
					PhotonNetwork.room.SetCustomProperties(setRoomProperties);
					StartFollow = true;
				}
			}

		}

		if (currentGameStatus == 0 && currentGameMode != "NORMAL")
		{
			this.StopCoroutine("PrepareRespawnCoroutine");
			this.StartCoroutine("PrepareRespawnCoroutine");
		}

		if (currentGameStatus == 0 && currentGameMode == "NORMAL" && teamAPlayers.Count + teamBPlayers.Count < 2)
		{
		
			this.StopCoroutine("PrepareRespawnCoroutine");
			this.StartCoroutine("PrepareRespawnCoroutine");
		}

		//if (currentGameStatus == 0 && currentGameMode == "NORMAL" && teamABots.Count + teamBBots.Count <= 0)
		//{
		//	this.StopCoroutine("PrepareRespawnCoroutine");
		//	this.StartCoroutine("PrepareRespawnCoroutine");
		//}

		if (wasSwitched)
		{
			JoinedTeam(team);
		}

	}

	IEnumerator PrepareRespawnCoroutine()
	{
		RefreshPlayerList();

		Debug.Log("h3");

		currentRespawnTime = waitBeforeRespawn;
		while (currentRespawnTime > 1)
		{
			currentRespawnTime--;
			yield return new WaitForSeconds(1);
		}

		if (!offlineMode)
		{
			SpawnPlayer((int)PhotonNetwork.player.CustomProperties["Team"]);
		}
		//yield break;
	}

	IEnumerator SpawnDelay()
	{
		if (ourPlayer)
		{
			PhotonNetwork.Destroy(ourPlayer.gameObject);
		}
		float ABw = Random.Range(0.0f, 1f);
		yield return new WaitForSeconds(ABw);
		yield break;
	}

	public void SpawnPlayer(int team)
	{
		if (ourPlayer)
		{
			PhotonNetwork.Destroy(ourPlayer.gameObject);
		}
		SoundBas = 0;
		if (currentGameMode == "NORMAL")
		{
            GameObject C4w = GameObject.Find("C4n(Clone)");
            if (C4w != null)
            {
                Destroy(C4w);
                GameSettings.C4on = false;
			
			}
			//AdmobAds.singleton.ShowInterstitialAd();
			//GameObject C4BOXS = GameObject.Find("C4Box(Clone)");
			//if (C4BOXS != null)
			//{
			//    Destroy(C4BOXS);
			//}

			GameObject C4BOXS = GameObject.Find("C4Box(Clone)");
			if (C4BOXS != null)
			{
				Destroy(C4BOXS);
			}





			StartFollow = false;
			FollowCamera = false;
			C4Tag = false;
			C4XTag = false;
			DiffuseTag = false;
			DiffuseCreateUI = false;
			GameSettings.C4CreateUI = false;
			GameSettings.mobileFiring = false;
			GameSettings.mobileCrounch = false;
			GameSettings.C4on = false;
			GameSettings.Diffuse = false;
			GameSettings.C4idle = false;
			GameSettings.MoveOn = true;
			GameSettings.AnimOn = false;
			GameSettings.TimeOff = false;
			GameSettings.C4Diffuse = false;
			GameSettings.WinTeam = "";
			CashOn = false;
			ru.C4Create = 0f;
			ru.DiffuseCreate = 0;

		}

		if (team == 1 || team == 2)
		{

			Transform spawnPontTmp = null;

			if (currentGameMode == "TDM")
			{
				if (ourPlayer)
				{
					PhotonNetwork.Destroy(ourPlayer.gameObject);
				}
				spawnPontTmp = team == 1 ? teamASpawnPoints[Random.Range(0, teamASpawnPoints.Count - 1)] : teamBSpawnPoints[Random.Range(0, teamBSpawnPoints.Count - 1)];
			}

			//if (currentGameMode == "NORMAL")
			//{
			//	if (team == 1)
			//	{
			//		RefreshPlayerList();
			//		spawnPontTmp = teamANormalPoints[Random.Range(0, teamANormalPoints.Count - 1)];
			//		StartCoroutine("SpawnDelay");
			//	}
			//	if (team == 2)
			//	{
			//		RefreshPlayerList();
			//		spawnPontTmp = teamBNormalPoints[Random.Range(0, teamBNormalPoints.Count - 1)];
			//		StartCoroutine("SpawnDelay");
			//	}

			//}

		

			if (currentGameMode == "NORMAL")
			{
				if (team == 1)
				{
					RefreshPlayerList();
					spawnPontTmp = teamANormalPoints[Random.Range(0, teamANormalPoints.Count - 1)];
					StartCoroutine("SpawnDelay");
				}
				if (team == 2)
				{
					RefreshPlayerList();
					spawnPontTmp = teamBNormalPoints[Random.Range(0, teamBNormalPoints.Count - 1)];
					StartCoroutine("SpawnDelay");
				}

			}


			if (currentGameMode == "FFA")
			{
				if (ourPlayer)
				{
					PhotonNetwork.Destroy(ourPlayer.gameObject);
				}
				//For FFA mode with use every available spawn point
				int rndTmp = Mathf.Abs(Random.Range(-(teamASpawnPoints.Count - 1 + teamBSpawnPoints.Count - 1), teamASpawnPoints.Count - 1 + teamBSpawnPoints.Count - 1));
				if (rndTmp < teamASpawnPoints.Count)
				{
					spawnPontTmp = teamASpawnPoints[rndTmp];
				}
				else
				{
					spawnPontTmp = teamBSpawnPoints[rndTmp - teamASpawnPoints.Count];
				}
			}

			if (!offlineMode)
			{
				GameObject ourPlayerTmp = PhotonNetwork.Instantiate(playerPrefab.name, spawnPontTmp.position, spawnPontTmp.rotation, 0);
				ourPlayer = ourPlayerTmp.GetComponent<PlayerNetwork>();
			}
			else 
			{
				GameObject ourPlayerTmp = Instantiate(playerPrefab, spawnPontTmp.position, spawnPontTmp.rotation);
				ourPlayer = ourPlayerTmp.GetComponent<PlayerNetwork>();
			}
			
			
            bm.lastSelectedWeapon = 1;

            welcomeCamera.gameObject.SetActive(false);

			this.StopCoroutine("PurchaseTimer");
			this.StartCoroutine("PurchaseTimer");

			this.StopCoroutine("ShieldTimer");
			this.StartCoroutine("ShieldTimer");
			GameSettings.MoveOn = false;

		}
		else
		{
			welcomeCameraTransform.position = defaultCamPos;
			welcomeCameraTransform.rotation = defaultCamRot;
			welcomeCamera.gameObject.SetActive(true);
			cameraMouseLook.AssignTarget(null);
			team = 0;
		}

		if (PhotonNetwork.player.CustomProperties["Team"] == null || (int)PhotonNetwork.player.CustomProperties["Team"] != team)
		{
			Hashtable setPlayerProperties = new Hashtable();
			setPlayerProperties.Add("Team", team); //0 = Spectators, 1 = teamA, 2 = teamB
			PhotonNetwork.player.SetCustomProperties(setPlayerProperties);
		}

		FollowCamAll.Clear();
		//if (teamABots.Count > 0 && (teamAPlayers.Count + teamBPlayers.Count) < 2 && otherPlayers.Count == 0)
		//{
		//	for (int x = 0; x < teamABots.Count; x++)
		//	{
		//		int ARandom = Random.Range(0, spawnA.Count);
		//		teamABots[x].GetComponent<BotAi>().RestartBot();
		//		teamABots[x].gameObject.transform.position = spawnA[ARandom].position;
		//		teamABots[x].gameObject.transform.rotation = spawnA[ARandom].rotation;
		//		spawnA.RemoveAt(ARandom);
		//		FollowCamAll.Add(teamABots[x].gameObject);
		//	}
		//}

		//if (teamBBots.Count > 0 && (teamAPlayers.Count + teamBPlayers.Count) < 2 && otherPlayers.Count == 0)
		//{
		//	for (int x = 0; x < teamBBots.Count; x++)
		//	{
		//		int BRandom = Random.Range(0, spawnB.Count);
		//		teamBBots[x].GetComponent<BotAi>().RestartBot();
		//		teamBBots[x].gameObject.transform.position = spawnB[BRandom].position;
		//		teamBBots[x].gameObject.transform.rotation = spawnB[BRandom].rotation;
		//		spawnB.RemoveAt(BRandom);
		//		FollowCamAll.Add(teamBBots[x].gameObject);
		//	}
		//}

		currentRespawnTime = -1;

	}

	//public void SpawnBot(Transform points, int team)
	//{
	//	if (team == 1)
	//	{
	//		GameObject botAi1 = PhotonNetwork.Instantiate(botAi.name, points.position, points.rotation, 0);
	//		botAi1.GetComponent<BotAi>().isMine = true;
	//		botAi1.GetComponent<BotAi>().team = 1;
	//		teamABots.Add(botAi1);
	//	}
	//	if (team == 2)
	//	{
	//		GameObject botAiTr1 = PhotonNetwork.Instantiate(botAiTr.name, points.position, points.rotation, 0);
	//		botAiTr1.GetComponent<BotAi>().isMine = true;
	//		botAiTr1.GetComponent<BotAi>().team = 2;
	//		teamBBots.Add(botAiTr1);
	//	}
	//}

	IEnumerator PurchaseTimer()
	{
		//Allow some time (in seconds) to allow newly spawned player purchase weapon)
		timeToPurchase = 15;

		while (timeToPurchase > 0)
		{
			timeToPurchase--;
			yield return new WaitForSeconds(1);
		}

		//Turn off buy menu on purchase time over
		if (offlineMode) 
		{
			bm.enabled = false;
		}
	}

	IEnumerator ShieldTimer()
	{
		//Allow some time (in seconds) to allow newly spawned player purchase weapon)
		timeToShield = 6;

		while (timeToShield > 0)
		{
			timeToShield--;
			yield return new WaitForSeconds(1);
		}
	}
	//SPAWN PLAYER CONTROLLE REND ############################################################################################################################################

	//PHOTON NETWORK CALLBACKS ############################################################################################################################################
	void OnLeftRoom()
	{
		RefreshPlayerList();
		//Back to MainMenu scene
		SceneManager.LoadScene(1);
	}



	void OnPhotonPlayerPropertiesChanged(/*object[] playerAndUpdatedProps*/)
	{
		//PhotonPlayer player = playerAndUpdatedProps[0] as PhotonPlayer;
		//Hashtable props = playerAndUpdatedProps[1] as Hashtable;

		RefreshPlayerList();

		if (PhotonNetwork.player.CustomProperties["PlayerHP"] != null)
		{
			currentHP = (int)PhotonNetwork.player.CustomProperties["PlayerHP"];
		}

		//print ("Round is already at: " + ((float)PhotonNetwork.time - referenceTime).ToString() + " seconds");

		if (currentGameMode == "FFA" && PhotonNetwork.isMasterClient && currentGameStatus == 0 && !offlineMode)
		{
			if (teamAPlayers.Count > 0 && (float)PhotonNetwork.time - referenceTime > 15)
			{
				if ((int)teamAPlayers[0].CustomProperties["Kills"] >= currentKillLimit)
				{
					int tmpGameState = 3;
					ResetGameStatus(tmpGameState, teamAPlayers[0]);
				}
			}
		}
	}

	void OnPhotonPlayerConnected(PhotonPlayer newPlayer)
	{
		//Display notification that player connected
		PostActivityRemote("", newPlayer.NickName + xml.button65, "", 0, 0);
	}

	void OnPhotonPlayerDisconnected(PhotonPlayer otherPlayer)
	{
		RefreshPlayerList();

		//Display notification that player disconnected
		PostActivityRemote("", otherPlayer.NickName + xml.button66, "", 0, 0);
	
	}

	void OnPhotonCustomRoomPropertiesChanged(/*ExitGames.Client.Photon.Hashtable propertiesThatChanged*/)
	{
		GetTeamScores();
		referenceTime = (float)PhotonNetwork.room.CustomProperties["ReferenceTime"];
		currentGameStatus = (int)PhotonNetwork.room.CustomProperties["GameStatus"];
		currentGameMode = (string)PhotonNetwork.room.CustomProperties["GameMode"];
		if (currentGameMode == "NORMAL")
		{
			C4WHO = (string)PhotonNetwork.room.CustomProperties["C4Who"];
			howPlayer = (int)PhotonNetwork.room.CustomProperties["HowPlayer"];
			GameSettings.C4Who = C4WHO;
		}

		if (currentGameMode == "NORMAL")
		{
			if (PhotonNetwork.isMasterClient)
			{
				if (teamAPlayers.Count > 0 && teamBPlayers.Count > 0 && currentGameMode == "NORMAL" && GameSettings.WinTeam != "Terorist" && GameSettings.WinTeam != "Counter" && !GameSettings.TimeOff)
				{
					if (teamANormalScore != 0 || teamBNormalScore != 0 || currentRoundTime <= 233.0f)
					{

						int deadT = 0;
						int deadC = 0;
						int tmpGameState = 0;
						for (int i = 0; i < teamAPlayers.Count; i++)
						{
							if (teamAPlayers[i].CustomProperties["PlayerHP"] == null || (int)teamAPlayers[i].CustomProperties["PlayerHP"] <= 0)
							{
								deadC++;
							}
						}
						for (int i = 0; i < teamBPlayers.Count; i++)
						{
							if (teamBPlayers[i].CustomProperties["PlayerHP"] == null || (int)teamBPlayers[i].CustomProperties["PlayerHP"] <= 0)
							{
								deadT++;
							}
						}
						if (deadC == teamAPlayers.Count && deadT != teamBPlayers.Count)
						{
							if (GameSettings.C4on)
							{
								GameObject C4 = GameObject.Find("C4n(Clone)");
								if (C4 != null)
								{
									Destroy(C4);
									GameSettings.C4on = false;
								}
							}
							GameSettings.TimeOff = true;
							tmpGameState = 2;
							roundTimeString = "";
							StartCoroutine(Restart(tmpGameState, 3f));
						}
						else if (deadC != teamAPlayers.Count && deadT == teamBPlayers.Count && !GameSettings.C4on)
						{
							GameSettings.TimeOff = true;
							tmpGameState = 1;
							roundTimeString = "";
							StartCoroutine(Restart(tmpGameState, 3f));
						}
						else if (deadC != teamAPlayers.Count && deadT == teamBPlayers.Count && GameSettings.C4on)
						{
							if (!GameSettings.C4on)
							{
								GameSettings.TimeOff = true;
								tmpGameState = 1;
								roundTimeString = "";
								StartCoroutine(Restart(tmpGameState, 3f));
							}
						}

						else if (deadC == teamAPlayers.Count && deadT == teamBPlayers.Count)
						{
							GameSettings.TimeOff = true;
							tmpGameState = 0;
							roundTimeString = "";
							StartCoroutine(Restart(tmpGameState, 3f));
						}



						else if (teamAPlayers.Count + teamBPlayers.Count == 2 && (teamAPlayers[0].CustomProperties["PlayerHP"] == null || ((int)this.teamAPlayers[0].CustomProperties["PlayerHP"] < 1 && teamBPlayers[0].CustomProperties["PlayerHP"] == null) || (int)teamBPlayers[0].CustomProperties["PlayerHP"] < 1))
						{
							GameSettings.TimeOff = true;
							 int who = 0;
							roundTimeString = "";
							base.StartCoroutine(Restart(tmpGameState, 3f));
                        }
                      

				}

				}
			}
		}


		//Used only for FFA mode
		if (PhotonNetwork.room.CustomProperties["KillLimit"] != null)
		{
			currentKillLimit = (int)PhotonNetwork.room.CustomProperties["KillLimit"];
		}

		if (PhotonNetwork.room.CustomProperties["WinningPlayer"] != null)
		{
			winningPlayer = (PhotonPlayer)PhotonNetwork.room.CustomProperties["WinningPlayer"];
		}
		else
		{
			winningPlayer = null;
		}

		if (currentGameStatus == 1 || currentGameStatus == 2 || currentGameStatus == 3 && currentGameMode != "NORMAL")
		{
			//Round ended
			this.StopCoroutine("PrepareRespawnCoroutine");

			if (previousGameStatus != currentGameStatus)
			{
				/*if(ourPlayer)
                {
					PhotonNetwork.Destroy(ourPlayer.gameObject);
				}

				if (FollowCamAll.Count > 0) 
				{ 
				}
				else
				{
					welcomeCamera.transform.position = defaultCamPos;
					welcomeCamera.transform.rotation = defaultCamRot;
					welcomeCamera.gameObject.SetActive(true);
				}*/

				showScoreBoard = false;

				if (winningPlayer != null && winningPlayer == PhotonNetwork.player)
				{
					//Wee won, add award
					StartCoroutine(AddCashDelayed());
				}

				previousGameStatus = currentGameStatus;
			}
		}

		//Round was restarted, reset Kills/Deaths and Spawn our player if needed
		if (currentGameStatus == 0 && previousGameStatus != 0 && currentGameMode != "NORMAL")
		{
			if (PhotonNetwork.isMasterClient)
			{
				//Reset kills and deaths for every player
				StopCoroutine("ResetPlayersKillsDeaths");
				StartCoroutine("ResetPlayersKillsDeaths");
			}

			//Recheck our team
			if (PhotonNetwork.player.CustomProperties["Team"] != null)
			{
				ourTeam = (int)PhotonNetwork.player.CustomProperties["Team"];
				GameSettings.ourTeam = ourTeam;
			}

			if (ourTeam == 1 || ourTeam == 2)
			{
				SpawnPlayer(ourTeam);
			}

			previousGameStatus = 0;

		}

		if (currentGameStatus == 1 || currentGameStatus == 2 && currentGameMode == "NORMAL")
		{
			previousGameStatus = currentGameStatus;
		}

		if (currentGameStatus == 0 && currentGameStatus != 1 && currentGameStatus != 2 && previousGameStatus > 0 && currentGameMode == "NORMAL")
		{

			if (teamANormalScore >= 12 || teamBNormalScore >= 12)
			{
				Hashtable setRoomProperties = new Hashtable();
				setRoomProperties.Add("TeamANormalScore", (int)0);
				setRoomProperties.Add("TeamBNormalScore", (int)0);
				setRoomProperties.Add("TeamAScore", (int)0);
				setRoomProperties.Add("TeamBScore", (int)0);
				if (teamBPlayers.Count > 0)
				{
					int rnd = Random.Range(0, teamBPlayers.Count);
					GameSettings.C4Who = teamBPlayers[rnd].NickName;
				}
				else
				{
					GameSettings.C4Who = "";
				}
				C4WHO = GameSettings.C4Who;
				setRoomProperties.Add("C4Who", C4WHO);
				PhotonNetwork.room.SetCustomProperties(setRoomProperties);
				if (PhotonNetwork.isMasterClient)
				{
					//Reset kills and deaths for every player
					StopCoroutine("ResetPlayersKillsDeaths");
					StartCoroutine("ResetPlayersKillsDeaths");
				}
			}
			//Recheck our team
			if (PhotonNetwork.player.CustomProperties["Team"] != null)
			{
				ourTeam = (int)PhotonNetwork.player.CustomProperties["Team"];
				GameSettings.ourTeam = ourTeam;
			}

			if (ourTeam == 1 || ourTeam == 2)
			{
				SpawnPlayer(ourTeam);
			}
			previousGameStatus = 0;
		}

	}

	IEnumerator ResetPlayersKillsDeaths()
	{
		while (PhotonNetwork.playerList.Length == 0)
		{
			yield return null;
		}

		PhotonPlayer[] playersTmp = PhotonNetwork.playerList;

		Hashtable setPlayerProperties = new Hashtable();
		setPlayerProperties.Add("Kills", (int)0);
		setPlayerProperties.Add("Deaths", (int)0);

		for (int i = 0; i < playersTmp.Length; i++)
		{
			playersTmp[i].SetCustomProperties(setPlayerProperties);
		}

		//for (int a = 0; a < teamABots.Count; a++)
		//{
		//	teamABots[a].GetComponent<BotAi>().KillAll = 0;
		//	teamABots[a].GetComponent<BotAi>().DieAll = 0;
		//}

		//for (int b = 0; b < teamBBots.Count; b++)
		//{
		//	teamBBots[b].GetComponent<BotAi>().KillAll = 0;
		//	teamBBots[b].GetComponent<BotAi>().DieAll = 0;
		//}
	}

	IEnumerator AddCashDelayed()
	{
		yield return new WaitForSeconds(0.35f);
		AddKillCash(-1);
	}

	//PHOTON NETWORK CALLBACKS END ########################################################################################################################################

	//ROOM ACTIVITY REPORTS ################################################################################################################################################
	void JoinedTeam(int team)
	{
		//team = 0 - spectators, 1 - team A, 2 - team B
		string joinedTeam = "Spectators";
		int colorRef = 0;

		if (team == 1 || team == 2)
		{
			joinedTeam = team == 1 ? GameSettings.teamAName : GameSettings.teamBName;
			colorRef = team;		
			

		}
		photonView.RPC("PostActivityRemote", PhotonTargets.All, "", PhotonNetwork.playerName + xml.button73, joinedTeam, 0, colorRef);

	}

	public void ReportKill(string killedName, string weaponName, int killedTeam)
	{
		photonView.RPC("PostActivityRemoteWeapons", PhotonTargets.All, PhotonNetwork.playerName, weaponName, killedName, ourTeam, killedTeam);
	}

	[PunRPC]
	public void PostActivityRemote(string leftText, string middleText, string rightText, int leftColorRef, int rightColorRef)
	{
		Color leftColorTmp = GameSettings.HUDColor;
		Color rightColorTmp = GameSettings.HUDColor;

		if (leftColorRef == 1 || leftColorRef == 2)
		{
			leftColorTmp = leftColorRef == 1 ? GameSettings.teamAColor : GameSettings.teamBColor;
		}

		if (rightColorRef == 1 || rightColorRef == 2)
		{
			rightColorTmp = rightColorRef == 1 ? GameSettings.teamAColor : GameSettings.teamBColor;
		}

		actionReports.Add(new ActionReport(leftText, middleText, rightText, leftColorTmp, rightColorTmp, 15));

		if (actionReports.Count > GameSettings.actionReportsLimit)
		{
			actionReports.RemoveAt(0);
		}

		GameSettings.updateActionReports = true;
	}

	[PunRPC]
	public void PostActivityRemoteWeapons(string leftText, string middleText, string rightText, int leftColorRef, int rightColorRef)
	{
		Color leftColorTmp = GameSettings.HUDColor;
		Color rightColorTmp = GameSettings.HUDColor;

		if (leftColorRef == 1 || leftColorRef == 2)
		{
			leftColorTmp = leftColorRef == 1 ? GameSettings.teamAColor : GameSettings.teamBColor;
		}

		if (rightColorRef == 1 || rightColorRef == 2)
		{
			rightColorTmp = rightColorRef == 1 ? GameSettings.teamAColor : GameSettings.teamBColor;
		}

		actionWeaponsReports.Add(new ActionReport(leftText, middleText, rightText, leftColorTmp, rightColorTmp, 15));

		if (actionWeaponsReports.Count > GameSettings.actionWeaponReportsLimit)
		{
			actionWeaponsReports.RemoveAt(0);
		}

		GameSettings.updateWeaponActionReports = true;
	}
	//ROOM ACTIVITY REPORTS END ############################################################################################################################################

	//Player HUD controllers
	public void DoHitDetector(int direction)
	{

		if (direction > 0 && direction < 5)
		{
			if (direction == 1)
			{
				hitTopFade = 1;
			}
			if (direction == 2)
			{
				hitBottomFade = 1;
			}
			if (direction == 3)
			{
				hitLeftFade = 1;
			}
			if (direction == 4)
			{
				hitRightFade = 1;
			}
		}
		else
		{
			hitTopFade = 1;
			hitBottomFade = 1;
			hitLeftFade = 1;
			hitRightFade = 1;
		}

		redScreenFade = 1;

		if (!doingHitDetector)
		{
			StartCoroutine(DoHitDetectorCoroutine());
		}
	}

	IEnumerator DoHitDetectorCoroutine()
	{
		doingHitDetector = true;

		while (redScreenFade > 0.01f)
		{
			redScreenFade = Mathf.Lerp(redScreenFade, 0, Time.deltaTime * 5);
			hitTopFade = Mathf.Lerp(hitTopFade, 0, Time.deltaTime * 5);
			hitBottomFade = Mathf.Lerp(hitBottomFade, 0, Time.deltaTime * 5);
			hitLeftFade = Mathf.Lerp(hitLeftFade, 0, Time.deltaTime * 5);
			hitRightFade = Mathf.Lerp(hitRightFade, 0, Time.deltaTime * 5);

			yield return null;
		}

		doingHitDetector = false;
		redScreenFade = 0;
		hitTopFade = 0;
		hitBottomFade = 0;
		hitLeftFade = 0;
		hitRightFade = 0;
	}

	public void AddKillCash(int bodyPart)
	{
		if (bodyPart < -1)
			return;

		//bodyPart 0 = head. 1 = torso, 2 = limbs
		scoreToAddTmp = "";
		KilledAddTmp = "";

		if (bodyPart == -1)
		{
			//Add winning award cash, used for FFA (Free For All) mode
			scoreToAddTmp = "500";
			totalCash -= 500;
		}
		else
		{
			if (bodyPart == 0)
			{
				if (ourPlayer.KillSay == 2)
				{
					ZeroStrikeX.Stop();
					ZeroStrikeX.clip = DoubleKill;
					ZeroStrikeX.Play();
					KilledAddTmp = "DoubleKill";
				}
				else if (ourPlayer.KillSay == 3)
				{
					ZeroStrikeX.Stop();
					ZeroStrikeX.clip = Hattrick;
					ZeroStrikeX.Play();
					KilledAddTmp = "Hattrick";
				}
				else if (ourPlayer.KillSay == 4)
				{
					ZeroStrikeX.Stop();
					ZeroStrikeX.clip = Unstoppable;
					ZeroStrikeX.Play();
					KilledAddTmp = "Unstoppable";
				}
				else if (ourPlayer.KillSay == 5)
				{
					ZeroStrikeX.Stop();
					ZeroStrikeX.clip = MonsterKill;
					ZeroStrikeX.Play();
					KilledAddTmp = "MonsterKill";
				}
				else if (ourPlayer.KillSay == 6)
				{
					ZeroStrikeX.Stop();
					ZeroStrikeX.clip = MegaKill;
					ZeroStrikeX.Play();
					KilledAddTmp = "MegaKill";
				}
				else if (ourPlayer.KillSay == 7)
				{
					ZeroStrikeX.Stop();
					ZeroStrikeX.clip = UltraKill;
					ZeroStrikeX.Play();
					KilledAddTmp = "UltraKill";
				}
				else if (ourPlayer.KillSay >= 8)
				{
					ZeroStrikeX.Stop();
					ZeroStrikeX.clip = GodLike;
					ZeroStrikeX.Play();
					KilledAddTmp = "GodLike";
				}
				else
				{
					ZeroStrikeX.Stop();
					ZeroStrikeX.clip = headShot;
					ZeroStrikeX.Play();
					KilledAddTmp = "HeadShoot";
				}
				//Add cash for headshot
				scoreToAddTmp = "250";
				totalCash -= 250;
				ourPlayer.KillSay += 1;
			}
			else
			{
				if (ourPlayer.KillSay == 2)
				{
					ZeroStrikeX.Stop();
					ZeroStrikeX.clip = DoubleKill;
					ZeroStrikeX.Play();
					KilledAddTmp = "DoubleKill";
				}
				else if (ourPlayer.KillSay == 3)
				{
					ZeroStrikeX.Stop();
					ZeroStrikeX.clip = Hattrick;
					ZeroStrikeX.Play();
					KilledAddTmp = "Hattrick";
				}
				else if (ourPlayer.KillSay == 4)
				{
					ZeroStrikeX.Stop();
					ZeroStrikeX.clip = Unstoppable;
					ZeroStrikeX.Play();
					KilledAddTmp = "Unstoppable";
				}
				else if (ourPlayer.KillSay == 5)
				{
					ZeroStrikeX.Stop();
					ZeroStrikeX.clip = MonsterKill;
					ZeroStrikeX.Play();
					KilledAddTmp = "MonsterKill";
				}
				else if (ourPlayer.KillSay == 6)
				{
					ZeroStrikeX.Stop();
					ZeroStrikeX.clip = MegaKill;
					ZeroStrikeX.Play();
					KilledAddTmp = "MegaKill";
				}
				else if (ourPlayer.KillSay == 7)
				{
					ZeroStrikeX.Stop();
					ZeroStrikeX.clip = UltraKill;
					ZeroStrikeX.Play();
					KilledAddTmp = "UltraKill";
				}
				else if (ourPlayer.KillSay >= 8)
				{
					ZeroStrikeX.Stop();
					ZeroStrikeX.clip = GodLike;
					ZeroStrikeX.Play();
					KilledAddTmp = "GodLike";
				}
				else
				{
					ZeroStrikeX.Stop();
					ZeroStrikeX.clip = killingSpree;
					ZeroStrikeX.Play();
					KilledAddTmp = "KillingSpree";
				}
				//Add cash for normal kill
				scoreToAddTmp = "200";
				totalCash -= 200;
				ourPlayer.KillSay += 1;
				PlayerPrefs.SetInt(killsayPrefsName, PlayerPrefs.GetInt(killsayPrefsName) + 1);
				PlayerPrefs.SetInt(killsayScorePrefsName, PlayerPrefs.GetInt(killsayScorePrefsName) + 1);
			}
		}

		currentAddingCashColor = addingColor;
		currentTotalCashColor = addingColor;
		currentKilledColor = KillingSpreeColor;
		currentKilledOutColor = HeadShotOut;

		audioSource.clip = cashRegisterSound;
		audioSource.Play();

		if (!addingKillCash && scoreToAddTmp != "")
		{
			StartCoroutine(AddKIllCashCoroutine());
		}
	}

	public void SubstractCash(int type)
	{
		//Substract cash when refilling ammo or purchasing new Weapon. "type" variable used to detect whether it's secondary primay etc.
		scoreToAddTmp = "";

		if (type == -1)
		{
			//Substracting cash for refilling ammo
			if (GetCash() >= 100)
			{
				scoreToAddTmp = "100";
				totalCash += 100;
				//Play buy sound
				audioSource.Stop();
				audioSource.clip = buySound;
				audioSource.Play();
			}
		}
		else
		{
			if (bm.GetWeaponCost(type) > -1)
			{
				scoreToAddTmp = bm.GetWeaponCost(type).ToString();
				totalCash += bm.GetWeaponCost(type);

				audioSource.Stop();
				audioSource.clip = cashRegisterSound;
				audioSource.Play();
			}
		}

		currentAddingCashColor = substractingColor;
		currentTotalCashColor = substractingColor;

		if (!addingKillCash /*&& scoreToAddTmp != ""*/)
		{
			StartCoroutine(AddKIllCashCoroutine());
		}
	}

	public int GetCash()
	{
		return GameSettings.cnst - totalCash;
	}

	IEnumerator AddKIllCashCoroutine()
	{
		addingKillCash = true;

		addingColorFadeTo = new Color(currentAddingCashColor.r, currentAddingCashColor.g, currentAddingCashColor.b, 0);
		addingColorKillTo = new Color(currentKilledColor.r, currentKilledColor.g, currentKilledColor.b, 0);

		while (Mathf.Abs(((Vector4)GameSettings.HUDColor).magnitude - ((Vector4)currentTotalCashColor).magnitude) > 0.01f)
		{
			if (KilledAddTmp != "")
			{
				currentTotalCashColor = Color.Lerp(currentTotalCashColor, GameSettings.HUDColor, Time.deltaTime * 0.5f);
				currentAddingCashColor = Color.Lerp(currentAddingCashColor, addingColorFadeTo, Time.deltaTime * 0.5f);
				currentKilledColor = Color.Lerp(currentKilledColor, addingColorKillTo, Time.deltaTime * 0.5f);
			}
			else
			{
				currentTotalCashColor = Color.Lerp(currentTotalCashColor, GameSettings.HUDColor, Time.deltaTime * 0.5f);
				currentAddingCashColor = Color.Lerp(currentAddingCashColor, addingColorFadeTo, Time.deltaTime * 0.5f);
			}
			yield return null;
		}

		currentAddingCashColor = addingColorFadeTo;
		currentKilledColor = addingColorKillTo;
		currentTotalCashColor = GameSettings.HUDColor;
		addingKillCash = false;
	}
}
