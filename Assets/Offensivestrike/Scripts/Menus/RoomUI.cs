using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using Hashtable = ExitGames.Client.Photon.Hashtable; //Replace default Hashtables with Photon hashtables

public class RoomUI : Photon.MonoBehaviour
{
	public GameObject uiMenu;
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

	public bool toggleFire;
#endif

	//Crosshair
	GameObject crosshairRoot;
    Image[] crosshairSet = new Image[4];
    Image redScreen;


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

	public UIDragLookScript UIDragLook;

	public UIJoyStick uIJoyStick;



	[System.Serializable]
    public class ActionButton
    {
		public GameObject pGameObject;
        public Image background;
        public Image icon;
        public bool isActive = false;
		public UIButton uiBtnScript;

	}

	public ActionButton fireButton;
	public ActionButton reloadButton;
	public ActionButton aimButton;
	public ActionButton jumpButton;
	public ActionButton crouchButton;
	public ActionButton GrenadeButton;

	public ActionButton FlashButton;
	

	public ActionButton ToggleFire;
	public ActionButton ChatButton;
	public ActionButton LookWeaponButton;


	public ActionButton Gun1Button;
	public ActionButton Gun2Button;
	public ActionButton Gun3Button;
	public ActionButton c4Button;
	public ActionButton DiffuseButton;
	ActionButton shopBuyT;

	public GameObject moveTouch;



	public float C4Create = 0f;
	public float DiffuseCreate = 0f;
	bool diffuseSound = false;


    RoomController rc;
	MultiplayerChat mpc;
	xmlReader xml;
	string languagesPrefsName = "SelectedLanguages";
	public Color aColor;

	RoomUIController uIController;
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
		GameObject uiCanvasObject = GameObject.Instantiate(uiMenu);
		uiCanvasObject.SetActive(true);
		uIController = uiCanvasObject.GetComponentInChildren<RoomUIController>();
		//Use new Unity UI
		InitializeGUI();
    }

	private IEnumerator StartOfflineModeTimer()
    {
		var timer = 0f;

		while (true)
		{
			timer += Time.deltaTime;

			int minutes = Mathf.FloorToInt(timer / 60);
			int seconds = Mathf.FloorToInt(timer % 60);

			string timerTextString = string.Format("{0:00}:{1:00}", minutes, seconds);
			roundTimeText.text = timerTextString;

			yield return null;
		}
	}

	void InitializeGUI()
	{
		mainCanvas = uIController.mainCanvas;
		FlashImage = uIController.FlashImage;
		FlashCanvas = uIController.FlashCanvas;

		roundHow = uIController.roundHow;
		RoundMiddle = uIController.RoundMiddle;
		BombBorderI = uIController.BombBorderI;
		BombI = uIController.BombI;
		roundBombIcon = uIController.roundBombIcon;
		roundHowFFA = uIController.roundHowFFA;
		roundTimeText = uIController.roundTimeText;
		if (rc.offlineMode)
		{
			StartCoroutine(StartOfflineModeTimer());
		}
		roundCounterScoreText = uIController.roundCounterScoreText;
		roundTerorScoreText = uIController.roundTerorScoreText;
		RoundTerorText = uIController.RoundTerorText;
		RoundCounterText = uIController.RoundCounterText;

		cashText = uIController.cashText;
		KillText = uIController.KillText;
		KilledOut = uIController.KilledOut;


	    addMoreCashText = uIController.addMoreCashText;
		killedShowText = uIController.killedShowText;

		weaponAndAmmoText = uIController.weaponAndAmmoText;
		Gun1Ammo = uIController.Gun1Ammo;
		Gun2Ammo = uIController.Gun2Ammo;

	
	    HpBack = uIController.HpBack;

		HpI = uIController.HpI;

		crosshairRoot = uIController.crosshairRoot;

		crosshairSet = uIController.crosshairSet;

		hitDetectorSet = uIController.hitDetectorSet;

		redScreen = uIController.redScreen;
		shopBuyT = uIController.shopBuyT;
		buyMenuText = uIController.buyMenuText;

		respawnTimeText = uIController.respawnTimeText;
		shieldText = uIController.shieldText;
		sniperScope = uIController.sniperScope;

		fireButton = uIController.fireButton;
		reloadButton = uIController.reloadButton;
		aimButton = uIController.aimButton;
		jumpButton = uIController.jumpButton;
		crouchButton = uIController.crouchButton;
		c4Button = uIController.c4Button;
		DiffuseButton = uIController.DiffuseButton;
		GrenadeButton = uIController.GrenadeButton;
		FlashButton = uIController.FlashButton;

		Gun1Button = uIController.Gun1Button;
		Gun2Button = uIController.Gun2Button;
		Gun3Button = uIController.Gun3Button;
		ToggleFire = uIController.ToggleFire;
		ChatButton = uIController.ChatButton;
		LookWeaponButton = uIController.LookWeaponButton;
		moveTouch = uIController.moveTouch;
		UIDragLook = uIController.UIDragLook;
		uIJoyStick = uIController.uIJoyStick;

	roundTimeText.font = GameSettings.guiSkin.customStyles[1].font;
		roundCounterScoreText.font = GameSettings.guiSkin.customStyles[1].font;
		roundTerorScoreText.font = GameSettings.guiSkin.customStyles[1].font;
		RoundTerorText.font = GameSettings.guiSkin.customStyles[3].font;
		RoundCounterText.font = GameSettings.guiSkin.customStyles[3].font;
		cashText.font = GameSettings.guiSkin.font;
		weaponAndAmmoText.font = GameSettings.guiSkin.font;
		respawnTimeText.mainText.font = GameSettings.guiSkin.font;
		buyMenuText.mainText.font = GameSettings.guiSkin.font;
		shieldText.mainText.font = GameSettings.guiSkin.font;



		if (toggleFire)
		{
			ToggleFire.icon.sprite = fireToggleOnTexture;
			//  fireButton.icon.rectTransform.sizeDelta = new Vector2(0, 0);
		}

		else
		{
			ToggleFire.icon.sprite = fireToggleOffTexture;
			// fireButton.icon.rectTransform.sizeDelta = new Vector2(80, 80);

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
				jumpButton.pGameObject.SetActive (true);
				Gun1Button.pGameObject.SetActive (true);
				Gun2Button.pGameObject.SetActive (true);
				Gun3Button.pGameObject.SetActive (true);
				crouchButton.pGameObject.SetActive (true);
				aimButton.pGameObject.SetActive (true);
				reloadButton.pGameObject.SetActive (true);
				fireButton.pGameObject.SetActive (true && !toggleFire);
				moveTouch.SetActive (true);
				//ChatButton.icon.gameObject.SetActive (true);
				ChatButton.pGameObject.SetActive (true);
				cashText.gameObject.SetActive (true);
				shopBuyT.pGameObject.gameObject.SetActive (true);
				Gun1Button.pGameObject.SetActive(true);
				Gun2Button.pGameObject.SetActive(true);
				Gun3Button.pGameObject.SetActive(true);
				buyMenuText.mainText.gameObject.SetActive (true);
				buyMenuText.textShadow.gameObject.SetActive (true);
				LookWeaponButton.pGameObject.SetActive (true);
				LookWeaponButton.pGameObject.SetActive (true);



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
                        //scopeTextureRatio = ((float)scopeTextureTmp.rect.width * 0.01f) / ((float)scopeTextureTmp.rect.height * 0.01f);
                        sniperScope.sprite = scopeTextureTmp;
                        //sniperScope.rectTransform.sizeDelta = new Vector2(Screen.height * scopeTextureRatio, Screen.height);
                        sniperScope.gameObject.SetActive(true);
                    }
                    else
                    {
                        sniperScope.gameObject.SetActive(false);
                    }
                }

				if (rc.ourPlayer.playerWeapons.selectedGrenade == 1) {
					GrenadeButton.pGameObject.SetActive (true);
				} 
				else {
					
					GrenadeButton.pGameObject.SetActive (false);
				}

				if (rc.ourPlayer.playerWeapons.selectedFlash == 2) {
					FlashButton.pGameObject.SetActive (true);
					FlashButton.pGameObject.SetActive (true);
				} 
				else {
					FlashButton.pGameObject.SetActive (false);
				}

            }
            else
            {
                weaponAndAmmoText.text = "";
				sniperScope.gameObject.SetActive(false);
				jumpButton.pGameObject.SetActive (false);
				Gun1Button.pGameObject.SetActive (false);
				Gun2Button.pGameObject.SetActive (false);
				Gun3Button.pGameObject.SetActive (false);
				Gun1Ammo.text = "";
				Gun2Ammo.text = "";
				crouchButton.pGameObject.SetActive (false);
				c4Button.pGameObject.SetActive (false);
				c4Button.pGameObject.SetActive (false);
				DiffuseButton.pGameObject.SetActive (false);
				aimButton.pGameObject.SetActive (false);
				reloadButton.pGameObject.SetActive (false);
				fireButton.pGameObject.SetActive (false);
				moveTouch.SetActive (false);
				BombI.gameObject.SetActive (false);
				BombBorderI.gameObject.SetActive (false);
				HpI.gameObject.SetActive (false);
				HpBack.gameObject.SetActive (false);
				GrenadeButton.pGameObject.SetActive (false);
				GrenadeButton.pGameObject.SetActive (false);
				FlashButton.pGameObject.SetActive (false);
				FlashButton.pGameObject.SetActive (false);
				//ChatButton.icon.gameObject.SetActive (false);
				ChatButton.pGameObject.SetActive (false);
				cashText.gameObject.SetActive (false);
				shopBuyT.pGameObject.SetActive (false);
				Gun1Button.pGameObject.SetActive(false);
				Gun2Button.pGameObject.SetActive(false);
				Gun3Button.pGameObject.SetActive(false);
				buyMenuText.mainText.gameObject.SetActive (false);
				buyMenuText.textShadow.gameObject.SetActive (false);
				LookWeaponButton.pGameObject.SetActive (false);
				LookWeaponButton.pGameObject.SetActive (false);
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
				c4Button.pGameObject.SetActive (true);
			} else {
				c4Button.pGameObject.SetActive (false);
			}

			if (rc.C4XTag) {
				if (rc.ourPlayer.playerTeam == 2 && !GameSettings.C4on && rc.currentGameMode == "NORMAL" && !GameSettings.TimeOff) {
					c4Button.pGameObject.SetActive (true);
				} else {
					c4Button.pGameObject.SetActive (false);
				}
			}

			if (rc.ourPlayer.playerTeam == 1 && rc.currentGameMode == "NORMAL") {
				DiffuseButton.pGameObject.SetActive (true);
			} else {
				DiffuseButton.pGameObject.SetActive (false);
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
			shopBuyT.pGameObject.SetActive(false);

			buyMenuText.mainText.text = "";
            buyMenuText.textShadow.text = "";
			shieldText.mainText.text = "";
			shieldText.textShadow.text = "";
        }

		Inputs();

    }


	public void Inputs()
    {
        //GameSettings.moveDirection.x = ControlFreak2.CF2Input.GetAxis("Horizontal");
        //GameSettings.moveDirection.y = ControlFreak2.CF2Input.GetAxis("Vertical");
        //GameSettings.lookDirection = new Vector2(ControlFreak2.CF2Input.GetAxis("Mouse X"), ControlFreak2.CF2Input.GetAxis("Mouse Y"));

        GameSettings.moveDirection = uIJoyStick.GetHorizontalAndVerticalValue();
        GameSettings.lookDirection = UIDragLook.GetHorizontalAndVerticalValue();

        GameSettings.mobileFiring = fireButton.uiBtnScript.isPressing;
		GameSettings.mobileReloading = reloadButton.uiBtnScript.isPressing;
		GameSettings.mobileLook = LookWeaponButton.uiBtnScript.isPressing;
		GameSettings.mobileJumping = jumpButton.uiBtnScript.isPressing;

		if (crouchButton.uiBtnScript.isPressing)
        {
			GameSettings.mobileCrounch = crouchButton.uiBtnScript.isPressing;
			crouchButton.uiBtnScript.isPressing = false;
		}
		if (aimButton.uiBtnScript.isPressing)
		{
			GameSettings.mobileAiming = aimButton.uiBtnScript.isPressing;
			aimButton.uiBtnScript.isPressing = false;
		}

		if (fireButton.uiBtnScript.isPressing)
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
				GameSettings.mobileFiring = true;
			}
        }
        else
        {
			GameSettings.flashShoot = false;
			GameSettings.grenadeShoot = false;
			GameSettings.mobileFiring = false;

		}

		if (rc.ourPlayer && ChatButton.uiBtnScript.isPressing)
		{

			mpc.ChatMenu();
		}

		if (rc.ourPlayer && GrenadeButton.uiBtnScript.isPressing)
		{

			rc.ourPlayer.playerWeapons.SwitchWeaponGrenade();
		}

		if (rc.ourPlayer && FlashButton.uiBtnScript.isPressing)
		{
			if (rc.ourPlayer.playerWeapons.selectedFlash == 2)
			{
				rc.ourPlayer.playerWeapons.SwitchWeaponFlash();
			}
		}

		if (rc.ourPlayer)
		{
			if (rc.ourPlayer.MeName == GameSettings.C4Who && rc.ourPlayer.playerTeam == 2 && !GameSettings.C4on && rc.currentGameMode == "NORMAL" && !rc.ourPlayer.playerKilled && !GameSettings.TimeOff)
			{
				if (c4Button.uiBtnScript.isPressing)
				{
					c4Button.uiBtnScript.isPressing = false;
					c4Button.isActive = true;
					if (rc.C4Tag)
					{
						GameSettings.C4CreateUI = true;
						GameSettings.C4idle = false;
						GameSettings.mobileFiring = true;
						GameSettings.mobileCrounch = true;
					}
					else if (!rc.C4Tag && GameSettings.ShowMessageBombMe != true)
					{
						GameSettings.AB = true;
					}
					if (!rc.C4Tag)
					{
						GameSettings.C4idle = false;
					}
					//c4Button.touchID = touchID;
					rc.ourPlayer.playerWeapons.SwitchWeaponC4();
				}
			}
			else if (rc.C4XTag && rc.ourPlayer.playerTeam == 2 && !GameSettings.C4on && rc.currentGameMode == "NORMAL" && !rc.ourPlayer.playerKilled && !GameSettings.TimeOff)
			{
				if (c4Button.uiBtnScript.isPressing)
				{
					c4Button.uiBtnScript.isPressing = false;

					c4Button.isActive = true;
					if (rc.C4Tag)
					{
						GameSettings.AnimOn = false;
						GameSettings.C4CreateUI = true;
						GameSettings.C4idle = false;
						GameSettings.mobileFiring = true;
						GameSettings.mobileCrounch = true;
					}
					else if (!rc.C4Tag && GameSettings.ShowMessageBombMe != true)
					{
						GameSettings.AB = true;
					}
					if (!rc.C4Tag)
					{
						GameSettings.C4idle = false;
					}
					//c4Button.touchID = touchID;
					rc.ourPlayer.playerWeapons.SwitchWeaponC4();
				}
			}
		}

		if (rc.ourPlayer)
		{
			if (rc.ourPlayer.playerTeam == 1 && GameSettings.C4on && rc.DiffuseTag && rc.currentGameMode == "NORMAL" && !rc.ourPlayer.playerKilled)
			{
				if (DiffuseButton.uiBtnScript.isPressing)
				{
					if (rc.DiffuseTag)
					{
						DiffuseButton.uiBtnScript.isPressing = false;
						//Invoke("ResetCrouch", 0.25f);
						rc.DiffuseCreateUI = true;
						GameSettings.mobileCrounch = true;
						if (!diffuseSound)
						{
							rc.ZeroStrikeX.clip = rc.DiffuseTake;
							rc.ZeroStrikeX.Play();
							diffuseSound = true;
						}
					}
					DiffuseButton.isActive = true;
					//DiffuseButton.touchID = touchID;
				}
			}
		}

		//Switch weapon button
		if (Gun1Button.uiBtnScript.isPressing)

		{
			if (rc.ourPlayer.playerWeapons.selectedPrimary > 1)
			{
				//reloadButton.isActive = true;
				GameSettings.switchWeaponIndex = 3;
			}
			else
			{
				GameSettings.switchWeaponIndex = 2;
			}
		}
		if (Gun2Button.uiBtnScript.isPressing && rc.ourPlayer.playerWeapons.selectedPrimary > 1)
		{
			//reloadButton.isActive = true;
			GameSettings.switchWeaponIndex = 1;
		}
		if (Gun3Button.uiBtnScript.isPressing)
		{
			if (rc.ourPlayer.playerWeapons.selectedPrimary > 1)
			{
				//reloadButton.isActive = true;
				GameSettings.switchWeaponIndex = 2;
			}
			else
			{
				GameSettings.switchWeaponIndex = 3;
			}
		}

		//Open buy menu
		if (shopBuyT.uiBtnScript.isPressing && 
			!GameSettings.menuOpened)
		{
			if (!rc.ourPlayer || rc.timeToPurchase > 0)
			{
				rc.OpenBuyMenu();
			}
		}

		if (!GameSettings.menuOpened && ToggleFire.uiBtnScript.isPressing)
		{
			ToggleFire.uiBtnScript.isPressing = false;
			switchBulletToggle();

		}

	}

	void ResetCrouch()
    {
		GameSettings.mobileCrounch = false;

	}
	public void switchBulletToggle()
    {
       toggleFire = !toggleFire;
        if (toggleFire)
        {
            ToggleFire.icon.sprite = fireToggleOnTexture;
            PlayerPrefs.SetInt("autofire", 1);
          //  fireButton.icon.rectTransform.sizeDelta = new Vector2(0, 0);
        }

        else
        {
			ToggleFire.icon.sprite = fireToggleOffTexture;
            PlayerPrefs.SetInt("autofire", 0);
           // fireButton.icon.rectTransform.sizeDelta = new Vector2(80, 80);
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
		if (!rc.ourPlayer || rc.ourPlayer.playerWeapons== null) 
		{
			return;

		}

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
		var hitbox = hit ? hitInfo.collider.GetComponent<HitBox>() : null;
		
		Debug.DrawRay(ray.origin, ray.direction * rayLength, Color.green);


		if (!hitbox || (hitbox.playerNetwork.playerTeam == rc.ourTeam && !rc.offlineMode && rc.currentGameMode != "FFA"))
        {
			//fireButton.isActive = false;
			GameSettings.mobileFiring = false;
			return;
		}


		if (rc.ourPlayer.playerWeapons.selectedGrenade == 1 && rc.ourPlayer.playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.GRENADE_LAUNCHER)
		{
			//fireButton.isActive = false;
			GameSettings.grenadeShoot = true;
		}
		else if (rc.ourPlayer.playerWeapons.selectedFlash == 2 && rc.ourPlayer.playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.FlashBang)
		{
			//fireButton.isActive = false;
			GameSettings.flashShoot = true;
		}
		else if (rc.ourPlayer.playerWeapons.currentSelectedWeapon.wSettings.fireType != PlayerWeapons.FireType.C4)
        {
			//fireButton.isActive = true;
            GameSettings.mobileFiring = true;
        }

		Debug.DrawRay(ray.origin, ray.direction * rayLength, Color.red);
	}

   
    
#endif

}
