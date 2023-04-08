using UnityEngine;
using System.Collections;

public class OptionsSettings : MonoBehaviour
{
	[SerializeField] GUISkin guiSkin;
	[SerializeField] Texture2D minimizeButtonImage;
	[SerializeField] Texture2D leftButtonImage;
	[SerializeField] Texture2D rightButtonImage;
	[SerializeField] Texture2D saveButtonImage;

	Resolution[] screenReolsutions = new Resolution[0];
	string[] availableQualities = new string[0];
	float mouseSensitivity;

	int selectedResolution;
	int selectedQuality;

#if !UNITY_ANDROID && !UNITY_IOS && !UNITY_WP8 && !UNITY_WP8_1
	Vector2 controlsScroll = Vector2.zero;
	int keyCurrentlyEditing = -1;
    string screenResolutionPrefsName = "ScreenResolution";
    string playerKeysPrefsName = "PlayerKeys";
#endif

    string qualityPrefsName = "Quality";
    string mouseSensitivityPrefsName = "MouseSensitivity";

    [HideInInspector]
	public ConnectMenu cm;
	[HideInInspector]
	public RoomController rc;

	// Use this for initialization
	void Start ()
    {
		this.enabled = false;

		availableQualities = QualitySettings.names;
		selectedQuality = PlayerPrefs.HasKey(qualityPrefsName) ? PlayerPrefs.GetInt(qualityPrefsName) : (int)availableQualities.Length/2;
		selectedQuality = selectedQuality > -1 && selectedQuality < availableQualities.Length ? selectedQuality : (int)availableQualities.Length/2;
		QualitySettings.SetQualityLevel(selectedQuality);

		mouseSensitivity = PlayerPrefs.HasKey(mouseSensitivityPrefsName) ? PlayerPrefs.GetFloat(mouseSensitivityPrefsName) : 1.70f;
		GameSettings.mouseSensitivity = mouseSensitivity;

#if !UNITY_ANDROID && !UNITY_IOS && !UNITY_WP8 && !UNITY_WP8_1
        //Load selected screen resolution
        screenReolsutions = Screen.resolutions;
		selectedResolution = PlayerPrefs.HasKey(screenResolutionPrefsName) ? PlayerPrefs.GetInt(screenResolutionPrefsName) : screenReolsutions.Length > 0 ? screenReolsutions.Length - 1 : 0;
		selectedResolution = selectedResolution > 0 && selectedResolution < screenReolsutions.Length ? selectedResolution : screenReolsutions.Length - 1;

		//Save default keys before we apply player preferences
		if(GameSettings.defaultPlayerKeys == null || GameSettings.defaultPlayerKeys.Length == 0)
        {
			//Create copy of player keys
			GameSettings.defaultPlayerKeys = new KeyCode[GameSettings.playerKeys.Length];

			for(int i = 0; i < GameSettings.defaultPlayerKeys.Length; i++)
            {
				GameSettings.defaultPlayerKeys[i] = GameSettings.playerKeys[i];
			}
			
			string[] savedKeysTmp = PlayerPrefs.HasKey(playerKeysPrefsName) ? PlayerPrefs.GetString(playerKeysPrefsName).Split('*') : new string[0];
			
			if(savedKeysTmp.Length == GameSettings.playerKeys.Length)
            {
				//print ("Saved keys found with length: " + savedKeysTmp.Length.ToString());
				for(int i = 0; i < GameSettings.playerKeys.Length; i++)
                {
					GameSettings.playerKeys[i] = (KeyCode)System.Enum.Parse(typeof(KeyCode), savedKeysTmp[i]);
				}
			}
		}
#endif

    }

    // Update is called once per frame
    void OnGUI ()
    {
		GUI.depth = 150;

		GUI.skin = guiSkin;

#if !UNITY_ANDROID && !UNITY_IOS && !UNITY_WP8 && !UNITY_WP8_1
        GUI.Window (0, new Rect(Screen.width/2 - 175, Screen.height/2 - 250,  350, 500), OptionsWindow, "");
#else
        GUI.Window(0, new Rect(Screen.width / 2 - 175, Screen.height / 2 - 135, 350, 270), OptionsWindow, "");
#endif

    }

    void OptionsWindow (int windowID)
    {
		if (cm) {
			GUI.Label (new Rect (15, 0, 300, 35), cm.xml.button2);
		}
		if (rc) {
			GUI.Label (new Rect (15, 0, 300, 35), rc.xml.button2);
		}

		if(GUI.Button(new Rect(350 - 28, 1, 28, 29), "", Convert2DTextureToGUIStyle(minimizeButtonImage)))
        {
			if(cm)
            {
				cm.currentWindow = ConnectMenu.CurrentWindow.Main;
			}

			if(rc)
            {
				rc.showOptions = false;
			}
		}

		//Resolution
		if (cm) {
			GUI.Label (new Rect (15, 40, 300, 30), cm.xml.button83);
		}
		if (rc) {
			GUI.Label (new Rect (15, 40, 300, 30), rc.xml.button83);
		}
		GUI.enabled = selectedResolution > 0;
		if(GUI.Button(new Rect(15, 70, 25, 25), "", Convert2DTextureToGUIStyle(leftButtonImage)))
        {
			selectedResolution --;
		}
		GUI.enabled = true;
		if(screenReolsutions.Length > 0)
        {
			GUI.Label(new Rect(45,70, 175, 25), screenReolsutions[selectedResolution].width.ToString() + " x " + screenReolsutions[selectedResolution].height.ToString(), GameSettings.createRoomOptionsStyle);
        }
        else
        {
            GUI.Label(new Rect(45, 70, 175, 25), Screen.width.ToString() + " x " + Screen.height.ToString(), GameSettings.createRoomOptionsStyle);
        }
		GUI.enabled = selectedResolution < screenReolsutions.Length - 1;
		if(GUI.Button(new Rect(225, 70, 25, 25), "", Convert2DTextureToGUIStyle(rightButtonImage)))
        {
			selectedResolution ++;
		}
		
		GUI.enabled = true;

		//Quality
		if (cm) {
			GUI.Label (new Rect (15, 100, 300, 30), cm.xml.button84);
		}
		if (rc) {
			GUI.Label (new Rect (15, 100, 300, 30), rc.xml.button84);
		}
		GUI.enabled = selectedQuality > 0;
		if(GUI.Button(new Rect(15, 130, 25, 25), "", Convert2DTextureToGUIStyle(leftButtonImage)))
        {
			selectedQuality --;
			QualitySettings.SetQualityLevel(selectedQuality);
		}
		GUI.enabled = true;
		GUI.Label(new Rect(45,130, 175, 25), availableQualities[selectedQuality], GameSettings.createRoomOptionsStyle);
		GUI.enabled = selectedQuality < availableQualities.Length - 1;
		if(GUI.Button(new Rect(225, 130, 25, 25), "", Convert2DTextureToGUIStyle(rightButtonImage)))
        {
			selectedQuality ++;
			QualitySettings.SetQualityLevel(selectedQuality);
		}
		
		GUI.enabled = true;

		//Mouse sensitivity
		if (cm) {
			GUI.Label (new Rect (15, 160, 300, 30), cm.xml.button85);
		}
		if (rc) {
			GUI.Label (new Rect (15, 160, 300, 30), rc.xml.button85);
		}
		mouseSensitivity = GUI.HorizontalSlider(new Rect(15, 195, 175, 25), mouseSensitivity, 0.1f, 7);
		GameSettings.mouseSensitivity = mouseSensitivity;
		GUI.Label(new Rect(210, 187, 300, 25), mouseSensitivity.ToString("f2"));

#if !UNITY_ANDROID && !UNITY_IOS && !UNITY_WP8 && !UNITY_WP8_1
		//Player controls
		GUI.Label(new Rect(15, 212, 300, 30), "Controls");

		GUILayout.Space (235);

		controlsScroll = GUILayout.BeginScrollView(controlsScroll, true, true, GUILayout.Width(330));
			GUILayout.Space (5);

			for(int i = 0; i < GameSettings.playerKeys.Length; i++)
            {
				GUILayout.BeginHorizontal();

					GUILayout.Space (5);

					if(i < GameSettings.playerKeysNames.Length)
                    {
						GUILayout.Label(GameSettings.playerKeysNames[i], GUILayout.Width(150), GUILayout.Height(25));
					}
                    else
                    {
						GUILayout.Label("Name missing...", GUILayout.Width(147), GUILayout.Height(25));
					}

					if(keyCurrentlyEditing != i)
                    {
						if(GUILayout.Button(GameSettings.playerKeys[i].ToString(), GUILayout.Width(145), GUILayout.Height(25)))
                        {
							keyCurrentlyEditing = i;
						}
					}
                    else
                    {
						GUILayout.Label("Press any key...", GUILayout.Width(145), GUILayout.Height(27));

						if(Event.current.type == EventType.KeyDown)
                        {
							if(Event.current.keyCode != KeyCode.Tab && Event.current.keyCode != KeyCode.Escape)
                            {
								AssignKey(Event.current.keyCode, keyCurrentlyEditing);
							}
                            else
                            {
								keyCurrentlyEditing = -1;
							}
						}

						if(Event.current.type == EventType.MouseDown)
                        {
							int pressedMouseButton = Event.current.button;
							KeyCode mouseButtonSet = KeyCode.None;

							if(pressedMouseButton == 0)
                            {
								mouseButtonSet = KeyCode.Mouse0;
							}

							if(pressedMouseButton == 1)
                            {
								mouseButtonSet = KeyCode.Mouse1;
							}
							
							if(pressedMouseButton == 2)
                            {
								mouseButtonSet = KeyCode.Mouse2;
							}
							
							AssignKey(mouseButtonSet, keyCurrentlyEditing);
						}
					}
				GUILayout.EndHorizontal();

				GUILayout.Space (5);
			}
		GUILayout.EndScrollView();

		GUILayout.Space (45);

		if(GUI.Button(new Rect(15, 460, 150, 25), "Reset Controls"))
        {
			//Reset player keys back to default
			if(GameSettings.defaultPlayerKeys.Length == GameSettings.playerKeys.Length)
            {
				for(int i = 0; i < GameSettings.defaultPlayerKeys.Length; i++)
                {
					GameSettings.playerKeys[i] = GameSettings.defaultPlayerKeys[i];
				}
			}
		}

        Rect saveButtonRect = new Rect(210, 460, 125, 25);
#else
        Rect saveButtonRect = new Rect(210, 230, 125, 25);
#endif
		if (cm) {
			if (GUI.Button (saveButtonRect, "", Convert2DTextureToGUIStyle(saveButtonImage))) {
				PlayerPrefs.SetInt (qualityPrefsName, selectedQuality);
				PlayerPrefs.SetFloat (mouseSensitivityPrefsName, mouseSensitivity);

#if !UNITY_ANDROID && !UNITY_IOS && !UNITY_WP8 && !UNITY_WP8_1
            PlayerPrefs.SetInt(screenResolutionPrefsName, selectedResolution);

		    string tempKeysSave = "";
		    for(int i = 0; i < GameSettings.playerKeys.Length; i++)
            {
			    tempKeysSave += GameSettings.playerKeys[i].ToString();
			    if(i < GameSettings.playerKeys.Length - 1)
            {
				    tempKeysSave += "*";
			    }
		    }
		    PlayerPrefs.SetString(playerKeysPrefsName, tempKeysSave);
#endif

				if (cm) {
					cm.currentWindow = ConnectMenu.CurrentWindow.Main;
				}
			
				if (rc) {
					rc.showOptions = false;
				}
			}
		}

		if (rc) {
			if (GUI.Button (saveButtonRect, "", Convert2DTextureToGUIStyle(saveButtonImage))) {
				PlayerPrefs.SetInt (qualityPrefsName, selectedQuality);
				PlayerPrefs.SetFloat (mouseSensitivityPrefsName, mouseSensitivity);

				#if !UNITY_ANDROID && !UNITY_IOS && !UNITY_WP8 && !UNITY_WP8_1
				PlayerPrefs.SetInt(screenResolutionPrefsName, selectedResolution);

				string tempKeysSave = "";
				for(int i = 0; i < GameSettings.playerKeys.Length; i++)
				{
				tempKeysSave += GameSettings.playerKeys[i].ToString();
				if(i < GameSettings.playerKeys.Length - 1)
				{
				tempKeysSave += "*";
				}
				}
				PlayerPrefs.SetString(playerKeysPrefsName, tempKeysSave);
				#endif

				if (cm) {
					cm.currentWindow = ConnectMenu.CurrentWindow.Main;
				}

				if (rc) {
					rc.showOptions = false;
				}
			}
		}


    }

	private GUIStyle Convert2DTextureToGUIStyle(Texture2D texture)
    {
		var guiStyle = new GUIStyle();
		guiStyle.normal.background = texture;
		return guiStyle;
    }

    public void SetFullscreen ()
    {
		Screen.SetResolution(screenReolsutions[selectedResolution].width, screenReolsutions[selectedResolution].height, false);
		Screen.fullScreen = !Screen.fullScreen;
	}

#if !UNITY_ANDROID && !UNITY_IOS && !UNITY_WP8 && !UNITY_WP8_1
	void AssignKey (KeyCode newKey, int keyIndex)
    {
		//First we clear any duplicated keys
		for(int a = 0; a < GameSettings.playerKeys.Length; a++)
        {
			if(GameSettings.playerKeys[a] == newKey)
            {
				GameSettings.playerKeys[a] = KeyCode.None;
			}
		}	
		
		GameSettings.playerKeys[keyIndex] = newKey;
		keyCurrentlyEditing = -1;
	}
#endif

}
