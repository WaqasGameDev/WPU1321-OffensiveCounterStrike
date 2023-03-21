using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using Hashtable = ExitGames.Client.Photon.Hashtable; //Replace default Hashtables with Photon hashtables

public class RoomUI : Photon.MonoBehaviour
{
    public Sprite whiteTexture;
    public Sprite hitDetectorTexture;
	public Sprite hpTexture;
	public Sprite buyTexture;
	public Sprite fireToggleOnTexture;
	public Sprite fireToggleOffTexture;
	public Sprite bombTexture;
	public Sprite timeTexture;
	public Sprite shieldTexture;
	public Sprite roundTexture;
	public Sprite roundFFATexture;
	public Sprite roundBombTexture;
	public Sprite Bomb;
	public Sprite BombBorder;
	public Font Ammo;
	public Sprite RoundMiddleBackground;
	public int playerTeam;

	public Transform nameLabelTransform;
	public Text nameLabel;
	public Text nameLabelShadow;
#if UNITY_EDITOR || UNITY_ANDROID || UNITY_IOS || UNITY_WP8 || FFARound
	//Mobile controller graphics
	public Sprite navigationCircle;
    public Sprite navigationButton;
	public Sprite navigationSke;
    public Sprite gunFireIcon;
    public Sprite gunReloadIcon;
    public Sprite gunAimIcon;
    public Sprite jumpIcon;
	public Sprite crouchIcon;
    public Sprite switchWeaponIcon;
	public Sprite C4Icon;
	public Sprite C4IconBack;
	public Sprite DiffuseIcon;
	public Sprite GrenadeIcon;
	public Sprite FlashIcon;
	public Sprite Gun1;
	public Sprite Gun2;
	public Sprite Gun3;
	public Sprite Gun4;
	public Sprite Gun5;
	public Sprite ChatSp;
	public Sprite Lookicon;

	bool toggleFire;
#endif

	//Crosshair
	GameObject crosshairRoot;
    Image[] crosshairSet = new Image[4];
    Image redScreen;


	Image shopBuyT;
	Image fireToggle;

	Image roundHow;
	Image RoundMiddle;
	
	Image roundHowFFA;

	Image roundBombIcon;
	Image BombI;
	Image BombBorderI;
	Image HpI;
	Image HpBack;
	Image FlashImage;
	CanvasGroup FlashCanvas;
    Image[] hitDetectorSet = new Image[4];

    bool previousHitDetector = false;

    //General HUD - this will include general graphics like Round Time, Ammo, HP, Buy Menu buttons etc.
    Canvas mainCanvas;
	Canvas unDisputedCanvas;

	Text roundTimeText;

	Text roundCounterScoreText;

	Text roundTerorScoreText;	
	Text RoundCounterText;
	Text RoundTerorText;
    Text cashText;
	Text KillText;
    Text addMoreCashText;
    Text weaponAndAmmoText;
	Text Gun1Ammo;
	Text Gun2Ammo;
	Text killedShowText;
	Outline KilledOut;


    [System.Serializable]
    public class ActionReports
    {
        public Text mainText;
        public Text textShadow;
    }

    public ActionReports[] actionReports;
	public ActionReports[] actionWeaponsReports;
    public ActionReports[] chatMessages;

    ActionReports respawnTimeText = new ActionReports();
    ActionReports buyMenuText = new ActionReports();
	ActionReports shieldText = new ActionReports();

    Image sniperScope;
    float scopeTextureRatio;
    Sprite scopeTextureTmp;


    //Mobile movement
    [System.Serializable]
    public class TouchMovements
    {
        public Image backgroundCircle;
        public Image mainButton;
        public Rect defaultArea;
        public Vector2 touchOffset;
        public Vector2 currentTouchPos;
        public int touchID;
        public bool isActive = false;
    }

    TouchMovements moveTouch = new TouchMovements();
    TouchMovements fpsLookTouch = new TouchMovements();

    [System.Serializable]
    public class ActionButton
    {
        public Image background;
        public Image icon;
        public Rect mainArea;
        public bool isActive = false;
        public int touchID;
    }

    ActionButton fireButton = new ActionButton();
    ActionButton reloadButton = new ActionButton();
    ActionButton aimButton = new ActionButton();
    ActionButton jumpButton = new ActionButton();
	ActionButton crouchButton = new ActionButton();
	ActionButton c4Button = new ActionButton();
	ActionButton DiffuseButton = new ActionButton();
	ActionButton GrenadeButton = new ActionButton();
	ActionButton FlashButton = new ActionButton();
	ActionButton Gun1Button = new ActionButton();
	ActionButton Gun2Button = new ActionButton();
	ActionButton Gun3Button = new ActionButton();
	ActionButton ToggleFire = new ActionButton();
	ActionButton ChatButton = new ActionButton();
	ActionButton LookWeaponButton = new ActionButton();

    //Implement fast swiping to look around
    Vector2 initialTouchPos = Vector3.zero;
    float swipeTime = 0;
    //How long to keep rotating after we swiped
    float keepRotatingTime = 0;
    float previousTouchDirX = 0;
	public float C4Create = 0f;
	public float DiffuseCreate = 0f;
	bool diffuseSound = false;


    RoomController rc;
	MultiplayerChat mpc;
	xmlReader xml;
	string languagesPrefsName = "SelectedLanguages";
	public Color aColor;

    // Use this for initialization
    void Start()
    {
		if (PlayerPrefs.GetInt("autofire", 0) == 0)
		{
			toggleFire = false;
		}
		else 
		{ 
			toggleFire = true;
		}

		aColor = Color.yellow;
		diffuseSound = false;
		xml = GetComponent<xmlReader>();
		xml.currentLanguage = PlayerPrefs.GetInt(languagesPrefsName);
        rc = GetComponent<RoomController>();
		mpc = GetComponent<MultiplayerChat>();
        actionReports = new ActionReports[GameSettings.actionReportsLimit];
		actionWeaponsReports = new ActionReports[GameSettings.actionWeaponReportsLimit];
        chatMessages = new ActionReports[GameSettings.chatMessagesLimit];
        //Use new Unity UI
        InitializeGUI();
    }

    void InitializeGUI()
    {
        //This function will initialize general GUI elements (HP, Cash, Round time and mobile controls)
        GameObject tmpObj = new GameObject("Canvas");
        tmpObj.transform.position = new Vector3(0, 0, 0);
        //tmpObj.transform.parent = this.transform;
        mainCanvas = tmpObj.AddComponent<Canvas>();
        mainCanvas.renderMode = RenderMode.ScreenSpaceOverlay;
        mainCanvas.pixelPerfect = true;

        CanvasScaler canvasScaled = tmpObj.AddComponent<CanvasScaler>();
        canvasScaled.scaleFactor = 1;
        canvasScaled.referencePixelsPerUnit = 100;

        tmpObj.AddComponent<GraphicRaycaster>();

		//FlashBang
		GameObject hpTmpObj = new GameObject("FlashBang");
		hpTmpObj.transform.position = Vector3.zero;
		hpTmpObj.transform.parent = tmpObj.transform;
		FlashImage = hpTmpObj.AddComponent<Image>();
		FlashCanvas = hpTmpObj.AddComponent<CanvasGroup>();
		FlashCanvas.alpha = 0;
		FlashCanvas.interactable = false;
		FlashCanvas.blocksRaycasts = false;
		FlashCanvas.ignoreParentGroups = false;
		FlashImage.rectTransform.anchorMin = new Vector2(0, 0);
		FlashImage.rectTransform.anchorMax = new Vector2(1, 1);
		FlashImage.rectTransform.offsetMin = new Vector2(0, 0);
		FlashImage.rectTransform.offsetMax = new Vector2(0, 0);
		FlashImage.rectTransform.pivot = new Vector2(0.5f, 0.5f);
		//###

		//Round Icon
		hpTmpObj = new GameObject("RoundIcon");
		hpTmpObj.transform.position = Vector3.zero;
		hpTmpObj.transform.parent = tmpObj.transform;
		roundHow = hpTmpObj.AddComponent<Image>();
		roundHow.sprite = roundTexture;
		roundHow.rectTransform.anchorMin = new Vector2(0.5f, 1);
		roundHow.rectTransform.anchorMax = new Vector2(0.5f, 1);
		roundHow.rectTransform.sizeDelta = new Vector2(662, 32);
		roundHow.rectTransform.pivot = new Vector2(0.5f, 1);
		roundHow.rectTransform.position = new Vector3(Screen.width / 2 - 15f, Screen.height + 2.4f, 0);
		//###






		//Round Icon middle background
		hpTmpObj = new GameObject("RoundMiddleBack");
		hpTmpObj.transform.position = Vector3.zero;
		hpTmpObj.transform.parent = tmpObj.transform;
		RoundMiddle = hpTmpObj.AddComponent<Image>();
		Color temp = RoundMiddle.color;
		temp.a = 0.1f;
		RoundMiddle.color = temp;
		RoundMiddle.sprite = RoundMiddleBackground;
		//RoundMiddle.color = new Color();
		RoundMiddle.rectTransform.anchorMin = new Vector2(0.5f, 1);
		RoundMiddle.rectTransform.anchorMax = new Vector2(0.5f, 1);
		RoundMiddle.rectTransform.sizeDelta = new Vector2(110f, 32);
		RoundMiddle.rectTransform.pivot = new Vector2(0.5f, 1);
		RoundMiddle.rectTransform.position = new Vector3(Screen.width / 2 - 11f, Screen.height + 2.4f, 0);
		//###

		//BombBorderI Icon
		hpTmpObj = new GameObject("BombBorder");
		hpTmpObj.transform.position = Vector3.zero;
		hpTmpObj.transform.parent = tmpObj.transform;
		BombBorderI = hpTmpObj.AddComponent<Image>();
		BombBorderI.sprite = BombBorder;
		BombBorderI.color = Color.yellow;
		BombBorderI.rectTransform.anchorMin = new Vector2(0.5f, 0);
		BombBorderI.rectTransform.anchorMax = new Vector2(0.5f, 0);
		BombBorderI.rectTransform.sizeDelta = new Vector2(291, 15);
		BombBorderI.rectTransform.pivot = new Vector2(0.5f, 1);
		BombBorderI.rectTransform.position = new Vector3(Screen.width / 2, Screen.height / 2 * 0.75f, 0);
		BombBorderI.gameObject.SetActive (false);
		//###

		//BombI Icon
		hpTmpObj = new GameObject("BombI");
		hpTmpObj.transform.position = Vector3.zero;
		hpTmpObj.transform.parent = tmpObj.transform;
		BombI = hpTmpObj.AddComponent<Image>();
		BombI.sprite = Bomb;
		BombI.color = Color.yellow;
		BombI.rectTransform.anchorMin = new Vector2(0.5f, 0);
		BombI.rectTransform.anchorMax = new Vector2(0.5f, 0);
		BombI.rectTransform.sizeDelta = new Vector2(4, 7.5f);
		BombI.rectTransform.pivot = new Vector2(0, 1);
		BombI.rectTransform.position = new Vector3(Screen.width / 2 - 141, Screen.height / 2 * 0.75f - 3.5f, 0);
		BombI.gameObject.SetActive (false);
		//###


		//RBomb Icon
		hpTmpObj = new GameObject("BombRoundIcon");
		hpTmpObj.transform.position = Vector3.zero;
		hpTmpObj.transform.parent = tmpObj.transform;
		roundBombIcon = hpTmpObj.AddComponent<Image>();
		roundBombIcon.sprite = C4Icon;
		roundBombIcon.rectTransform.anchorMin = new Vector2(0.5f, 1);
		roundBombIcon.rectTransform.anchorMax = new Vector2(0.5f, 1);
		roundBombIcon.rectTransform.sizeDelta = new Vector2(40, 35);
		roundBombIcon.rectTransform.pivot = new Vector2(0.5f, 1);
		roundBombIcon.rectTransform.position = new Vector3(Screen.width / 2 - 10f, Screen.height + 2.5f, 0);
		//###

		//Round FFA Icon
		hpTmpObj = new GameObject("FFARound");
		hpTmpObj.transform.position = Vector3.zero;
		hpTmpObj.transform.parent = tmpObj.transform;
		roundHowFFA = hpTmpObj.AddComponent<Image>();
		roundHowFFA.sprite = roundFFATexture;
		roundHowFFA.rectTransform.anchorMin = new Vector2(0.5f, 1);
		roundHowFFA.rectTransform.anchorMax = new Vector2(0.5f, 1);
		roundHowFFA.rectTransform.sizeDelta = new Vector2(318, 34);
		roundHowFFA.rectTransform.pivot = new Vector2(0.5f, 1);
		roundHowFFA.rectTransform.position = new Vector3(Screen.width / 2 - 15f, Screen.height + 2.4f, 0);
		//###

        //Round Time
        hpTmpObj = new GameObject("RoundTimeText");
        hpTmpObj.transform.position = Vector3.zero;
        hpTmpObj.transform.parent = tmpObj.transform;
        roundTimeText = hpTmpObj.AddComponent<Text>();
        //roundTimeText.font = GameSettings.guiSkin.font;

		roundTimeText.font = GameSettings.guiSkin.customStyles[1].font;

		roundTimeText.fontSize = 24;
		roundTimeText.color = GameSettings.roundtColor;
        roundTimeText.text = "00:00";
        roundTimeText.rectTransform.sizeDelta = new Vector2(100, 30);
        roundTimeText.rectTransform.anchorMin = new Vector2(0.5f, 1);
        roundTimeText.rectTransform.anchorMax = new Vector2(0.5f, 1);
        roundTimeText.rectTransform.pivot = new Vector2(0.5f, 1);
        roundTimeText.rectTransform.position = new Vector3(Screen.width / 2 - 12f, Screen.height - 3, 0);
        roundTimeText.alignment = TextAnchor.MiddleCenter;



		//Round Counter Score
		hpTmpObj = new GameObject("RoundCounterScoreText");
		hpTmpObj.transform.position = Vector3.zero;
		hpTmpObj.transform.parent = tmpObj.transform;
		roundCounterScoreText = hpTmpObj.AddComponent<Text>();
		roundCounterScoreText.font = GameSettings.guiSkin.customStyles[1].font;
		roundCounterScoreText.fontSize = 24;
		roundCounterScoreText.color = GameSettings.teamARoundColor;
		roundCounterScoreText.text = "";
		roundCounterScoreText.rectTransform.sizeDelta = new Vector2(30, 35);
		roundCounterScoreText.rectTransform.anchorMin = new Vector2(0.5f, 1);
		roundCounterScoreText.rectTransform.anchorMax = new Vector2(0.5f, 1);
		roundCounterScoreText.rectTransform.pivot = new Vector2(0.5f, 1);
		roundCounterScoreText.rectTransform.position = new Vector3(Screen.width / 2 - 54, Screen.height - 6f, 0);
		roundCounterScoreText.alignment = TextAnchor.UpperCenter;


		//Round Teror Score
		hpTmpObj = new GameObject("RoundTerorScoreText");
		hpTmpObj.transform.position = Vector3.zero;
		hpTmpObj.transform.parent = tmpObj.transform;
		roundTerorScoreText = hpTmpObj.AddComponent<Text>();
		roundTerorScoreText.font = GameSettings.guiSkin.customStyles[1].font;

		roundTerorScoreText.fontSize = 24;
		roundTerorScoreText.color = GameSettings.teamBColor;
		roundTerorScoreText.text = "";
		roundTerorScoreText.rectTransform.sizeDelta = new Vector2(30, 35);
		roundTerorScoreText.rectTransform.anchorMin = new Vector2(0.5f, 1);
		roundTerorScoreText.rectTransform.anchorMax = new Vector2(0.5f, 1);
		roundTerorScoreText.rectTransform.pivot = new Vector2(0.5f, 1);
		roundTerorScoreText.rectTransform.position = new Vector3(Screen.width / 2 + 30f, Screen.height - 6f, 0);
		roundTerorScoreText.alignment = TextAnchor.UpperCenter;



        hpTmpObj = new GameObject("RoundTerorText");
        hpTmpObj.transform.position = Vector3.zero;
        hpTmpObj.transform.parent = tmpObj.transform;
		RoundTerorText = hpTmpObj.AddComponent<Text>();
		RoundTerorText.font = GameSettings.guiSkin.customStyles[3].font;

		RoundTerorText.fontSize = 18;
		RoundTerorText.color = GameSettings.teamBColor;
		RoundTerorText.text = "TERRORISTS";
		RoundTerorText.rectTransform.sizeDelta = new Vector2(105, 35);
		RoundTerorText.rectTransform.anchorMin = new Vector2(0.5f, 1);
		RoundTerorText.rectTransform.anchorMax = new Vector2(0.5f, 1);
		RoundTerorText.rectTransform.pivot = new Vector2(0.5f, 1);
		RoundTerorText.rectTransform.position = new Vector3(Screen.width / 2 + 96f, Screen.height - 0.0f, 0);
		RoundTerorText.alignment = TextAnchor.MiddleCenter;



        hpTmpObj = new GameObject("RoundCounterText");
		hpTmpObj.transform.position = Vector3.zero;
		hpTmpObj.transform.parent = tmpObj.transform;
		RoundCounterText = hpTmpObj.AddComponent<Text>();
		RoundCounterText.font = GameSettings.guiSkin.customStyles[3].font;
		RoundCounterText.fontSize = 18;
		RoundCounterText.color = GameSettings.teamARoundColor;
		RoundCounterText.text = "COUNTER TERRORISTS";
		RoundCounterText.rectTransform.sizeDelta = new Vector2(250, 35);
		RoundCounterText.rectTransform.anchorMin = new Vector2(0.5f, 1);
		RoundCounterText.rectTransform.anchorMax = new Vector2(0.5f, 1);
		RoundCounterText.rectTransform.pivot = new Vector2(0.5f, 1);
		RoundCounterText.rectTransform.position = new Vector3(Screen.width / 2 - 170, Screen.height - 0.0f, 0);
		RoundCounterText.alignment = TextAnchor.MiddleCenter;



		//Player Cash
		hpTmpObj = new GameObject("CashText");
        hpTmpObj.transform.position = Vector3.zero;
        hpTmpObj.transform.parent = tmpObj.transform;
        cashText = hpTmpObj.AddComponent<Text>();
        cashText.font = GameSettings.guiSkin.font;
        cashText.fontSize = 20;
		cashText.color = Color.yellow;
        cashText.text = "";
        cashText.rectTransform.sizeDelta = new Vector2(200, 50);
        cashText.rectTransform.anchorMin = new Vector2(0, 0);
        cashText.rectTransform.anchorMax = new Vector2(0, 0);
        cashText.rectTransform.pivot = new Vector2(0, 0);
		cashText.rectTransform.position = new Vector3(Screen.width / 2 * 0.3f, 10, 0);
        cashText.alignment = TextAnchor.LowerLeft;

		hpTmpObj = new GameObject("KillText");
		hpTmpObj.transform.position = Vector3.zero;
		hpTmpObj.transform.parent = tmpObj.transform;
		KillText = hpTmpObj.AddComponent<Text>();
		KillText.font = GameSettings.KillFont;
		KillText.fontSize = 50;
		KillText.text = "";
		KillText.rectTransform.sizeDelta = new Vector2(Screen.width / 2, Screen.height / 8.5f);
		KillText.alignment = TextAnchor.UpperCenter;

        //Adding player cash
        GameObject tmpCashObject = Instantiate(cashText.gameObject, Vector3.zero, Quaternion.identity) as GameObject;
        tmpCashObject.name = "AddMoreCashText";
        addMoreCashText = tmpCashObject.GetComponent<Text>();
        addMoreCashText.rectTransform.SetParent(tmpObj.transform);
        addMoreCashText.rectTransform.position = new Vector3(275, 35, 0);

		GameObject tmpKillObject = Instantiate(KillText.gameObject, Vector3.zero, Quaternion.identity) as GameObject;
		tmpKillObject.name = "KilledShowText";
		KilledOut = tmpKillObject.AddComponent<Outline> ();
		KilledOut.effectDistance = new Vector2 (1.5f, -1.5f);
		killedShowText = tmpKillObject.GetComponent<Text>();
		killedShowText.fontStyle = FontStyle.Italic;
		killedShowText.rectTransform.SetParent(tmpObj.transform);
		killedShowText.rectTransform.anchorMin = new Vector2(0.5f, 1);
		killedShowText.rectTransform.anchorMax = new Vector2(0.5f, 1);
		killedShowText.rectTransform.pivot = new Vector2(0.5f, 1);
		killedShowText.rectTransform.position = new Vector3(Screen.width / 2, Screen.height /2 * 1.7f, 0);

        //Weapon and Ammo
        hpTmpObj = new GameObject("WeaponAndAmmo");
        hpTmpObj.transform.position = Vector3.zero;
        hpTmpObj.transform.parent = tmpObj.transform;
        weaponAndAmmoText = hpTmpObj.AddComponent<Text>();
        weaponAndAmmoText.font = GameSettings.guiSkin.font;
        weaponAndAmmoText.fontSize = 22;
        weaponAndAmmoText.color = GameSettings.HUDColor;
        weaponAndAmmoText.text = "";
        weaponAndAmmoText.rectTransform.sizeDelta = new Vector2(350, 50);
        weaponAndAmmoText.rectTransform.anchorMin = new Vector2(1, 0);
        weaponAndAmmoText.rectTransform.anchorMax = new Vector2(1, 0);
        weaponAndAmmoText.rectTransform.pivot = new Vector2(1, 0);
        weaponAndAmmoText.rectTransform.position = new Vector3(mainCanvas.pixelRect.width - 10, 10, 0);
        weaponAndAmmoText.alignment = TextAnchor.LowerRight;

		//Hp Icon
		hpTmpObj = new GameObject("Hp Back");
		hpTmpObj.transform.position = Vector3.zero;
		hpTmpObj.transform.parent = tmpObj.transform;
		HpBack = hpTmpObj.AddComponent<Image>();
		HpBack.sprite = BombBorder;
		HpBack.color = Color.white;
		HpBack.rectTransform.anchorMin = new Vector2(0.5f, 0);
		HpBack.rectTransform.anchorMax = new Vector2(0.5f, 0);
		HpBack.rectTransform.sizeDelta = new Vector2(305, 15);
		HpBack.rectTransform.pivot = new Vector2(0.5f, 1);
		HpBack.rectTransform.position = new Vector3(Screen.width / 2 - 3.97f, Screen.height / 2 * 0.10f, 0);

		//###

		//Hp Icon
		hpTmpObj = new GameObject("Hp Image");
		hpTmpObj.transform.position = Vector3.zero;
		hpTmpObj.transform.parent = tmpObj.transform;
		HpI = hpTmpObj.AddComponent<Image>();
		HpI.sprite = Bomb;
		HpI.color = Color.white;
		HpI.rectTransform.anchorMin = new Vector2(0.5f, 0);
		HpI.rectTransform.anchorMax = new Vector2(0.5f, 0);
		HpI.rectTransform.sizeDelta = new Vector2(5, 15);
		HpI.rectTransform.pivot = new Vector2(0, 1);
		HpI.rectTransform.position = new Vector3(Screen.width / 2 - 155.5f, (Screen.height / 2 * 0.10f) - 1, 0);



        GameObject hpTmpObj1;

        //Setup crosshair
        crosshairRoot = new GameObject("CrosshairRoot");
        crosshairRoot.transform.position = Vector3.zero;
        crosshairRoot.transform.parent = tmpObj.transform;

        for (int i = 0; i < 4; i++)
        {
            hpTmpObj = new GameObject("Crosshair " + i.ToString());
            hpTmpObj.transform.position = Vector3.zero;
            hpTmpObj.transform.parent = tmpObj.transform;
            crosshairSet[i] = hpTmpObj.AddComponent<Image>();
            crosshairSet[i].sprite = whiteTexture;
			crosshairSet [i].color = aColor;
            crosshairSet[i].rectTransform.sizeDelta = new Vector2(3.5f, 9.5f);
            crosshairSet[i].rectTransform.anchorMin = new Vector2(0.5f, 0.5f);
            crosshairSet[i].rectTransform.anchorMax = new Vector2(0.5f, 0.5f);
            crosshairSet[i].rectTransform.pivot = new Vector2(0.5f, 0);
            crosshairSet[i].rectTransform.SetParent(crosshairRoot.transform);
            crosshairSet[i].rectTransform.position = new Vector3(0, 0, 0);

			if (i == 0)
			{
				//Roated to top
				crosshairSet[i].rectTransform.sizeDelta = new Vector2(2.5f, 8.0f);
				crosshairSet[i].rectTransform.eulerAngles = new Vector3(0, 0, 0);
			}
			if (i == 1)
			{
				//Rotated to bottom
				crosshairSet[i].rectTransform.sizeDelta = new Vector2(2.5f, 8.5f);
				crosshairSet[i].rectTransform.eulerAngles = new Vector3(0, 0, 180);
			}
			if (i == 2)
			{
				//Rotated to left
				crosshairSet[i].rectTransform.sizeDelta = new Vector2(2.0f, 8.5f);
				crosshairSet[i].rectTransform.eulerAngles = new Vector3(0, 0, 90);
			}
			if (i == 3)
			{
				//Rotated to right
				crosshairSet[i].rectTransform.sizeDelta = new Vector2(2.0f, 8.5f);
				crosshairSet[i].rectTransform.eulerAngles = new Vector3(0, 0, -90);
			}
        }
        //###

        //Set hit detectors
        int distanceTmp = 125;
        int detectorWidth = 128;
        int detectorHeight = 31;

        for (int i = 0; i < hitDetectorSet.Length; i++)
        {
            hpTmpObj = new GameObject("HitDetector " + i.ToString());
            hpTmpObj.transform.position = Vector3.zero;
            hpTmpObj.transform.parent = tmpObj.transform;
            hitDetectorSet[i] = hpTmpObj.AddComponent<Image>();
            hitDetectorSet[i].sprite = hitDetectorTexture;
            hitDetectorSet[i].color = new Color(1, 1, 1, 0);
            hitDetectorSet[i].rectTransform.sizeDelta = new Vector2(detectorWidth, detectorHeight);
            hitDetectorSet[i].rectTransform.anchorMin = new Vector2(0.5f, 0.5f);
            hitDetectorSet[i].rectTransform.anchorMax = new Vector2(0.5f, 0.5f);
            hitDetectorSet[i].rectTransform.pivot = new Vector2(0.5f, 0);
            hitDetectorSet[i].rectTransform.position = new Vector3(0, 0, 0);

            if (i == 0)
            {
                //Roated to top
                hitDetectorSet[i].rectTransform.eulerAngles = new Vector3(0, 0, 0);
                hitDetectorSet[i].rectTransform.position = new Vector3(mainCanvas.pixelRect.width / 2, mainCanvas.pixelRect.height / 2 + detectorHeight + distanceTmp, 0);
            }
            if (i == 1)
            {
                //Rotated to bottom
                hitDetectorSet[i].rectTransform.eulerAngles = new Vector3(0, 0, 180);
                hitDetectorSet[i].rectTransform.position = new Vector3(mainCanvas.pixelRect.width / 2, mainCanvas.pixelRect.height / 2 - detectorHeight - distanceTmp, 0);
            }
            if (i == 2)
            {
                //Rotated to left
                hitDetectorSet[i].rectTransform.eulerAngles = new Vector3(0, 0, 90);
                hitDetectorSet[i].rectTransform.position = new Vector3(mainCanvas.pixelRect.width / 2 - detectorHeight - distanceTmp, mainCanvas.pixelRect.height / 2, 0);
            }
            if (i == 3)
            {
                //Rotated to right
                hitDetectorSet[i].rectTransform.eulerAngles = new Vector3(0, 0, -90);
                hitDetectorSet[i].rectTransform.position = new Vector3(mainCanvas.pixelRect.width / 2 + detectorHeight + distanceTmp, mainCanvas.pixelRect.height / 2, 0);
            }
        }

        //Red screen
        hpTmpObj = new GameObject("Red Screen");
        hpTmpObj.transform.position = Vector3.zero;
        hpTmpObj.transform.parent = tmpObj.transform;
        redScreen = hpTmpObj.AddComponent<Image>();
        redScreen.sprite = whiteTexture;
        redScreen.color = new Color(1, 1, 1, 0);
        redScreen.rectTransform.anchorMin = new Vector2(0.5f, 0.5f);
        redScreen.rectTransform.anchorMax = new Vector2(0.5f, 0.5f);
        redScreen.rectTransform.sizeDelta = new Vector2(64, 64);
        redScreen.rectTransform.pivot = new Vector2(0.5f, 0.5f);
        redScreen.rectTransform.position = new Vector3(mainCanvas.pixelRect.width / 2, mainCanvas.pixelRect.height / 2, 0);
        //###


		//Buy Icon
		hpTmpObj = new GameObject("BuyIcon");
		hpTmpObj.transform.position = Vector3.zero;
		hpTmpObj.transform.parent = tmpObj.transform;
		shopBuyT = hpTmpObj.AddComponent<Image>();
		shopBuyT.sprite = buyTexture;
		//shopBuyT.color = GameSettings.buyColor;
		shopBuyT.rectTransform.anchorMin = new Vector2(0.5f, 0);
		shopBuyT.rectTransform.anchorMax = new Vector2(0.5f, 0);
		shopBuyT.rectTransform.sizeDelta = new Vector2(60, 60);
		shopBuyT.rectTransform.pivot = new Vector2(0.5f, 0);
		shopBuyT.rectTransform.position = new Vector3(mainCanvas.pixelRect.width / 2, 130, 0);
		//###

		/*//Create new undisputed Canvas
		hpTmpObj = new GameObject("UndisputedCanvas");
		unDisputedCanvas = hpTmpObj.AddComponent<Canvas>();
		unDisputedCanvas.renderMode = RenderMode.ScreenSpaceOverlay;
		unDisputedCanvas.gameObject.AddComponent<GraphicRaycaster>();
		unDisputedCanvas.gameObject.AddComponent<CanvasScaler>();
		unDisputedCanvas.gameObject.layer = 2;*/



		//Setup respawn time text
		hpTmpObj = new GameObject("RrespawnTimeText");
        hpTmpObj.transform.position = Vector3.zero;
        hpTmpObj.transform.parent = tmpObj.transform;
        respawnTimeText.mainText = hpTmpObj.AddComponent<Text>();
        respawnTimeText.mainText.font = GameSettings.guiSkin.font;
        respawnTimeText.mainText.fontSize = GameSettings.actionReportStyle.fontSize;
		respawnTimeText.mainText.color = GameSettings.buyColor;
        respawnTimeText.mainText.text = "Respawn time text";
        respawnTimeText.mainText.rectTransform.sizeDelta = new Vector2(350, 25);
		respawnTimeText.mainText.rectTransform.anchorMin = new Vector2(0.5f, 1);
		respawnTimeText.mainText.rectTransform.anchorMax = new Vector2(0.5f, 1);
        respawnTimeText.mainText.rectTransform.pivot = new Vector2(0, 1);
        respawnTimeText.mainText.alignment = TextAnchor.LowerLeft;
		respawnTimeText.mainText.rectTransform.position = new Vector3(mainCanvas.pixelRect.width / 2 - 135, mainCanvas.pixelRect.height - 75, 0);

        hpTmpObj1 = Instantiate(hpTmpObj, Vector3.zero, Quaternion.identity) as GameObject;
        hpTmpObj1.name = "RrespawnTimeTextShadow";
        hpTmpObj1.transform.SetParent(tmpObj.transform);
        respawnTimeText.textShadow = hpTmpObj1.GetComponent<Text>();
        respawnTimeText.textShadow.color = GameSettings.textShadowColor;
		respawnTimeText.textShadow.rectTransform.position = new Vector3(mainCanvas.pixelRect.width / 2 - 135 + 1, mainCanvas.pixelRect.height - 75 - 1, 0);

        hpTmpObj.transform.SetParent(hpTmpObj1.transform);
        //###

        //Setup buy menu text ###
        hpTmpObj = new GameObject("BuyMenuText");
        hpTmpObj.transform.position = Vector3.zero;
        hpTmpObj.transform.parent = tmpObj.transform;
        buyMenuText.mainText = hpTmpObj.AddComponent<Text>();
        buyMenuText.mainText.font = GameSettings.guiSkin.font;
        buyMenuText.mainText.fontSize = GameSettings.actionReportStyle.fontSize;
		buyMenuText.mainText.color = GameSettings.buyColor;
        buyMenuText.mainText.text = "Buy Menu Text";
        buyMenuText.mainText.rectTransform.sizeDelta = new Vector2(400, 50);
        buyMenuText.mainText.rectTransform.anchorMin = new Vector2(0.5f, 0);
        buyMenuText.mainText.rectTransform.anchorMax = new Vector2(0.5f, 0);
        buyMenuText.mainText.rectTransform.pivot = new Vector2(0.5f, 0);
        buyMenuText.mainText.alignment = TextAnchor.MiddleCenter;
        buyMenuText.mainText.rectTransform.position = new Vector3(mainCanvas.pixelRect.width / 2, 100, 0);

        hpTmpObj1 = Instantiate(hpTmpObj, Vector3.zero, Quaternion.identity) as GameObject;
        hpTmpObj1.name = "BuyMenuTextShadow";
        hpTmpObj1.transform.SetParent(tmpObj.transform);
        buyMenuText.textShadow = hpTmpObj1.GetComponent<Text>();
        buyMenuText.textShadow.color = GameSettings.textShadowColor;
        buyMenuText.textShadow.rectTransform.position = new Vector3(mainCanvas.pixelRect.width / 2 + 1, 100 - 1, 0);

        hpTmpObj.transform.SetParent(hpTmpObj1.transform);
        //###

		//Shield menu text ###
		hpTmpObj = new GameObject("ShieldText");
		hpTmpObj.transform.position = Vector3.zero;
		hpTmpObj.transform.parent = tmpObj.transform;
		shieldText.mainText = hpTmpObj.AddComponent<Text>();
		shieldText.mainText.font = GameSettings.guiSkin.font;
		shieldText.mainText.fontSize = GameSettings.actionReportStyle.fontSize;
		shieldText.mainText.color = GameSettings.shieldColor;
		shieldText.mainText.text = "Shield Text";
		shieldText.mainText.rectTransform.sizeDelta = new Vector2(350, 25);
		shieldText.mainText.rectTransform.anchorMin = new Vector2(0.5f, 1);
		shieldText.mainText.rectTransform.anchorMax = new Vector2(0.5f, 1);
		shieldText.mainText.rectTransform.pivot = new Vector2(0, 1);
		shieldText.mainText.alignment = TextAnchor.LowerLeft;
		shieldText.mainText.rectTransform.position = new Vector3(mainCanvas.pixelRect.width / 2 - 135, mainCanvas.pixelRect.height - 75, 0);

		hpTmpObj1 = Instantiate(hpTmpObj, Vector3.zero, Quaternion.identity) as GameObject;
		hpTmpObj1.name = "ShieldTextShadow";
		hpTmpObj1.transform.SetParent(tmpObj.transform);
		shieldText.textShadow = hpTmpObj1.GetComponent<Text>();
		shieldText.textShadow.color = GameSettings.textShadowColor;
		shieldText.textShadow.rectTransform.position = new Vector3(mainCanvas.pixelRect.width / 2 - 135 + 1, mainCanvas.pixelRect.height - 75 - 1, 0);

		hpTmpObj.transform.SetParent(hpTmpObj1.transform);
		//###

        //Setup sniper scope ###
        hpTmpObj = new GameObject("Sniper Scope");
        hpTmpObj.transform.position = Vector3.zero;
        hpTmpObj.transform.parent = tmpObj.transform;
        sniperScope = hpTmpObj.AddComponent<Image>();
        sniperScope.rectTransform.anchorMin = new Vector2(0.5f, 0.5f);
        sniperScope.rectTransform.anchorMax = new Vector2(0.5f, 0.5f);
        sniperScope.rectTransform.sizeDelta = new Vector2(64, 64);
        sniperScope.rectTransform.pivot = new Vector2(0.5f, 0.5f);
        sniperScope.rectTransform.position = new Vector3(mainCanvas.pixelRect.width / 2, mainCanvas.pixelRect.height / 2, 0);
        sniperScope.gameObject.SetActive(false);
        //###

#if UNITY_ANDROID || UNITY_IOS || UNITY_WP8 || UNITY_WP8_1
        //Mobile controls
        int circleSize = 160;
        int buttonSize = 110;
		int buttonSizeSke = 80;
        int marginLeft = 75;
        int marginBottom = 125;

        //Navigation background
        GameObject cntrlTmpObj = new GameObject("Moviment Circle");
        cntrlTmpObj.transform.position = Vector3.zero;
        cntrlTmpObj.transform.parent = tmpObj.transform;
        moveTouch.backgroundCircle = cntrlTmpObj.AddComponent<Image>();
        moveTouch.backgroundCircle.rectTransform.anchorMin = new Vector2(0, 0);
        moveTouch.backgroundCircle.rectTransform.anchorMax = new Vector2(0, 0);
        moveTouch.backgroundCircle.rectTransform.sizeDelta = new Vector2(circleSize, circleSize);
        moveTouch.backgroundCircle.sprite = navigationCircle;
        moveTouch.backgroundCircle.rectTransform.pivot = new Vector2(0, 0);
        moveTouch.backgroundCircle.rectTransform.position = new Vector3(marginLeft * 1f, marginBottom * 0.75f, 0);


		//Navigation button
		cntrlTmpObj = new GameObject("Moviment Button");
        cntrlTmpObj.transform.position = Vector3.zero;
        cntrlTmpObj.transform.parent = tmpObj.transform;
        moveTouch.mainButton = cntrlTmpObj.AddComponent<Image>();
        moveTouch.mainButton.rectTransform.anchorMin = new Vector2(0, 0);
        moveTouch.mainButton.rectTransform.anchorMax = new Vector2(0, 0);
		moveTouch.mainButton.rectTransform.sizeDelta = new Vector2(buttonSizeSke, buttonSizeSke);
        moveTouch.mainButton.sprite = navigationSke;
        moveTouch.mainButton.rectTransform.pivot = new Vector2(0, 0);
		moveTouch.mainButton.rectTransform.position = new Vector3(marginLeft * 1f + (circleSize - buttonSizeSke) / 2, marginBottom * 0.75f + (circleSize - buttonSizeSke) / 2, 0);

        moveTouch.defaultArea = new Rect(moveTouch.mainButton.rectTransform.position.x,
            moveTouch.mainButton.rectTransform.position.y,
            moveTouch.mainButton.rectTransform.sizeDelta.x,
            moveTouch.mainButton.rectTransform.sizeDelta.y);

        //Mobile firing button
        cntrlTmpObj = new GameObject("Fire button background");
        cntrlTmpObj.transform.position = Vector3.zero;
        cntrlTmpObj.transform.parent = tmpObj.transform;
        fireButton.background = cntrlTmpObj.AddComponent<Image>();
        fireButton.background.rectTransform.anchorMin = new Vector2(1, 0);
        fireButton.background.rectTransform.anchorMax = new Vector2(1, 0);


		//fireButton.background.rectTransform.sizeDelta = new Vector2(0, 0);
        fireButton.background.sprite = navigationButton;
        fireButton.background.rectTransform.pivot = new Vector2(1, 0);
		fireButton.background.rectTransform.position = new Vector3(mainCanvas.pixelRect.width - ((circleSize - buttonSize) / 2), marginBottom * 0f + (circleSize - buttonSize) / 2, 0);

        int iconSize = 105;

        cntrlTmpObj = new GameObject("Fire button icon");
        cntrlTmpObj.transform.position = Vector3.zero;
        cntrlTmpObj.transform.parent = tmpObj.transform;
        fireButton.icon = cntrlTmpObj.AddComponent<Image>();
        fireButton.icon.rectTransform.anchorMin = new Vector2(1, 0);
        fireButton.icon.rectTransform.anchorMax = new Vector2(1, 0);
		//fireButton.icon.rectTransform.sizeDelta = new Vector2(80,80);
		if (toggleFire)
		{
			fireButton.icon.rectTransform.sizeDelta = new Vector2(0, 0);
		}
		else
		{
			fireButton.icon.rectTransform.sizeDelta = new Vector2(80, 80);
		}
		fireButton.icon.sprite = gunFireIcon;
        fireButton.icon.rectTransform.pivot = new Vector2(1, 0);
        fireButton.icon.rectTransform.position = new Vector3(fireButton.background.rectTransform.position.x - (buttonSize - iconSize) / 2,
        fireButton.background.rectTransform.position.y + (buttonSize - iconSize) / 2, 0);

        fireButton.mainArea = new Rect(Screen.width - fireButton.background.rectTransform.position.x, 
            fireButton.background.rectTransform.position.y, buttonSize, buttonSize);

		

		//print(fireButton.mainArea.x);

		int smallButtonSize = 90;
        int smallIconSize = 85;
		int smallSwapButtonSize = 85;
		int smallSwapIconSize = 80;
        int marginRight = 25;
		int smallCrouncButtonSize = 65;
		int smallCrouncIconSize = 60;
		int GranadesButonSize = 50;
		int GranadesIconSize = 45;

        //Reload button ###
        cntrlTmpObj = new GameObject("Reload button background");
        cntrlTmpObj.transform.position = Vector3.zero;
        cntrlTmpObj.transform.parent = tmpObj.transform;
        reloadButton.background = cntrlTmpObj.AddComponent<Image>();
        reloadButton.background.rectTransform.anchorMin = new Vector2(1, 0);
        reloadButton.background.rectTransform.anchorMax = new Vector2(1, 0);
		reloadButton.background.rectTransform.sizeDelta = new Vector2(75, 75);
        reloadButton.background.sprite = navigationButton;
        reloadButton.background.rectTransform.pivot = new Vector2(1, 0);
		reloadButton.background.rectTransform.position = new Vector3(fireButton.background.rectTransform.position.x * 0.74f + smallSwapButtonSize + marginRight,
			fireButton.background.rectTransform.position.y * 0.01f - 90 + buttonSize + marginRight - smallSwapButtonSize/2, 0);

        cntrlTmpObj = new GameObject("Reload button icon");
        cntrlTmpObj.transform.position = Vector3.zero;
        cntrlTmpObj.transform.parent = tmpObj.transform;
        reloadButton.icon = cntrlTmpObj.AddComponent<Image>();
        reloadButton.icon.rectTransform.anchorMin = new Vector2(1, 0);
        reloadButton.icon.rectTransform.anchorMax = new Vector2(1, 0);
		reloadButton.icon.rectTransform.sizeDelta = new Vector2(75, 75);
        reloadButton.icon.sprite = gunReloadIcon;
        reloadButton.icon.rectTransform.pivot = new Vector2(1, 0);
        reloadButton.icon.rectTransform.position = new Vector3(reloadButton.background.rectTransform.position.x - (smallButtonSize - smallIconSize) / 2,
            reloadButton.background.rectTransform.position.y + (smallButtonSize - smallIconSize) / 2, 0);

        reloadButton.mainArea = new Rect(Screen.width - reloadButton.background.rectTransform.position.x,
            reloadButton.background.rectTransform.position.y, smallButtonSize, smallButtonSize);
		//###

		//Toggle fire type
		/*hpTmpObj = new GameObject("FireToggle");
		hpTmpObj.transform.position = Vector3.zero;
		hpTmpObj.transform.parent = tmpObj.transform;
		fireToggle = hpTmpObj.AddComponent<Image>();
		fireToggle.gameObject.AddComponent<Button>();
		//fireToggle.GetComponent<Button>().onClick.AddListener(switchBulletToggle);
		if (toggleFire)
		{
			fireToggle.sprite = fireToggleOnTexture;
		}
		else 
		{
			fireToggle.sprite = fireToggleOffTexture;
		}

		//fireToggle.color = GameSettings.buyColor;
		fireToggle.rectTransform.anchorMin = new Vector2(0.5f, 0.5f);
		fireToggle.rectTransform.anchorMax = new Vector2(0.5f, 0.5f);
		fireToggle.rectTransform.sizeDelta = new Vector2(60, 60);
		fireToggle.rectTransform.pivot = new Vector2(0.5f, 0.5f);
		fireToggle.rectTransform.localPosition = new Vector3(500f, 138f, 0);*/


		cntrlTmpObj = new GameObject("FireToggle");
		cntrlTmpObj.transform.position = Vector3.zero;
		cntrlTmpObj.transform.parent = tmpObj.transform;
		ToggleFire.background = cntrlTmpObj.AddComponent<Image>();
		ToggleFire.background.rectTransform.anchorMin = new Vector2(1, 0);
		ToggleFire.background.rectTransform.anchorMax = new Vector2(1, 0);
		ToggleFire.background.rectTransform.sizeDelta = new Vector2(75, 75);
		ToggleFire.background.sprite = navigationButton;
		ToggleFire.background.rectTransform.pivot = new Vector2(1, 0);
		ToggleFire.background.rectTransform.localPosition = new Vector3(500f, 100f, 0);

		cntrlTmpObj = new GameObject("FireToggle icon");
		cntrlTmpObj.transform.position = Vector3.zero;
		cntrlTmpObj.transform.parent = tmpObj.transform;
		ToggleFire.icon = cntrlTmpObj.AddComponent<Image>();
		ToggleFire.icon.rectTransform.anchorMin = new Vector2(1, 0);
		ToggleFire.icon.rectTransform.anchorMax = new Vector2(1, 0);
		ToggleFire.icon.rectTransform.sizeDelta = new Vector2(75, 75);

		if (toggleFire)
		{
			ToggleFire.icon.sprite = fireToggleOnTexture;
		}
		else
		{
			ToggleFire.icon.sprite = fireToggleOffTexture;
		}

		ToggleFire.icon.rectTransform.pivot = new Vector2(1, 0);
		ToggleFire.icon.rectTransform.position = ToggleFire.background.rectTransform.position;

		ToggleFire.mainArea = new Rect(Screen.width - ToggleFire.background.rectTransform.position.x,
			ToggleFire.background.rectTransform.position.y, 75, 75);
		//###

		//Aim button ###
		cntrlTmpObj = new GameObject("Aim button background");
        cntrlTmpObj.transform.position = Vector3.zero;
        cntrlTmpObj.transform.parent = tmpObj.transform;
        aimButton.background = cntrlTmpObj.AddComponent<Image>();
        aimButton.background.rectTransform.anchorMin = new Vector2(1, 0);
        aimButton.background.rectTransform.anchorMax = new Vector2(1, 0);
		aimButton.background.rectTransform.sizeDelta = new Vector2(75, 75);
        aimButton.background.sprite = navigationButton;
        aimButton.background.rectTransform.pivot = new Vector2(1, 0);
		aimButton.background.rectTransform.position = new Vector3(fireButton.background.rectTransform.position.x * 1.050f - buttonSize - marginRight,
           fireButton.background.rectTransform.position.y * 3.0f + buttonSize + marginRight, 0);

        cntrlTmpObj = new GameObject("Aim button icon");
        cntrlTmpObj.transform.position = Vector3.zero;
        cntrlTmpObj.transform.parent = tmpObj.transform;
        aimButton.icon = cntrlTmpObj.AddComponent<Image>();
        aimButton.icon.rectTransform.anchorMin = new Vector2(1, 0);
        aimButton.icon.rectTransform.anchorMax = new Vector2(1, 0);
		aimButton.icon.rectTransform.sizeDelta = new Vector2(75, 75);
        aimButton.icon.sprite = gunAimIcon;
        aimButton.icon.rectTransform.pivot = new Vector2(1, 0);
        aimButton.icon.rectTransform.position = aimButton.background.rectTransform.position;

        aimButton.mainArea = new Rect(Screen.width - aimButton.background.rectTransform.position.x,
            aimButton.background.rectTransform.position.y, 75, 75);
        //###


		//Lookbutton ###
		cntrlTmpObj = new GameObject("look button background");
		cntrlTmpObj.transform.position = Vector3.zero;
		cntrlTmpObj.transform.parent = tmpObj.transform;
		LookWeaponButton.background = cntrlTmpObj.AddComponent<Image>();
		LookWeaponButton.background.rectTransform.anchorMin = new Vector2(1, 0);
		LookWeaponButton.background.rectTransform.anchorMax = new Vector2(1, 0);
		LookWeaponButton.background.rectTransform.sizeDelta = new Vector2(30, 30);
		LookWeaponButton.background.sprite = navigationButton;
		LookWeaponButton.background.rectTransform.pivot = new Vector2(1, 0);
		LookWeaponButton.background.rectTransform.position = new Vector3(fireButton.background.rectTransform.position.x * 1.18f - buttonSize - marginRight,
			fireButton.background.rectTransform.position.y * 13.0f + buttonSize + marginRight, 0);

		cntrlTmpObj = new GameObject("look button icon");
		cntrlTmpObj.transform.position = Vector3.zero;
		cntrlTmpObj.transform.parent = tmpObj.transform;
		LookWeaponButton.icon = cntrlTmpObj.AddComponent<Image>();
		LookWeaponButton.icon.rectTransform.anchorMin = new Vector2(1, 0);
		LookWeaponButton.icon.rectTransform.anchorMax = new Vector2(1, 0);
		LookWeaponButton.icon.rectTransform.sizeDelta = new Vector2(30, 30);
		LookWeaponButton.icon.sprite = Lookicon;
		LookWeaponButton.icon.rectTransform.pivot = new Vector2(1, 0);
		LookWeaponButton.icon.rectTransform.position = LookWeaponButton.background.rectTransform.position;

		LookWeaponButton.mainArea = new Rect(Screen.width - LookWeaponButton.background.rectTransform.position.x,
			LookWeaponButton.background.rectTransform.position.y, 50, 50);
		//###

        //Jump button ###
        cntrlTmpObj = new GameObject("Jump button background");
        cntrlTmpObj.transform.position = Vector3.zero;
        cntrlTmpObj.transform.parent = tmpObj.transform;
        jumpButton.background = cntrlTmpObj.AddComponent<Image>();
        jumpButton.background.rectTransform.anchorMin = new Vector2(1, 0);
        jumpButton.background.rectTransform.anchorMax = new Vector2(1, 0);
		jumpButton.background.rectTransform.sizeDelta = new Vector2(75, 75);
        jumpButton.background.sprite = navigationButton;
        jumpButton.background.rectTransform.pivot = new Vector2(1, 0);
		jumpButton.background.rectTransform.position = new Vector3(fireButton.background.rectTransform.position.x * 1.194f - buttonSize - marginRight,
			fireButton.background.rectTransform.position.y * 1.0f + buttonSize + marginRight, 0);
		
        cntrlTmpObj = new GameObject("Jump button icon");
        cntrlTmpObj.transform.position = Vector3.zero;
        cntrlTmpObj.transform.parent = tmpObj.transform;
        jumpButton.icon = cntrlTmpObj.AddComponent<Image>();
        jumpButton.icon.rectTransform.anchorMin = new Vector2(1, 0);
        jumpButton.icon.rectTransform.anchorMax = new Vector2(1, 0);
		jumpButton.icon.rectTransform.sizeDelta = new Vector2(75, 75);
        jumpButton.icon.sprite = jumpIcon;
        jumpButton.icon.rectTransform.pivot = new Vector2(1, 0);
        jumpButton.icon.rectTransform.position = new Vector3(jumpButton.background.rectTransform.position.x - (smallButtonSize - smallIconSize) / 2,
            jumpButton.background.rectTransform.position.y + (smallButtonSize - smallIconSize) / 2, 0);

        jumpButton.mainArea = new Rect(Screen.width - jumpButton.background.rectTransform.position.x,
            jumpButton.background.rectTransform.position.y, smallButtonSize, smallButtonSize);
        //###

		//Crounch button ###
		cntrlTmpObj = new GameObject("Crounch button background");
		cntrlTmpObj.transform.position = Vector3.zero;
		cntrlTmpObj.transform.parent = tmpObj.transform;
		crouchButton.background = cntrlTmpObj.AddComponent<Image>();
		crouchButton.background.rectTransform.anchorMin = new Vector2(1, 0);
		crouchButton.background.rectTransform.anchorMax = new Vector2(1, 0);
		crouchButton.background.rectTransform.sizeDelta = new Vector2(75, 75);
		crouchButton.background.sprite = navigationButton;
		crouchButton.background.rectTransform.pivot = new Vector2(10, 0);
		crouchButton.background.rectTransform.position = new Vector3(fireButton.background.rectTransform.position.x * 0.93f + smallSwapButtonSize + marginRight,
			fireButton.background.rectTransform.position.y * 3.0f - 90 + buttonSize + marginRight - smallSwapButtonSize/2, 0);

		cntrlTmpObj = new GameObject("Crounch button icon");
		cntrlTmpObj.transform.position = Vector3.zero;
		cntrlTmpObj.transform.parent = tmpObj.transform;
		crouchButton.icon = cntrlTmpObj.AddComponent<Image>();
		crouchButton.icon.rectTransform.anchorMin = new Vector2(1, 0);
		crouchButton.icon.rectTransform.anchorMax = new Vector2(1, 0);
		crouchButton.icon.rectTransform.sizeDelta = new Vector2(75, 75);
		crouchButton.icon.sprite = crouchIcon;
		crouchButton.icon.rectTransform.pivot = new Vector2(1, 0);
		crouchButton.icon.rectTransform.position = new Vector3(crouchButton.background.rectTransform.position.x - (smallButtonSize - smallIconSize) / 2,
			crouchButton.background.rectTransform.position.y + (smallButtonSize - smallIconSize) / 2, 0);

		crouchButton.mainArea = new Rect(Screen.width - crouchButton.background.rectTransform.position.x,
			crouchButton.background.rectTransform.position.y, smallButtonSize, smallButtonSize);
		//###

		//C4 button ###
		cntrlTmpObj = new GameObject("C4 button background");
		cntrlTmpObj.transform.position = Vector3.zero;
		cntrlTmpObj.transform.parent = tmpObj.transform;
		c4Button.background = cntrlTmpObj.AddComponent<Image>();
		c4Button.background.rectTransform.anchorMin = new Vector2(1, 0);
		c4Button.background.rectTransform.anchorMax = new Vector2(1, 0);
		c4Button.background.rectTransform.sizeDelta = new Vector2(60, 60);
		c4Button.background.sprite = C4IconBack;
		c4Button.background.rectTransform.pivot = new Vector2(1, 0);
		c4Button.background.rectTransform.position = new Vector3(fireButton.background.rectTransform.position.x * 0.125f,
			fireButton.background.rectTransform.position.y * 0.05f - 110 + buttonSize + marginRight, 0);

		cntrlTmpObj = new GameObject("C4 button icon");
		cntrlTmpObj.transform.position = Vector3.zero;
		cntrlTmpObj.transform.parent = tmpObj.transform;
		c4Button.icon = cntrlTmpObj.AddComponent<Image>();
		c4Button.icon.rectTransform.anchorMin = new Vector2(1, 0);
		c4Button.icon.rectTransform.anchorMax = new Vector2(1, 0);
		c4Button.icon.rectTransform.sizeDelta = new Vector2(55, 55);
		c4Button.icon.sprite = C4Icon;
		c4Button.icon.rectTransform.pivot = new Vector2(1, 0);
		c4Button.icon.rectTransform.position = new Vector3(c4Button.background.rectTransform.position.x - (smallButtonSize - smallIconSize) / 2,
			c4Button.background.rectTransform.position.y + (smallButtonSize - smallIconSize) / 2, 0);

		c4Button.mainArea = new Rect(Screen.width - c4Button.background.rectTransform.position.x,
			c4Button.background.rectTransform.position.y, smallButtonSize, smallButtonSize);
		//###


		//Grenade button ###
		cntrlTmpObj = new GameObject("Grenadebutton background");
		cntrlTmpObj.transform.position = Vector3.zero;
		cntrlTmpObj.transform.parent = tmpObj.transform;
		GrenadeButton.background = cntrlTmpObj.AddComponent<Image>();
		GrenadeButton.background.rectTransform.anchorMin = new Vector2(1, 0);
		GrenadeButton.background.rectTransform.anchorMax = new Vector2(1, 0);
		GrenadeButton.background.rectTransform.sizeDelta = new Vector2(GranadesButonSize, GranadesButonSize);
		GrenadeButton.background.sprite = navigationButton;
		GrenadeButton.background.rectTransform.pivot = new Vector2(1, 0);
		GrenadeButton.background.rectTransform.position = new Vector3(fireButton.background.rectTransform.position.x * 0.90f,
			fireButton.background.rectTransform.position.y - 40 + buttonSize + marginRight, 0);

		cntrlTmpObj = new GameObject("Grenadebutton icon");
		cntrlTmpObj.transform.position = Vector3.zero;
		cntrlTmpObj.transform.parent = tmpObj.transform;
		GrenadeButton.icon = cntrlTmpObj.AddComponent<Image>();
		GrenadeButton.icon.rectTransform.anchorMin = new Vector2(1, 0);
		GrenadeButton.icon.rectTransform.anchorMax = new Vector2(1, 0);
		GrenadeButton.icon.rectTransform.sizeDelta = new Vector2(GranadesIconSize, GranadesIconSize);
		GrenadeButton.icon.sprite = GrenadeIcon;
		GrenadeButton.icon.rectTransform.pivot = new Vector2(1, 0);
		GrenadeButton.icon.rectTransform.position = new Vector3(GrenadeButton.background.rectTransform.position.x - (smallButtonSize - smallIconSize) / 2,
			GrenadeButton.background.rectTransform.position.y + (smallButtonSize - smallIconSize) / 2, 0);

		GrenadeButton.mainArea = new Rect(Screen.width - GrenadeButton.background.rectTransform.position.x,
			GrenadeButton.background.rectTransform.position.y, smallButtonSize, smallButtonSize);
		//###


		//Chat button ###
		cntrlTmpObj = new GameObject("Chats");
		cntrlTmpObj.transform.position = Vector3.zero;
		cntrlTmpObj.transform.parent = tmpObj.transform;
		ChatButton.background = cntrlTmpObj.AddComponent<Image>();
		ChatButton.background.rectTransform.anchorMin = new Vector2(1, 0);
		ChatButton.background.rectTransform.anchorMax = new Vector2(1, 0);
		ChatButton.background.rectTransform.sizeDelta = new Vector2(25, 25);
		ChatButton.background.sprite = ChatSp;
		ChatButton.background.rectTransform.pivot = new Vector2(1, 0);
		ChatButton.background.rectTransform.position = new Vector3(fireButton.background.rectTransform.position.x * 0.27f,
			fireButton.background.rectTransform.position.y + (fireButton.background.rectTransform.position.y * 2.55f), 0);

		//cntrlTmpObj = new GameObject("Chats icon");
		//cntrlTmpObj.transform.position = Vector3.zero;
		//cntrlTmpObj.transform.parent = tmpObj.transform;
		//ChatButton.icon = cntrlTmpObj.AddComponent<Image>();
		//ChatButton.icon.rectTransform.anchorMin = new Vector2(1, 0);
		//ChatButton.icon.rectTransform.anchorMax = new Vector2(1, 0);
		//ChatButton.icon.rectTransform.sizeDelta = new Vector2(35, 35);
		//ChatButton.icon.sprite = ChatSp;
		//ChatButton.icon.color = Color.black;
		//ChatButton.icon.rectTransform.pivot = new Vector2(1, 0);
		//ChatButton.icon.rectTransform.position = new Vector3(ChatButton.background.rectTransform.position.x - (smallButtonSize - smallIconSize) / 2,
		//	ChatButton.background.rectTransform.position.y + (35 - 35) / 2, 0);

		ChatButton.mainArea = new Rect(Screen.width - ChatButton.background.rectTransform.position.x,
			ChatButton.background.rectTransform.position.y, 35, 35);
		//###

		//Flash button ###
		cntrlTmpObj = new GameObject("FlashButton background");
		cntrlTmpObj.transform.position = Vector3.zero;
		cntrlTmpObj.transform.parent = tmpObj.transform;
		FlashButton.background = cntrlTmpObj.AddComponent<Image>();
		FlashButton.background.rectTransform.anchorMin = new Vector2(1, 0);
		FlashButton.background.rectTransform.anchorMax = new Vector2(1, 0);
		FlashButton.background.rectTransform.sizeDelta = new Vector2(GranadesButonSize, GranadesButonSize);
		FlashButton.background.sprite = navigationButton;
		FlashButton.background.rectTransform.pivot = new Vector2(1, 0);
		FlashButton.background.rectTransform.position = new Vector3(fireButton.background.rectTransform.position.x * 0.99f,
			fireButton.background.rectTransform.position.y - 15 + buttonSize + marginRight, 0);

		cntrlTmpObj = new GameObject("FlashButton icon");
		cntrlTmpObj.transform.position = Vector3.zero;
		cntrlTmpObj.transform.parent = tmpObj.transform;
		FlashButton.icon = cntrlTmpObj.AddComponent<Image>();
		FlashButton.icon.rectTransform.anchorMin = new Vector2(1, 0);
		FlashButton.icon.rectTransform.anchorMax = new Vector2(1, 0);
		FlashButton.icon.rectTransform.sizeDelta = new Vector2(29, 40);
		FlashButton.icon.sprite = FlashIcon;
		FlashButton.icon.rectTransform.pivot = new Vector2(1, 0);
		FlashButton.icon.rectTransform.position = new Vector3(FlashButton.background.rectTransform.position.x - (smallButtonSize - smallIconSize) / 2,
			FlashButton.background.rectTransform.position.y + (smallButtonSize - smallIconSize) / 2, 0);

		FlashButton.mainArea = new Rect(Screen.width - FlashButton.background.rectTransform.position.x,
			FlashButton.background.rectTransform.position.y, smallButtonSize, smallButtonSize);
		//###


		//Diffuse button ###
		cntrlTmpObj = new GameObject("Diffuse button background");
		cntrlTmpObj.transform.position = Vector3.zero;
		cntrlTmpObj.transform.parent = tmpObj.transform;
		DiffuseButton.background = cntrlTmpObj.AddComponent<Image>();
		DiffuseButton.background.rectTransform.anchorMin = new Vector2(1, 0);
		DiffuseButton.background.rectTransform.anchorMax = new Vector2(1, 0);
		DiffuseButton.background.rectTransform.sizeDelta = new Vector2(smallCrouncButtonSize, smallCrouncButtonSize);
		DiffuseButton.background.sprite = C4IconBack;
		DiffuseButton.background.rectTransform.pivot = new Vector2(1, 0);
		DiffuseButton.background.rectTransform.position = new Vector3(fireButton.background.rectTransform.position.x * 0.125f,
			fireButton.background.rectTransform.position.y * 0.05f - 110 + buttonSize + marginRight, 0);

		cntrlTmpObj = new GameObject("Diffuse button icon");
		cntrlTmpObj.transform.position = Vector3.zero;
		cntrlTmpObj.transform.parent = tmpObj.transform;
		DiffuseButton.icon = cntrlTmpObj.AddComponent<Image>();
		DiffuseButton.icon.rectTransform.anchorMin = new Vector2(1, 0);
		DiffuseButton.icon.rectTransform.anchorMax = new Vector2(1, 0);
		DiffuseButton.icon.rectTransform.sizeDelta = new Vector2(smallCrouncIconSize, smallCrouncIconSize);
		DiffuseButton.icon.sprite = DiffuseIcon;
		DiffuseButton.icon.rectTransform.pivot = new Vector2(1, 0);
		DiffuseButton.icon.rectTransform.position = new Vector3(DiffuseButton.background.rectTransform.position.x - (smallButtonSize - smallIconSize) / 2,
			DiffuseButton.background.rectTransform.position.y + (smallButtonSize - smallIconSize) / 2, 0);

		DiffuseButton.mainArea = new Rect(Screen.width - DiffuseButton.background.rectTransform.position.x,
			DiffuseButton.background.rectTransform.position.y, smallButtonSize, smallButtonSize);
		//###



		//Gun1 weapon button ###
		cntrlTmpObj = new GameObject("Gun1 Weapon Background");
		cntrlTmpObj.transform.position = Vector3.zero;
		cntrlTmpObj.transform.parent = tmpObj.transform;
		Gun1Button.background = cntrlTmpObj.AddComponent<Image>();
		Gun1Button.background.type = Image.Type.Sliced;
		Gun1Button.background.rectTransform.anchorMin = new Vector2(1, 0);
		Gun1Button.background.rectTransform.anchorMax = new Vector2(1, 0);
		Gun1Button.background.rectTransform.sizeDelta = new Vector2(75, 50);
		Gun1Button.background.sprite = Gun1;
		Gun1Button.background.rectTransform.pivot = new Vector2(1, 0);
		Gun1Button.background.rectTransform.position = new Vector3(fireButton.background.rectTransform.position.x * 0.6f + smallSwapButtonSize + marginRight,
			fireButton.background.rectTransform.position.y * 0.01f - 50 + buttonSize + marginRight - smallSwapButtonSize/2, 0);

		cntrlTmpObj = new GameObject("Gun1 Weapon icon");
		cntrlTmpObj.transform.position = Vector3.zero;
		cntrlTmpObj.transform.parent = tmpObj.transform;
		Gun1Button.icon = cntrlTmpObj.AddComponent<Image>();
		Gun1Button.icon.rectTransform.anchorMin = new Vector2(1, 0);
		Gun1Button.icon.rectTransform.anchorMax = new Vector2(1, 0);
		Gun1Button.icon.rectTransform.sizeDelta = new Vector2(75, 50);
		Gun1Button.icon.sprite = Sprite.Create(mpc.KNIFE,new Rect(0f,0f,mpc.KNIFE.width,mpc.KNIFE.height),new Vector2(0.5f,0.5f),100f);
		Gun1Button.icon.rectTransform.pivot = new Vector2(1, 0);
		Gun1Button.icon.rectTransform.position = new Vector3(Gun1Button.background.rectTransform.position.x - (smallSwapButtonSize - smallSwapIconSize) / 2,
			Gun1Button.background.rectTransform.position.y + (smallSwapButtonSize - smallSwapIconSize) / 2, 0);

		Gun1Button.mainArea = new Rect(Screen.width - Gun1Button.background.rectTransform.position.x,
			Gun1Button.background.rectTransform.position.y, smallSwapButtonSize, smallSwapButtonSize);
		//###

		//Gun2 weapon button ###
		cntrlTmpObj = new GameObject("Gun2 Weapon Background");
		cntrlTmpObj.transform.position = Vector3.zero;
		cntrlTmpObj.transform.parent = tmpObj.transform;
		Gun2Button.background = cntrlTmpObj.AddComponent<Image>();
		Gun2Button.background.type = Image.Type.Sliced;
		Gun2Button.background.rectTransform.anchorMin = new Vector2(1, 0);
		Gun2Button.background.rectTransform.anchorMax = new Vector2(1, 0);
		Gun2Button.background.rectTransform.sizeDelta = new Vector2(125, 50);
		Gun2Button.background.sprite = Gun2;
		Gun2Button.background.rectTransform.pivot = new Vector2(1, 0);
		Gun2Button.background.rectTransform.position = new Vector3(fireButton.background.rectTransform.position.x * 0.4f + smallSwapButtonSize + marginRight,
			fireButton.background.rectTransform.position.y * 0.01f - 50 + buttonSize + marginRight - smallSwapButtonSize/2, 0);

		cntrlTmpObj = new GameObject("Gun2 Weapon icon");
		cntrlTmpObj.transform.position = Vector3.zero;
		cntrlTmpObj.transform.parent = tmpObj.transform;
		Gun2Button.icon = cntrlTmpObj.AddComponent<Image>();
		Gun2Button.icon.rectTransform.anchorMin = new Vector2(1, 0);
		Gun2Button.icon.rectTransform.anchorMax = new Vector2(1, 0);
		Gun2Button.icon.rectTransform.sizeDelta = new Vector2(120, 50);

		Gun2Button.icon.rectTransform.pivot = new Vector2(1, 0);
		Gun2Button.icon.rectTransform.position = new Vector3(Gun2Button.background.rectTransform.position.x - (smallSwapButtonSize - smallSwapIconSize) / 2,
			Gun2Button.background.rectTransform.position.y + (smallSwapButtonSize - smallSwapIconSize) / 2, 0);

		Gun2Button.mainArea = new Rect(Screen.width - Gun2Button.background.rectTransform.position.x,
			Gun2Button.background.rectTransform.position.y, smallSwapButtonSize, smallSwapButtonSize);
		//###

		//Gun3 weapon button ###
		cntrlTmpObj = new GameObject("Gun3 Weapon Background");
		cntrlTmpObj.transform.position = Vector3.zero;
		cntrlTmpObj.transform.parent = tmpObj.transform;
		Gun3Button.background = cntrlTmpObj.AddComponent<Image>();
		Gun3Button.background.type = Image.Type.Sliced;
		Gun3Button.background.rectTransform.anchorMin = new Vector2(1, 0);
		Gun3Button.background.rectTransform.anchorMax = new Vector2(1, 0);
		Gun3Button.background.rectTransform.sizeDelta = new Vector2(75, 50);
		Gun3Button.background.sprite = Gun3;
		Gun3Button.background.rectTransform.pivot = new Vector2(1, 0);
		Gun3Button.background.rectTransform.position = new Vector3(fireButton.background.rectTransform.position.x * 0.5f + smallSwapButtonSize + marginRight,
			fireButton.background.rectTransform.position.y * 0.01f - 50 + buttonSize + marginRight - smallSwapButtonSize/2, 0);

		cntrlTmpObj = new GameObject("Gun3 Weapon icon");
		cntrlTmpObj.transform.position = Vector3.zero;
		cntrlTmpObj.transform.parent = tmpObj.transform;
		Gun3Button.icon = cntrlTmpObj.AddComponent<Image>();
		Gun3Button.icon.rectTransform.anchorMin = new Vector2(1, 0);
		Gun3Button.icon.rectTransform.anchorMax = new Vector2(1, 0);
		Gun3Button.icon.rectTransform.sizeDelta = new Vector2(75, 50);

		Gun3Button.icon.rectTransform.pivot = new Vector2(1, 0);
		Gun3Button.icon.rectTransform.position = new Vector3(Gun3Button.background.rectTransform.position.x - (smallSwapButtonSize - smallSwapIconSize) / 2,
			Gun3Button.background.rectTransform.position.y + (smallSwapButtonSize - smallSwapIconSize) / 2, 0);

		Gun3Button.mainArea = new Rect(Screen.width - Gun3Button.background.rectTransform.position.x,
			Gun3Button.background.rectTransform.position.y, smallSwapButtonSize, smallSwapButtonSize);
		//###

		//Weapon and Ammo
		hpTmpObj = new GameObject("Gun1Ammo");
		hpTmpObj.transform.position = Vector3.zero;
		hpTmpObj.transform.parent = tmpObj.transform;
		Gun1Ammo = hpTmpObj.AddComponent<Text>();
		Gun1Ammo.font = Ammo;
		Gun1Ammo.fontSize = 10;
		Gun1Ammo.color = GameSettings.HUDColor;
		Gun1Ammo.text = "";
		Gun1Ammo.rectTransform.sizeDelta = new Vector2(75, 50);
		Gun1Ammo.rectTransform.anchorMin = new Vector2(1, 0);
		Gun1Ammo.rectTransform.anchorMax = new Vector2(1, 0);
		Gun1Ammo.rectTransform.pivot = new Vector2(1, 0);
		Gun1Ammo.rectTransform.position = new Vector3(Gun3Button.background.rectTransform.position.x - 4.5f - (smallSwapButtonSize - smallSwapIconSize) / 2,
			Gun3Button.background.rectTransform.position.y + 4.5f + (smallSwapButtonSize - smallSwapIconSize) / 2, 0);
		Gun1Ammo.alignment = TextAnchor.LowerRight;

		//Weapon and Ammo
		hpTmpObj = new GameObject("Gun2Ammo");
		hpTmpObj.transform.position = Vector3.zero;
		hpTmpObj.transform.parent = tmpObj.transform;
		Gun2Ammo = hpTmpObj.AddComponent<Text>();
		Gun2Ammo.font = Ammo;
		Gun2Ammo.fontSize = 10;
		Gun2Ammo.color = GameSettings.HUDColor;
		Gun2Ammo.text = "";
		Gun2Ammo.rectTransform.sizeDelta = new Vector2(75, 50);
		Gun2Ammo.rectTransform.anchorMin = new Vector2(1, 0);
		Gun2Ammo.rectTransform.anchorMax = new Vector2(1, 0);
		Gun2Ammo.rectTransform.pivot = new Vector2(1, 0);
		Gun2Ammo.rectTransform.position = new Vector3(Gun2Button.background.rectTransform.position.x - 5f - (smallSwapButtonSize - smallSwapIconSize) / 2,
			Gun2Button.background.rectTransform.position.y + 4f + (smallSwapButtonSize - smallSwapIconSize) / 2, 0);
		Gun2Ammo.alignment = TextAnchor.LowerRight;


#endif

        //And finally apply UI layer to every child object of canvas
        foreach (Transform t in mainCanvas.GetComponentsInChildren<Transform>(true))
        {
            t.gameObject.layer = 5;
        }
    }
	float bombTime = 1;
	bool pip1 = false;
	bool colorC4 = false;
	bool colorDiffuse = false;
    // Update is called once per frame
    void Update()
    {
		for (int i = 0; i < 4; i++) {
			crosshairSet [i].color = aColor;
		}

        //Populate UI values
        if (rc.leavingRoom)
        {
            //Leaving room, show black screen
        }
        else
        {
			if (rc.ourPlayer && !rc.ourPlayer.playerKilled && rc.ourPlayer.playerWeapons != null)
            {
				HpI.gameObject.SetActive (true);
				HpBack.gameObject.SetActive (true);
				float hpS = 100.0f / rc.currentHP;
                //Show player HP
				HpI.rectTransform.sizeDelta = new Vector2( 304 / hpS, 13f);
				if (rc.currentHP <= 25) {
					HpI.color = Color.red;
					HpBack.color = Color.red;
				} 
				else {
					HpI.color = Color.white;
					HpBack.color = Color.white;
				}
				jumpButton.icon.gameObject.SetActive (true);
				Gun1Button.icon.gameObject.SetActive (true);
				Gun2Button.icon.gameObject.SetActive (true);
				Gun3Button.icon.gameObject.SetActive (true);
				crouchButton.icon.gameObject.SetActive (true);
				aimButton.icon.gameObject.SetActive (true);
				reloadButton.icon.gameObject.SetActive (true);
				fireButton.icon.gameObject.SetActive (true);
				moveTouch.backgroundCircle.gameObject.SetActive (true);
				moveTouch.mainButton.gameObject.SetActive (true);
				//ChatButton.icon.gameObject.SetActive (true);
				ChatButton.background.gameObject.SetActive (true);
				cashText.gameObject.SetActive (true);
				shopBuyT.gameObject.SetActive (true);
				Gun1Button.background.gameObject.SetActive(true);
				Gun2Button.background.gameObject.SetActive(true);
				Gun3Button.background.gameObject.SetActive(true);
				buyMenuText.mainText.gameObject.SetActive (true);
				buyMenuText.textShadow.gameObject.SetActive (true);
				LookWeaponButton.icon.gameObject.SetActive (true);
				LookWeaponButton.background.gameObject.SetActive (true);



				if (rc.ourPlayer.MeName == GameSettings.C4Who && rc.ourPlayer.playerTeam == 2 && !GameSettings.C4on && rc.C4Tag && colorC4 == false && rc.currentGameMode == "NORMAL") {
					colorC4 = true;
					StartCoroutine (C4Color ());
				} 
				else if (rc.ourPlayer.MeName == GameSettings.C4Who && rc.ourPlayer.playerTeam == 2 && !GameSettings.C4on && !rc.C4Tag && rc.currentGameMode == "NORMAL"){
					c4Button.icon.color = Color.white;
					colorC4 = false;
				}

				if (rc.C4XTag) {
					if (rc.ourPlayer.playerTeam == 2 && !GameSettings.C4on && rc.C4Tag && colorC4 == false && rc.currentGameMode == "NORMAL") {
						colorC4 = true;
						StartCoroutine (C4Color ());
					} else if (rc.ourPlayer.playerTeam == 2 && !GameSettings.C4on && !rc.C4Tag && rc.currentGameMode == "NORMAL") {
						c4Button.icon.color = Color.white;
						colorC4 = false;
					}
				}

				if (rc.ourPlayer.playerTeam == 1 && GameSettings.C4on && rc.DiffuseTag && colorDiffuse == false && rc.currentGameMode == "NORMAL") {
					colorDiffuse = true;
					StartCoroutine (DiffuseColor());
				} 
				else if (rc.ourPlayer.playerTeam == 1 && GameSettings.C4on && !rc.DiffuseTag && rc.currentGameMode == "NORMAL"){
					DiffuseButton.icon.color = Color.white;
					colorDiffuse = false;
				}

				if (GameSettings.C4CreateUI == true && !GameSettings.C4on && rc.C4Tag) {
					BombI.gameObject.SetActive (true);
					BombBorderI.gameObject.SetActive (true);
					C4Create += Time.deltaTime / 5.1f;
					BombI.rectTransform.sizeDelta = new Vector2(C4Create * 282.5f, 7.5f);
					if (C4Create > 0.99) {
						GameSettings.C4Fire = true;
						GameSettings.C4CreateUI = false;
						GameSettings.C4idle = false;
						BombI.gameObject.SetActive (false);
						BombBorderI.gameObject.SetActive (false);
					}
				}

				if (rc.DiffuseCreateUI && !GameSettings.Diffuse && GameSettings.C4on && rc.DiffuseTag && !GameSettings.C4Diffuse) {
					BombI.gameObject.SetActive (true);
					BombBorderI.gameObject.SetActive (true);
					DiffuseCreate += Time.deltaTime / 6;
					BombI.rectTransform.sizeDelta = new Vector2(DiffuseCreate * 282.5f, 7.5f);
					if (DiffuseCreate > 0.99) {
						if (rc.ourPlayer) {
							rc.ourPlayer.DiffuseC4 ();
						}
						rc.DiffuseCreateUI = false;
						BombI.gameObject.SetActive (false);
						BombBorderI.gameObject.SetActive (false);
					}
				}
					
				if (rc.ourPlayer.playerWeapons != null) {
					if (rc.ourPlayer.playerWeapons.primaryWeapons [rc.ourPlayer.playerWeapons.selectedPrimary].firstPersonWeapon != null && rc.ourPlayer.playerWeapons.selectedPrimary > 1) {
						Gun2Button.icon.enabled = true;
						Gun5 = Resources.Load<Sprite> (rc.ourPlayer.playerWeapons.primaryWeapons [rc.ourPlayer.playerWeapons.selectedPrimary].firstPersonWeapon.weaponName);
						Gun2Button.icon.sprite = Gun5;
						Gun2Ammo.text = rc.ourPlayer.playerWeapons.primaryWeapons [rc.ourPlayer.playerWeapons.selectedPrimary].firstPersonWeapon.wSettings.bulletsPerClip.ToString () + " / " + rc.ourPlayer.playerWeapons.primaryWeapons [rc.ourPlayer.playerWeapons.selectedPrimary].firstPersonWeapon.wSettings.reserveBullets.ToString ();
					} 
					else {
						Gun2Ammo.text = "";
						Gun2Button.icon.enabled = false;
					}
				}


					Gun4 = Resources.Load<Sprite> (rc.ourPlayer.playerWeapons.secondaryWeapons [rc.ourPlayer.playerWeapons.selectedSecondary].firstPersonWeapon.weaponName);
					if (Gun4 == null) { Gun4 = Resources.Load<Sprite>(rc.ourPlayer.playerWeapons.secondaryWeapons[0].firstPersonWeapon.weaponName); }
					Gun3Button.icon.sprite = Gun4;
					Gun1Ammo.text = rc.ourPlayer.playerWeapons.secondaryWeapons [rc.ourPlayer.playerWeapons.selectedSecondary].firstPersonWeapon.wSettings.bulletsPerClip.ToString () + " / " + rc.ourPlayer.playerWeapons.secondaryWeapons [rc.ourPlayer.playerWeapons.selectedSecondary].firstPersonWeapon.wSettings.reserveBullets.ToString ();


					



                //Crosshair, only show when not aimin
				if (GameSettings.currentFOV == GameSettings.defaultFOV && rc.ourPlayer.playerWeapons) {
					if (rc.ourPlayer.playerWeapons.currentSelectedWeapon) {
						if (rc.ourPlayer.playerWeapons.currentSelectedWeapon.wSettings.fireType != PlayerWeapons.FireType.SniperRifle && rc.ourPlayer.playerWeapons.currentSelectedWeapon.wSettings.fireType != PlayerWeapons.FireType.SniperRifleAuto && rc.ourPlayer.playerWeapons.currentSelectedWeapon.wSettings.fireType != PlayerWeapons.FireType.C4) {
							if (!crosshairRoot.activeSelf) {
								crosshairRoot.SetActive (true);
							}
							if (rc.ourPlayer.fpsController.isMoving || rc.ourPlayer.soldierAnimation.isMoving) {

								//Top
								crosshairSet [0].rectTransform.position = new Vector3 (mainCanvas.pixelRect.width / 2, mainCanvas.pixelRect.height / 2 + 0 + rc.distance, 0);
								//Bottom
								crosshairSet [1].rectTransform.position = new Vector3 (mainCanvas.pixelRect.width / 2, mainCanvas.pixelRect.height / 2 - 0 - rc.distance, 0);
								//Left
								crosshairSet [2].rectTransform.position = new Vector3 (mainCanvas.pixelRect.width / 2 - 0 - rc.distance, mainCanvas.pixelRect.height / 2, 0);
								//Right
								crosshairSet [3].rectTransform.position = new Vector3 (mainCanvas.pixelRect.width / 2 + 0 + rc.distance, mainCanvas.pixelRect.height / 2, 0);
							}
							else{
								
								//Top
								crosshairSet [0].rectTransform.position = new Vector3 (mainCanvas.pixelRect.width / 2, mainCanvas.pixelRect.height / 2 - 2 + rc.distance, 0);
								//Bottom
								crosshairSet [1].rectTransform.position = new Vector3 (mainCanvas.pixelRect.width / 2, mainCanvas.pixelRect.height / 2 + 2 - rc.distance, 0);
								//Left
								crosshairSet [2].rectTransform.position = new Vector3 (mainCanvas.pixelRect.width / 2 + 2 - rc.distance, mainCanvas.pixelRect.height / 2, 0);
								//Right
								crosshairSet [3].rectTransform.position = new Vector3 (mainCanvas.pixelRect.width / 2 - 2 + rc.distance, mainCanvas.pixelRect.height / 2, 0);
							}
						}
						else {
							if (crosshairRoot.activeSelf) {
								crosshairRoot.SetActive (false);
							}
						}
					}
				} 
				else {
						if (crosshairRoot.activeSelf) {
							crosshairRoot.SetActive (false);
						}
					}

                //Show sniper scope
                if (scopeTextureTmp != GameSettings.currentScopeTexture)
                {
                    scopeTextureTmp = GameSettings.currentScopeTexture;
                    if (scopeTextureTmp != null)
                    {
                        scopeTextureRatio = ((float)scopeTextureTmp.rect.width * 0.01f) / ((float)scopeTextureTmp.rect.height * 0.01f);
                        sniperScope.sprite = scopeTextureTmp;
                        sniperScope.rectTransform.sizeDelta = new Vector2(Screen.height * scopeTextureRatio, Screen.height);
                        sniperScope.gameObject.SetActive(true);
                    }
                    else
                    {
                        sniperScope.gameObject.SetActive(false);
                    }
                }

				if (rc.ourPlayer.playerWeapons.selectedGrenade == 1) {
					GrenadeButton.icon.gameObject.SetActive (true);
					GrenadeButton.background.gameObject.SetActive (true);
				} 
				else {
					GrenadeButton.icon.gameObject.SetActive (false);
					GrenadeButton.background.gameObject.SetActive (false);
				}

				if (rc.ourPlayer.playerWeapons.selectedFlash == 2) {
					FlashButton.icon.gameObject.SetActive (true);
					FlashButton.background.gameObject.SetActive (true);
				} 
				else {
					FlashButton.icon.gameObject.SetActive (false);
					FlashButton.background.gameObject.SetActive (false);
				}

            }
            else
            {
                weaponAndAmmoText.text = "";
				sniperScope.gameObject.SetActive(false);
				jumpButton.icon.gameObject.SetActive (false);
				Gun1Button.icon.gameObject.SetActive (false);
				Gun2Button.icon.gameObject.SetActive (false);
				Gun3Button.icon.gameObject.SetActive (false);
				Gun1Ammo.text = "";
				Gun2Ammo.text = "";
				crouchButton.icon.gameObject.SetActive (false);
				c4Button.icon.gameObject.SetActive (false);
				c4Button.background.gameObject.SetActive (false);
				DiffuseButton.icon.gameObject.SetActive (false);
				DiffuseButton.background.gameObject.SetActive (false);
				aimButton.icon.gameObject.SetActive (false);
				reloadButton.icon.gameObject.SetActive (false);
				fireButton.icon.gameObject.SetActive (false);
				moveTouch.backgroundCircle.gameObject.SetActive (false);
				moveTouch.mainButton.gameObject.SetActive (false);
				BombI.gameObject.SetActive (false);
				BombBorderI.gameObject.SetActive (false);
				HpI.gameObject.SetActive (false);
				HpBack.gameObject.SetActive (false);
				GrenadeButton.icon.gameObject.SetActive (false);
				GrenadeButton.background.gameObject.SetActive (false);
				FlashButton.icon.gameObject.SetActive (false);
				FlashButton.background.gameObject.SetActive (false);
				//ChatButton.icon.gameObject.SetActive (false);
				ChatButton.background.gameObject.SetActive (false);
				cashText.gameObject.SetActive (false);
				shopBuyT.gameObject.SetActive (false);
				Gun1Button.background.gameObject.SetActive(false);
				Gun2Button.background.gameObject.SetActive(false);
				Gun3Button.background.gameObject.SetActive(false);
				buyMenuText.mainText.gameObject.SetActive (false);
				buyMenuText.textShadow.gameObject.SetActive (false);
				LookWeaponButton.icon.gameObject.SetActive (false);
				LookWeaponButton.background.gameObject.SetActive (false);
                if (crosshairRoot.activeSelf)
                {
                    crosshairRoot.SetActive(false);
                }
            }
        }

        //Show hit detectors
        if (rc.doingHitDetector)
        {
            //Fade hit detectors
            redScreen.rectTransform.sizeDelta = new Vector3(mainCanvas.pixelRect.width, mainCanvas.pixelRect.height, 0);
            redScreen.color = new Color(1, 0, 0, rc.redScreenFade / 7);
            hitDetectorSet[0].color = new Color(1, 1, 1, rc.hitTopFade);
            hitDetectorSet[1].color = new Color(1, 1, 1, rc.hitBottomFade);
            hitDetectorSet[2].color = new Color(1, 1, 1, rc.hitLeftFade);
            hitDetectorSet[3].color = new Color(1, 1, 1, rc.hitRightFade);
            previousHitDetector = true;
        }
        else
        {
            if (previousHitDetector)
            {
                previousHitDetector = false;
                redScreen.color = new Color(1, 1, 1, 0);
                hitDetectorSet[0].color = new Color(1, 1, 1, 0);
                hitDetectorSet[1].color = new Color(1, 1, 1, 0);
                hitDetectorSet[2].color = new Color(1, 1, 1, 0);
                hitDetectorSet[3].color = new Color(1, 1, 1, 0);
            }
        }

        //Show current cash
        cashText.color = rc.currentTotalCashColor;
		if (!sniperScope.gameObject.activeSelf) {
			cashText.text = "$ " + (GameSettings.cnst - rc.totalCash).ToString ();
		} 
		else {
			if (rc.ourPlayer) {
				if (rc.ourPlayer.playerWeapons.currentSelectedWeapon) {
					if (rc.ourPlayer.playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.SniperRifle) {
						cashText.text = "";
					}
				}
			}
		}
        //Adding cash
        addMoreCashText.color = rc.currentAddingCashColor;
        addMoreCashText.text = rc.scoreToAddTmp;

		killedShowText.color = rc.currentKilledColor;
		KilledOut.effectColor = rc.currentKilledOutColor;
		killedShowText.text = rc.KilledAddTmp;

        //Show Round Timer
        roundTimeText.text = rc.roundTimeString;

		if (rc.currentGameMode == "TDM" || rc.currentGameMode == "NORMAL") {
			if (!sniperScope.gameObject.activeSelf) {
				RoundMiddle.gameObject.SetActive(true);
				RoundCounterText.gameObject.SetActive(true);
				RoundTerorText.gameObject.SetActive(true);
				roundHow.gameObject.SetActive (true);
				roundHowFFA.gameObject.SetActive (false);

				roundCounterScoreText.gameObject.SetActive (true);
				roundTerorScoreText.gameObject.SetActive (true);
				if (rc.currentGameMode == "TDM") {
					roundCounterScoreText.text = rc.teamAScore.ToString ();
					roundTerorScoreText.text = rc.teamBScore.ToString ();
				}
				if (rc.currentGameMode == "NORMAL") {
					roundCounterScoreText.text = rc.teamANormalScore.ToString ();
					roundTerorScoreText.text = rc.teamBNormalScore.ToString ();
				}
			} 
			else {
				if (rc.ourPlayer) {
					if (rc.ourPlayer.playerWeapons.currentSelectedWeapon) {
						if (rc.ourPlayer.playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.SniperRifle) {
							roundHow.gameObject.SetActive (false);
							roundHowFFA.gameObject.SetActive (true);

							roundCounterScoreText.gameObject.SetActive (false);
							roundTerorScoreText.gameObject.SetActive (false);
						}
					}
				}
			}
		} 
		else {
			RoundMiddle.gameObject.SetActive (false);
			RoundCounterText.gameObject.SetActive(false);
			RoundTerorText.gameObject.SetActive(false);
			roundHow.gameObject.SetActive(false);
			roundHowFFA.gameObject.SetActive (true);

			roundCounterScoreText.gameObject.SetActive (false);
			roundTerorScoreText.gameObject.SetActive (false);
		}

		if (rc.ourPlayer && !rc.ourPlayer.playerKilled) {
			if (rc.ourPlayer.MeName == GameSettings.C4Who && rc.ourPlayer.playerTeam == 2 && !GameSettings.C4on && rc.currentGameMode == "NORMAL" && !GameSettings.TimeOff) {
				c4Button.background.gameObject.SetActive (true);
				c4Button.icon.gameObject.SetActive (true);
			} else {
				c4Button.background.gameObject.SetActive (false);
				c4Button.icon.gameObject.SetActive (false);
			}

			if (rc.C4XTag) {
				if (rc.ourPlayer.playerTeam == 2 && !GameSettings.C4on && rc.currentGameMode == "NORMAL" && !GameSettings.TimeOff) {
					c4Button.background.gameObject.SetActive (true);
					c4Button.icon.gameObject.SetActive (true);
				} else {
					c4Button.background.gameObject.SetActive (false);
					c4Button.icon.gameObject.SetActive (false);
				}
			}

			if (rc.ourPlayer.playerTeam == 1 && rc.currentGameMode == "NORMAL") {
				DiffuseButton.icon.gameObject.SetActive (true);
				DiffuseButton.background.gameObject.SetActive (true);
			} else {
				DiffuseButton.background.gameObject.SetActive (false);
				DiffuseButton.icon.gameObject.SetActive (false);
			}
		}

		if (GameSettings.C4on && rc.currentGameMode == "NORMAL") {
			roundTimeText.gameObject.SetActive (false);
			roundBombIcon.gameObject.SetActive (true);
		} 
		else {
			roundTimeText.gameObject.SetActive (true);
			roundBombIcon.gameObject.SetActive (false);
			bombTime = 1;
			pip1 = false;
		}

		if (GameSettings.C4on) {
			bombTime -= Time.deltaTime / 45f;
			if (bombTime > 0.55f && pip1 == false) {
				pip1 = true;
				StartCoroutine (OnOff40());
			}
			if (bombTime > 0.31f && bombTime < 0.56f && pip1 == false) {
				pip1 = true;
				StartCoroutine (OnOff20());
			}
			if (bombTime > 0.17f && bombTime < 0.32f && pip1 == false) {
				pip1 = true;
				StartCoroutine (OnOff10());
			}
			if (bombTime > 0.10f && bombTime < 0.18f && pip1 == false) {
				pip1 = true;
				StartCoroutine (OnOff05());
			}
			if (bombTime > 0.01f && bombTime < 0.11f && pip1 == false) {
				pip1 = true;
				StartCoroutine (OnOff0());
			}
		} 
		else {
			bombTime = 1;
			pip1 = false;
		}

        //Show respawn time
        if (rc.currentRespawnTime > -1)
        {
			respawnTimeText.mainText.text = xml.button74 + rc.currentRespawnTime.ToString() + xml.button75;
			respawnTimeText.textShadow.text = xml.button74 + rc.currentRespawnTime.ToString() + xml.button75;
        }
        else
        {
            respawnTimeText.mainText.text = "";
            respawnTimeText.textShadow.text = "";
        }

        //Show buy menu text
        if (!rc.ourPlayer || rc.timeToPurchase > 0)
        {
			shopBuyT.enabled = true;
			ToggleFire.icon.rectTransform.sizeDelta = new Vector2(80, 80);

			string textShd = "";
			string textTmp = xml.button76 + "\n\n";
			textTmp += rc.timeToPurchase > 0 && rc.ourPlayer ? rc.timeToPurchase.ToString() + xml.button77 : "";
			textShd += rc.timeToShield > 0 && rc.ourPlayer ? xml.button86 + rc.timeToShield.ToString() + xml.button77 : "";

			 textTmp = xml.button76 + "\n\n";
			textTmp += rc.timeToPurchase > 0 && rc.ourPlayer ? "" + rc.timeToPurchase.ToString() + xml.button77 : "";


            buyMenuText.mainText.text = textTmp;
            buyMenuText.textShadow.text = textTmp;

			shieldText.mainText.text = textShd;
			shieldText.textShadow.text = textShd;
        }
        else
        {
			shopBuyT.enabled = false;

			buyMenuText.mainText.text = "";
            buyMenuText.textShadow.text = "";
			shieldText.mainText.text = "";
			shieldText.textShadow.text = "";
        }



		//Check UI interaction

#if UNITY_ANDROID || UNITY_IOS || UNITY_WP8 || UNITY_WP8_1

#if !UNITY_EDITOR
        //Handle touch input
        for (var i = 0; i < Input.touchCount; ++i)
        {
            Touch touch = Input.GetTouch(i);

            if (touch.phase == TouchPhase.Began)
            {
                MobileButtonsCheck(new Vector2(touch.position.x, Screen.height - touch.position.y), touch.fingerId);
            }

            if (touch.phase == TouchPhase.Moved )
            {
                if(moveTouch.isActive && moveTouch.touchID == touch.fingerId)
                {
                    moveTouch.currentTouchPos = touch.position;
                }

                if (fpsLookTouch.isActive && fpsLookTouch.touchID == touch.fingerId)
                {
                    fpsLookTouch.currentTouchPos = touch.position;
                }
            }

            if (touch.phase == TouchPhase.Ended || touch.phase == TouchPhase.Canceled)
            {
                MobileButtonStop(touch.fingerId);
            }
        }
#else
		//Test mobile controls in editor, use mouse instead of touch controls
		
        if (Input.GetMouseButtonDown(0))
        {
           MobileButtonsCheck(new Vector2(Input.mousePosition.x, Screen.height - Input.mousePosition.y), -1);
        }

        if (Input.GetMouseButtonUp(0))
        {
            MobileButtonStop(-1);
        }

        moveTouch.currentTouchPos = Input.mousePosition;
        fpsLookTouch.currentTouchPos = Input.mousePosition;
#endif

        //Moving
        if (moveTouch.isActive)
        {
			moveTouch.mainButton.rectTransform.position = new Vector3(Mathf.Clamp(moveTouch.currentTouchPos.x - moveTouch.touchOffset.x,45, 250), Mathf.Clamp(moveTouch.currentTouchPos.y - moveTouch.touchOffset.y,20,247.5f));
            GameSettings.moveDirection.x = moveTouch.mainButton.rectTransform.position.x - moveTouch.defaultArea.x;
            GameSettings.moveDirection.y = moveTouch.mainButton.rectTransform.position.y - moveTouch.defaultArea.y;

            if (Mathf.Abs(GameSettings.moveDirection.x) < 19)
            {
                GameSettings.moveDirection.x = 0;
            }
            else
            {
                GameSettings.moveDirection.x = Mathf.Clamp(GameSettings.moveDirection.x / 75.000f, -1.000f, 1.000f);
            }

            if (Mathf.Abs(GameSettings.moveDirection.y) < 19)
            {
                GameSettings.moveDirection.y = 0;
            }
            else
            {
                GameSettings.moveDirection.y = Mathf.Clamp(GameSettings.moveDirection.y / 75.000f, -1.000f, 1.000f);
            }
        }
        else
        {
            moveTouch.mainButton.rectTransform.position = new Vector3(moveTouch.defaultArea.x, moveTouch.defaultArea.y);
            GameSettings.moveDirection = Vector2.zero;
        }

        //Looking around
        if (fpsLookTouch.isActive)
        {
            if (fpsLookTouch.touchOffset.x != fpsLookTouch.currentTouchPos.x || fpsLookTouch.touchOffset.y != fpsLookTouch.currentTouchPos.y)
            {
                GameSettings.lookDirection = new Vector2(
                    Mathf.Clamp((fpsLookTouch.currentTouchPos.x - fpsLookTouch.touchOffset.x) / 5.500f, -5.500f, 5.500f),
                    Mathf.Clamp((fpsLookTouch.currentTouchPos.y - fpsLookTouch.touchOffset.y) / 5.500f, -5.500f, 5.500f));

                //print(GameSettings.lookDirection);

                fpsLookTouch.touchOffset = fpsLookTouch.currentTouchPos;
            }
            else
            {
                GameSettings.lookDirection = Vector2.zero;
            }


            //Fast swiping timer
            swipeTime += Time.deltaTime;
        }
        else
        {
            if (initialTouchPos != Vector2.zero)
            {
                float distanceXTmp = Mathf.Abs(fpsLookTouch.currentTouchPos.x - initialTouchPos.x);
                float distanceYTmp = Mathf.Abs(fpsLookTouch.currentTouchPos.y - initialTouchPos.y);

                if (swipeTime < 0.05f && distanceXTmp > 4 && distanceXTmp > distanceYTmp)
                {
                    GameSettings.lookDirection = new Vector2(Mathf.Clamp(GameSettings.lookDirection.x, - 1, 1), Mathf.Clamp(GameSettings.lookDirection.y, -1, 1));

                    keepRotatingTime = 1.05f;
                    previousTouchDirX = Mathf.Clamp(GameSettings.lookDirection.x * 2, -10, 10);
                    GameSettings.lookDirection.y = 0;
                }
                else
                {
                    keepRotatingTime = 0;
                }
                
                //print(swipeTime);

                initialTouchPos = Vector2.zero;
            }

            if(keepRotatingTime > 0)
            {
                //Slowly decrease rotation time, make it framerate independent
                keepRotatingTime = Mathf.Lerp(keepRotatingTime, -0.1f, Time.deltaTime / (GameSettings.currentFPS / 100.00f));
                GameSettings.lookDirection.x = (previousTouchDirX * keepRotatingTime) / (GameSettings.currentFPS / 100.00f);

                //print(GameSettings.currentFPS);
            }
            else
            {
                //fpsLookTouch.mainButton.rectTransform.position = new Vector3(fpsLookTouch.defaultArea.x, fpsLookTouch.defaultArea.y);
                GameSettings.lookDirection = Vector2.zero;
            }
        }

        //print(GameSettings.moveDirection.x.ToString() + "   " + GameSettings.moveDirection.y.ToString());
#endif
    }

    public void switchBulletToggle()
    {
       toggleFire = !toggleFire;
        if (toggleFire)
        {
            ToggleFire.icon.sprite = fireToggleOnTexture;
            PlayerPrefs.SetInt("autofire", 1);
            fireButton.icon.rectTransform.sizeDelta = new Vector2(0, 0);
        }

        else
        {
            ToggleFire.icon.sprite = fireToggleOffTexture;
            PlayerPrefs.SetInt("autofire", 0);
            fireButton.icon.rectTransform.sizeDelta = new Vector2(80, 80);
        }
    }

    IEnumerator OnOff40(){
		roundBombIcon.color = Color.white;
		yield return new WaitForSeconds(2);
		roundBombIcon.color = Color.red;
		yield return new WaitForSeconds(0.15f);
		pip1 = false;
	}
	IEnumerator OnOff20(){
		roundBombIcon.color = Color.white;
		yield return new WaitForSeconds(1);
		roundBombIcon.color = Color.red;
		yield return new WaitForSeconds(0.15f);
		pip1 = false;
	}
	IEnumerator OnOff10(){
		roundBombIcon.color = Color.white;
		yield return new WaitForSeconds(0.35f);
		roundBombIcon.color = Color.red;
		yield return new WaitForSeconds(0.10f);
		pip1 = false;
	}
	IEnumerator OnOff05(){
		roundBombIcon.color = Color.white;
		yield return new WaitForSeconds(0.225f);
		roundBombIcon.color = Color.red;
		yield return new WaitForSeconds(0.10f);
		pip1 = false;
	}
	IEnumerator OnOff0(){
		roundBombIcon.color = Color.white;
		yield return new WaitForSeconds(0.07f);
		roundBombIcon.color = Color.red;
		yield return new WaitForSeconds(0.07f);
		pip1 = false;
	}

	IEnumerator C4Color(){
		c4Button.icon.color = Color.green;
		yield return new WaitForSeconds(0.15f);
		c4Button.icon.color = Color.white;
		yield return new WaitForSeconds(0.15f);
		colorC4 = false;
	}

	IEnumerator DiffuseColor(){
		DiffuseButton.icon.color = Color.green;
		yield return new WaitForSeconds(0.15f);
		DiffuseButton.icon.color = Color.white;
		yield return new WaitForSeconds(0.15f);
		colorDiffuse = false;
	}

#if UNITY_ANDROID || UNITY_IOS || UNITY_WP8 || UNITY_WP8_1
    void MobileButtonsCheck (Vector2 touchPos, int touchID)
    {
        //Move controller
        if (moveTouch.defaultArea.Contains(new Vector2(touchPos.x, Screen.height - touchPos.y)) && !moveTouch.isActive)
        {
            moveTouch.isActive = true;
            moveTouch.touchOffset = new Vector2(touchPos.x - moveTouch.defaultArea.x, Screen.height - touchPos.y - moveTouch.defaultArea.y);
            moveTouch.currentTouchPos = new Vector2(touchPos.x, Screen.height - touchPos.y);
            moveTouch.touchID = touchID;
        }

        //Look around
		if (touchPos.x > Screen.width / 2 && !fpsLookTouch.isActive && !(new Rect(Screen.width - crouchButton.mainArea.x - crouchButton.mainArea.width, Screen.height - crouchButton.mainArea.y - crouchButton.mainArea.height,
			crouchButton.mainArea.width, crouchButton.mainArea.height)).Contains(touchPos) && !(new Rect(Screen.width - reloadButton.mainArea.x - reloadButton.mainArea.width, Screen.height - reloadButton.mainArea.y - reloadButton.mainArea.height,
				reloadButton.mainArea.width, reloadButton.mainArea.height)).Contains(touchPos) && !(new Rect(Screen.width - aimButton.mainArea.x - aimButton.mainArea.width, Screen.height - aimButton.mainArea.y - aimButton.mainArea.height,
					aimButton.mainArea.width, aimButton.mainArea.height)).Contains(touchPos) && !(new Rect(Screen.width - jumpButton.mainArea.x - jumpButton.mainArea.width, Screen.height - jumpButton.mainArea.y - jumpButton.mainArea.height,
						jumpButton.mainArea.width, jumpButton.mainArea.height)).Contains(touchPos) && !(new Rect(Screen.width - Gun1Button.mainArea.x - Gun1Button.mainArea.width, Screen.height - Gun1Button.mainArea.y - Gun1Button.mainArea.height,
							Gun1Button.mainArea.width, Gun1Button.mainArea.height)).Contains(touchPos) && !(new Rect(Screen.width - Gun2Button.mainArea.x - Gun2Button.mainArea.width, Screen.height - Gun2Button.mainArea.y - Gun2Button.mainArea.height,
								Gun2Button.mainArea.width, Gun2Button.mainArea.height)).Contains(touchPos) && !(new Rect(Screen.width - Gun3Button.mainArea.x - Gun3Button.mainArea.width, Screen.height - Gun3Button.mainArea.y - Gun3Button.mainArea.height,
									Gun3Button.mainArea.width, Gun3Button.mainArea.height)).Contains(touchPos) && !(new Rect(Screen.width - LookWeaponButton.mainArea.x - LookWeaponButton.mainArea.width, Screen.height - LookWeaponButton.mainArea.y - LookWeaponButton.mainArea.height,
										LookWeaponButton.mainArea.width, LookWeaponButton.mainArea.height)).Contains(touchPos))
        {
					//To use later for fast swiping
					initialTouchPos = new Vector2 (touchPos.x, Screen.height - touchPos.y);
					swipeTime = 0;

					fpsLookTouch.isActive = true;
					fpsLookTouch.touchID = touchID;
					fpsLookTouch.touchOffset = initialTouchPos;
					fpsLookTouch.currentTouchPos = initialTouchPos;
        }

		//Fire button press
		if ((new Rect(Screen.width - fireButton.mainArea.x - fireButton.mainArea.width, Screen.height - fireButton.mainArea.y - fireButton.mainArea.height,
			fireButton.mainArea.width, fireButton.mainArea.height)).Contains(touchPos))
		{
			if (rc.ourPlayer.playerWeapons.currentSelectedWeapon.wSettings.fireType != PlayerWeapons.FireType.C4 && !toggleFire)
			{
				fireButton.isActive = true;
				GameSettings.mobileFiring = true;
				fireButton.touchID = touchID;
			}
		}
		else 
		{
			fireButton.isActive = false;
			GameSettings.mobileFiring = false;
			fireButton.touchID = touchID;
		}

		//Reload button press
		if ((new Rect(Screen.width - reloadButton.mainArea.x - reloadButton.mainArea.width, Screen.height - reloadButton.mainArea.y - reloadButton.mainArea.height,
            reloadButton.mainArea.width, reloadButton.mainArea.height)).Contains(touchPos))
        {
            //reloadButton.isActive = true;
            GameSettings.mobileReloading = true;
        }

		//FireToggle button press
		if ((new Rect(Screen.width - ToggleFire.mainArea.x - ToggleFire.mainArea.width, Screen.height - ToggleFire.mainArea.y - ToggleFire.mainArea.height,
			ToggleFire.mainArea.width, ToggleFire.mainArea.height)).Contains(touchPos))
		{
			switchBulletToggle();
		}

		//look button press
		if ((new Rect(Screen.width - LookWeaponButton.mainArea.x - LookWeaponButton.mainArea.width, Screen.height - LookWeaponButton.mainArea.y - LookWeaponButton.mainArea.height,
			LookWeaponButton.mainArea.width, LookWeaponButton.mainArea.height)).Contains(touchPos))
		{
			//reloadButton.isActive = true;
			GameSettings.mobileLook = true;
		}

        //Aim button press
        if ((new Rect(Screen.width - aimButton.mainArea.x - aimButton.mainArea.width, Screen.height - aimButton.mainArea.y - aimButton.mainArea.height,
            aimButton.mainArea.width, aimButton.mainArea.height)).Contains(touchPos))
        {
            //reloadButton.isActive = true;
            GameSettings.mobileAiming = true;

        }

        //Jump button press
        if ((new Rect(Screen.width - jumpButton.mainArea.x - jumpButton.mainArea.width, Screen.height - jumpButton.mainArea.y - jumpButton.mainArea.height,
            jumpButton.mainArea.width, jumpButton.mainArea.height)).Contains(touchPos))
        {
            //reloadButton.isActive = true;
			GameSettings.mobileJumping = true;

        }

		//Crouch button press
		if ((new Rect(Screen.width - crouchButton.mainArea.x - crouchButton.mainArea.width, Screen.height - crouchButton.mainArea.y - crouchButton.mainArea.height,
			crouchButton.mainArea.width, crouchButton.mainArea.height)).Contains(touchPos))
		{
			//reloadButton.isActive = true;
			GameSettings.mobileCrounch = true;
		}

		//Grenade button press
		if (rc.ourPlayer) {
			if (rc.ourPlayer.playerWeapons.selectedGrenade == 1) {
				if ((new Rect (Screen.width - GrenadeButton.mainArea.x - GrenadeButton.mainArea.width, Screen.height - GrenadeButton.mainArea.y - GrenadeButton.mainArea.height,
					   GrenadeButton.mainArea.width, GrenadeButton.mainArea.height)).Contains (touchPos)) {
					rc.ourPlayer.playerWeapons.SwitchWeaponGrenade ();
				}
			}
		}

		//Flash button press
		if (rc.ourPlayer) {
			if (rc.ourPlayer.playerWeapons.selectedFlash == 2) {
				if ((new Rect (Screen.width - FlashButton.mainArea.x - FlashButton.mainArea.width, Screen.height - FlashButton.mainArea.y - FlashButton.mainArea.height,
					   FlashButton.mainArea.width, FlashButton.mainArea.height)).Contains (touchPos)) {
					rc.ourPlayer.playerWeapons.SwitchWeaponFlash ();
				}
			}
		}

		//Flash button press
		if (rc.ourPlayer) {
			if ((new Rect (Screen.width - ChatButton.mainArea.x - ChatButton.mainArea.width, Screen.height - ChatButton.mainArea.y - ChatButton.mainArea.height,
				ChatButton.mainArea.width, ChatButton.mainArea.height)).Contains (touchPos)) {
				mpc.ChatMenu ();

				}
		}

		if (rc.ourPlayer) {
			if (rc.ourPlayer.MeName == GameSettings.C4Who && rc.ourPlayer.playerTeam == 2 && !GameSettings.C4on && rc.currentGameMode == "NORMAL" && !rc.ourPlayer.playerKilled && !GameSettings.TimeOff) {
				if ((new Rect (Screen.width - c4Button.mainArea.x - c4Button.mainArea.width, Screen.height - c4Button.mainArea.y - c4Button.mainArea.height,
					   c4Button.mainArea.width, c4Button.mainArea.height)).Contains (touchPos)) {
					c4Button.isActive = true;
					if (rc.C4Tag) {
						GameSettings.C4CreateUI = true;
						GameSettings.C4idle = false;
						GameSettings.mobileFiring = true;
						GameSettings.mobileCrounch = true;
					} 
					else if(!rc.C4Tag && GameSettings.ShowMessageBombMe != true){
						GameSettings.AB = true;
					}
					if (!rc.C4Tag) {
						GameSettings.C4idle = false;
					}
					c4Button.touchID = touchID;
					rc.ourPlayer.playerWeapons.SwitchWeaponC4 ();
				}
			}
			else if (rc.C4XTag && rc.ourPlayer.playerTeam == 2 && !GameSettings.C4on && rc.currentGameMode == "NORMAL" && !rc.ourPlayer.playerKilled && !GameSettings.TimeOff) {
				if ((new Rect (Screen.width - c4Button.mainArea.x - c4Button.mainArea.width, Screen.height - c4Button.mainArea.y - c4Button.mainArea.height,
					c4Button.mainArea.width, c4Button.mainArea.height)).Contains (touchPos)) {
					c4Button.isActive = true;
					if (rc.C4Tag) {
						GameSettings.AnimOn = false;
						GameSettings.C4CreateUI = true;
						GameSettings.C4idle = false;
						GameSettings.mobileFiring = true;
						GameSettings.mobileCrounch = true;
					} 
					else if(!rc.C4Tag && GameSettings.ShowMessageBombMe != true){
						GameSettings.AB = true;
					}
					if (!rc.C4Tag) {
						GameSettings.C4idle = false;
					}
					c4Button.touchID = touchID;
					rc.ourPlayer.playerWeapons.SwitchWeaponC4 ();
				}
			}
		}

		if (rc.ourPlayer) {
			if (rc.ourPlayer.playerTeam == 1 && GameSettings.C4on && rc.DiffuseTag && rc.currentGameMode == "NORMAL" && !rc.ourPlayer.playerKilled) {
				if ((new Rect (Screen.width - DiffuseButton.mainArea.x - DiffuseButton.mainArea.width, Screen.height - DiffuseButton.mainArea.y - DiffuseButton.mainArea.height,
					   DiffuseButton.mainArea.width, DiffuseButton.mainArea.height)).Contains (touchPos)) {
					if (rc.DiffuseTag) {
						rc.DiffuseCreateUI = true;
						GameSettings.mobileCrounch = true;
						if (!diffuseSound) {
							rc.ZeroStrikeX.clip = rc.DiffuseTake;
							rc.ZeroStrikeX.Play ();
							diffuseSound = true;
						}
					}
					DiffuseButton.isActive = true;
					DiffuseButton.touchID = touchID;
				}
			}
		}

        //Switch weapon button
		if ((new Rect(Screen.width - Gun1Button.mainArea.x - Gun1Button.mainArea.width, Screen.height - Gun1Button.mainArea.y - Gun1Button.mainArea.height,
			Gun1Button.mainArea.width, Gun1Button.mainArea.height)).Contains(touchPos))
        {
			if (rc.ourPlayer.playerWeapons.selectedPrimary > 1) {
				//reloadButton.isActive = true;
				GameSettings.switchWeaponIndex = 3;
			} 
			else {
				GameSettings.switchWeaponIndex = 2;
			}
        }
		if ((new Rect(Screen.width - Gun2Button.mainArea.x - Gun2Button.mainArea.width, Screen.height - Gun2Button.mainArea.y - Gun2Button.mainArea.height,
			Gun2Button.mainArea.width, Gun2Button.mainArea.height)).Contains(touchPos) && rc.ourPlayer.playerWeapons.selectedPrimary > 1)
		{
			//reloadButton.isActive = true;
			GameSettings.switchWeaponIndex = 1;
		}
		if ((new Rect(Screen.width - Gun3Button.mainArea.x - Gun3Button.mainArea.width, Screen.height - Gun3Button.mainArea.y - Gun3Button.mainArea.height,
			Gun3Button.mainArea.width, Gun3Button.mainArea.height)).Contains(touchPos))
		{
			if (rc.ourPlayer.playerWeapons.selectedPrimary > 1) {
				//reloadButton.isActive = true;
				GameSettings.switchWeaponIndex = 2;
			} 
			else {
				GameSettings.switchWeaponIndex = 3;
			}
		}


        //Open buy menu
        if (touchPos.x > Screen.width / 2 - 80 && touchPos.x < Screen.width / 2 + 80 && 
            Screen.height - touchPos.y > buyMenuText.textShadow.rectTransform.position.y && Screen.height - touchPos.y < buyMenuText.textShadow.rectTransform.position.y + 80 &&
            !GameSettings.menuOpened)
        {
            if (!rc.ourPlayer || rc.timeToPurchase > 0)
            {
                rc.OpenBuyMenu();
            }
        }
    }

	bool Mobilefire = false;

	private void FixedUpdate()
	{
		if (toggleFire) 
		{
			ProcessAutoFire();
		}
	}

	private void ProcessAutoFire()
    {
		if (!rc.ourPlayer) 
		{
			return;
			Debug.Log("IN3");

		}
		Debug.Log("IN2");

		int rayLength;

        switch (rc.ourPlayer.playerWeapons.currentSelectedWeapon.wSettings.fireType)
        {
			case PlayerWeapons.FireType.Knife:
				rayLength = 5;
				break;
			default:
				rayLength = 100;
				break;
		}
		
		var ray = rc.ourPlayer.playerWeapons.playerCamera.GetComponent<Camera>().ScreenPointToRay(new Vector3(Screen.width/2,Screen.height/2,0));
		bool hit = Physics.Raycast(ray, out RaycastHit hitInfo, rayLength);
		var hitbox = hit ? hitInfo.transform.GetComponent<HitBox>() : null;
		
		Debug.DrawRay(ray.origin, ray.direction * rayLength, Color.green);

		if (!hitbox || hitbox.playerNetwork.playerTeam == rc.ourTeam)
        {
			fireButton.isActive = false;
			GameSettings.mobileFiring = false;
			return;
		}

		if (rc.ourPlayer.playerWeapons.selectedGrenade == 1 && rc.ourPlayer.playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.GRENADE_LAUNCHER)
		{
			fireButton.isActive = false;
			GameSettings.grenadeShoot = true;
		}
		else if (rc.ourPlayer.playerWeapons.selectedFlash == 2 && rc.ourPlayer.playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.FlashBang)
		{
			fireButton.isActive = false;
			GameSettings.flashShoot = true;
		}
		else if (rc.ourPlayer.playerWeapons.currentSelectedWeapon.wSettings.fireType != PlayerWeapons.FireType.C4)
        {
            fireButton.isActive = true;
            GameSettings.mobileFiring = true;
        }

		Debug.DrawRay(ray.origin, ray.direction * rayLength, Color.red);
	}

    void MobileButtonStop(int touchID)
    {
        if (moveTouch.isActive && moveTouch.touchID == touchID)
        {
            moveTouch.isActive = false;
            moveTouch.touchOffset = Vector2.zero;
            moveTouch.touchID = -1;
        }

		if (fireButton.isActive && fireButton.touchID == touchID)
		{
			if (rc.ourPlayer.playerWeapons.selectedGrenade == 1 && rc.ourPlayer.playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.GRENADE_LAUNCHER)
			{
				fireButton.isActive = false;
				GameSettings.grenadeShoot = true;
			}
			else if (rc.ourPlayer.playerWeapons.selectedFlash == 2 && rc.ourPlayer.playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.FlashBang)
			{
				fireButton.isActive = false;
				GameSettings.flashShoot = true;
			}
			else
			{
				fireButton.isActive = false;
				GameSettings.mobileFiring = false;
			}
		}

		if (fpsLookTouch.isActive && fpsLookTouch.touchID == touchID)
        {
            fpsLookTouch.isActive = false;
            fpsLookTouch.touchOffset = Vector2.zero;
            fpsLookTouch.touchID = -1;
        }

		if (c4Button.isActive && c4Button.touchID == touchID) {
			C4Create = 0f;
			BombI.rectTransform.sizeDelta = new Vector2(4, 7.5f);
			BombI.gameObject.SetActive (false);
			BombBorderI.gameObject.SetActive (false);
			c4Button.isActive = false;
			if (rc.C4Tag) {
				GameSettings.C4idle = true;
				GameSettings.C4CreateUI = false;
				GameSettings.mobileFiring = false;
				GameSettings.mobileCrounch = true;
				if (!GameSettings.AnimOn) {
					GameSettings.AnimOn = true;
				}
			}
		}

		if (DiffuseButton.isActive && DiffuseButton.touchID == touchID) {
			DiffuseCreate = 0;
			BombI.rectTransform.sizeDelta = new Vector2(4, 7.5f);
			BombI.gameObject.SetActive (false);
			BombBorderI.gameObject.SetActive (false);
			DiffuseButton.isActive = false;
			if (rc.DiffuseTag) {
				rc.DiffuseCreateUI = false;
				diffuseSound = false;
				GameSettings.mobileCrounch = true;
			}
		}

    }
#endif

}
