using UnityEngine;
using System.Collections;

public class GameSettings : MonoBehaviour
{

	//Purpose of this script is to collect all the static values that will be shared between scripts
	//Example is - team colors, player controls, static styles, shared components, default FOV etc.

#if UNITY_ANDROID || UNITY_IOS || UNITY_WP8 || UNITY_WP8_1
    //Mobiel variables
    public static Vector2 moveDirection = Vector2.zero;
    public static Vector2 lookDirection = Vector2.zero;
    public static bool mobileFiring = false;
    public static bool mobileReloading = false;
	public static bool mobileLook = false;
    public static bool mobileAiming = false;
    public static bool mobileJumping = false;
	public static bool mobileCrounch = false;
	public static bool grenadeShoot = false;
	public static bool flashShoot = false;
    public static int switchWeaponIndex = 1; //1 = primary weapon, 2 = secondary weapon,  3 = special weapon 
    public static bool refillingAmmo = false;
	public static bool C4on = false;
	public static bool TimeOff = false;
	public static bool ShowMessageBombMe = false;
	public static bool ShowBombPlace = false;
	public static bool C4CreateUI = false;
	public static bool AB = false;
	public static bool C4Fire = false;
	public static bool C4idle = false;
	public static bool Diffuse = false;
	public static bool MoveOn = false;
	public static bool AnimOn = false;
	public static bool C4Diffuse = false;
	public static bool jumpScheduled = false;
#endif

	public static string LastSelectedGun = "LastSelectedGun";

	//Static references
	public static RoomController rc;
	public static Scoreboard sb;
	//Random number used for value obfuscation
	public static int cnst = Random.Range(1111111, 9999999);

	//Camera settings
	public static float defaultFOV = 60;
	public static float currentFOV = GameSettings.defaultFOV;

	public static Sprite currentScopeTexture = null; //This is assigned at PlayerWeapons.cs when we aiming and using scope texture

	//Color settings
	public static string teamAName = "Counter";
	public static Color teamAColor = new Color(63 / 255.0f, 129 / 255.0f, 186 / 255.0f, 1);

	//public static string teamANameRound = "CounterRoundColor";
	public static Color teamARoundColor = new Color(63 / 255.0f, 129 / 255.0f, 255 / 255.0f, 1);

	public static string teamBName = "Terorist";
	public static Color teamBColor = new Color(255 / 255.0f, 145 / 255.0f, 0 / 255.0f, 1);
	public static Color drawColor = new Color(0.254f, 1, 0.395f, 1);
	public static Color HUDColor = new Color(255 / 255.0f, 233 / 255.0f, 91 / 255.0f, 1);
	public static Color buyColor = new Color(82 / 255.0f, 214 / 255.0f, 58 / 255.0f, 1);
	public static Color shieldColor = new Color(111 / 255.0f, 169 / 255.0f, 227 / 255.0f, 1);
	public static Color roundtColor = new Color(255 / 255.0f, 255 / 255.0f, 255 / 255.0f, 1);
	public static Color whitetColor = new Color(255 / 255.0f, 255 / 255.0f, 255 / 255.0f, 1);
	public static Color textShadowColor = new Color(0, 0, 0, 0.85f);
	public static Color customRedColor = new Color(0.858f, 0.352f, 0.388f, 1);
	public static Color otherPlayerGUIBoxColor = new Color(1, 1, 1, 0.5f);

	//Controls
	public static float mouseSensitivity = 1.70f;

	public static KeyCode[] playerKeys =
	{
		KeyCode.Mouse0, //0
		KeyCode.Mouse1, //1
		KeyCode.Alpha3, //2
		KeyCode.Alpha2, //3
		KeyCode.Alpha1, //4
		KeyCode.R, //5
		KeyCode.W, //6
		KeyCode.S, //7
		KeyCode.A, //8
		KeyCode.D, //9
		KeyCode.C, //10
		KeyCode.LeftShift, //11
		KeyCode.Space, //12
		KeyCode.B, //13
		KeyCode.F, //14
		KeyCode.T, //15
		KeyCode.Y //16
	};

	public static string[] playerKeysNames =
	{
		"Fire", //0
		"Aim", //1
		"Primary Weapon", //2
		"Secondary Weapon", //3
		"Special Weapon", //4
		"Reload", //5
		"Move Front", //6
		"Move Backward", //7
		"Move Left", //8
		"Move Right", //9
		"Crouch", //10
		"Sprint/Slow Walk", //11
		"Jump", //12
		"Buy Menu", //13
		"Use", //14
		"All Chat", //15
		"Team Chat" //16
	};

	public static KeyCode[] defaultPlayerKeys;

	//Other
	public static int[] randomA = new int[7];
	public static int[] randomB = new int[7];
	public static string errorText = "";
	public static string WinTeam = "";
	public static string C4Who = "";
	public static float currentFPS = 100.0f; //Framerate is calculated at RoomController.cs
	public static int ourTeam; //Set from RoomController.cs
	public static string currentGameMode;

	//Block player movement, firing etc. Set in RoomController.cs
	public static bool menuOpened = false;

	//Limit number of message and action reports appeared on screen
	public static int actionReportsLimit = 3;
	public static int actionWeaponReportsLimit = 5;
	public static int chatMessagesLimit = 3;
	public static bool updateActionReports = false;
	public static bool updateWeaponActionReports = false;
	public static bool updateChatMessages = false;

	//Here we store GUISkin and custom styles to be used from different scripts, this is assigned at SetupGUIStyles.cs
	public static Font KillFont;
	public static GUISkin guiSkin;
	public static GUISkin theRawGuiSkin
    {
        get
        {
			return _theRawGuiSkin;
        }

		set
		{
			_theRawGuiSkin = value;
		}
	}
	public static GUISkin _theRawGuiSkin;

	public static GUIStyle headerStyle = new GUIStyle();
	public static GUIStyle closeButtonStyle = new GUIStyle();
	public static GUIStyle roomBrowserHeadersStyle = new GUIStyle();
	public static GUIStyle createRoomOptionsStyle = new GUIStyle();
	public static GUIStyle minimizeButtonStyle = new GUIStyle();
	public static GUIStyle leftArrowButtonStyle = new GUIStyle();
	public static GUIStyle rightArrowButtonStyle = new GUIStyle();
	public static GUIStyle saveButtonStyle = new GUIStyle();
	public static GUIStyle sliderFillStyle = new GUIStyle();
	public static GUIStyle sliderTransparentBackgroundStyle = new GUIStyle();

	public static GUIStyle timeStyle = new GUIStyle();
	public static GUIStyle finalScreenStyle = new GUIStyle();
	public static GUIStyle hudInfoStyle = new GUIStyle();
	public static GUIStyle weaponInfoStyle = new GUIStyle();
	public static GUIStyle keyPressStyle = new GUIStyle();
	public static GUIStyle buyMenuButtonStyle = new GUIStyle();
	public static GUIStyle actionReportStyle = new GUIStyle();

	//Convert color to hex representation
	public static string ColorToHex(Color32 color)
	{
		string hex = color.r.ToString("X2") + color.g.ToString("X2") + color.b.ToString("X2");
		return hex;
	}

	//Convert hex color to int representation
	public static Color HexToColor(string hex)
	{
		byte r = byte.Parse(hex.Substring(0, 2), System.Globalization.NumberStyles.HexNumber);
		byte g = byte.Parse(hex.Substring(2, 2), System.Globalization.NumberStyles.HexNumber);
		byte b = byte.Parse(hex.Substring(4, 2), System.Globalization.NumberStyles.HexNumber);
		return new Color32(r, g, b, 255);
	}
}
