using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Text.RegularExpressions;

public class MultiplayerChat : Photon.MonoBehaviour
{

	public enum ChatState { None, Public, Team }
	[HideInInspector]
	public ChatState chatState = ChatState.None;

	Scoreboard sc;

	[System.Serializable]
	public class Message
	{
		public string senderName;
		public Color senderTeamColor;
		public string text;
		public string isTeamChat;
		public float timer;

		public Message(string sn, Color stc, string txt, string itc, float t)
		{
			senderName = sn;
			senderTeamColor = stc;
			text = txt;
			isTeamChat = itc;
			timer = t;
		}
	}

	[HideInInspector]
	public List<Message> messages = new List<Message>();

	string chatLabel = "Message:";
	string chatInput = "";

	float chatLabelWidth;

	public Texture2D CounterText;
	public Texture2D CounterSelect;
	public Texture2D TerorrSelect;

	public Texture2D TerorText;
	public Texture2D AK47;
	public Texture2D AUG;
	public Texture2D AWP;
	public Texture2D DEAGLE;
	public Texture2D TEC9;
	public Texture2D FAMAS;
	public Texture2D FIVESEVEN;
	public Texture2D GRENADE;
	public Texture2D KNIFE;
	public Texture2D M3;
	public Texture2D M4A1;
	public Texture2D M249;
	public Texture2D MAC10;
	public Texture2D MP5;
	public Texture2D P90;
	public Texture2D P228;
	public Texture2D M4A4;
	public Texture2D SG550;
	public Texture2D SG552;
	public Texture2D USP;
	public Texture2D XM1014;
	public Texture2D HeadShot;
	public Texture2D Pause;
	public Texture2D Radar;
	public Texture2D C4;
	public Texture2D SK;

	RoomController rc;
	RoomUI ru;
	xmlReader xml;
	string languagesPrefsName = "SelectedLanguages";
	float waitBeforeSelect = 9f;

	private TouchScreenKeyboard keyboard;
	float time = 18.0f;
	float time2 = 5.0f;
	float time3 = 5.0f;
	float time4 = 5.0f;
	float time5 = 11.5f;
	bool time2W = false;
	public int CameraFollow = 0;
	int diffuseBas = 0;
	// Use this for initialization
	void Start()
	{
		rc = GetComponent<RoomController>();
		ru = GetComponent<RoomUI>();
		xml = GetComponent<xmlReader>();
		xml.currentLanguage = PlayerPrefs.GetInt(languagesPrefsName);
		chatState = ChatState.None;
		GameSettings.updateChatMessages = true;
		CameraFollow = 0;

	}

	// Update is called once per frame
	void Update()
	{
		for (int i = 0; i < messages.Count; i++)
		{
			if (messages[i].timer > 0)
			{
				messages[i].timer -= Time.deltaTime;
			}
			else
			{
				if (messages[i].timer != -1)
				{
					messages[i].timer = -1;
					GameSettings.updateChatMessages = true;
				}
			}
		}

		/*if (chatState == ChatState.None)
        {
            //Open chat
            if (!rc.showOptions)
            {
                if (Input.GetKeyDown(GameSettings.playerKeys[15]))
                {
                    //Public chat
                    chatState = ChatState.Public;
                }

                if (Input.GetKeyDown(GameSettings.playerKeys[16]))
                {
                    //Team chat
                    chatState = ChatState.Team;
                }

                GameSettings.updateChatMessages = true;
            }
        }*/
	}
	private GUIStyle guiStyle = new GUIStyle();
	void OnGUI()
	{

		var theRawButtonStyle = new GUIStyle();
		Debug.LogWarning("gamessettings.therawguiskin = " + GameSettings.theRawGuiSkin);
		Debug.LogWarning("gamessettings.therawguiskin.button = " + GameSettings.theRawGuiSkin.button);
		Debug.LogWarning("gamessettings.therawguiskin.button.normal = " + GameSettings.theRawGuiSkin.button.normal);
		theRawButtonStyle.normal.background = GameSettings.theRawGuiSkin.button.normal.background;
		theRawButtonStyle.alignment = TextAnchor.MiddleCenter;
		theRawButtonStyle.normal.textColor = Color.white;

		//float backtimeout;
		//backtimeout = PhotonNetwork.BackgroundTimeout;

		GUI.skin = GameSettings.guiSkin;
		GUI.enabled = rc.FollowCamAll.Count > 0;
		if (rc.ourPlayer)
		{
			if (rc.ourPlayer.playerKilled)
			{
				if (GUI.Button(new Rect(Screen.width / 2 - 100, Screen.height * 0.9f, 200, 35), "< SPECTATING >",theRawButtonStyle))

				{
					if (rc.WFollowCam >= rc.FollowCamAll.Count - 1)
					{
						rc.WFollowCam = 0;
						rc.FollowCamera = false;
					}
					else
					{
						rc.FollowCamera = false;
						rc.WFollowCam++;

					}
				}


			}
		}
		if (!rc.ourPlayer)
		{



			if (GUI.Button(new Rect(Screen.width / 2 - 100, Screen.height * 0.9f, 200, 35), "< SPECTATING >", theRawButtonStyle))
			{
				if (rc.WFollowCam >= rc.FollowCamAll.Count - 1)
				{
					rc.FollowCamera = false;
					rc.WFollowCam = 0;
				}
				else
				{
					rc.FollowCamera = false;
					rc.WFollowCam++;
				}
			}





		}
		GUI.enabled = true;

		/*if (rc.StartFollow) {
			GUI.enabled = rc.FollowCam.Count > 0;
			if (GUI.Button (new Rect (Screen.width / 2 - 100, Screen.height * 0.9f, 200, 35), "CAMERA")) {
				CameraFollow=+1;
				if (CameraFollow > rc.FollowCam.Count - 1) {
					if (rc.FollowCam.Count > 0) {
						CameraFollow = 0;
					}
				rc.FollowCamera = false;
			}
		  }
			GUI.enabled = true;
		}*/

		if (rc.ourPlayer && !rc.ourPlayer.playerKilled)
		{
		}
		//else
		//{
		//	GUI.DrawTexture(new Rect(12.5f, 0, 175, 175), Radar);
		//}

		if (GameSettings.ShowMessageBombMe == true)
		{
			time -= Time.deltaTime;
			if (time > 0)
			{
				GUI.Box(new Rect(Screen.width / 2 - 250, Screen.height / 2 - 245, 500, 30), xml.button106, GUI.skin.customStyles[0]);


			}
			else
			{
				GameSettings.ShowMessageBombMe = false;
				time = 11.5f;
			}
		}

		if (rc.SwitchTeam)
		{
			time5 -= Time.deltaTime;
			if (time5 > 0)
			{
				GUI.Box(new Rect(Screen.width / 2 - 150, Screen.height / 2 - 150, 300, 30), xml.button107);
			}
			else
			{
				rc.SwitchTeam = false;
				time5 = 11.5f;
			}
		}

		if (GameSettings.Diffuse == true)
		{
			if (diffuseBas == 0)
			{
				rc.ZeroStrikeX.clip = rc.Diffuse;
				rc.ZeroStrikeX.Play();
				diffuseBas = 1;
			}
			time4 -= Time.deltaTime;
			if (time4 > 0)
			{
				GUI.Box(new Rect(Screen.width / 2 - 150, Screen.height / 2 - 245, 300, 30), xml.button108, GUI.skin.customStyles[0]);
			}
			else
			{
				GameSettings.Diffuse = false;
				time4 = 5.0f;
				diffuseBas = 0;
			}
		}

		if (GameSettings.AB == true)
		{
			time3 -= Time.deltaTime;
			if (time3 > 0)
			{
				GUI.Box(new Rect(Screen.width / 2 - 150, Screen.height / 2 - 245, 300, 30), xml.button109, GUI.skin.customStyles[0]);
			}
			else
			{
				GameSettings.AB = false;
				time3 = 5.0f;
			}
		}

		if (GameSettings.C4on == true)
		{
			GameSettings.ShowBombPlace = true;
			time2 -= Time.deltaTime;
			if (time2 > 0 && GameSettings.ShowBombPlace == true && time2W == false)
			{
				GUI.Box(new Rect(Screen.width / 2 - 150, Screen.height / 2 - 245, 300, 30), xml.button110, GUI.skin.customStyles[0]);
			}
			else
			{
				GameSettings.ShowBombPlace = false;
				time2W = true;
				time2 = 5.0f;
			}
		}

		if (GameSettings.C4on == false)
		{
			time2W = false;
		}

		//Action reports
		if (GameSettings.updateActionReports)
		{
			//Update actions on screen
			//Show action reports
			for (int i = 0; i < ru.actionReports.Length; i++)
			{
				if (i < rc.actionReports.Count)
				{
					string composeText = "";
					string composeShadowText = "";
					int middleLength = 0;

					if (rc.actionReports[i].leftText != "")
					{
						composeText += "<color=#" + GameSettings.ColorToHex(rc.actionReports[i].leftTextColor) + ">" + rc.actionReports[i].leftText + "</color>" + " ";
						composeShadowText += rc.actionReports[i].leftText + " ";
					}

					composeText += "<color=#" + GameSettings.ColorToHex(GameSettings.whitetColor) + ">" + rc.actionReports[i].middleText + "</color>" + " ";
					composeShadowText += rc.actionReports[i].middleText + " ";

					middleLength = rc.actionReports[i].middleText.Length;

					if (rc.actionReports[i].rightText != "")
					{
						composeText += "<color=#" + GameSettings.ColorToHex(rc.actionReports[i].rightTextColor) + ">" + rc.actionReports[i].rightText + "</color>";
						composeShadowText += rc.actionReports[i].rightText;
					}

					//Text Shadow
					GUI.color = new Color(1.0f, 1.0f, 1.0f, 0.5f);
					GUI.Box(new Rect(0, 200 + (i * 24), ((rc.actionReports[i].leftText.Length + middleLength + rc.actionReports[i].rightText.Length) * 10) + 2, 24), "");
					guiStyle.fontSize = 14;
					guiStyle.alignment = TextAnchor.MiddleLeft;
					GUI.Label(new Rect(15, 200 + (i * 24), composeText.Length * 5, 24), composeText, guiStyle);
					//Main Text
				}
			}
		}

		//Action reports
		if (GameSettings.updateWeaponActionReports)
		{
			//Update actions on screen
			//Show action reports
			for (int i = 0; i < ru.actionWeaponsReports.Length; i++)
			{
				if (i < rc.actionWeaponsReports.Count)
				{
					string composeText = "";
					string composeRightText = "";
					int KilledLengthLeft = 0;
					int KilledLengthRight = 0;

					if (rc.actionWeaponsReports[i].leftText != "")
					{
						composeText += "<color=#" + GameSettings.ColorToHex(rc.actionWeaponsReports[i].leftTextColor) + ">" + rc.actionWeaponsReports[i].leftText + "</color>" + " ";
						KilledLengthLeft = rc.actionWeaponsReports[i].leftText.Length;
					}


					if (rc.actionWeaponsReports[i].rightText != "")
					{
						composeRightText += "<color=#" + GameSettings.ColorToHex(rc.actionWeaponsReports[i].rightTextColor) + ">" + rc.actionWeaponsReports[i].rightText + "</color>";
						KilledLengthRight = rc.actionWeaponsReports[i].rightText.Length;
					}


					//Text Shadow
					if (rc.actionWeaponsReports[i].middleText.Substring(rc.actionWeaponsReports[i].middleText.Length - 5) == "[USP]")
					{
						GUI.color = new Color(1.0f, 1.0f, 1.0f, 0.5f);
						GUI.Box(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 90, 47.5f + (i * 25), 600, 25), "");
						GUI.color = Color.white;
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 75, 45.5f + (i * 25), 56, 28), USP);
						guiStyle.fontSize = 14;
						guiStyle.alignment = TextAnchor.MiddleCenter;
						GUI.Label(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 88, 47.5f + (i * 25), KilledLengthLeft * 10, 25), composeText, guiStyle);
						GUI.Label(new Rect(Screen.width - (KilledLengthRight * 10) - 20, 47.5f + (i * 25), KilledLengthRight * 10, 25), composeRightText, guiStyle);
					}
					else if (rc.actionWeaponsReports[i].middleText.Substring(rc.actionWeaponsReports[i].middleText.Length - 7) == "[USP]Hd")
					{
						GUI.color = new Color(1.0f, 1.0f, 1.0f, 0.5f);
						GUI.Box(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 120, 47.5f + (i * 25), 600, 25), "");
						GUI.color = Color.white;
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 107, 45.5f + (i * 25), 56, 28), USP);
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 54, 45.5f + (i * 25), 30, 28), HeadShot);
						guiStyle.fontSize = 14;
						guiStyle.alignment = TextAnchor.MiddleCenter;
						GUI.Label(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 118, 47.5f + (i * 25), KilledLengthLeft * 10, 25), composeText, guiStyle);
						GUI.Label(new Rect(Screen.width - (KilledLengthRight * 10) - 20, 47.5f + (i * 25), KilledLengthRight * 10, 25), composeRightText, guiStyle);
					}
					else if (rc.actionWeaponsReports[i].middleText.Substring(rc.actionWeaponsReports[i].middleText.Length - 6) == "[P228]")
					{
						GUI.color = new Color(1.0f, 1.0f, 1.0f, 0.5f);
						GUI.Box(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 90, 47.5f + (i * 25), 600, 25), "");
						GUI.color = Color.white;
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 75, 45.5f + (i * 25), 56, 28), P228);
						guiStyle.fontSize = 14;
						guiStyle.alignment = TextAnchor.MiddleCenter;
						GUI.Label(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 88, 47.5f + (i * 25), KilledLengthLeft * 10, 25), composeText, guiStyle);
						GUI.Label(new Rect(Screen.width - (KilledLengthRight * 10) - 20, 47.5f + (i * 25), KilledLengthRight * 10, 25), composeRightText, guiStyle);
					}
					else if (rc.actionWeaponsReports[i].middleText.Substring(rc.actionWeaponsReports[i].middleText.Length - 8) == "[P228]Hd")
					{
						GUI.color = new Color(1.0f, 1.0f, 1.0f, 0.5f);
						GUI.Box(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 120, 47.5f + (i * 25), 600, 25), "");
						GUI.color = Color.white;
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 107, 45.5f + (i * 25), 56, 28), P228);
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 54, 45.5f + (i * 25), 30, 28), HeadShot);
						guiStyle.fontSize = 14;
						guiStyle.alignment = TextAnchor.MiddleCenter;
						GUI.Label(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 118, 47.5f + (i * 25), KilledLengthLeft * 10, 25), composeText, guiStyle);
						GUI.Label(new Rect(Screen.width - (KilledLengthRight * 10) - 20, 47.5f + (i * 25), KilledLengthRight * 10, 25), composeRightText, guiStyle);
					}
					else if (rc.actionWeaponsReports[i].middleText.Substring(rc.actionWeaponsReports[i].middleText.Length - 11) == "[FIVESEVEN]")
					{
						GUI.color = new Color(1.0f, 1.0f, 1.0f, 0.5f);
						GUI.Box(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 90, 47.5f + (i * 25), 600, 25), "");
						GUI.color = Color.white;
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 75, 45.5f + (i * 25), 56, 28), FIVESEVEN);
						guiStyle.fontSize = 14;
						guiStyle.alignment = TextAnchor.MiddleCenter;
						GUI.Label(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 88, 47.5f + (i * 25), KilledLengthLeft * 10, 25), composeText, guiStyle);
						GUI.Label(new Rect(Screen.width - (KilledLengthRight * 10) - 20, 47.5f + (i * 25), KilledLengthRight * 10, 25), composeRightText, guiStyle);
					}
					else if (rc.actionWeaponsReports[i].middleText.Substring(rc.actionWeaponsReports[i].middleText.Length - 13) == "[FIVESEVEN]Hd")
					{
						GUI.color = new Color(1.0f, 1.0f, 1.0f, 0.5f);
						GUI.Box(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 120, 47.5f + (i * 25), 600, 25), "");
						GUI.color = Color.white;
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 107, 45.5f + (i * 25), 56, 28), FIVESEVEN);
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 54, 45.5f + (i * 25), 30, 28), HeadShot);
						guiStyle.fontSize = 14;
						guiStyle.alignment = TextAnchor.MiddleCenter;
						GUI.Label(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 118, 47.5f + (i * 25), KilledLengthLeft * 10, 25), composeText, guiStyle);
						GUI.Label(new Rect(Screen.width - (KilledLengthRight * 10) - 20, 47.5f + (i * 25), KilledLengthRight * 10, 25), composeRightText, guiStyle);
					}
					else if (rc.actionWeaponsReports[i].middleText.Substring(rc.actionWeaponsReports[i].middleText.Length - 8) == "[DEAGLE]")
					{
						GUI.color = new Color(1.0f, 1.0f, 1.0f, 0.5f);
						GUI.Box(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 90, 47.5f + (i * 25), 600, 25), "");
						GUI.color = Color.white;
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 75, 45.5f + (i * 25), 56, 28), DEAGLE);
						guiStyle.fontSize = 14;
						guiStyle.alignment = TextAnchor.MiddleCenter;
						GUI.Label(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 88, 47.5f + (i * 25), KilledLengthLeft * 10, 25), composeText, guiStyle);
						GUI.Label(new Rect(Screen.width - (KilledLengthRight * 10) - 20, 47.5f + (i * 25), KilledLengthRight * 10, 25), composeRightText, guiStyle);
					}
					else if (rc.actionWeaponsReports[i].middleText.Substring(rc.actionWeaponsReports[i].middleText.Length - 10) == "[DEAGLE]Hd")
					{
						GUI.color = new Color(1.0f, 1.0f, 1.0f, 0.5f);
						GUI.Box(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 120, 47.5f + (i * 25), 600, 25), "");
						GUI.color = Color.white;
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 107, 45.5f + (i * 25), 56, 28), DEAGLE);
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 54, 45.5f + (i * 25), 30, 28), HeadShot);
						guiStyle.fontSize = 14;
						guiStyle.alignment = TextAnchor.MiddleCenter;
						GUI.Label(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 118, 47.5f + (i * 25), KilledLengthLeft * 10, 25), composeText, guiStyle);
						GUI.Label(new Rect(Screen.width - (KilledLengthRight * 10) - 20, 47.5f + (i * 25), KilledLengthRight * 10, 25), composeRightText, guiStyle);
					}
					else if (rc.actionWeaponsReports[i].middleText.Substring(rc.actionWeaponsReports[i].middleText.Length - 6) == "[TEC9]")
					{
						GUI.color = new Color(1.0f, 1.0f, 1.0f, 0.5f);
						GUI.Box(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 90, 47.5f + (i * 25), 600, 25), "");
						GUI.color = Color.white;
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 75, 45.5f + (i * 25), 56, 28), TEC9);
						guiStyle.fontSize = 14;
						guiStyle.alignment = TextAnchor.MiddleCenter;
						GUI.Label(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 88, 47.5f + (i * 25), KilledLengthLeft * 10, 25), composeText, guiStyle);
						GUI.Label(new Rect(Screen.width - (KilledLengthRight * 10) - 20, 47.5f + (i * 25), KilledLengthRight * 10, 25), composeRightText, guiStyle);
					}
					else if (rc.actionWeaponsReports[i].middleText.Substring(rc.actionWeaponsReports[i].middleText.Length - 8) == "[TEC9]Hd")
					{
						GUI.color = new Color(1.0f, 1.0f, 1.0f, 0.5f);
						GUI.Box(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 120, 47.5f + (i * 25), 600, 25), "");
						GUI.color = Color.white;
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 107, 45.5f + (i * 25), 56, 28), TEC9);
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 54, 45.5f + (i * 25), 30, 28), HeadShot);
						guiStyle.fontSize = 14;
						guiStyle.alignment = TextAnchor.MiddleCenter;
						GUI.Label(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 118, 47.5f + (i * 25), KilledLengthLeft * 10, 25), composeText, guiStyle);
						GUI.Label(new Rect(Screen.width - (KilledLengthRight * 10) - 20, 47.5f + (i * 25), KilledLengthRight * 10, 25), composeRightText, guiStyle);
					}
					else if (rc.actionWeaponsReports[i].middleText.Substring(rc.actionWeaponsReports[i].middleText.Length - 6) == "[AK47]")
					{
						GUI.color = new Color(1.0f, 1.0f, 1.0f, 0.5f);
						GUI.Box(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 90, 47.5f + (i * 25), 500, 25), "");
						GUI.color = Color.white;
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 75, 45.5f + (i * 25), 56, 28), AK47);
						guiStyle.fontSize = 14;
						guiStyle.alignment = TextAnchor.MiddleCenter;
						GUI.Label(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 88, 47.5f + (i * 25), KilledLengthLeft * 10, 25), composeText, guiStyle);
						GUI.Label(new Rect(Screen.width - (KilledLengthRight * 10) - 20, 47.5f + (i * 25), KilledLengthRight * 10, 25), composeRightText, guiStyle);
					}
					else if (rc.actionWeaponsReports[i].middleText.Substring(rc.actionWeaponsReports[i].middleText.Length - 8) == "[AK47]Hd")
					{
						GUI.color = new Color(1.0f, 1.0f, 1.0f, 0.5f);
						GUI.Box(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 120, 47.5f + (i * 25), 600, 25), "");
						GUI.color = Color.white;
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 107, 45.5f + (i * 25), 56, 28), AK47);
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 54, 45.5f + (i * 25), 30, 28), HeadShot);
						guiStyle.fontSize = 14;
						guiStyle.alignment = TextAnchor.MiddleCenter;
						GUI.Label(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 118, 47.5f + (i * 25), KilledLengthLeft * 10, 25), composeText, guiStyle);
						GUI.Label(new Rect(Screen.width - (KilledLengthRight * 10) - 20, 47.5f + (i * 25), KilledLengthRight * 10, 25), composeRightText, guiStyle);
					}
					else if (rc.actionWeaponsReports[i].middleText.Substring(rc.actionWeaponsReports[i].middleText.Length - 6) == "[M4A1]")
					{
						GUI.color = new Color(1.0f, 1.0f, 1.0f, 0.5f);
						GUI.Box(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 90, 47.5f + (i * 25), 600, 25), "");
						GUI.color = Color.white;
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 75, 45.5f + (i * 25), 56, 28), M4A1);
						guiStyle.fontSize = 14;
						guiStyle.alignment = TextAnchor.MiddleCenter;
						GUI.Label(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 88, 47.5f + (i * 25), KilledLengthLeft * 10, 25), composeText, guiStyle);
						GUI.Label(new Rect(Screen.width - (KilledLengthRight * 10) - 20, 47.5f + (i * 25), KilledLengthRight * 10, 25), composeRightText, guiStyle);
					}
					else if (rc.actionWeaponsReports[i].middleText.Substring(rc.actionWeaponsReports[i].middleText.Length - 8) == "[M4A1]Hd")
					{
						GUI.color = new Color(1.0f, 1.0f, 1.0f, 0.5f);
						GUI.Box(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 120, 47.5f + (i * 25), 600, 25), "");
						GUI.color = Color.white;
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 107, 45.5f + (i * 25), 56, 28), M4A1);
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 54, 45.5f + (i * 25), 30, 28), HeadShot);
						guiStyle.fontSize = 14;
						guiStyle.alignment = TextAnchor.MiddleCenter;
						GUI.Label(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 118, 47.5f + (i * 25), KilledLengthLeft * 10, 25), composeText, guiStyle);
						GUI.Label(new Rect(Screen.width - (KilledLengthRight * 10) - 20, 47.5f + (i * 25), KilledLengthRight * 10, 25), composeRightText, guiStyle);
					}
					else if (rc.actionWeaponsReports[i].middleText.Substring(rc.actionWeaponsReports[i].middleText.Length - 7) == "[SG552]")
					{
						GUI.color = new Color(1.0f, 1.0f, 1.0f, 0.5f);
						GUI.Box(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 90, 47.5f + (i * 25), 600, 25), "");
						GUI.color = Color.white;
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 75, 45.5f + (i * 25), 56, 28), SG552);
						guiStyle.fontSize = 14;
						guiStyle.alignment = TextAnchor.MiddleCenter;
						GUI.Label(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 88, 47.5f + (i * 25), KilledLengthLeft * 10, 25), composeText, guiStyle);
						GUI.Label(new Rect(Screen.width - (KilledLengthRight * 10) - 20, 47.5f + (i * 25), KilledLengthRight * 10, 25), composeRightText, guiStyle);
					}
					else if (rc.actionWeaponsReports[i].middleText.Substring(rc.actionWeaponsReports[i].middleText.Length - 9) == "[SG552]Hd")
					{
						GUI.color = new Color(1.0f, 1.0f, 1.0f, 0.5f);
						GUI.Box(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 120, 47.5f + (i * 25), 600, 25), "");
						GUI.color = Color.white;
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 107, 45.5f + (i * 25), 56, 28), SG552);
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 54, 45.5f + (i * 25), 30, 28), HeadShot);
						guiStyle.fontSize = 14;
						guiStyle.alignment = TextAnchor.MiddleCenter;
						GUI.Label(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 118, 47.5f + (i * 25), KilledLengthLeft * 10, 25), composeText, guiStyle);
						GUI.Label(new Rect(Screen.width - (KilledLengthRight * 10) - 20, 47.5f + (i * 25), KilledLengthRight * 10, 25), composeRightText, guiStyle);
					}
					else if (rc.actionWeaponsReports[i].middleText.Substring(rc.actionWeaponsReports[i].middleText.Length - 6) == "[M249]")
					{
						GUI.color = new Color(1.0f, 1.0f, 1.0f, 0.5f);
						GUI.Box(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 90, 47.5f + (i * 25), 600, 25), "");
						GUI.color = Color.white;
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 75, 45.5f + (i * 25), 56, 28), M249);
						guiStyle.fontSize = 14;
						guiStyle.alignment = TextAnchor.MiddleCenter;
						GUI.Label(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 88, 47.5f + (i * 25), KilledLengthLeft * 10, 25), composeText, guiStyle);
						GUI.Label(new Rect(Screen.width - (KilledLengthRight * 10) - 20, 47.5f + (i * 25), KilledLengthRight * 10, 25), composeRightText, guiStyle);
					}
					else if (rc.actionWeaponsReports[i].middleText.Substring(rc.actionWeaponsReports[i].middleText.Length - 8) == "[M249]Hd")
					{
						GUI.color = new Color(1.0f, 1.0f, 1.0f, 0.5f);
						GUI.Box(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 120, 47.5f + (i * 25), 600, 25), "");
						GUI.color = Color.white;
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 107, 45.5f + (i * 25), 56, 28), M249);
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 54, 45.5f + (i * 25), 30, 28), HeadShot);
						guiStyle.fontSize = 14;
						guiStyle.alignment = TextAnchor.MiddleCenter;
						GUI.Label(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 118, 47.5f + (i * 25), KilledLengthLeft * 10, 25), composeText, guiStyle);
						GUI.Label(new Rect(Screen.width - (KilledLengthRight * 10) - 20, 47.5f + (i * 25), KilledLengthRight * 10, 25), composeRightText, guiStyle);
					}
					else if (rc.actionWeaponsReports[i].middleText.Substring(rc.actionWeaponsReports[i].middleText.Length - 7) == "[MAC10]")
					{
						GUI.color = new Color(1.0f, 1.0f, 1.0f, 0.5f);
						GUI.Box(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 90, 47.5f + (i * 25), 600, 25), "");
						GUI.color = Color.white;
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 75, 45.5f + (i * 25), 56, 28), MAC10);
						guiStyle.fontSize = 14;
						guiStyle.alignment = TextAnchor.MiddleCenter;
						GUI.Label(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 88, 47.5f + (i * 25), KilledLengthLeft * 10, 25), composeText, guiStyle);
						GUI.Label(new Rect(Screen.width - (KilledLengthRight * 10) - 20, 47.5f + (i * 25), KilledLengthRight * 10, 25), composeRightText, guiStyle);
					}
					else if (rc.actionWeaponsReports[i].middleText.Substring(rc.actionWeaponsReports[i].middleText.Length - 9) == "[MAC10]Hd")
					{
						GUI.color = new Color(1.0f, 1.0f, 1.0f, 0.5f);
						GUI.Box(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 120, 47.5f + (i * 25), 600, 25), "");
						GUI.color = Color.white;
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 107, 45.5f + (i * 25), 56, 28), MAC10);
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 54, 45.5f + (i * 25), 30, 28), HeadShot);
						guiStyle.fontSize = 14;
						guiStyle.alignment = TextAnchor.MiddleCenter;
						GUI.Label(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 118, 47.5f + (i * 25), KilledLengthLeft * 10, 25), composeText, guiStyle);
						GUI.Label(new Rect(Screen.width - (KilledLengthRight * 10) - 20, 47.5f + (i * 25), KilledLengthRight * 10, 25), composeRightText, guiStyle);
					}
					else if (rc.actionWeaponsReports[i].middleText.Substring(rc.actionWeaponsReports[i].middleText.Length - 5) == "[P90]")
					{
						GUI.color = new Color(1.0f, 1.0f, 1.0f, 0.5f);
						GUI.Box(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 90, 47.5f + (i * 25), 600, 25), "");
						GUI.color = Color.white;
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 75, 45.5f + (i * 25), 56, 28), P90);
						guiStyle.fontSize = 14;
						guiStyle.alignment = TextAnchor.MiddleCenter;
						GUI.Label(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 88, 47.5f + (i * 25), KilledLengthLeft * 10, 25), composeText, guiStyle);
						GUI.Label(new Rect(Screen.width - (KilledLengthRight * 10) - 20, 47.5f + (i * 25), KilledLengthRight * 10, 25), composeRightText, guiStyle);
					}
					else if (rc.actionWeaponsReports[i].middleText.Substring(rc.actionWeaponsReports[i].middleText.Length - 7) == "[P90]Hd")
					{
						GUI.color = new Color(1.0f, 1.0f, 1.0f, 0.5f);
						GUI.Box(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 120, 47.5f + (i * 25), 600, 25), "");
						GUI.color = Color.white;
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 107, 45.5f + (i * 25), 56, 28), P90);
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 54, 45.5f + (i * 25), 30, 28), HeadShot);
						guiStyle.fontSize = 14;
						guiStyle.alignment = TextAnchor.MiddleCenter;
						GUI.Label(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 118, 47.5f + (i * 25), KilledLengthLeft * 10, 25), composeText, guiStyle);
						GUI.Label(new Rect(Screen.width - (KilledLengthRight * 10) - 20, 47.5f + (i * 25), KilledLengthRight * 10, 25), composeRightText, guiStyle);
					}
					else if (rc.actionWeaponsReports[i].middleText.Substring(rc.actionWeaponsReports[i].middleText.Length - 5) == "[MP5]")
					{
						GUI.color = new Color(1.0f, 1.0f, 1.0f, 0.5f);
						GUI.Box(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 90, 47.5f + (i * 25), 600, 25), "");
						GUI.color = Color.white;
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 75, 45.5f + (i * 25), 56, 28), MP5);
						guiStyle.fontSize = 14;
						guiStyle.alignment = TextAnchor.MiddleCenter;
						GUI.Label(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 88, 47.5f + (i * 25), KilledLengthLeft * 10, 25), composeText, guiStyle);
						GUI.Label(new Rect(Screen.width - (KilledLengthRight * 10) - 20, 47.5f + (i * 25), KilledLengthRight * 10, 25), composeRightText, guiStyle);
					}
					else if (rc.actionWeaponsReports[i].middleText.Substring(rc.actionWeaponsReports[i].middleText.Length - 7) == "[MP5]Hd")
					{
						GUI.color = new Color(1.0f, 1.0f, 1.0f, 0.5f);
						GUI.Box(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 120, 47.5f + (i * 25), 600, 25), "");
						GUI.color = Color.white;
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 107, 45.5f + (i * 25), 56, 28), MP5);
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 54, 45.5f + (i * 25), 30, 28), HeadShot);
						guiStyle.fontSize = 14;
						guiStyle.alignment = TextAnchor.MiddleCenter;
						GUI.Label(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 118, 47.5f + (i * 25), KilledLengthLeft * 10, 25), composeText, guiStyle);
						GUI.Label(new Rect(Screen.width - (KilledLengthRight * 10) - 20, 47.5f + (i * 25), KilledLengthRight * 10, 25), composeRightText, guiStyle);
					}
					else if (rc.actionWeaponsReports[i].middleText.Substring(rc.actionWeaponsReports[i].middleText.Length - 5) == "[AUG]")
					{
						GUI.color = new Color(1.0f, 1.0f, 1.0f, 0.5f);
						GUI.Box(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 90, 47.5f + (i * 25), 600, 25), "");
						GUI.color = Color.white;
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 75, 45.5f + (i * 25), 56, 28), AUG);
						guiStyle.fontSize = 14;
						guiStyle.alignment = TextAnchor.MiddleCenter;
						GUI.Label(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 88, 47.5f + (i * 25), KilledLengthLeft * 10, 25), composeText, guiStyle);
						GUI.Label(new Rect(Screen.width - (KilledLengthRight * 10) - 20, 47.5f + (i * 25), KilledLengthRight * 10, 25), composeRightText, guiStyle);
					}
					else if (rc.actionWeaponsReports[i].middleText.Substring(rc.actionWeaponsReports[i].middleText.Length - 7) == "[AUG]Hd")
					{
						GUI.color = new Color(1.0f, 1.0f, 1.0f, 0.5f);
						GUI.Box(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 120, 47.5f + (i * 25), 600, 25), "");
						GUI.color = Color.white;
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 107, 45.5f + (i * 25), 56, 28), AUG);
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 54, 45.5f + (i * 25), 30, 28), HeadShot);
						guiStyle.fontSize = 14;
						guiStyle.alignment = TextAnchor.MiddleCenter;
						GUI.Label(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 118, 47.5f + (i * 25), KilledLengthLeft * 10, 25), composeText, guiStyle);
						GUI.Label(new Rect(Screen.width - (KilledLengthRight * 10) - 20, 47.5f + (i * 25), KilledLengthRight * 10, 25), composeRightText, guiStyle);
					}
					else if (rc.actionWeaponsReports[i].middleText.Substring(rc.actionWeaponsReports[i].middleText.Length - 4) == "[M3]")
					{
						GUI.color = new Color(1.0f, 1.0f, 1.0f, 0.5f);
						GUI.Box(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 90, 47.5f + (i * 25), 600, 25), "");
						GUI.color = Color.white;
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 75, 45.5f + (i * 25), 56, 28), M3);
						guiStyle.fontSize = 14;
						guiStyle.alignment = TextAnchor.MiddleCenter;
						GUI.Label(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 88, 47.5f + (i * 25), KilledLengthLeft * 10, 25), composeText, guiStyle);
						GUI.Label(new Rect(Screen.width - (KilledLengthRight * 10) - 20, 47.5f + (i * 25), KilledLengthRight * 10, 25), composeRightText, guiStyle);
					}
					else if (rc.actionWeaponsReports[i].middleText.Substring(rc.actionWeaponsReports[i].middleText.Length - 6) == "[M3]Hd")
					{
						GUI.color = new Color(1.0f, 1.0f, 1.0f, 0.5f);
						GUI.Box(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 120, 47.5f + (i * 25), 600, 25), "");
						GUI.color = Color.white;
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 107, 45.5f + (i * 25), 56, 28), M3);
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 54, 45.5f + (i * 25), 30, 28), HeadShot);
						guiStyle.fontSize = 14;
						guiStyle.alignment = TextAnchor.MiddleCenter;
						GUI.Label(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 118, 47.5f + (i * 25), KilledLengthLeft * 10, 25), composeText, guiStyle);
						GUI.Label(new Rect(Screen.width - (KilledLengthRight * 10) - 20, 47.5f + (i * 25), KilledLengthRight * 10, 25), composeRightText, guiStyle);
					}
					else if (rc.actionWeaponsReports[i].middleText.Substring(rc.actionWeaponsReports[i].middleText.Length - 8) == "[XM1014]")
					{
						GUI.color = new Color(1.0f, 1.0f, 1.0f, 0.5f);
						GUI.Box(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 90, 47.5f + (i * 25), 600, 25), "");
						GUI.color = Color.white;
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 75, 45.5f + (i * 25), 56, 28), XM1014);
						guiStyle.fontSize = 14;
						guiStyle.alignment = TextAnchor.MiddleCenter;
						GUI.Label(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 88, 47.5f + (i * 25), KilledLengthLeft * 10, 25), composeText, guiStyle);
						GUI.Label(new Rect(Screen.width - (KilledLengthRight * 10) - 20, 47.5f + (i * 25), KilledLengthRight * 10, 25), composeRightText, guiStyle);
					}
					else if (rc.actionWeaponsReports[i].middleText.Substring(rc.actionWeaponsReports[i].middleText.Length - 10) == "[XM1014]Hd")
					{
						GUI.color = new Color(1.0f, 1.0f, 1.0f, 0.5f);
						GUI.Box(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 120, 47.5f + (i * 25), 600, 25), "");
						GUI.color = Color.white;
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 107, 45.5f + (i * 25), 56, 28), XM1014);
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 54, 45.5f + (i * 25), 30, 28), HeadShot);
						guiStyle.fontSize = 14;
						guiStyle.alignment = TextAnchor.MiddleCenter;
						GUI.Label(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 118, 47.5f + (i * 25), KilledLengthLeft * 10, 25), composeText, guiStyle);
						GUI.Label(new Rect(Screen.width - (KilledLengthRight * 10) - 20, 47.5f + (i * 25), KilledLengthRight * 10, 25), composeRightText, guiStyle);
					}
					else if (rc.actionWeaponsReports[i].middleText.Substring(rc.actionWeaponsReports[i].middleText.Length - 6) == "[M4A4]")
					{
						GUI.color = new Color(1.0f, 1.0f, 1.0f, 0.5f);
						GUI.Box(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 90, 47.5f + (i * 25), 600, 25), "");
						GUI.color = Color.white;
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 75, 45.5f + (i * 25), 56, 28), M4A4);
						guiStyle.fontSize = 14;
						guiStyle.alignment = TextAnchor.MiddleCenter;
						GUI.Label(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 88, 47.5f + (i * 25), KilledLengthLeft * 10, 25), composeText, guiStyle);
						GUI.Label(new Rect(Screen.width - (KilledLengthRight * 10) - 20, 47.5f + (i * 25), KilledLengthRight * 10, 25), composeRightText, guiStyle);
					}
					else if (rc.actionWeaponsReports[i].middleText.Substring(rc.actionWeaponsReports[i].middleText.Length - 8) == "[M4A4]Hd")
					{
						GUI.color = new Color(1.0f, 1.0f, 1.0f, 0.5f);
						GUI.Box(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 120, 47.5f + (i * 25), 600, 25), "");
						GUI.color = Color.white;
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 107, 45.5f + (i * 25), 56, 28), M4A4);
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 54, 45.5f + (i * 25), 30, 28), HeadShot);
						guiStyle.fontSize = 14;
						guiStyle.alignment = TextAnchor.MiddleCenter;
						GUI.Label(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 118, 47.5f + (i * 25), KilledLengthLeft * 10, 25), composeText, guiStyle);
						GUI.Label(new Rect(Screen.width - (KilledLengthRight * 10) - 20, 47.5f + (i * 25), KilledLengthRight * 10, 25), composeRightText, guiStyle);
					}
					else if (rc.actionWeaponsReports[i].middleText.Substring(rc.actionWeaponsReports[i].middleText.Length - 7) == "[SG550]")
					{
						GUI.color = new Color(1.0f, 1.0f, 1.0f, 0.5f);
						GUI.Box(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 90, 47.5f + (i * 25), 600, 25), "");
						GUI.color = Color.white;
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 75, 45.5f + (i * 25), 56, 28), SG550);
						guiStyle.fontSize = 14;
						guiStyle.alignment = TextAnchor.MiddleCenter;
						GUI.Label(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 88, 47.5f + (i * 25), KilledLengthLeft * 10, 25), composeText, guiStyle);
						GUI.Label(new Rect(Screen.width - (KilledLengthRight * 10) - 20, 47.5f + (i * 25), KilledLengthRight * 10, 25), composeRightText, guiStyle);
					}
					else if (rc.actionWeaponsReports[i].middleText.Substring(rc.actionWeaponsReports[i].middleText.Length - 9) == "[SG550]Hd")
					{
						GUI.color = new Color(1.0f, 1.0f, 1.0f, 0.5f);
						GUI.Box(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 120, 47.5f + (i * 25), 600, 25), "");
						GUI.color = Color.white;
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 107, 45.5f + (i * 25), 56, 28), SG550);
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 54, 45.5f + (i * 25), 30, 28), HeadShot);
						guiStyle.fontSize = 14;
						guiStyle.alignment = TextAnchor.MiddleCenter;
						GUI.Label(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 118, 47.5f + (i * 25), KilledLengthLeft * 10, 25), composeText, guiStyle);
						GUI.Label(new Rect(Screen.width - (KilledLengthRight * 10) - 20, 47.5f + (i * 25), KilledLengthRight * 10, 25), composeRightText, guiStyle);
					}
					else if (rc.actionWeaponsReports[i].middleText.Substring(rc.actionWeaponsReports[i].middleText.Length - 5) == "[AWP]")
					{
						GUI.color = new Color(1.0f, 1.0f, 1.0f, 0.5f);
						GUI.Box(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 90, 47.5f + (i * 25), 600, 25), "");
						GUI.color = Color.white;
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 75, 45.5f + (i * 25), 56, 28), AWP);
						guiStyle.fontSize = 14;
						guiStyle.alignment = TextAnchor.MiddleCenter;
						GUI.Label(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 88, 47.5f + (i * 25), KilledLengthLeft * 10, 25), composeText, guiStyle);
						GUI.Label(new Rect(Screen.width - (KilledLengthRight * 10) - 20, 47.5f + (i * 25), KilledLengthRight * 10, 25), composeRightText, guiStyle);
					}
					else if (rc.actionWeaponsReports[i].middleText.Substring(rc.actionWeaponsReports[i].middleText.Length - 7) == "[AWP]Hd")
					{
						GUI.color = new Color(1.0f, 1.0f, 1.0f, 0.5f);
						GUI.Box(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 120, 47.5f + (i * 25), 600, 25), "");
						GUI.color = Color.white;
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 107, 45.5f + (i * 25), 56, 28), AWP);
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 54, 45.5f + (i * 25), 30, 28), HeadShot);
						guiStyle.fontSize = 14;
						guiStyle.alignment = TextAnchor.MiddleCenter;
						GUI.Label(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 118, 47.5f + (i * 25), KilledLengthLeft * 10, 25), composeText, guiStyle);
						GUI.Label(new Rect(Screen.width - (KilledLengthRight * 10) - 20, 47.5f + (i * 25), KilledLengthRight * 10, 25), composeRightText, guiStyle);
					}
					else if (rc.actionWeaponsReports[i].middleText.Substring(rc.actionWeaponsReports[i].middleText.Length - 7) == "[FAMAS]")
					{
						GUI.color = new Color(1.0f, 1.0f, 1.0f, 0.5f);
						GUI.Box(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 90, 47.5f + (i * 25), 600, 25), "");
						GUI.color = Color.white;
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 75, 45.5f + (i * 25), 56, 28), FAMAS);
						guiStyle.fontSize = 14;
						guiStyle.alignment = TextAnchor.MiddleCenter;
						GUI.Label(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 88, 47.5f + (i * 25), KilledLengthLeft * 10, 25), composeText, guiStyle);
						GUI.Label(new Rect(Screen.width - (KilledLengthRight * 10) - 20, 47.5f + (i * 25), KilledLengthRight * 10, 25), composeRightText, guiStyle);
					}
					else if (rc.actionWeaponsReports[i].middleText.Substring(rc.actionWeaponsReports[i].middleText.Length - 9) == "[FAMAS]Hd")
					{
						GUI.color = new Color(1.0f, 1.0f, 1.0f, 0.5f);
						GUI.Box(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 120, 47.5f + (i * 25), 600, 25), "");
						GUI.color = Color.white;
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 107, 45.5f + (i * 25), 56, 28), FAMAS);
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 54, 45.5f + (i * 25), 30, 28), HeadShot);
						guiStyle.fontSize = 14;
						guiStyle.alignment = TextAnchor.MiddleCenter;
						GUI.Label(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 118, 47.5f + (i * 25), KilledLengthLeft * 10, 25), composeText, guiStyle);
						GUI.Label(new Rect(Screen.width - (KilledLengthRight * 10) - 20, 47.5f + (i * 25), KilledLengthRight * 10, 25), composeRightText, guiStyle);
					}
					else if (rc.actionWeaponsReports[i].middleText.Substring(rc.actionWeaponsReports[i].middleText.Length - 7) == "[KNIFE]")
					{
						GUI.color = new Color(1.0f, 1.0f, 1.0f, 0.5f);
						GUI.Box(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 90, 47.5f + (i * 25), 600, 25), "");
						GUI.color = Color.white;
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 75, 45.5f + (i * 25), 56, 28), KNIFE);
						guiStyle.fontSize = 14;
						guiStyle.alignment = TextAnchor.MiddleCenter;
						GUI.Label(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 88, 47.5f + (i * 25), KilledLengthLeft * 10, 25), composeText, guiStyle);
						GUI.Label(new Rect(Screen.width - (KilledLengthRight * 10) - 20, 47.5f + (i * 25), KilledLengthRight * 10, 25), composeRightText, guiStyle);
					}
					else if (rc.actionWeaponsReports[i].middleText.Substring(rc.actionWeaponsReports[i].middleText.Length - 9) == "[KNIFE]Hd")
					{
						GUI.color = new Color(1.0f, 1.0f, 1.0f, 0.5f);
						GUI.Box(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 120, 47.5f + (i * 25), 600, 25), "");
						GUI.color = Color.white;
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 107, 45.5f + (i * 25), 56, 28), KNIFE);
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 54, 45.5f + (i * 25), 30, 28), HeadShot);
						guiStyle.fontSize = 14;
						guiStyle.alignment = TextAnchor.MiddleCenter;
						GUI.Label(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 118, 47.5f + (i * 25), KilledLengthLeft * 10, 25), composeText, guiStyle);
						GUI.Label(new Rect(Screen.width - (KilledLengthRight * 10) - 20, 47.5f + (i * 25), KilledLengthRight * 10, 25), composeRightText, guiStyle);
					}
					else if (rc.actionWeaponsReports[i].middleText.Substring(rc.actionWeaponsReports[i].middleText.Length - 9) == "[GRENADE]")
					{
						GUI.color = new Color(1.0f, 1.0f, 1.0f, 0.5f);
						GUI.Box(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 90, 47.5f + (i * 25), 600, 25), "");
						GUI.color = Color.white;
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 75, 45.5f + (i * 25), 56, 28), GRENADE);
						guiStyle.fontSize = 14;
						guiStyle.alignment = TextAnchor.MiddleCenter;
						GUI.Label(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 88, 47.5f + (i * 25), KilledLengthLeft * 10, 25), composeText, guiStyle);
						GUI.Label(new Rect(Screen.width - (KilledLengthRight * 10) - 20, 47.5f + (i * 25), KilledLengthRight * 10, 25), composeRightText, guiStyle);
					}
					else if (rc.actionWeaponsReports[i].middleText.Substring(rc.actionWeaponsReports[i].middleText.Length - 4) == "[C4]")
					{
						GUI.color = new Color(1.0f, 1.0f, 1.0f, 0.5f);
						GUI.Box(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 90, 47.5f + (i * 25), 600, 25), "");
						GUI.color = Color.white;
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 75, 45.5f + (i * 25), 56, 28), C4);
						guiStyle.fontSize = 14;
						guiStyle.alignment = TextAnchor.MiddleCenter;
						GUI.Label(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 88, 47.5f + (i * 25), KilledLengthLeft * 10, 25), composeText, guiStyle);
						GUI.Label(new Rect(Screen.width - (KilledLengthRight * 10) - 20, 47.5f + (i * 25), KilledLengthRight * 10, 25), composeRightText, guiStyle);
					}
					else if (rc.actionWeaponsReports[i].middleText.Substring(rc.actionWeaponsReports[i].middleText.Length - 4) == "[SK]")
					{
						GUI.color = new Color(1.0f, 1.0f, 1.0f, 0.5f);
						GUI.Box(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 90, 47.5f + (i * 25), 600, 25), "");
						GUI.color = Color.white;
						GUI.DrawTexture(new Rect(Screen.width - (KilledLengthRight * 10.5f) - 75, 45.5f + (i * 25), 56, 28), SK);
						guiStyle.fontSize = 14;
						guiStyle.alignment = TextAnchor.MiddleCenter;
						GUI.Label(new Rect(Screen.width - ((KilledLengthLeft + KilledLengthRight) * 10) - 88, 47.5f + (i * 25), KilledLengthLeft * 10, 25), composeText, guiStyle);
						GUI.Label(new Rect(Screen.width - (KilledLengthRight * 10) - 20, 47.5f + (i * 25), KilledLengthRight * 10, 25), composeRightText, guiStyle);
					}



					//Main Text
				}
			}
		}


		//Chat messages
		if (GameSettings.updateChatMessages)
		{
			for (int i = 0; i < ru.chatMessages.Length; i++)
			{
				if (i < rc.mc.messages.Count && (rc.mc.messages[i].timer > 0 || rc.mc.chatState != MultiplayerChat.ChatState.None))
				{
					string composeText = "";
					int messageLength = 0;

					if (rc.mc.messages[i].isTeamChat != "")
					{
						composeText += "<color=#" + GameSettings.ColorToHex(GameSettings.whitetColor) + ">" + rc.mc.messages[i].isTeamChat + "</color>" + " ";
					}

					composeText += "<color=#" + GameSettings.ColorToHex(rc.mc.messages[i].senderTeamColor) + ">" + rc.mc.messages[i].senderName + ": " + "</color>";
					messageLength = rc.mc.messages[i].senderName.Length;
					composeText += "<color=#" + GameSettings.ColorToHex(GameSettings.whitetColor) + ">" + rc.mc.messages[i].text + "</color>";

					//Text Shadow
					GUI.color = new Color(1.0f, 1.0f, 1.0f, 0.5f);
					GUI.Box(new Rect(0, 245 + (i * 24), ((rc.mc.messages[i].isTeamChat.Length + rc.mc.messages[i].text.Length + messageLength) * 9.5f) + 34, 24), "");
					guiStyle.fontSize = 14;
					guiStyle.alignment = TextAnchor.MiddleLeft;
					GUI.Label(new Rect(15, 245 + (i * 24), rc.mc.messages[i].text.Length * 5, 24), composeText, guiStyle);
					//Main Text
				}
			}
		}




#if !UNITY_ANDROID && !UNITY_IOS && !UNITY_WP8 && !UNITY_WP8_1
        //Show fps
        if (rc.showFPS)
        {
            GUI.color = Color.black;
            GUI.Label(new Rect(6, 6, 150, 25), GameSettings.currentFPS.ToString("F2") + "FPS");
            GUI.color = GameSettings.HUDColor;
            GUI.Label(new Rect(5, 5, 150, 25), GameSettings.currentFPS.ToString("F2") + "FPS");
        }
#endif

		if (chatState == ChatState.None)
		{

#if !UNITY_ANDROID && !UNITY_IOS && !UNITY_WP8 && !UNITY_WP8_1
            GUI.color = GameSettings.textShadowColor;
            GUI.Label(new Rect(10 + 1, Screen.height - 275 + 1, 250, 25), "Press '" + GameSettings.playerKeys[15].ToString() + "' or '" + GameSettings.playerKeys[16].ToString() + "' to chat");
            GUI.color = GameSettings.HUDColor;
            GUI.Label(new Rect(10, Screen.height - 275, 250, 25), "Press '" + GameSettings.playerKeys[15].ToString() + "' or '" + GameSettings.playerKeys[16].ToString() + "' to chat");
#endif

			//Open chat
			if (!GameSettings.menuOpened)
			{

#if UNITY_ANDROID || UNITY_IOS || UNITY_WP8 || UNITY_WP8_1

				//Open chat on mobile
				GUI.color = new Color(1, 1, 1, 0.91f);

#else

                //Open chat
                if (Event.current.type == EventType.keyDown && Event.current.keyCode == GameSettings.playerKeys[15])
                { 

#endif



#if UNITY_ANDROID || UNITY_IOS || UNITY_WP8 || UNITY_WP8_1

				//Open team chat on mobile
				GUI.color = new Color(1, 1, 1, 1f);
				if (GUI.Button(new Rect(Screen.width / 2 * 1.9f, 10, 30, 25), Pause, GUI.skin.customStyles[2]))
				{
					rc.ShowScoreboard();

				}

			}
#else
            }
            else
            {
               // Show fullscreen button
                GUI.color = Color.white;
                if (GUI.Button(new Rect(Screen.width - 105, 5, 100, 20), "Fullscreen"))
                {
                    rc.os.SetFullscreen();
                }
            }
#endif

		}
		else
		{

#if UNITY_ANDROID || UNITY_IOS || UNITY_WP8 || UNITY_WP8_1
			//Send chat on mobile
			GUI.color = new Color(1, 1, 1, 0.91f);
			if (GUI.Button(new Rect(10 + chatLabelWidth + 210, Screen.height * 0.55f + 0.5f, 75, 33f), "Send"))
			{

#else

            //Send chat
            if (Event.current.type == EventType.keyDown && Event.current.keyCode == KeyCode.Return)
            { 

#endif

				GUI.FocusControl("");
				SendChat(PhotonNetwork.playerName, chatInput, rc.ourTeam, chatState == ChatState.Team);
				StartCoroutine(ClearChat());
				chatState = ChatState.None;
			}

			GUI.color = GameSettings.HUDColor;

			GUI.SetNextControlName("ChatField");
			GUI.Label(new Rect(10, Screen.height * 0.55f, 150, 25), chatLabel);
			chatInput = keyboard.text;
			chatInput = GUI.TextField(new Rect(10 + chatLabelWidth, Screen.height * 0.55f, 200, 32.5f), chatInput, 28);
			GUI.FocusControl("ChatField");
		}

		//Messages are displayed at RoomUI.cs

		//Show winning screens
		GUI.color = Color.white;

		//Show final screen
		if (rc.currentGameMode == "TDM" || rc.currentGameMode == "NORMAL")
		{
			if (rc.currentGameStatus == 1)
			{
				//endscore.End.showScoreBoard = true;
				if (rc.SoundBas == 0)
				{
					rc.ZeroStrikeX.clip = rc.ctWin;
					rc.ZeroStrikeX.Play();
					rc.SoundBas = 1;
				}
				GUI.DrawTexture(new Rect(Screen.width / 2 - 262.5f, Screen.height / 2 - 200, 525, 111), CounterText);
			}

			else if (rc.currentGameStatus == 2)
			{
				//endscore.End.showScoreBoard = true;
				if (rc.SoundBas == 0)
				{
					rc.ZeroStrikeX.clip = rc.tWin;
					rc.ZeroStrikeX.Play();
					rc.SoundBas = 1;
				}
				GUI.DrawTexture(new Rect(Screen.width / 2 - 262.5f, Screen.height / 2 - 200, 525, 111), TerorText);
			}

			else if (rc.currentGameStatus == 3)
			{
				//endscore.End.showScoreBoard = true;
				GUI.color = GameSettings.drawColor;
				GUI.Label(new Rect(Screen.width / 2 - 175, Screen.height / 2 - 35, 350, 70), rc.xml.button81 + "\n\n" + ((int)rc.currentRoundTime).ToString(), GameSettings.finalScreenStyle);
			}

		}

		if (rc.currentGameMode == "FFA")
		{
			if (rc.currentGameStatus == 3)
			{
				GUI.color = rc.winningPlayer == null ? GameSettings.drawColor : GameSettings.teamAColor;
				GUI.Label(new Rect(Screen.width / 2 - 175, Screen.height / 2 - 35, 350, 70), (rc.winningPlayer == null ? rc.xml.button82 : rc.winningPlayer.NickName + " " + rc.xml.button80) + "\n\n" + ((int)rc.currentRoundTime).ToString(), GameSettings.finalScreenStyle);
			}
		}
	}



	public void showTeamSelection(int windowID)
	{


		if (rc.currentGameMode == "TDM" || rc.currentGameMode == "NORMAL")
		{
			GUI.enabled = ((rc.ourTeam != 1 && rc.teamBPlayers.Count > rc.teamAPlayers.Count) || (rc.ourTeam == 0 && rc.teamBPlayers.Count == rc.teamAPlayers.Count)) && rc.currentRespawnTime == -1;

			if (GUI.Button(new Rect(0.5f, 0, 253, 272), CounterSelect))
			{
				//scoreAudioSource.clip = ClickSong;
				//scoreAudioSource.Play();
				rc.PrepareRespawn(1, true, false);
				sc.ShowFirst = 1;
				rc.showScoreBoard = false;
			}

			GUI.enabled = ((rc.ourTeam != 2 && rc.teamAPlayers.Count > rc.teamBPlayers.Count) || (rc.ourTeam == 0 && rc.teamBPlayers.Count == rc.teamAPlayers.Count)) && rc.currentRespawnTime == -1;

			if (GUI.Button(new Rect(253, 0, 250, 272), TerorrSelect))
			{
				//scoreAudioSource.clip = ClickSong;
				//scoreAudioSource.Play();
				rc.PrepareRespawn(2, true, false);
				sc.ShowFirst = 1;
				rc.showScoreBoard = false;
			}
		}
	}

	public void ChatMenu()
	{

		keyboard = TouchScreenKeyboard.Open(chatInput, TouchScreenKeyboardType.Default);
		chatState = ChatState.Public;
		chatLabel = "Message:";
		chatLabelWidth = GameSettings.guiSkin.label.CalcSize(new GUIContent(chatLabel)).x + 5;
		StartCoroutine(ClearChat());
	}


	void SendChat(string ourName, string text, int team, bool isTeamChat)
	{
		if (text.Replace(" ", "") != "")
		{
			photonView.RPC("SendChatRemote", PhotonTargets.All, ourName, text, team, isTeamChat);
		}
	}

	[PunRPC]
	void SendChatRemote(string senderName, string text, int senderTeam, bool isTeamChat)
	{
		if (!isTeamChat || rc.ourTeam == senderTeam)
		{
			Color senderTeamColor = GameSettings.HUDColor;
			if (senderTeam == 1 || senderTeam == 2)
			{
				senderTeamColor = senderTeam == 1 ? GameSettings.teamAColor : GameSettings.teamBColor;
			}

			//Remote rich text tags
			string nonRichTextString = Regex.Replace(text, "<.*?>", string.Empty);

			messages.Insert(0, new Message(senderName, senderTeamColor, nonRichTextString, isTeamChat ? "[T]" : "", 25));

			if (messages.Count > GameSettings.chatMessagesLimit)
			{
				messages.RemoveAt(messages.Count - 1);
			}

			GameSettings.updateChatMessages = true;
		}
	}

	IEnumerator ClearChat()
	{
		GameSettings.updateChatMessages = true;
		yield return new WaitForEndOfFrame();
		chatInput = "";
	}
}
