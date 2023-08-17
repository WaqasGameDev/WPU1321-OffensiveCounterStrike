#pragma warning disable 0168 //Variable declared, but not used.
#pragma warning disable 0219 //Variable assigned, but not used.
#pragma warning disable 0414 //Private field assigned, but not used.
#pragma warning disable 0649 //Variable asisgned to, and will always have default value.
using UnityEngine;
using UnityEngine.UI;
using System.Collections;
//using Assets.SimpleAndroidNotifications;
using UnityEngine.SceneManagement;
using Hashtable = ExitGames.Client.Photon.Hashtable; //Replace default Hashtables with Photon hashtables
using System;
using Random = UnityEngine.Random;

public class ConnectMenu : Photon.MonoBehaviour
{

	//This is main menu where users will browse and create new rooms

	public enum CurrentWindow { Main, PlayNow, PlayNowMaybe, Options, Profile, Credits, PlayAfter, SearchNo, SearchNow, RoomNameW, RoomNameCheck, FindingRoomName, Information, None }
	[HideInInspector]
	public CurrentWindow currentWindow = CurrentWindow.Main;
	public Text NameNewVer, nameprofilepage;
	public GameObject profiletabname;
	public GameObject roomControllerPrefab;
	public GameObject GrenadeSpotPrefab;
	//public GameObject Minimap;
	public Sprite defaultMapPreview;
	public AudioClip ClickSong;
	public AudioClip Rewards;
	AudioSource thisAudioSource;
	public GameObject Plays;
	public GameObject RoomListPrefab;
	public Transform parentTransform;
	public GameObject[] MainMenus;
	//public Text RoomNames;
	//public Text PlayerLimit;
	public Image MapText;
	public Image MapText2;
	public Image MapMapImage;
	public Image offlineMapMapImage;
	public Text MapName;
	public Text offlineMapName;
	public Text MapName2;
	public Toggle PriToogle;
	public float Loadings;
	public Image LoadingBack;
	public GameObject LoadingMenu;
	public Text LoadinMapName;
	public Text LoadinModInfo;
	public InputField NameInput;
	bool loadingOn = false;
	public string profilename;

	public Image SelectImage;
	public Sprite SelectImageNull;
	public Text SelectRoomName;
	public string SelectMapName;
	public Text GameMode;
	public Text Mekills;
	public bool canPlayWithBots = false;

	[System.Serializable]
	public class AvailableMaps
	{
		public string mapName;
		public Sprite mapPreview;
		public Sprite mapMap;
	}

	public AvailableMaps[] availableMaps;

	Vector2 browseWindowSize = new Vector2(750, 425);
	Vector2 roomBrowserScroll = Vector2.zero;

	//Networking 
	CloudRegionCode selectedRegion = CloudRegionCode.eu; //Photon Cloud Region we will connect to
	int totalPlayers = 0;
	int totalRooms = 0;

#if UNITY_ANDROID || UNITY_IOS || UNITY_WP8 || UNITY_WP8_1
	//Network version for Mobile
	string networkVersion = "v2.7.7";
#else
    //Network version for Desktop
    string networkVersion = "v1.7.6";
#endif


	bool createRoom = false;
	string roomName = "";
	public InputField roomInputField;

	int[] playerLimits = { 2, 4, 6, 8, 10 };
	public Text playerLimitText;
	public Button LeftBtn;
	public Button RightBtn;

	//Available room creation settings
	//int[] playerLimits = { 12 };
	string[] gameModes = { "NORMAL", "TDM", "FFA" };
	string[] specRoom = { "CLOSE", "OPEN" };
	string[] languagesName = { "English", "Turkish", "Deutsch", "Russian", "French", "Swedish", "Arabic" };
	public string[] fromName = { "USA", "Turkey", "Germany", "Russia", "France", "Swedish", "Arabian", "European" };
	int[] roundDurations = { 240, 600, 900 }; //Each field must correspond to gameMode index, time in seconds
	int[] killLimits = { 30 };

	int selectedPlayerLimit = 0;
	int selectedGameMode = 0;
	int selectedSpecRoom = 0;
	int selectedLanguages = 0;
	public int selectedFrom = 0;
	public int selectedMap = 0;
	int selectedKillLimit = 0;
	int startMoney = 1600;

	bool loadingMap = false;
	bool refreshingRooms = false;
	int roomFieldCurrentlyHovering = -1;
	int selectedRoom = -1;
	int currentPing = -1;

	RoomInfo[] availableRooms = new RoomInfo[0];

	string playerName = "";
	public string tmpPlayerName;
	string tmpRoomName = "";
	public bool GameOnConnect = false;


	string playerNamePrefsName = "PlayerName";
	string playerNameJoinPrefsName = "JoinPlayerName";
	string playerLimitPrefsName = "SelectedPlayerLimit";
	string gameModePrefsName = "SelectedGameMode";
	string specRoomPrefsName = "SelectedSpecRoom";
	string languagesPrefsName = "SelectedLanguages";
	string fromPrefsName = "SelectedFrom";
	string selectedMapPrefsName = "SelectedMap";
	string startMoneyPrefsName = "StartMoney";

	string levelPrefsName = "Level";
	string killsayPrefsName = "KillSayLevel";
	string timePrefsName = "TimeAds";
	string killsayScorePrefsName = "KillSayScore";

	public Text leveltext;
	public Text leveltext2;
	public Text needKill;
	public Slider SliderLvl1;
	public Slider SliderLvl2;
	public GameObject Odul;
	public GameObject OdulAds;
	public Text TimeText;
	public Text TimeText1;
	public bool timeon;
	public GameObject FailButton;
	public GameObject FailButton2;
	public GameObject FailButton3;
	public GameObject FailButton4;
	public GameObject FailButton4CloseConnecting;
	public GameObject NewMainMenu;
	public GameObject ConnectedMenu;
	public Button ConnectionButtons;

	public GameObject TimeReward;
	public GameObject TimeRewardCase;
	public GameObject AdsReward;
	public GameObject AdsRewardCase;
	public GameObject Refreshing;
	public GameObject NoRooms;

	public GameObject NextMap;
	public GameObject BackMap;

	public int level;
	public int expKill;
	public int killSayLevel;
	public int killSayScore;
	public int TimeAds;

	DateTime startTime = DateTime.UtcNow;
	DateTime oldDate;
	// Use this for initialization
	public xmlReader xml;
	//public HighScore hg;
	public bool isFakeMode, isRoomCreator;
	int FakeGameMode = 0;
	public static ConnectMenu Instance { set; get; }

	public Image fadeImage;
	private bool İsInTransition;
	private float transition;
	private bool İsShowing;
	private float duration;

	[SerializeField] private GameObject[] OnlineButtons;

	private void Awake()
	{
		
		if (bl_LoginPro.isOffline)
		{
			foreach (var button in OnlineButtons)
			{
				button.gameObject.SetActive(false);
			}
		}

		Instance = this;
	}

	public void Fade(bool showing, float duration)
	{
		İsShowing = showing;
		İsInTransition = true;
		this.duration = duration;
		transition = (İsShowing) ? 0 : 1;
	}

	public void RoomListNull()
	{
		SelectImage.sprite = SelectImageNull;
		SelectRoomName.text = "";
		SelectMapName = "";
		GameMode.text = "";
	}

	void Start()
	{


		PlayerPrefs.SetInt("OfflineMode", 0);

		//NameInput.gameObject.SetActive(false);
		GameOnConnect = false;
		xml = GetComponent<xmlReader>();
		//Limit game Frames PEr Seconds
		DontDestroyOnLoad(gameObject);
		thisAudioSource = GetComponent<AudioSource>();
		selectedKillLimit = 0;
		loadingOn = false;
		//LoadingMenu.SetActive (false);
		if (GameSettings.errorText != "")
		{
			loadingMap = true;
		}

		PhotonNetwork.PhotonServerSettings.PreferredRegion = selectedRegion;

#if UNITY_ANDROID || UNITY_IOS || UNITY_WP8 || UNITY_WP8_1
		//Enable connection timeout on mobile
		PhotonNetwork.BackgroundTimeout = 10f;
#endif

		Cursor.lockState = CursorLockMode.None;
		Cursor.visible = true;

		roomName = "Room" + Random.Range(11111, 99999).ToString();
		roomInputField.text = roomName;
		//Load stored values if there any .


		if (bl_DataBase.IsUserLogged)
		{
			playerName = bl_DataBase.Instance.LocalUser.NickName;
			NameNewVer.text = playerName;
			nameprofilepage.text = playerName;
			NameInput.gameObject.SetActive(false);
			profiletabname.SetActive(true);

			//PlayerProfilePanel.SetActive(true);

		}


		else if (!bl_DataBase.IsUserLogged && !PlayerPrefs.HasKey(playerNamePrefsName))
		{
			profiletabname.SetActive(false);
			NameInput.gameObject.SetActive(true);



			playerName = "Gamer" + Random.Range(11111, 99999).ToString();
			PlayerPrefs.SetString(playerNamePrefsName, playerName);
			tmpPlayerName = playerName;
			selectedLanguages = xml.currentLanguage;
			NameNewVer.text = playerName;
			nameprofilepage.text = playerName;
			//if (PlayerPrefs.HasKey(playerNamePrefsName))
			//{
			//	profilename = PlayerPrefs.GetString(playerNamePrefsName);

			//}

		}
		else if (PlayerPrefs.HasKey(playerNamePrefsName))
		{

			NameInput.gameObject.SetActive(true);

			profiletabname.SetActive(false);

			//	profiletabname.SetActive(true);


			playerName = PlayerPrefs.GetString(playerNamePrefsName);
			//NameNewVer.text = profilename;

			//Debug.Log(playerName);
		}


		//else
		//{

		//playerName = "Gamer" + Random.Range(11111, 99999).ToString();
		//PlayerPrefs.SetString(playerNamePrefsName, playerName);
		//tmpPlayerName = playerName;
		//selectedLanguages = xml.currentLanguage;
		//}

		//if (PlayerPrefs.HasKey(playerNamePrefsName))
		//{
		//	playerName = PlayerPrefs.GetString(playerNamePrefsName);
		//}
		//else
		//{
		//	playerName = "Gamer" + Random.Range(11111, 99999).ToString();

		//	PlayerPrefs.SetString(playerNamePrefsName, playerName);
		//	tmpPlayerName = playerName;
		//	selectedLanguages = xml.currentLanguage;
		//}

		if (PlayerPrefs.HasKey(levelPrefsName))
		{
			level = PlayerPrefs.GetInt(levelPrefsName);
		}
		else
		{
			level = 0;
		}

		if (PlayerPrefs.HasKey(killsayPrefsName))
		{
			killSayLevel = PlayerPrefs.GetInt(killsayPrefsName);
		}
		else
		{
			killSayLevel = 0;
		}

		/*if (PlayerPrefs.HasKey(killsayScorePrefsName))
		{
			killSayScore = PlayerPrefs.GetInt(killsayScorePrefsName);
			hg.UpScore(playerName, killSayScore);
		}
		else
		{
			killSayScore = 0;
			hg.InScore(playerName, killSayScore);
		}*/




		expKill = ((level + 1) * 5) - (level + 1);

		if (killSayLevel >= expKill)
		{
			PlayerPrefs.SetInt(levelPrefsName, PlayerPrefs.GetInt(levelPrefsName) + 1);
			level = PlayerPrefs.GetInt(levelPrefsName);
			PlayerPrefs.SetInt(killsayPrefsName, 0);
			killSayLevel = PlayerPrefs.GetInt(killsayPrefsName);
			expKill = ((level + 1) * 5) - (level + 1);
			Odul.gameObject.SetActive(true);
			thisAudioSource.clip = Rewards;
			thisAudioSource.Play();
		}
		killSayScore = PlayerPrefs.GetInt(killsayScorePrefsName);
		Mekills.text = killSayScore.ToString();
		Debug.Log(expKill);
		Debug.Log(killSayLevel);

		leveltext.text = level.ToString();
		leveltext2.text = level.ToString();
		SliderLvl1.minValue = 0;
		SliderLvl1.maxValue = expKill;
		SliderLvl2.minValue = 0;
		SliderLvl2.maxValue = expKill;

		SliderLvl1.value = killSayLevel;
		SliderLvl2.value = killSayLevel;

		needKill.text = (expKill - killSayLevel).ToString();


		if (PlayerPrefs.HasKey(timePrefsName))
		{
			TimeAds = PlayerPrefs.GetInt(timePrefsName);
			timeon = false;
		}
		else
		{
			DateTime startTime = DateTime.UtcNow;
			oldDate = startTime.AddMinutes(10);
			PlayerPrefs.SetString(timePrefsName, oldDate.ToBinary().ToString());
			timeon = true;
		}



		if (!timeon)
		{
			long temp = Convert.ToInt64(PlayerPrefs.GetString(timePrefsName));
			DateTime oldDate = DateTime.FromBinary(temp);
			startTime = DateTime.UtcNow;
			if (oldDate > startTime)
			{
				timeon = true;
				print("oldDate: " + oldDate);
			}
			else
			{
				TimeReward.gameObject.SetActive(false);
				TimeRewardCase.gameObject.SetActive(false);
				//NotificationManager.SendWithAppIcon(TimeSpan.FromSeconds(1), "Offensive Strike", "Reward Ready Get it Now For Free +2", new Color(0, 0.6f, 1), NotificationIcon.Message);
				AdsReward.gameObject.SetActive(true);
				AdsRewardCase.gameObject.SetActive(true);
			}
			print("startTime: " + startTime);

		}

		Debug.Log(startTime);

		NameInput.text = playerName;
		profilename = playerName;
		PlayerPrefs.SetInt(startMoneyPrefsName, startMoney);

		selectedPlayerLimit = PlayerPrefs.HasKey(playerLimitPrefsName) ? PlayerPrefs.GetInt(playerLimitPrefsName) : (int)playerLimits.Length - 1;
		//selectedPlayerLimit = selectedPlayerLimit > -1 && selectedPlayerLimit < playerLimits.Length ? selectedPlayerLimit : (int)playerLimits.Length/2;

		selectedGameMode = PlayerPrefs.HasKey(gameModePrefsName) ? PlayerPrefs.GetInt(gameModePrefsName) : 0;
		selectedGameMode = selectedGameMode > -1 && selectedGameMode < gameModes.Length ? selectedGameMode : 0;

		selectedSpecRoom = PlayerPrefs.HasKey(specRoomPrefsName) ? PlayerPrefs.GetInt(specRoomPrefsName) : 0;
		selectedSpecRoom = selectedSpecRoom > -1 && selectedSpecRoom < specRoom.Length ? selectedSpecRoom : 0;

		selectedLanguages = PlayerPrefs.HasKey(languagesPrefsName) ? PlayerPrefs.GetInt(languagesPrefsName) : 0;
		selectedLanguages = selectedLanguages > -1 && selectedLanguages < languagesName.Length ? selectedLanguages : 0;

		selectedFrom = PlayerPrefs.HasKey(fromPrefsName) ? PlayerPrefs.GetInt(fromPrefsName) : 0;
		selectedFrom = selectedFrom > -1 && selectedFrom < fromName.Length ? selectedFrom : 0;

		selectedMap = PlayerPrefs.HasKey(selectedMapPrefsName) ? PlayerPrefs.GetInt(selectedMapPrefsName) : 0;
		selectedMap = selectedMap > -1 && selectedMap < availableMaps.Length ? selectedMap : 0;

#if (UNITY_ANDROID || UNITY_IOS || UNITY_WP8 || UNITY_WP8_1) && !UNITY_EDITOR
        //Limit screen resolution on Android
        int highestVal = 1000; //Width or height cant be more than this value
		if(Screen.width == Screen.height)
        {
			Screen.SetResolution(highestVal, highestVal, true);
		}
        else
        {
			if(Screen.width > Screen.height)
            {
				float aspectRatio = (float)Screen.height/(float)Screen.width;
				Screen.SetResolution(highestVal, (int)(highestVal *  aspectRatio), true);
			}
            else
            {
				float aspectRatio = (float)Screen.width/(float)Screen.height;
				Screen.SetResolution((int)(highestVal *  aspectRatio), highestVal, true);
			}
		}

		//Also limit framerate
		Application.targetFrameRate = 60;
#else
		Application.targetFrameRate = 150;
		//AudioListener.volume = 0.5f;

#endif

		selectedMap = 0;
		if (selectedMap == 1 && gameObject)
		{
			NextMap.gameObject.SetActive(false);
		}
		if (selectedMap == 0 && gameObject) { BackMap.gameObject.SetActive(false); }
		playerLimitText.text = playerLimits[selectedPlayerLimit].ToString();

	}

	public void NameChange()
	{
		playerName = NameInput.text;
		if (PlayerPrefs.GetString(playerNamePrefsName) == playerName)
		{

		}
		else
		{
			PlayerPrefs.SetString(playerNamePrefsName, playerName);
			PlayerPrefs.SetInt(killsayScorePrefsName, 0);
			killSayScore = PlayerPrefs.GetInt(killsayScorePrefsName);
			//hg.InScore(playerName, killSayScore);
		}

	}

	public void AddTime()
	{
		DateTime startTime = DateTime.UtcNow;
		oldDate = startTime.AddMinutes(10);
		PlayerPrefs.SetString(timePrefsName, oldDate.ToBinary().ToString());
		TimeReward.gameObject.SetActive(true);
		TimeRewardCase.gameObject.SetActive(true);
		AdsReward.gameObject.SetActive(false);
		AdsRewardCase.gameObject.SetActive(false);
		timeon = true;
	}

	// Update is called once per frame
	void Update()
	{
		if (GameMode.text == "")
		{
			ConnectionButtons.interactable = false;
		}
		else { ConnectionButtons.interactable = true; }

		if (timeon)
		{
			long temp = Convert.ToInt64(PlayerPrefs.GetString(timePrefsName));
			DateTime oldDate = DateTime.FromBinary(temp);
			TimeSpan timeRemaining = oldDate - DateTime.UtcNow;
			int minutes = timeRemaining.Minutes;
			int seconds = timeRemaining.Seconds;
			string niceTime = string.Format("{0:00}:{1:00}", minutes, seconds);
			TimeText.text = niceTime;
			TimeText1.text = niceTime;
			if (seconds <= 0 && minutes <= 0)
			{
				timeon = false;
				//NotificationManager.SendWithAppIcon(TimeSpan.FromSeconds(1), "Offensive Strike", "Reward Ready Get it Now For Free +2", new Color(0, 0.6f, 1), NotificationIcon.Message);
				TimeReward.gameObject.SetActive(false);
				TimeRewardCase.gameObject.SetActive(false);
				AdsReward.gameObject.SetActive(true);
				AdsRewardCase.gameObject.SetActive(true);
			}
		}

		roomName = roomInputField.text;
		NameNewVer.text = playerName;
		nameprofilepage.text = playerName;

		Scene scene = SceneManager.GetActiveScene();
		if (scene.buildIndex > 2 && GameOnConnect == false)
		{
			Loaded();
		}

		xml.currentLanguage = PlayerPrefs.GetInt(languagesPrefsName);
		//PlayerLimit.text = playerLimits [selectedPlayerLimit].ToString ();
		MapText.sprite = availableMaps[selectedMap].mapPreview ? availableMaps[selectedMap].mapPreview : defaultMapPreview;
		offlineMapMapImage.sprite = availableMaps[selectedMap].mapPreview ? availableMaps[selectedMap].mapPreview : defaultMapPreview;
		MapText2.sprite = availableMaps[selectedMap].mapPreview ? availableMaps[selectedMap].mapPreview : defaultMapPreview;
		MapName.text = availableMaps[selectedMap].mapName;
		offlineMapName.text = availableMaps[selectedMap].mapName;
		MapName2.text = availableMaps[selectedMap].mapName;


	}

	IEnumerator LoadingOfflineSc()
	{
		PlayerPrefs.SetInt("OfflineMode", 1);
		canPlayWithBots = true;

		//Remember player settings when creating new room
		PlayerPrefs.SetInt(playerLimitPrefsName, selectedPlayerLimit);
		PlayerPrefs.SetInt(gameModePrefsName, selectedGameMode);
		PlayerPrefs.SetInt(specRoomPrefsName, selectedSpecRoom);
		yield return new WaitForSeconds(1.65f);
		thisAudioSource.clip = ClickSong;
		thisAudioSource.Play();

		//Load offline scene
		OnJoinedOfflineRoom();

		PlayerPrefs.SetInt(selectedMapPrefsName, selectedMap);
		yield return new WaitForSeconds(12.5f);
		FailButton2.gameObject.SetActive(true);
		loadingOn = false;


	}

	IEnumerator LoadingSc()
	{
		isRoomCreator = true;
		StartCoroutine(JoinCreateRoom(roomName, availableMaps[selectedMap].mapName, playerLimits[selectedPlayerLimit], gameModes[selectedGameMode], specRoom[selectedSpecRoom], (float)roundDurations[selectedGameMode], gameModes[selectedGameMode] == "FFA" ? killLimits[selectedKillLimit] : -1));

		//Remember player settings when creating new room
		PlayerPrefs.SetInt(playerLimitPrefsName, selectedPlayerLimit);
		PlayerPrefs.SetInt(gameModePrefsName, selectedGameMode);
		PlayerPrefs.SetInt(specRoomPrefsName, selectedSpecRoom);
		yield return new WaitForSeconds(1.65f);
		thisAudioSource.clip = ClickSong;
		thisAudioSource.Play();
		PlayerPrefs.SetInt(selectedMapPrefsName, selectedMap);
		yield return new WaitForSeconds(12.5f);
		FailButton2.gameObject.SetActive(true);
		loadingOn = false;
	}

	IEnumerator LoadingSelect()
	{
		yield return new WaitForSeconds(5.5f);

		if (refreshingRooms || selectedRoom == -1)
		{
		}
		else
		{
			yield return new WaitForSeconds(1.65f);
			StartCoroutine(JoinCreateRoom(availableRooms[selectedRoom].Name,
				(string)availableRooms[selectedRoom].CustomProperties["MapName"],
				availableRooms[selectedRoom].MaxPlayers,
				(string)availableRooms[selectedRoom].CustomProperties["GameMode"],
				(string)availableRooms[selectedRoom].CustomProperties["SpecMode"],
				(float)availableRooms[selectedRoom].CustomProperties["RoundDuration"],
				availableRooms[selectedRoom].CustomProperties["KillLimit"] != null ? (int)availableRooms[selectedRoom].CustomProperties["KillLimit"] : -1
			));
			thisAudioSource.clip = ClickSong;
			thisAudioSource.Play();
			loadingOn = false;
		}
	}


	IEnumerator fade()
	{
		Fade(true, 0.85f);
		yield return new WaitForSeconds(0.95f);
		Fade(false, 1f);
		CreateRom();
	}

	IEnumerator fadeSelect()
	{
		Fade(true, 0.85f);
		yield return new WaitForSeconds(0.95f);
		Fade(false, 1f);
		SelectRom();
	}

	public void fadeon()
	{
		thisAudioSource.clip = ClickSong;
		thisAudioSource.Play();
		StartCoroutine("fade");
	}

	public void RefreshingRooms()
	{
		foreach (Transform child in parentTransform)
		{
			GameObject.Destroy(child.gameObject);
		}
		StartCoroutine(RefreshRooms());
		Refreshing.SetActive(true);
	}

	public void fadeonSelect()
	{
		if (refreshingRooms || selectedRoom == -1)
		{
			thisAudioSource.clip = ClickSong;
			thisAudioSource.Play();
		}
		else
		{
			thisAudioSource.clip = ClickSong;
			thisAudioSource.Play();
			currentWindow = CurrentWindow.Options;
			StartCoroutine("fadeSelect");
		}
	}

	public void SearchRoomFinder()
	{
		int SearchRoomNow = 0;
		if (availableRooms.Length > 0)
		{
			for (int i = 0; i < availableRooms.Length; i++)
			{
				if ((availableRooms[i].PlayerCount < availableRooms[i].MaxPlayers && (string)availableRooms[i].CustomProperties["SpecMode"] != "OPEN") && SearchRoomNow == 0)
				{
					SearchRoomNow = 1;
					StartCoroutine(JoinCreateRoom(availableRooms[i].Name,
						(string)availableRooms[i].CustomProperties["MapName"],
						availableRooms[i].MaxPlayers,
						(string)availableRooms[i].CustomProperties["GameMode"],
						(string)availableRooms[i].CustomProperties["SpecMode"],
						(float)availableRooms[i].CustomProperties["RoundDuration"],
						availableRooms[i].CustomProperties["KillLimit"] != null ? (int)availableRooms[i].CustomProperties["KillLimit"] : -1
					));
					thisAudioSource.clip = ClickSong;
					thisAudioSource.Play();
					StartCoroutine(ConnectingNowGameFail());
				}
			}
			if (SearchRoomNow == 0)
			{
				StartCoroutine("PlayNowGame");
			}
		}
		else
		{
			StartCoroutine("PlayNowGame");
		}
	}

	int randomRoom;
	int randomPlayerCount;
	int randomMaxPlayers;
	int isRoomFull;
	public void RoomsLisList()
	{
		isRoomFull = 0;
		if (availableRooms.Length > 0)
		{
			NoRooms.SetActive(false);
			for (int i = 0; i < availableRooms.Length; i++)
			{
				GameObject poolGameObject = Instantiate(RoomListPrefab);
				poolGameObject.transform.SetParent(parentTransform, true);
				RoomListSee pG;
				pG = poolGameObject.GetComponent<RoomListSee>();
				pG.RoomName.text = availableRooms[i].Name;
				pG.GameMode.text = (string)availableRooms[i].CustomProperties["GameMode"];
				if (availableRooms[i].PlayerCount == availableRooms[i].MaxPlayers)
				{
					pG.Players.color = Color.red;
					isRoomFull++;
				}
				else { pG.Players.color = Color.green; }
				pG.Players.text = availableRooms[i].PlayerCount + "/" + availableRooms[i].MaxPlayers;
				pG.Map.text = (string)availableRooms[i].CustomProperties["MapName"];
				pG.Pings.text = currentPing.ToString();
				pG.isFakeRoom = false;
			}
			if(availableRooms.Length == 1 || isRoomFull > 1)
            {
				CreateFakeRoom();
				isRoomFull = 0;
			}
		}
		else if(availableRooms.Length == 0)
        {
			CreateFakeRoom();
		}
		else { NoRooms.SetActive(true); }
	}

	void CreateFakeRoom()
    {
		NoRooms.SetActive(false);
		randomRoom = Random.Range(2, 4);
		randomPlayerCount = Random.Range(1, 3);
		randomMaxPlayers = Random.Range(2, 10);
		for (int i = 0; i < randomRoom; i++)
		{
			GameObject poolGameObject = Instantiate(RoomListPrefab);
			poolGameObject.transform.SetParent(parentTransform, true);
			RoomListSee pG;
			pG = poolGameObject.GetComponent<RoomListSee>();
			pG.RoomName.text = "Room" + Random.Range(0, 1000).ToString("0000");
			FakeGameMode = Random.Range(1, 3);
			pG.GameMode.text = gameModes[FakeGameMode];
			randomPlayerCount = randomPlayerCount == randomMaxPlayers ? Random.Range(1, randomMaxPlayers) : randomPlayerCount;
			pG.Players.color = Color.green;
			pG.Players.text = randomPlayerCount + "/" + randomMaxPlayers;
			pG.Map.text = availableMaps[Random.Range(0, availableMaps.Length)].mapName;
			pG.Pings.text = " ";
			pG.isFakeRoom = true;
		}
	}
	IEnumerator PlayNowGame()
	{
		yield return new WaitForSeconds(Random.Range(3, 8));
		thisAudioSource.clip = ClickSong;
		thisAudioSource.Play();
		NewMainMenu.gameObject.SetActive(false);
		ConnectedMenu.gameObject.SetActive(true);
		StartCoroutine(JoinCreateRoom(roomName, availableMaps[selectedMap].mapName, 10, gameModes[0], specRoom[0], (float)roundDurations[0], gameModes[0] == "FFA" ? killLimits[selectedKillLimit] : -1));
		LoadingBack.sprite = availableMaps[selectedMap].mapPreview;
		MapMapImage.sprite = availableMaps[selectedMap].mapMap;
		LoadinMapName.text = availableMaps[selectedMap].mapName;
		LoadinModInfo.text = "Settings:\n- Friendly Fire is OFF\n- Team Collision is ON\n- Best out of 12 Rounds\n- Bomb duration 60 sec.\n\nGood Luck..";
		yield return new WaitForSeconds(12.5f);
		FailButton.gameObject.SetActive(true);
	}


	public void LoobyListNowGame()
	{
		LoobyNowGame(SelectRoomName.text.ToString(), SelectMapName, GameMode.text.ToString());
	}

	IEnumerator LoobyListNowGameFail()
	{
		yield return new WaitForSeconds(12.5f);
		FailButton3.gameObject.SetActive(true);
	}

	IEnumerator ConnectingNowGameFail()
	{
		yield return new WaitForSeconds(12.5f);
		FailButton4CloseConnecting.gameObject.SetActive(false);
		FailButton4.gameObject.SetActive(true);
	}
	
	public void LoobyNowGame(string newRoomName, string newMapName, string newGameMode)
	{
		if(isFakeMode)
        {
			StartCoroutine(JoinCreateRoom(newRoomName, newMapName, 10, newGameMode, specRoom[0], (float)roundDurations[FakeGameMode], newGameMode == "FFA" ? killLimits[0] : -1));
		}
		else
        {
			StartCoroutine(JoinCreateRoom(newRoomName, newMapName, 10, newGameMode, specRoom[0], (float)roundDurations[0], newGameMode == "FFA" ? killLimits[0] : -1));
		}
		
		thisAudioSource.clip = ClickSong;
		thisAudioSource.Play();
		StartCoroutine(LoobyListNowGameFail());
	}

	void RoomNameCConnect()
	{
		int findRoomNow = 0;
		if (availableRooms.Length > 0)
		{
			for (int i = 0; i < availableRooms.Length; i++)
			{
				if (availableRooms[i].Name == tmpRoomName && availableRooms[i].PlayerCount < availableRooms[i].MaxPlayers)
				{
					StartCoroutine(JoinCreateRoom(availableRooms[i].Name,
						(string)availableRooms[i].CustomProperties["MapName"],
						availableRooms[i].MaxPlayers,
						(string)availableRooms[i].CustomProperties["GameMode"],
						(string)availableRooms[i].CustomProperties["SpecMode"],
						(float)availableRooms[i].CustomProperties["RoundDuration"],
						availableRooms[i].CustomProperties["KillLimit"] != null ? (int)availableRooms[i].CustomProperties["KillLimit"] : -1
					));
					findRoomNow = 1;
				}
				else if (availableRooms[i].Name == tmpRoomName && availableRooms[i].PlayerCount >= availableRooms[i].MaxPlayers)
				{
					findRoomNow = 2;
				}
				else
				{
					findRoomNow = 0;
				}
			}
			if (findRoomNow == 0)
			{
				RoomNameWhatis = xml.button24;
				currentWindow = CurrentWindow.FindingRoomName;
			}
			if (findRoomNow == 2)
			{
				RoomNameWhatis = xml.button23;
				currentWindow = CurrentWindow.FindingRoomName;
			}
		}
		else
		{
			RoomNameWhatis = xml.button22;
			currentWindow = CurrentWindow.FindingRoomName;
		}
	}

	void OnGUI()
	{
		GUI.skin = GameSettings.guiSkin;


		if (loadingMap)
		{



		}
		else
		{
			if (currentWindow == CurrentWindow.Main)
			{



			}

			if (currentWindow == CurrentWindow.PlayNow)
			{
				GUI.Window(0, new Rect(Screen.width / 2 - browseWindowSize.x / 2, Screen.height / 2 - browseWindowSize.y / 2, browseWindowSize.x, browseWindowSize.y), BrowseRoomsWindow, "");
			}

			if (currentWindow == CurrentWindow.PlayNowMaybe)
			{
				GUI.Window(0, new Rect(Screen.width / 2 - browseWindowSize.x / 2, Screen.height / 2 - browseWindowSize.y / 2, browseWindowSize.x, browseWindowSize.y), BrowseRoomsWins, "");
			}

			if (currentWindow == CurrentWindow.Options)
			{

			}

			if (currentWindow == CurrentWindow.Profile)
			{
				GUI.Window(0, new Rect(Screen.width / 2 - 150, Screen.height / 2 - 165, 310, 335), ProfileWindow, "");
			}

			if (currentWindow == CurrentWindow.Credits)
			{
				GUI.Window(0, new Rect(Screen.width / 2 * 0.49f, Screen.height / 2 * 0.43f, 500, 330), CreditControl, "");
			}

			if (currentWindow == CurrentWindow.PlayAfter)
			{
				if (GUI.Button(new Rect(Screen.width / 2 * 0.35f, Screen.height / 2 - 60, 225, 40), xml.button5))
				{
					thisAudioSource.clip = ClickSong;
					thisAudioSource.Play();
					currentWindow = CurrentWindow.SearchNow;
					this.StopAllCoroutines();
					this.StartCoroutine(RefreshRooms());
					Invoke("SearchRoomFinder", 4.0f);
				}

				if (GUI.Button(new Rect(Screen.width / 2 * 0.35f, Screen.height / 2 - 10, 225, 40), xml.button6))
				{
					thisAudioSource.clip = ClickSong;
					thisAudioSource.Play();
					currentWindow = CurrentWindow.RoomNameW;
				}

				if (GUI.Button(new Rect(Screen.width / 2 * 0.35f, Screen.height / 2 + 40, 225, 40), xml.button7))
				{
					thisAudioSource.clip = ClickSong;
					thisAudioSource.Play();
					currentWindow = CurrentWindow.PlayNow;
					createRoom = false;

					if (availableRooms.Length == 0)
					{
						this.StopAllCoroutines();
						this.StartCoroutine(RefreshRooms());
					}
				}

				if (GUI.Button(new Rect(Screen.width / 2 * 0.35f, Screen.height / 2 + 90, 225, 40), xml.button8))
				{
					thisAudioSource.clip = ClickSong;
					thisAudioSource.Play();
					currentWindow = CurrentWindow.PlayNowMaybe;
					createRoom = true;
				}

				if (GUI.Button(new Rect(Screen.width / 2 * 0.35f, Screen.height / 2 + 140, 225, 40), xml.button9))
				{
					thisAudioSource.clip = ClickSong;
					thisAudioSource.Play();
					currentWindow = CurrentWindow.Main;
				}
			}

			if (currentWindow == CurrentWindow.SearchNo)
			{
				GUI.Window(0, new Rect(Screen.width / 2 - 150, Screen.height / 2 - 100, 300, 160), SearchRoomNo, "");
			}

			if (currentWindow == CurrentWindow.SearchNow)
			{
				GUI.Window(0, new Rect(0, 0, Screen.width, Screen.height), SearchRoomNow, "");
			}

			if (currentWindow == CurrentWindow.RoomNameW)
			{
				GUI.Window(0, new Rect(Screen.width / 2 - 150, Screen.height / 2 - 100, 300, 200), RoomNameWhat, "");
			}

			if (currentWindow == CurrentWindow.RoomNameCheck)
			{
				GUI.Window(0, new Rect(0, 0, Screen.width, Screen.height), SearchRoomNow, "");
			}

			if (currentWindow == CurrentWindow.FindingRoomName)
			{
				GUI.Window(0, new Rect(Screen.width / 2 - 150, Screen.height / 2 - 100, 300, 160), SearchFindingRoomName, "");
			}

			if (currentWindow == CurrentWindow.Information)
			{
				GUI.Window(0, new Rect(Screen.width / 2 * 0.43f, Screen.height / 2 * 0.47f, 550, 290), InformationControl, "");
			}


		}
	}


	public void LookLobyOffMenuOn()
	{
		thisAudioSource.clip = ClickSong;
		thisAudioSource.Play();
		currentWindow = CurrentWindow.Options;
	}

	public void PriRoomOnOf()
	{
		bool İsOn = PriToogle.GetComponent<Toggle>().isOn;
		if (İsOn)
		{
			thisAudioSource.clip = ClickSong;
			thisAudioSource.Play();
			selectedSpecRoom = 1;
		}
		else
		{
			thisAudioSource.clip = ClickSong;
			thisAudioSource.Play();
			selectedSpecRoom = 0;
		}
	}

	IEnumerator LobbyLook()
	{
		yield return new WaitForSeconds(0.95f);
		currentWindow = CurrentWindow.PlayNow;
		createRoom = false;

		if (availableRooms.Length == 0)
		{
			this.StopAllCoroutines();
			this.StartCoroutine(RefreshRooms());
		}
	}

	public void Looby()
	{

		thisAudioSource.clip = ClickSong;
		thisAudioSource.Play();
		StartCoroutine("LobbyLook");

	}

	public void Zero()
	{
		currentWindow = CurrentWindow.Options;
	}

	public void GameModeBomb()
	{
		selectedGameMode = 0;
	}

	public void GameModeTeam()
	{
		selectedGameMode = 1;
	}

	public void GameModeOne()
	{
		selectedGameMode = 2;
	}

	public void PlayerLimitA()
	{
		if (selectedPlayerLimit < playerLimits.Length - 1)
		{
			thisAudioSource.clip = ClickSong;
			thisAudioSource.Play();
			selectedPlayerLimit++;
			playerLimitText.text = playerLimits[selectedPlayerLimit].ToString();
		}

	}

	public void PlayerLimitE()
	{
		if (selectedPlayerLimit > 0)
		{
			thisAudioSource.clip = ClickSong;
			thisAudioSource.Play();
			selectedPlayerLimit--;
			playerLimitText.text = playerLimits[selectedPlayerLimit].ToString();
		}
	}
	public void MapA()
	{
		if (selectedMap < availableMaps.Length - 1)
		{
			thisAudioSource.clip = ClickSong;
			thisAudioSource.Play();
			selectedMap++;
			MapName.text = availableMaps[selectedMap].mapName;
			BackMap.gameObject.SetActive(true);
		}
		if (selectedMap == availableMaps.Length - 1 && gameObject)
		{
			NextMap.gameObject.SetActive(false);
		}
		if (selectedMap == 0 && gameObject) { BackMap.gameObject.SetActive(false); }

	}
	public void MapE()
	{
		if (selectedMap > 0)
		{
			thisAudioSource.clip = ClickSong;
			thisAudioSource.Play();
			selectedMap--;
			MapName.text = availableMaps[selectedMap].mapName;
			MapName2.text = availableMaps[selectedMap].mapName;
			NextMap.gameObject.SetActive(true);
		}
		if (selectedMap == availableMaps.Length - 1 && gameObject)
		{
			NextMap.gameObject.SetActive(false);
		}
		if (selectedMap == 0 && gameObject) { BackMap.gameObject.SetActive(false); }

	}
	public void Connect()
	{
		thisAudioSource.clip = ClickSong;
		thisAudioSource.Play();
		if (refreshingRooms || selectedRoom == -1)
		{
		}
		else
		{
			StartCoroutine(JoinCreateRoom(availableRooms[selectedRoom].Name,
				(string)availableRooms[selectedRoom].CustomProperties["MapName"],
				availableRooms[selectedRoom].MaxPlayers,
				(string)availableRooms[selectedRoom].CustomProperties["GameMode"],
				(string)availableRooms[selectedRoom].CustomProperties["SpecMode"],
				(float)availableRooms[selectedRoom].CustomProperties["RoundDuration"],
				availableRooms[selectedRoom].CustomProperties["KillLimit"] != null ? (int)availableRooms[selectedRoom].CustomProperties["KillLimit"] : -1
			));
		}
	}

	public void createOfflineRoom()
	{
		loadingOn = true;
		LoadingBack.sprite = availableMaps[selectedMap].mapPreview ? availableMaps[selectedMap].mapPreview : defaultMapPreview;
		MapMapImage.sprite = availableMaps[selectedMap].mapMap ? availableMaps[selectedMap].mapPreview : defaultMapPreview;
		LoadinMapName.text = availableMaps[selectedMap].mapName;

		if (selectedGameMode == 0)
		{
			LoadinModInfo.text =
				"Settings:\n- Friendly Fire is OFF\n- Team Collision is ON\n- Best out of 12 Rounds\n- Bomb duration 60 sec.\n\nGood Luck..";
		}
		else if (selectedGameMode == 1)
		{
			LoadinModInfo.text =
				"Settings:\n- Friendly Fire is OFF\n- Team Collision is ON\n- Round Time 10 Minutes\n\nGood Luck..";
		}
		else
		{
			LoadinModInfo.text = "Settings\n- Friendly Fire is ON\n- Team Collision is OFF\n- Round Time 10 Minutes\n- The player who kills 30 wins.\n\nGood Luck..";
		}

		StartCoroutine("LoadingOfflineSc");
	}

	public void CreateRom()
	{
		loadingOn = true;
		LoadingBack.sprite = availableMaps[selectedMap].mapPreview ? availableMaps[selectedMap].mapPreview : defaultMapPreview;
		offlineMapMapImage.sprite = availableMaps[selectedMap].mapMap ? availableMaps[selectedMap].mapMap : defaultMapPreview;
		LoadinMapName.text = availableMaps[selectedMap].mapName;
		if (selectedGameMode == 0)
		{
			LoadinModInfo.text =
				"Settings:\n- Friendly Fire is OFF\n- Team Collision is ON\n- Best out of 12 Rounds\n- Bomb duration 60 sec.\n\nGood Luck..";
		}
		else if (selectedGameMode == 1)
		{
			LoadinModInfo.text =
				"Settings:\n- Friendly Fire is OFF\n- Team Collision is ON\n- Round Time 10 Minutes\n\nGood Luck..";
		}
		else
		{
			LoadinModInfo.text = "Settings\n- Friendly Fire is ON\n- Team Collision is OFF\n- Round Time 10 Minutes\n- The player who kills 30 wins.\n\nGood Luck..";
		}

		StartCoroutine("LoadingSc");
	}

	public void SelectRom()
	{
		LoadingMenu.SetActive(true);
		loadingOn = true;
		for (int i = 0; i <= 4;)
		{
			if ((string)availableRooms[selectedRoom].CustomProperties["MapName"] == availableMaps[i].mapName)
			{
				LoadingBack.sprite = availableMaps[i].mapPreview;
				MapMapImage.sprite = availableMaps[i].mapMap;
				i = 5;
			}
			else
			{
				i++;
			}
		}
		LoadinMapName.text = (string)availableRooms[selectedRoom].CustomProperties["MapName"];
		if ((string)availableRooms[selectedRoom].CustomProperties["GameMode"] == "NORMAL")
		{
			LoadinModInfo.text =
				"Settings:\n- Friendly Fire is OFF\n- Team Collision is ON\n- Best out of 12 Rounds\n- Bomb duration 60 sec.\n\nGood Luck..";
		}
		else if ((string)availableRooms[selectedRoom].CustomProperties["GameMode"] == "TDM")
		{
			LoadinModInfo.text =
				"Settings:\n- Friendly Fire is OFF\n- Team Collision is ON\n- Round Time 10 Minutes\n\nGood Luck..";
		}
		else
		{
			LoadinModInfo.text = "Settings\n- Friendly Fire is ON\n- Team Collision is OFF\n- Round Time 10 Minutes\n- The player who kills 30 wins.\n\nGood Luck..";
		}

		StartCoroutine("LoadingSelect");
	}

	void ProfileWindow(int windowID)
	{
		GUI.Label(new Rect(15, 0, 300, 35), xml.button17);

		if (GUI.Button(new Rect(300 - 20, 1, 28, 29), "", GameSettings.closeButtonStyle))
		{
			thisAudioSource.clip = ClickSong;
			thisAudioSource.Play();
			currentWindow = CurrentWindow.Main;
			if (!PlayerPrefs.HasKey(playerNamePrefsName))
			{
				PlayerPrefs.SetString(playerNamePrefsName, playerName);
			}
			if (!PlayerPrefs.HasKey(languagesPrefsName))
			{
				PlayerPrefs.SetInt(languagesPrefsName, selectedLanguages);
			}
			if (!PlayerPrefs.HasKey(fromPrefsName))
			{
				PlayerPrefs.SetInt(fromPrefsName, selectedFrom);
			}
		}

		GUI.Label(new Rect(15, 40, 300, 30), xml.button18);
		tmpPlayerName = GUI.TextField(new Rect(15, 77, 300 - 30, 27), tmpPlayerName, 13);

		GUI.enabled = true;

		GUI.Label(new Rect(110, 130, 300, 30), xml.button48);
		GUI.enabled = selectedLanguages > 0;
		if (GUI.Button(new Rect(50, 162, 28, 28), "<"))
		{
			thisAudioSource.clip = ClickSong;
			thisAudioSource.Play();
			selectedLanguages--;
			PlayerPrefs.SetInt(languagesPrefsName, selectedLanguages);
		}
		GUI.enabled = true;
		GUI.Label(new Rect(112, 162, 75, 25), languagesName[selectedLanguages], GameSettings.createRoomOptionsStyle);
		GUI.enabled = selectedLanguages < languagesName.Length - 1;
		if (GUI.Button(new Rect(224, 162, 28, 28), ">"))
		{
			thisAudioSource.clip = ClickSong;
			thisAudioSource.Play();
			selectedLanguages++;
			PlayerPrefs.SetInt(languagesPrefsName, selectedLanguages);
		}

		GUI.enabled = true;

		GUI.Label(new Rect(110, 200, 300, 30), xml.button96);
		GUI.enabled = selectedFrom > 0;
		if (GUI.Button(new Rect(50, 232, 28, 28), "<"))
		{
			thisAudioSource.clip = ClickSong;
			thisAudioSource.Play();
			selectedFrom--;
			PlayerPrefs.SetInt(fromPrefsName, selectedFrom);
		}
		GUI.enabled = true;
		GUI.Label(new Rect(112, 232, 75, 25), fromName[selectedFrom], GameSettings.createRoomOptionsStyle);
		GUI.enabled = selectedFrom < fromName.Length - 1;
		if (GUI.Button(new Rect(224, 232, 28, 28), ">"))
		{
			thisAudioSource.clip = ClickSong;
			thisAudioSource.Play();
			selectedFrom++;
			PlayerPrefs.SetInt(fromPrefsName, selectedFrom);
		}


		//ToDO remove this before final build
		//string tmpNameCheck = (tmpPlayerName.ToLower()).Replace(" ", "");

		//GUI.enabled = tmpNameCheck.Length > 0;

		if (GUI.Button(new Rect(90, 290, 125, 29), xml.button19))
		{
			thisAudioSource.clip = ClickSong;
			thisAudioSource.Play();
			playerName = tmpPlayerName;
			PlayerPrefs.SetString(playerNamePrefsName, playerName);
			selectedLanguages = xml.currentLanguage;
			currentWindow = CurrentWindow.Main;
		}

		GUI.enabled = true;
	}

	private GUIStyle guiStyleCredit = new GUIStyle();
	void CreditControl(int windowID)
	{
		GUI.Label(new Rect(15, 0, 300, 35), xml.button4);

		if (GUI.Button(new Rect(500 - 28, 1, 28, 29), "", GameSettings.closeButtonStyle))
		{
			thisAudioSource.clip = ClickSong;
			thisAudioSource.Play();
			currentWindow = CurrentWindow.Main;
		}

		guiStyleCredit.fontSize = 15;
		guiStyleCredit.alignment = TextAnchor.UpperCenter;
		GUI.Label(new Rect(15, 40, 460, 30), "[ Programming & Developer ]", guiStyleCredit);
		GUI.Label(new Rect(15, 60, 460, 30), "KingShots GAMES", guiStyleCredit);
		GUI.Label(new Rect(15, 110, 479, 30), "[ Map Creator, Model Editor & Beta Tester ]", guiStyleCredit);
		GUI.Label(new Rect(15, 130, 460, 30), "KingShots GAMES", guiStyleCredit);
		guiStyleCredit.normal.textColor = Color.white;


		if (GUI.Button(new Rect(365, 290, 125, 30), xml.button9))
		{
			thisAudioSource.clip = ClickSong;
			thisAudioSource.Play();
			currentWindow = CurrentWindow.Main;
		}

		GUI.enabled = true;
	}

	void InformationControl(int windowID)
	{
		GUI.Label(new Rect(15, 0, 300, 35), xml.button49);

		if (GUI.Button(new Rect(550 - 28, 1, 28, 29), "", GameSettings.closeButtonStyle))
		{
			thisAudioSource.clip = ClickSong;
			thisAudioSource.Play();
			currentWindow = CurrentWindow.PlayNow;
			createRoom = true;
		}


		GUI.Label(new Rect(15, 40, 515, 30), xml.button50);
		GUI.Label(new Rect(15, 60, 515, 30), xml.button51);
		GUI.Label(new Rect(15, 80, 515, 30), xml.button52);
		GUI.Label(new Rect(15, 100, 515, 30), xml.button53);
		GUI.Label(new Rect(15, 140, 515, 30), xml.button54);
		GUI.Label(new Rect(15, 160, 515, 30), xml.button55);
		GUI.Label(new Rect(15, 180, 515, 30), xml.button56);
		GUI.Label(new Rect(15, 200, 517, 30), xml.button57);


		if (GUI.Button(new Rect(415, 250, 125, 30), xml.button9))
		{
			thisAudioSource.clip = ClickSong;
			thisAudioSource.Play();
			currentWindow = CurrentWindow.PlayNow;
			createRoom = true;
		}

		GUI.enabled = true;
	}

	private string RoomWhatis;
	void SearchRoomNo(int windowID)
	{
		GUI.Label(new Rect(15, 0, 300, 35), xml.button15);

		if (GUI.Button(new Rect(300 - 28, 1, 28, 29), "", GameSettings.closeButtonStyle))
		{
			thisAudioSource.clip = ClickSong;
			thisAudioSource.Play();
			currentWindow = CurrentWindow.PlayAfter;
		}

		guiStyleCredit.fontSize = 15;
		guiStyleCredit.alignment = TextAnchor.UpperCenter;
		GUI.Label(new Rect(0, 65, 300, 30), RoomWhatis, guiStyleCredit);
		guiStyleCredit.normal.textColor = Color.green;

		if (GUI.Button(new Rect(10, 120, 125, 27), xml.button16))
		{
			thisAudioSource.clip = ClickSong;
			thisAudioSource.Play();
			currentWindow = CurrentWindow.SearchNow;
			this.StopAllCoroutines();
			this.StartCoroutine(RefreshRooms());
			Invoke("SearchRoomFinder", 3.0f);
		}

		GUI.Label(new Rect(142, 120, 300, 30), "or");

		if (GUI.Button(new Rect(165, 120, 125, 27), xml.button8))
		{
			thisAudioSource.clip = ClickSong;
			thisAudioSource.Play();
			currentWindow = CurrentWindow.PlayNow;
			createRoom = true;
		}

		GUI.enabled = true;
	}

	private string RoomNameWhatis;
	void SearchFindingRoomName(int windowID)
	{
		GUI.Label(new Rect(15, 0, 300, 35), xml.button15);

		if (GUI.Button(new Rect(300 - 28, 1, 28, 29), "", GameSettings.closeButtonStyle))
		{
			thisAudioSource.clip = ClickSong;
			thisAudioSource.Play();
			currentWindow = CurrentWindow.PlayAfter;
		}

		guiStyleCredit.fontSize = 15;
		guiStyleCredit.alignment = TextAnchor.UpperCenter;
		GUI.Label(new Rect(0, 65, 300, 30), RoomNameWhatis, guiStyleCredit);
		guiStyleCredit.normal.textColor = Color.green;

		if (GUI.Button(new Rect(90, 120, 125, 26), xml.button16))
		{
			thisAudioSource.clip = ClickSong;
			thisAudioSource.Play();
			currentWindow = CurrentWindow.RoomNameW;
		}

		GUI.enabled = true;
	}

	void SearchRoomNow(int windowID)
	{

		GUI.Box(new Rect(Screen.width / 2 - 150, Screen.height / 2 - 15, 375, 30), xml.button10);

		if (GUI.Button(new Rect(Screen.width - 265, Screen.height - 45, 250, 30), xml.button11))
		{
			thisAudioSource.clip = ClickSong;
			thisAudioSource.Play();
			this.StopAllCoroutines();
			CancelInvoke();
			if (PhotonNetwork.room != null)
			{
				PhotonNetwork.LeaveRoom();
			}
			GameSettings.errorText = "";
			loadingMap = false;
			currentWindow = CurrentWindow.PlayAfter;
		}
	}

	void RoomNameWhat(int windowID)
	{
		GUI.Label(new Rect(15, 0, 300, 35), xml.button6);

		if (GUI.Button(new Rect(300 - 28, 1, 28, 29), "", GameSettings.closeButtonStyle))
		{
			thisAudioSource.clip = ClickSong;
			thisAudioSource.Play();
			currentWindow = CurrentWindow.PlayAfter;
		}

		GUI.Label(new Rect(15, 40, 300, 30), xml.button12);
		tmpRoomName = GUI.TextField(new Rect(15, 70, 300 - 30, 25), tmpRoomName, 19);

		GUI.color = Color.green;
		GUI.Label(new Rect(15, 106, 300, 30), xml.button13);
		GUI.color = Color.white;

		//ToDO remove this before final build
		//string tmpRoomNameCheck = (tmpRoomName.ToLower()).Replace(" ", "");

		//GUI.enabled = tmpRoomNameCheck.Length > 0;

		if (GUI.Button(new Rect(160, 160, 125, 25), xml.button14))
		{
			thisAudioSource.clip = ClickSong;
			thisAudioSource.Play();
			currentWindow = CurrentWindow.RoomNameCheck;
			this.StopAllCoroutines();
			this.StartCoroutine(RefreshRooms());
			Invoke("RoomNameCConnect", 3.0f);
		}

		GUI.enabled = true;
	}

	void BrowseRoomsWins(int windowID)
	{
		if (!createRoom)
		{
			GUI.Label(new Rect(15, 0, 450, 35), " " + xml.button31 + " - " + totalPlayers.ToString() + " " + xml.button29 + " - " + totalRooms.ToString() + " " + xml.button32 + " " + PhotonNetwork.PhotonServerSettings.PreferredRegion.ToString());
		}
		else
		{
			GUI.Label(new Rect(15, 0, 300, 35), xml.button8);
		}

		if (GUI.Button(new Rect(browseWindowSize.x - 28, 1, 28, 29), "", GameSettings.closeButtonStyle))
		{
			thisAudioSource.clip = ClickSong;
			thisAudioSource.Play();
			currentWindow = CurrentWindow.PlayAfter;
		}

		if (!createRoom)
		{
			if (refreshingRooms)
			{
				GUI.enabled = false;
			}
			else
			{
				GUI.enabled = true;
			}

			if (GUI.Button(new Rect(browseWindowSize.x - 410, browseWindowSize.y - 40, 165, 30), xml.button26))
			{
				thisAudioSource.clip = ClickSong;
				thisAudioSource.Play();
				createRoom = true;
			}

			//Refresh rooms
			if (GUI.Button(new Rect(browseWindowSize.x - 220, browseWindowSize.y - 40, 85, 30), xml.button27))
			{
				thisAudioSource.clip = ClickSong;
				thisAudioSource.Play();
				this.StopAllCoroutines();
				this.StartCoroutine(RefreshRooms());
			}

			if (refreshingRooms || selectedRoom == -1)
			{
				GUI.enabled = false;
			}
			else
			{
				GUI.enabled = true;
			}

			if (GUI.Button(new Rect(browseWindowSize.x - 110, browseWindowSize.y - 40, 85, 30), xml.button14))
			{
				thisAudioSource.clip = ClickSong;
				thisAudioSource.Play();
				StartCoroutine(JoinCreateRoom(availableRooms[selectedRoom].Name,
					(string)availableRooms[selectedRoom].CustomProperties["MapName"],
					availableRooms[selectedRoom].MaxPlayers,
					(string)availableRooms[selectedRoom].CustomProperties["GameMode"],
					(string)availableRooms[selectedRoom].CustomProperties["SpecMode"],
					(float)availableRooms[selectedRoom].CustomProperties["RoundDuration"],
					availableRooms[selectedRoom].CustomProperties["KillLimit"] != null ? (int)availableRooms[selectedRoom].CustomProperties["KillLimit"] : -1
				));
			}

			GUI.enabled = true;

			GUI.Label(new Rect(10, 39, 270, 21), xml.button12, GameSettings.roomBrowserHeadersStyle);
			GUI.Label(new Rect(288, 39, 100, 21), xml.button28, GameSettings.roomBrowserHeadersStyle);
			GUI.Label(new Rect(396, 39, 100, 21), xml.button29, GameSettings.roomBrowserHeadersStyle);
			GUI.Label(new Rect(504, 39, 100, 21), xml.button30, GameSettings.roomBrowserHeadersStyle);
			GUI.Label(new Rect(612, 39, 100, 21), "Ping", GameSettings.roomBrowserHeadersStyle);

			GUILayout.Space(50);

			roomBrowserScroll = GUILayout.BeginScrollView(roomBrowserScroll, true, true, GUILayout.Height(browseWindowSize.y - 115));
			if (!refreshingRooms)
			{
				if (availableRooms.Length == 0)
				{
					GUILayout.Space(15);
					GUILayout.BeginHorizontal();
					GUILayout.Space(15);
					GUILayout.Label(xml.button33, GUILayout.Width(browseWindowSize.x - 50));
					GUILayout.EndHorizontal();
				}
				else
				{
					for (int i = 0; i < availableRooms.Length; i++)
					{
						if (roomFieldCurrentlyHovering != i)
						{
							GUI.color = new Color(1, 1, 1, 0.35f);
						}
						else
						{
							GUI.color = Color.white;
						}
						if ((string)availableRooms[i].CustomProperties["SpecMode"] != "OPEN")
						{
							GUILayout.BeginHorizontal("box");
							GUI.color = selectedRoom == i ? Color.yellow : Color.white;
							GUILayout.Space(65);
							GUILayout.Label(availableRooms[i].Name, GUILayout.Width(225), GUILayout.Height(20));
							GUILayout.Space(15);
							GUILayout.Label((string)availableRooms[i].CustomProperties["GameMode"], GUILayout.Width(75), GUILayout.Height(20));
							GUILayout.Space(30);
							GUILayout.Label(availableRooms[i].PlayerCount.ToString() + " / " + availableRooms[i].MaxPlayers.ToString(), GUILayout.Width(70), GUILayout.Height(20));
							GUILayout.Space(25);
							GUILayout.Label((string)availableRooms[i].CustomProperties["MapName"], GUILayout.Width(70), GUILayout.Height(20));
							GUILayout.Space(52);
							GUILayout.Label(currentPing.ToString(), GUILayout.Width(60), GUILayout.Height(20));
							GUILayout.EndHorizontal();

							if (GUILayoutUtility.GetLastRect().Contains(Event.current.mousePosition))
							{
								roomFieldCurrentlyHovering = i;
								if (Input.GetMouseButtonDown(0))
								{
									thisAudioSource.clip = ClickSong;
									thisAudioSource.Play();
									selectedRoom = i;
								}
							}
						}
						else
						{
							GUILayout.BeginHorizontal("box");
							GUILayout.Space(65);
							GUILayout.Label(xml.button34, GUILayout.Width(260), GUILayout.Height(20));
							GUILayout.EndHorizontal();
						}
					}

					GUILayout.BeginVertical();
					GUILayout.FlexibleSpace();
					GUILayout.EndVertical();

					if (GUILayoutUtility.GetLastRect().Contains(Event.current.mousePosition))
					{
						roomFieldCurrentlyHovering = -1;
					}
				}
			}
			GUILayout.EndScrollView();

			if (Event.current.mousePosition.y < 60 || Event.current.mousePosition.y > (60 + browseWindowSize.y - 115))
			{
				roomFieldCurrentlyHovering = -1;
			}
		}
		else
		{
			GUI.Label(new Rect(318, 40, 300, 30), xml.button35);
			roomName = GUI.TextField(new Rect(150, 70, (int)(browseWindowSize.x * 0.58f), 25), roomName, 13);

			GUI.Label(new Rect(313, 100, 300, 30), xml.button36);
			GUI.enabled = selectedPlayerLimit > 0;
			if (GUI.Button(new Rect(300, 130, 25, 25), "<"))
			{
				thisAudioSource.clip = ClickSong;
				thisAudioSource.Play();
				selectedPlayerLimit--;
			}
			GUI.enabled = true;
			GUI.Label(new Rect(330, 130, 75, 25), playerLimits[selectedPlayerLimit].ToString(), GameSettings.createRoomOptionsStyle);
			GUI.enabled = selectedPlayerLimit < playerLimits.Length - 1;
			if (GUI.Button(new Rect(410, 130, 25, 25), ">"))
			{
				thisAudioSource.clip = ClickSong;
				thisAudioSource.Play();
				selectedPlayerLimit++;
			}


			GUI.enabled = true;

			GUI.Label(new Rect(540, 125, 300, 30), xml.button37);
			GUI.enabled = selectedSpecRoom > 0;
			if (GUI.Button(new Rect(515, 155, 25, 25), "<"))
			{
				thisAudioSource.clip = ClickSong;
				thisAudioSource.Play();
				selectedSpecRoom--;
			}
			GUI.enabled = true;
			GUI.Label(new Rect(555, 155, 75, 25), specRoom[selectedSpecRoom], GameSettings.createRoomOptionsStyle);
			GUI.enabled = selectedSpecRoom < specRoom.Length - 1;
			if (GUI.Button(new Rect(645, 155, 25, 25), ">"))
			{
				thisAudioSource.clip = ClickSong;
				thisAudioSource.Play();
				selectedSpecRoom++;
			}

			GUI.enabled = true;

			GUI.Label(new Rect(320, 160, 300, 30), xml.button38);
			GUI.enabled = selectedGameMode > 0;
			if (GUI.Button(new Rect(300, 190, 25, 25), "<"))
			{
				thisAudioSource.clip = ClickSong;
				thisAudioSource.Play();
				selectedGameMode--;
			}
			GUI.enabled = true;
			GUI.Label(new Rect(330, 190, 75, 25), gameModes[selectedGameMode], GameSettings.createRoomOptionsStyle);
			GUI.enabled = selectedGameMode < gameModes.Length - 1;
			if (GUI.Button(new Rect(410, 190, 25, 25), ">"))
			{
				thisAudioSource.clip = ClickSong;
				thisAudioSource.Play();
				selectedGameMode++;
			}

			if (gameModes[selectedGameMode] == "FFA")
			{
				GUI.enabled = true;

				GUI.Label(new Rect(137, 160, 300, 30), xml.button39);
				GUI.enabled = selectedKillLimit > 0;
				if (GUI.Button(new Rect(100, 190, 25, 25), "<"))
				{
					thisAudioSource.clip = ClickSong;
					thisAudioSource.Play();
					selectedKillLimit--;
				}
				GUI.enabled = true;
				GUI.Label(new Rect(130, 190, 75, 25), killLimits[selectedKillLimit].ToString(), GameSettings.createRoomOptionsStyle);
				GUI.enabled = selectedKillLimit < killLimits.Length - 1;
				if (GUI.Button(new Rect(210, 190, 25, 25), ">"))
				{
					thisAudioSource.clip = ClickSong;
					thisAudioSource.Play();
					selectedKillLimit++;
				}
			}

			GUI.enabled = true;

			GUI.Label(new Rect(327, 220, 300, 30), xml.button40);
			GUI.enabled = selectedMap > 0;
			if (GUI.Button(new Rect(220, 250, 25, 25), "<"))
			{
				thisAudioSource.clip = ClickSong;
				thisAudioSource.Play();
				selectedMap--;
			}
			GUI.enabled = true;
			GUI.Label(new Rect(250, 250, 240, 30), availableMaps[selectedMap].mapName, GameSettings.createRoomOptionsStyle);
			GUI.enabled = selectedMap < availableMaps.Length - 1;
			if (GUI.Button(new Rect(495, 250, 25, 25), ">"))
			{
				thisAudioSource.clip = ClickSong;
				thisAudioSource.Play();
				selectedMap++;
			}
			GUI.enabled = true;


			if (GUI.Button(new Rect(browseWindowSize.x - 130, browseWindowSize.y - 60, 100, 35), xml.button41))
			{
				thisAudioSource.clip = ClickSong;
				thisAudioSource.Play();
				StartCoroutine(JoinCreateRoom(
					roomName, availableMaps[selectedMap].mapName, playerLimits[selectedPlayerLimit], gameModes[selectedGameMode], specRoom[selectedSpecRoom], (float)roundDurations[selectedGameMode], gameModes[selectedGameMode] == "FFA" ? killLimits[selectedKillLimit] : -1
				));

				//Remember player settings when creating new room
				PlayerPrefs.SetInt(playerLimitPrefsName, selectedPlayerLimit);
				PlayerPrefs.SetInt(gameModePrefsName, selectedGameMode);
				PlayerPrefs.SetInt(specRoomPrefsName, selectedSpecRoom);
				PlayerPrefs.SetInt(selectedMapPrefsName, selectedMap);
			}

			if (GUI.Button(new Rect(browseWindowSize.x - 170, browseWindowSize.y - 215, 135, 30), xml.button49))
			{
				thisAudioSource.clip = ClickSong;
				thisAudioSource.Play();
				currentWindow = CurrentWindow.Information;
			}

			if (GUI.Button(new Rect(30, browseWindowSize.y - 60, 100, 35), xml.button9))
			{
				thisAudioSource.clip = ClickSong;
				thisAudioSource.Play();
				currentWindow = CurrentWindow.PlayAfter;
			}
		}

		if (refreshingRooms && currentWindow == CurrentWindow.PlayNow && createRoom == false)
		{
			GUI.Box(new Rect(browseWindowSize.x / 2 - 75, browseWindowSize.y / 2 - 30, 175, 30), xml.button42);
		}
		//GUI.DragWindow (new Rect (0, 0, 10000, 35));
	}

	IEnumerator BackMainMenu()
	{
		currentWindow = CurrentWindow.Options;
		Fade(true, 0.85f);
		yield return new WaitForSeconds(0.95f);
		Fade(false, 1f);
		for (int i = 0; i < 4; i++)
		{
			MainMenus[i].SetActive(false);
		}
		Plays.SetActive(true);

	}

	void BrowseRoomsWindow(int windowID)
	{
		if (!createRoom)
		{
			GUI.Label(new Rect(15, 0, 450, 35), " " + xml.button31 + " - " + totalPlayers.ToString() + " " + xml.button29 + " - " + totalRooms.ToString() + " " + xml.button32 + " " + PhotonNetwork.PhotonServerSettings.PreferredRegion.ToString());
		}
		else
		{
			GUI.Label(new Rect(15, 0, 300, 35), xml.button8);
		}

		if (GUI.Button(new Rect(browseWindowSize.x - 28, 1, 28, 29), "", GameSettings.closeButtonStyle))
		{
			thisAudioSource.clip = ClickSong;
			thisAudioSource.Play();
			StartCoroutine("BackMainMenu");

		}

		if (!createRoom)
		{
			if (refreshingRooms)
			{
				GUI.enabled = false;
			}
			else
			{
				GUI.enabled = true;
			}


			//Refresh rooms
			if (GUI.Button(new Rect(browseWindowSize.x - 110, browseWindowSize.y - 40, 85, 30), " " + xml.button27))
			{
				thisAudioSource.clip = ClickSong;
				thisAudioSource.Play();
				this.StopAllCoroutines();
				this.StartCoroutine(RefreshRooms());
			}

			if (refreshingRooms || selectedRoom == -1)
			{
				GUI.enabled = false;
			}
			else
			{
				GUI.enabled = true;
			}

			GUI.enabled = true;

			GUI.Label(new Rect(10, 39, 270, 21), xml.button12, GameSettings.roomBrowserHeadersStyle);
			GUI.Label(new Rect(288, 39, 100, 21), xml.button28, GameSettings.roomBrowserHeadersStyle);
			GUI.Label(new Rect(396, 39, 100, 21), xml.button29, GameSettings.roomBrowserHeadersStyle);
			GUI.Label(new Rect(504, 39, 100, 21), xml.button30, GameSettings.roomBrowserHeadersStyle);
			GUI.Label(new Rect(612, 39, 100, 21), "Ping", GameSettings.roomBrowserHeadersStyle);

			GUILayout.Space(50);

			roomBrowserScroll = GUILayout.BeginScrollView(roomBrowserScroll, true, true, GUILayout.Height(browseWindowSize.y - 115));
			if (!refreshingRooms)
			{
				if (availableRooms.Length == 0)
				{
					GUILayout.Space(15);
					GUILayout.BeginHorizontal();
					GUILayout.Space(15);
					GUILayout.Label(xml.button33, GUILayout.Width(browseWindowSize.x - 50));
					GUILayout.EndHorizontal();
				}
				else
				{
					for (int i = 0; i < availableRooms.Length; i++)
					{
						if (roomFieldCurrentlyHovering != i)
						{
							GUI.color = new Color(1, 1, 1, 0.35f);
						}
						else
						{
							GUI.color = Color.white;
						}
						if ((string)availableRooms[i].CustomProperties["SpecMode"] != "OPEN")
						{
							GUILayout.BeginHorizontal("box");
							GUI.color = selectedRoom == i ? Color.yellow : Color.white;
							GUILayout.Space(65);
							GUILayout.Label(availableRooms[i].Name, GUILayout.Width(225), GUILayout.Height(20));
							GUILayout.Space(15);
							GUILayout.Label((string)availableRooms[i].CustomProperties["GameMode"], GUILayout.Width(75), GUILayout.Height(20));
							GUILayout.Space(30);
							GUILayout.Label(availableRooms[i].PlayerCount.ToString() + " / " + availableRooms[i].MaxPlayers.ToString(), GUILayout.Width(70), GUILayout.Height(20));
							GUILayout.Space(25);
							GUILayout.Label((string)availableRooms[i].CustomProperties["MapName"], GUILayout.Width(70), GUILayout.Height(20));
							GUILayout.Space(52);
							GUILayout.Label(currentPing.ToString(), GUILayout.Width(60), GUILayout.Height(20));
							GUILayout.EndHorizontal();

							if (GUILayoutUtility.GetLastRect().Contains(Event.current.mousePosition))
							{
								roomFieldCurrentlyHovering = i;
								if (Input.GetMouseButtonDown(0))
								{
									thisAudioSource.clip = ClickSong;
									thisAudioSource.Play();
									selectedRoom = i;
								}
							}
						}
						else
						{
							GUILayout.BeginHorizontal("box");
							GUILayout.Space(65);
							GUILayout.Label(xml.button34, GUILayout.Width(260), GUILayout.Height(20));
							GUILayout.EndHorizontal();
						}
					}

					GUILayout.BeginVertical();
					GUILayout.FlexibleSpace();
					GUILayout.EndVertical();

					if (GUILayoutUtility.GetLastRect().Contains(Event.current.mousePosition))
					{
						roomFieldCurrentlyHovering = -1;
					}
				}
			}
			GUILayout.EndScrollView();

			if (Event.current.mousePosition.y < 60 || Event.current.mousePosition.y > (60 + browseWindowSize.y - 115))
			{
				roomFieldCurrentlyHovering = -1;
			}
		}
		else
		{
			GUI.Label(new Rect(318, 40, 300, 30), xml.button35);
			roomName = GUI.TextField(new Rect(150, 70, (int)(browseWindowSize.x * 0.58f), 25), roomName, 13);

			GUI.Label(new Rect(313, 100, 300, 30), xml.button36);
			GUI.enabled = selectedPlayerLimit > 0;
			if (GUI.Button(new Rect(300, 130, 25, 25), "<"))
			{
				thisAudioSource.clip = ClickSong;
				thisAudioSource.Play();
				selectedPlayerLimit--;
			}
			GUI.enabled = true;
			GUI.Label(new Rect(330, 130, 75, 25), playerLimits[selectedPlayerLimit].ToString(), GameSettings.createRoomOptionsStyle);
			GUI.enabled = selectedPlayerLimit < playerLimits.Length - 1;
			if (GUI.Button(new Rect(410, 130, 25, 25), ">"))
			{
				thisAudioSource.clip = ClickSong;
				thisAudioSource.Play();
				selectedPlayerLimit++;
			}


			GUI.enabled = true;

			GUI.Label(new Rect(540, 125, 300, 30), xml.button37);
			GUI.enabled = selectedSpecRoom > 0;
			if (GUI.Button(new Rect(515, 155, 25, 25), "<"))
			{
				thisAudioSource.clip = ClickSong;
				thisAudioSource.Play();
				selectedSpecRoom--;
			}
			GUI.enabled = true;
			GUI.Label(new Rect(555, 155, 75, 25), specRoom[selectedSpecRoom], GameSettings.createRoomOptionsStyle);
			GUI.enabled = selectedSpecRoom < specRoom.Length - 1;
			if (GUI.Button(new Rect(645, 155, 25, 25), ">"))
			{
				thisAudioSource.clip = ClickSong;
				thisAudioSource.Play();
				selectedSpecRoom++;
			}

			GUI.enabled = true;

			GUI.Label(new Rect(320, 160, 300, 30), xml.button38);
			GUI.enabled = selectedGameMode > 0;
			if (GUI.Button(new Rect(300, 190, 25, 25), "<"))
			{
				thisAudioSource.clip = ClickSong;
				thisAudioSource.Play();
				selectedGameMode--;
			}
			GUI.enabled = true;
			GUI.Label(new Rect(330, 190, 75, 25), gameModes[selectedGameMode], GameSettings.createRoomOptionsStyle);
			GUI.enabled = selectedGameMode < gameModes.Length - 1;
			if (GUI.Button(new Rect(410, 190, 25, 25), ">"))
			{
				thisAudioSource.clip = ClickSong;
				thisAudioSource.Play();
				selectedGameMode++;
			}

			if (gameModes[selectedGameMode] == "FFA")
			{
				GUI.enabled = true;

				GUI.Label(new Rect(137, 160, 300, 30), xml.button39);
				GUI.enabled = selectedKillLimit > 0;
				if (GUI.Button(new Rect(100, 190, 25, 25), "<"))
				{
					thisAudioSource.clip = ClickSong;
					thisAudioSource.Play();
					selectedKillLimit--;
				}
				GUI.enabled = true;
				GUI.Label(new Rect(130, 190, 75, 25), killLimits[selectedKillLimit].ToString(), GameSettings.createRoomOptionsStyle);
				GUI.enabled = selectedKillLimit < killLimits.Length - 1;
				if (GUI.Button(new Rect(210, 190, 25, 25), ">"))
				{
					thisAudioSource.clip = ClickSong;
					thisAudioSource.Play();
					selectedKillLimit++;
				}
			}

			GUI.enabled = true;

			GUI.Label(new Rect(327, 220, 300, 30), xml.button40);
			GUI.enabled = selectedMap > 0;
			if (GUI.Button(new Rect(220, 250, 25, 25), "<"))
			{
				thisAudioSource.clip = ClickSong;
				thisAudioSource.Play();
				selectedMap--;
			}
			GUI.enabled = true;
			GUI.Label(new Rect(250, 250, 240, 30), availableMaps[selectedMap].mapName, GameSettings.createRoomOptionsStyle);
			GUI.enabled = selectedMap < availableMaps.Length - 1;
			if (GUI.Button(new Rect(495, 250, 25, 25), ">"))
			{
				thisAudioSource.clip = ClickSong;
				thisAudioSource.Play();
				selectedMap++;
			}
			GUI.enabled = true;

			if (GUI.Button(new Rect(browseWindowSize.x - 130, browseWindowSize.y - 60, 100, 35), xml.button41))
			{
				thisAudioSource.clip = ClickSong;
				thisAudioSource.Play();
				StartCoroutine(JoinCreateRoom(
					roomName, availableMaps[selectedMap].mapName, playerLimits[selectedPlayerLimit], gameModes[selectedGameMode], specRoom[selectedSpecRoom], (float)roundDurations[selectedGameMode], gameModes[selectedGameMode] == "FFA" ? killLimits[selectedKillLimit] : -1
				));

				//Remember player settings when creating new room
				PlayerPrefs.SetInt(playerLimitPrefsName, selectedPlayerLimit);
				PlayerPrefs.SetInt(gameModePrefsName, selectedGameMode);
				PlayerPrefs.SetInt(specRoomPrefsName, selectedSpecRoom);
				PlayerPrefs.SetInt(selectedMapPrefsName, selectedMap);
			}

			if (GUI.Button(new Rect(browseWindowSize.x - 170, browseWindowSize.y - 215, 135, 30), xml.button49))
			{
				thisAudioSource.clip = ClickSong;
				thisAudioSource.Play();
				currentWindow = CurrentWindow.Information;
			}

			if (GUI.Button(new Rect(30, browseWindowSize.y - 60, 100, 35), xml.button9))
			{
				thisAudioSource.clip = ClickSong;
				thisAudioSource.Play();
				createRoom = false;
			}
		}

		if (refreshingRooms && currentWindow == CurrentWindow.PlayNow && createRoom == false)
		{
			GUI.Box(new Rect(browseWindowSize.x / 2 - 75, browseWindowSize.y / 2 - 30, 175, 30), xml.button42);
		}
		//GUI.DragWindow (new Rect (0, 0, 10000, 35));
	}

	public void RefreshRoomss()
	{
		StartCoroutine(RefreshRooms());
	}
	//Networking Part ********************************************************************************************************************************************
	IEnumerator RefreshRooms()
	{
		refreshingRooms = true;
		selectedRoom = -1;

		while (PhotonNetwork.connected)
		{
			if (PhotonNetwork.connectionState != ConnectionState.Disconnecting)
			{
				PhotonNetwork.Disconnect();
			}
			yield return null;
		}

		while (!PhotonNetwork.connected)
		{
			if (PhotonNetwork.connectionState != ConnectionState.InitializingApplication && PhotonNetwork.connectionState != ConnectionState.Connecting &&
				PhotonNetwork.connectionState != ConnectionState.Disconnecting && PhotonNetwork.connectionState != ConnectionState.Connected)
			{
				PhotonNetwork.ConnectUsingSettings(networkVersion);
			}
			yield return null;
		}

		yield return new WaitForSeconds(4f);

		currentPing = PhotonNetwork.GetPing();

		
		availableRooms = PhotonNetwork.GetRoomList();

		print(availableRooms.Length.ToString() + " available rooms");

		totalPlayers = PhotonNetwork.countOfPlayers;
		totalRooms = availableRooms.Length;
		Debug.Log(totalPlayers);
		refreshingRooms = false;
		Refreshing.SetActive(false);
		RoomsLisList();
	}

	IEnumerator JoinCreateRoom(string newRoomName, string newMapName, int newMaxPlayers, string newGameMode, string newSpecMode, float roundDuration, int newKillLimit)
	{
		loadingMap = true;

		print(xml.button43);
	
		while (!PhotonNetwork.connected)
		{
			if (PhotonNetwork.connectionState != ConnectionState.InitializingApplication && PhotonNetwork.connectionState != ConnectionState.Connecting &&
				   PhotonNetwork.connectionState != ConnectionState.Disconnecting && PhotonNetwork.connectionState != ConnectionState.Connected)
			{

				PhotonNetwork.ConnectUsingSettings(networkVersion);
			}
			yield return null;
		}

		yield return new WaitForSeconds(8.10f);

		PhotonNetwork.playerName = " " + playerName + " ";
		PlayerPrefs.SetString(playerNameJoinPrefsName, PhotonNetwork.playerName);

		//Create Room
		if (PhotonNetwork.connected)
		{
			Hashtable roomProperties = new Hashtable();
			roomProperties["MapName"] = newMapName;
			roomProperties["GameMode"] = newGameMode;
			roomProperties["SpecMode"] = newSpecMode;
			roomProperties["RoundDuration"] = roundDuration;
			if (newKillLimit > 0)
			{
				roomProperties["KillLimit"] = newKillLimit; //Used only for FFA mode
			}
			string[] exposedProps = new string[newKillLimit > 0 ? 5 : 4];
			exposedProps[0] = "MapName";
			exposedProps[1] = "GameMode";
			exposedProps[2] = "SpecMode";
			exposedProps[3] = "RoundDuration";
			if (newKillLimit > 0)
			{
				exposedProps[4] = "KillLimit";
			}

			RoomOptions roomOptions = new RoomOptions();
			roomOptions.CleanupCacheOnLeave = true;
			if(isFakeMode)
            {
				roomOptions.IsOpen = false;
				roomOptions.IsVisible = false;
			}
			else
            {
				roomOptions.IsOpen = true;
				roomOptions.IsVisible = true;
			}
			
			roomOptions.MaxPlayers = (byte)newMaxPlayers;
			roomOptions.CustomRoomProperties = roomProperties;
			roomOptions.CustomRoomPropertiesForLobby = exposedProps;
			PhotonNetwork.JoinOrCreateRoom(newRoomName, roomOptions, null);

		}
		else
		{
			GameSettings.errorText = xml.button44;
			SceneManager.LoadScene(1);
			yield return null;
		}
	}

	public void loadfitscene()
	{

		SceneManager.LoadScene(0);

	}

	void OnJoinedRoom()
	{
		//Load room map
		print(xml.button45);
		PhotonNetwork.isMessageQueueRunning = false;
		SceneManager.LoadScene((string)PhotonNetwork.room.CustomProperties["MapName"]);
	}

	void OnJoinedOfflineRoom()
	{
		//Load room map
		SceneManager.LoadScene(availableMaps[selectedMap].mapName);
	}

	void OnPhotonCreateRoomFailed()
	{
		FailButton.gameObject.SetActive(true);
		FailButton2.gameObject.SetActive(true);
		FailButton3.gameObject.SetActive(true);
		this.StopAllCoroutines();
	}

	void OnPhotonJoinOrCreateRoomFailed()
	{
		FailButton.gameObject.SetActive(true);
		FailButton2.gameObject.SetActive(true);
		FailButton3.gameObject.SetActive(true);
		this.StopAllCoroutines();
	}

	void OnPhotonJoinRoomFailed()
	{
		FailButton.gameObject.SetActive(true);
		FailButton2.gameObject.SetActive(true);
		FailButton3.gameObject.SetActive(true);
		this.StopAllCoroutines();
	}

	void OnConnectionFail()
	{
		FailButton.gameObject.SetActive(true);
		FailButton2.gameObject.SetActive(true);
		FailButton3.gameObject.SetActive(true);
		this.StopAllCoroutines();
	}

	void OnFailedToConnectToPhoton()
	{
		FailButton2.gameObject.SetActive(true);
		FailButton.gameObject.SetActive(true);
		FailButton3.gameObject.SetActive(true);
		this.StopAllCoroutines();
	}

	void OnPhotonRandomJoinFailed()
	{
		FailButton2.gameObject.SetActive(true);
		FailButton.gameObject.SetActive(true);
		FailButton3.gameObject.SetActive(true);
		this.StopAllCoroutines();
	}

	void OnCustomAuthenticationFailed()
	{
		FailButton2.gameObject.SetActive(true);
		FailButton.gameObject.SetActive(true);
		FailButton3.gameObject.SetActive(true);
		this.StopAllCoroutines();
	}
#pragma warning disable 0219
	void Loaded()
	{

		GameOnConnect = true;
		//Spawn all required objects
		Transform allPoints = GameObject.Find("_ReferencePoints").transform;

		Transform welcomeCameraRef = allPoints.Find("WelcomeCamera");
		GameObject roomControllerObject = Instantiate(roomControllerPrefab, welcomeCameraRef.position, welcomeCameraRef.rotation) as GameObject;
		RoomController roomController = roomControllerObject.GetComponent<RoomController>();
		roomController.isFakePlayer = isFakeMode;
		roomController.isRoomCreator = isRoomCreator;
		//GameObject miniMaps = Instantiate(Minimap, transform.position, transform.rotation) as GameObject;

		Transform GrenadeSpots = allPoints.Find("Hegrenades");

		foreach (Transform child in GrenadeSpots)
		{
			GameObject grenadeSpotObj = Instantiate(GrenadeSpotPrefab, child.position, child.rotation) as GameObject;
			GrenadeSpot gs = grenadeSpotObj.GetComponent<GrenadeSpot>();
			gs.rc = roomController;
			gs.thisT = grenadeSpotObj.transform;
		}

		Transform spawnPoints = allPoints.Find("SpawnPoints");

		foreach (Transform child in spawnPoints)
		{
			if (child.name.StartsWith("TeamASpawn"))
			{
				roomController.teamASpawnPoints.Add(child);
			}
			if (child.name.StartsWith("TeamBSpawn"))
			{
				roomController.teamBSpawnPoints.Add(child);
			}
		}

		Transform spawnPointsNormal = allPoints.Find("SpawnPointsNormal");

		foreach (Transform child in spawnPointsNormal)
		{
			if (child.name.StartsWith("TeamANormal1"))
			{
				roomController.teamANormalPoints.Add(child);
			}
			if (child.name.StartsWith("TeamANormal2"))
			{
				roomController.teamANormalPoints.Add(child);
			}
			if (child.name.StartsWith("TeamANormal3"))
			{
				roomController.teamANormalPoints.Add(child);
			}
			if (child.name.StartsWith("TeamANormal4"))
			{
				roomController.teamANormalPoints.Add(child);
			}
			if (child.name.StartsWith("TeamANormal5"))
			{
				roomController.teamANormalPoints.Add(child);
			}
			if (child.name.StartsWith("TeamANormal6"))
			{
				roomController.teamANormalPoints.Add(child);
			}
			if (child.name.StartsWith("TeamANormal7"))
			{
				roomController.teamANormalPoints.Add(child);
			}
			if (child.name.StartsWith("TeamANormal8"))
			{
				roomController.teamANormalPoints.Add(child);
			}
			if (child.name.StartsWith("TeamBNormal1"))
			{
				roomController.teamBNormalPoints.Add(child);
			}
			if (child.name.StartsWith("TeamBNormal2"))
			{
				roomController.teamBNormalPoints.Add(child);
			}
			if (child.name.StartsWith("TeamBNormal3"))
			{
				roomController.teamBNormalPoints.Add(child);
			}
			if (child.name.StartsWith("TeamBNormal4"))
			{
				roomController.teamBNormalPoints.Add(child);
			}
			if (child.name.StartsWith("TeamBNormal5"))
			{
				roomController.teamBNormalPoints.Add(child);
			}
			if (child.name.StartsWith("TeamBNormal6"))
			{
				roomController.teamBNormalPoints.Add(child);
			}
			if (child.name.StartsWith("TeamBNormal7"))
			{
				roomController.teamBNormalPoints.Add(child);
			}
			if (child.name.StartsWith("TeamBNormal8"))
			{
				roomController.teamBNormalPoints.Add(child);
			}

		}

		Destroy(this.gameObject);

	}

}
