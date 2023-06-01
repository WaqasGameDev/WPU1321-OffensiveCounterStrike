using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class RoomUIController : MonoBehaviour
{
	public static RoomUIController instance;

	//Crosshair
	public GameObject crosshairRoot;
	public Image[] crosshairSet = new Image[4];
	public Image redScreen;



	public Image roundHow;
	public Image RoundMiddle;

	public Image roundHowFFA;

	public Image roundBombIcon;
	public Image BombI;
	public Image BombBorderI;
	public Image HpI;
	public Image HpBack;
	public Image FlashImage;
	public CanvasGroup FlashCanvas;
	public Image[] hitDetectorSet = new Image[4];

	bool previousHitDetector = false;

	//General HUD - this will include general graphics like Round Time, Ammo, HP, Buy Menu buttons etc.
	public Canvas mainCanvas;
	public Canvas unDisputedCanvas;

	public Text roundTimeText;

	public Text roundCounterScoreText;

	public Text roundTerorScoreText;
	public Text RoundCounterText;
	public Text RoundTerorText;
	public Text cashText;
	public Text KillText;
	public Text addMoreCashText;
	public Text weaponAndAmmoText;
	public Text Gun1Ammo;
	public Text Gun2Ammo;
	public Text killedShowText;
	public Outline KilledOut;
	public  RoomUI.ActionReports respawnTimeText = new RoomUI.ActionReports();
	public RoomUI.ActionReports buyMenuText = new RoomUI.ActionReports();

	public RoomUI.ActionReports shieldText = new RoomUI.ActionReports();

	
	public GameObject moveTouch;

	public RoomUI.ActionButton fireButton;
	public RoomUI.ActionButton reloadButton;
	public RoomUI.ActionButton aimButton;
	public RoomUI.ActionButton jumpButton;
	public RoomUI.ActionButton crouchButton;
	public RoomUI.ActionButton GrenadeButton;
	public RoomUI.ActionButton FlashButton;
	public RoomUI.ActionButton ToggleFire;
	public RoomUI.ActionButton ChatButton;
	public RoomUI.ActionButton Gun1Button;
	public RoomUI.ActionButton Gun2Button;
	public RoomUI.ActionButton Gun3Button;
	public RoomUI.ActionButton c4Button;
	public RoomUI.ActionButton DiffuseButton;
	public RoomUI.ActionButton LookWeaponButton;
	public RoomUI.ActionButton shopBuyT;


	public Image sniperScope;
	float scopeTextureRatio;
	Sprite scopeTextureTmp;

	bool isFiring;

	private void Awake()
    {
		instance = this;

	}




	//   private void Update()
	//   {
	//	GameSettings.mobileFiring = isFiring;

	//}
	//public void OnFireDown()
	//   {
	//	//GameSettings.mobileFiring = true;
	//	isFiring = true;
	//}

	//public void OnFireUP()
	//{
	//	isFiring = false;

	//}

}
