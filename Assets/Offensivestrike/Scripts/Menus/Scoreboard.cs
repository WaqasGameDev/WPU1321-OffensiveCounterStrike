using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class Scoreboard : MonoBehaviour
{
	public enum CurrentWindow { LeaveRoom }
	[HideInInspector]
	CurrentWindow currentWindow = CurrentWindow.LeaveRoom;
	[HideInInspector]
	public RoomController rc; //Assigned from RoomController.cs
	xmlReader xml;
	string languagesPrefsName = "SelectedLanguages";
	public AudioClip ClickSong;
	AudioSource scoreAudioSource;
	public Texture2D background;
	public int ShowFirst = 0;
	public Texture2D CounterText;
	public Texture2D TerorText;

	Vector2 scoreBoardScroll = Vector2.zero;
	private bool leaving = false;
	private bool adOpen = false;
	private int tryToLeaveNum;

	public static Scoreboard Instance;

	// Use this for initialization
	void Start ()
    {
		leaving = false;
		adOpen = false;
		tryToLeaveNum = 0;
		ShowFirst = 0;
		xml = GetComponent<xmlReader>();
		scoreAudioSource = GetComponent<AudioSource>();
		this.enabled = false;
		xml.currentLanguage = PlayerPrefs.GetInt(languagesPrefsName);
		//GlobalActionService.Instance.onAdFinished += OnInterstitialDone;
		//GlobalActionService.Instance.onAdShown += AdShown;
	}

	private void OnDestroy()
	{
		//GlobalActionService.Instance.onAdFinished -= OnInterstitialDone;
		//GlobalActionService.Instance.onAdShown -= AdShown;
	}

	// Update is called once per frame
	void OnGUI ()
    {
		GUI.skin = GameSettings.guiSkin;
		if (rc.currentGameMode == "TDM" || rc.currentGameMode == "NORMAL") {
			if (ShowFirst == 1) {
				if (PhotonNetwork.room != null) {
					GUI.Window (0, new Rect (Screen.width / 2 - 425, Screen.height / 2 - 225, 850, 450), ScoreboardWindow, "");
				}
			}
			if (ShowFirst == 0) {
				GUI.Window (0, new Rect (Screen.width / 2 - 255, Screen.height / 2 - 133.5f, 503, 272), ShowTeamSelected, "");
			}
		} 
		else {
			if (PhotonNetwork.room != null) {
				GUI.Window (0, new Rect (Screen.width / 2 - 425, Screen.height / 2 - 225, 850, 450), ScoreboardWindow, "");
			}
		}

		if (rc.leavingRoom) {
			if (currentWindow == CurrentWindow.LeaveRoom) {
				GUI.Window (0, new Rect (0, 0, Screen.width, Screen.height), LeaveRoomNow, "");
			}
		}

	}

	private void OnInterstitialDone()
	{
		Debug.Log("Leaving: " + leaving.ToString());
		if (leaving == true)
		{
			rc.leavingRoom = true;
			currentWindow = CurrentWindow.LeaveRoom;
			PhotonNetwork.LeaveRoom();
		}
	}

	private void AdShown()
	{
		adOpen = true;
	}

	private void ShowAdBeforeLeave()
	{
		Debug.Log("Show ad");
        AdmobAds.singleton.ShowVideoRewardAd();

    }

	void LeaveRoomNow(int windowID)
	{
		GUI.DrawTexture(new Rect(0, 0, Screen.width, Screen.height), background);
		GUI.Box (new Rect (Screen.width / 2 - 150, Screen.height / 2 - 15, 375, 30), xml.button79);
	}

	public void ShowTeamSelected(int windowID)
	{

		if (rc.currentGameMode == "TDM" || rc.currentGameMode == "NORMAL") {
			GUI.enabled = ((rc.ourTeam != 1 && rc.teamBPlayers.Count > rc.teamAPlayers.Count) || (rc.ourTeam == 0 && rc.teamBPlayers.Count == rc.teamAPlayers.Count)) && rc.currentRespawnTime == -1;

			if (GUI.Button (new Rect (0.5f, 0, 253, 272), CounterText)) {
				scoreAudioSource.clip = ClickSong;
				scoreAudioSource.Play ();
				rc.PrepareRespawn(1, true,false);
				ShowFirst = 1;
				rc.showScoreBoard = false;
			}

			GUI.enabled = ((rc.ourTeam != 2 && rc.teamAPlayers.Count > rc.teamBPlayers.Count) || (rc.ourTeam == 0 && rc.teamBPlayers.Count == rc.teamAPlayers.Count)) && rc.currentRespawnTime == -1;

			if (GUI.Button (new Rect (253, 0, 250, 272), TerorText)) {
				scoreAudioSource.clip = ClickSong;
				scoreAudioSource.Play ();
				rc.PrepareRespawn(2, true,false);
				ShowFirst = 1;
				rc.showScoreBoard = false;
			}
		}

	}

	void ScoreboardWindow (int windowID)
    {
		GUI.Label(new Rect(15, 0, 750, 35), PhotonNetwork.room.Name + " - " + PhotonNetwork.room.PlayerCount.ToString() + "/" + PhotonNetwork.room.MaxPlayers.ToString() + " - " + rc.currentGameMode);

		if(GUI.Button(new Rect(850 - 28, 1, 28, 29), "", GameSettings.closeButtonStyle))
        {
			scoreAudioSource.clip = ClickSong;
			scoreAudioSource.Play ();
			rc.showScoreBoard = false;
		}

		if(rc.currentGameMode == "TDM" || rc.currentGameMode == "NORMAL")
        {
			GUI.enabled = ((rc.ourTeam != 1 && rc.teamBPlayers.Count > rc.teamAPlayers.Count) || (rc.ourTeam == 0 && rc.teamBPlayers.Count == rc.teamAPlayers.Count)) && rc.currentRespawnTime == -1;

			if(GUI.Button(new Rect(15, 50, 150, 30), "<color=#348BE1>"+ GameSettings.teamAName+"</color>"))
            {
				//ADManager.instance.ShowRewardedAd();
				scoreAudioSource.clip = ClickSong;
				scoreAudioSource.Play ();
				rc.PrepareRespawn(1, true,false);
			}

			GUI.enabled = ((rc.ourTeam != 2 && rc.teamAPlayers.Count > rc.teamBPlayers.Count) || (rc.ourTeam == 0 && rc.teamBPlayers.Count == rc.teamAPlayers.Count)) && rc.currentRespawnTime == -1;

			if(GUI.Button(new Rect(175, 50, 150, 30), "<color=#FF9100>"+GameSettings.teamBName+"</color>"))
            {
				//ADManager.instance.ShowRewardedAd();
				scoreAudioSource.clip = ClickSong;
				scoreAudioSource.Play ();
				rc.PrepareRespawn(2, true,false);
			}
		}

		if(rc.currentGameMode == "FFA")
        {
			GUI.enabled = rc.ourTeam == 0 && rc.currentRespawnTime == -1;

			if(GUI.Button(new Rect(15, 50, 310, 30), "<color=#00AD18>" + xml.button58 + "</color>"))
            {
				scoreAudioSource.clip = ClickSong;
				scoreAudioSource.Play ();
				rc.PrepareRespawn(1, true,false);
			}
		}

        GUI.enabled = rc.ourTeam != 0 && rc.currentRespawnTime == -1;

        if (GUI.Button(new Rect(335, 50, 150, 30), xml.button59
        ))
        {
            //AdmobAds.singleton.ShowVideoRewardAd();
            scoreAudioSource.clip = ClickSong;
            scoreAudioSource.Play();
            rc.PrepareRespawn(0, true, false);
        }

        GUI.enabled = true;

		if(GUI.Button(new Rect(495, 50, 150, 30), xml.button60))
        {
			scoreAudioSource.clip = ClickSong;
			scoreAudioSource.Play ();
			rc.showOptions = true;
			rc.showScoreBoard = false;
			rc.showBuyMenu = false;
		}

		if (GUI.Button(new Rect(655, 50, 150, 30), "<color=#FF0000>"  + xml.button61 + " X" + "</color>"))
		{
			scoreAudioSource.clip = ClickSong;
			scoreAudioSource.Play();
			rc.leavingRoom = true;
			currentWindow = CurrentWindow.LeaveRoom;
			PhotonNetwork.LeaveRoom();
			//}


		}

		if (rc.currentGameMode == "TDM" || rc.currentGameMode == "NORMAL")
        {
			GUI.color = GameSettings.textShadowColor;
			GUI.Label(new Rect(16, 81, 300, 35), GameSettings.teamAName + " Score: " + rc.teamAScore.ToString());
			GUI.color = GameSettings.teamAColor;
			GUI.Label(new Rect(15, 80, 300, 35), GameSettings.teamAName +  " Score: " + rc.teamAScore.ToString());

			GUI.color = Color.white;
			GUI.Label(new Rect(260, 80, 300, 35), "Kills");
			GUI.Label(new Rect(335, 80, 300, 35), "Deaths");

			GUI.color = GameSettings.textShadowColor;
			GUI.Label(new Rect(421, 81, 300, 35), GameSettings.teamBName +  " Score: " + rc.teamBScore.ToString());
			GUI.color = GameSettings.teamBColor;
			GUI.Label(new Rect(420, 80, 300, 35), GameSettings.teamBName +  " Score: " + rc.teamBScore.ToString());

			GUI.color = Color.white;
			GUI.Label(new Rect(665, 80, 300, 35), "Kills");
			GUI.Label(new Rect(740, 80, 300, 35), "Deaths");
		}

		if(rc.currentGameMode == "FFA")
        {
			GUI.color = Color.black;
			GUI.Label(new Rect(16, 81, 300, 35), xml.button62 + rc.currentKillLimit.ToString() + xml.button63);
			GUI.color = GameSettings.teamAColor;
			GUI.Label(new Rect(15, 80, 300, 35), xml.button62 + rc.currentKillLimit.ToString() + xml.button63);
			
			GUI.color = Color.white;
			GUI.Label(new Rect(665, 80, 300, 35), "Kills");
			GUI.Label(new Rect(740, 80, 300, 35), "Deaths");;
		}

		GUI.color = Color.white;

		GUILayout.Space(100);

		//Scoreboard
		scoreBoardScroll = GUILayout.BeginScrollView(scoreBoardScroll, true, true, GUILayout.Height(500 - 175));
			GUILayout.BeginHorizontal();
		if(rc.currentGameMode == "TDM" || rc.currentGameMode == "NORMAL")
                {
					//Team A
					DisplayTeamPlayers(rc.teamAPlayers, 400,1);
					//Team B
					DisplayTeamPlayers(rc.teamBPlayers, 400,2);
				}

				if(rc.currentGameMode == "FFA")
                {
					//Team A and the only in Free For ALl Mode
					DisplayTeamPlayers(rc.teamAPlayers, 808,1);
				}
			GUILayout.EndHorizontal();
		GUILayout.EndScrollView();

		GUILayout.Space(15);

		GUI.color = Color.white;
		GUILayout.Label(rc.spectatorNames);
	}

	void DisplayTeamPlayers (List<PhotonPlayer> teamTmp, int fieldWidth,int team)
    {
		GUILayout.BeginVertical();
			if(teamTmp.Count == 0 /*&& rc.teamABots.Count == 0 && rc.teamBBots.Count == 0*/)
            {
				GUI.color = new Color(1, 1, 1, 0.5f);
				GUILayout.BeginVertical(GUI.skin.customStyles[1], GUILayout.Width(fieldWidth));
				GUILayout.Label(xml.button64);
				GUILayout.Space(5);
				GUILayout.Label("...");
				GUILayout.EndVertical();
			}
            else
            {
				GUI.color = Color.white;
				for(int i = 0; i < teamTmp.Count; i ++)
                {
					GUI.color = teamTmp[i] == PhotonNetwork.player ? Color.white : GameSettings.otherPlayerGUIBoxColor;
					GUILayout.BeginVertical(GUI.skin.customStyles[1], GUILayout.Width(fieldWidth));
					
					//Display player name
					GUILayout.BeginHorizontal();
						if(teamTmp[i].CustomProperties["PlayerHP"] == null || (int)teamTmp[i].CustomProperties["PlayerHP"] < 1)
                        {
							GUI.color = GameSettings.customRedColor;
							GUILayout.Label("X");
							GUILayout.Space(5);
						}
						
					GUI.color = (int)teamTmp[i].CustomProperties["Team"] == 1 ? GameSettings.teamAColor : GameSettings.teamBColor;

				GUILayout.Label (teamTmp [i].NickName);

					GUILayout.EndHorizontal();
					
					GUILayout.Space(5);
					
					GUI.color = Color.white;
					
					GUILayout.BeginHorizontal();
					GUILayout.Label("Ping: " + ((int)teamTmp[i].CustomProperties["Ping"]).ToString(), GUILayout.Width(125));
					GUILayout.FlexibleSpace();
					GUILayout.Label(((int)teamTmp[i].CustomProperties["Kills"]).ToString(), GUILayout.Width(75));
					GUILayout.Label(((int)teamTmp[i].CustomProperties["Deaths"]).ToString(), GUILayout.Width(75));
					GUILayout.EndHorizontal();
					GUILayout.EndVertical();
				}

			//if (team == 1)
			//{
			//	for (int x = 0; x < rc.teamABots.Count; x++)
			//	{
			//		GUI.color = Color.white;
			//		GUILayout.BeginVertical(GUI.skin.customStyles[1], GUILayout.Width(fieldWidth));

			//		//Display player name
			//		GUILayout.BeginHorizontal();
			//		if (rc.teamABots[x].GetComponent<BotAi>().health < 1)
			//		{
			//			GUI.color = GameSettings.customRedColor;
			//			GUILayout.Label("*");
			//			GUILayout.Space(5);
			//		}

			//		GUI.color = rc.teamABots[x].GetComponent<BotAi>().team == 1 ? GameSettings.teamAColor : GameSettings.teamBColor;

			//		GUILayout.Label(rc.teamABots[x].GetComponent<BotAi>().photonView.name);

			//		GUILayout.EndHorizontal();

			//		GUILayout.Space(5);

			//		GUI.color = Color.white;

			//		GUILayout.BeginHorizontal();
			//		GUILayout.Label("Ping: 95 ");
			//		GUILayout.FlexibleSpace();
			//		GUILayout.Label(rc.teamABots[x].GetComponent<BotAi>().KillAll.ToString(), GUILayout.Width(75));
			//		GUILayout.Label(rc.teamABots[x].GetComponent<BotAi>().DieAll.ToString(), GUILayout.Width(75));
			//		GUILayout.EndHorizontal();
			//		GUILayout.EndVertical();
			//	}
			//}

			//if (team == 2)
			//{
			//	for (int y = 0; y < rc.teamBBots.Count; y++)
			//	{
			//		GUI.color = Color.white;
			//		GUILayout.BeginVertical(GUI.skin.customStyles[1], GUILayout.Width(fieldWidth));

			//		//Display player name
			//		GUILayout.BeginHorizontal();
			//		//if (rc.teamBBots[y].GetComponent<BotAi>().health < 1)
			//		//{
			//		//	GUI.color = GameSettings.customRedColor;
			//		//	GUILayout.Label("*");
			//		//	GUILayout.Space(5);
			//		//}

			//		//GUI.color = rc.teamBBots[y].GetComponent<BotAi>().team == 1 ? GameSettings.teamAColor : GameSettings.teamBColor;

			//		//GUILayout.Label(rc.teamBBots[y].GetComponent<BotAi>().photonView.name);

			//		GUILayout.EndHorizontal();

			//		GUILayout.Space(5);

			//		GUI.color = Color.white;

			//		GUILayout.BeginHorizontal();
			//		GUILayout.Label("Ping: 95 ");
			//		GUILayout.FlexibleSpace();
			//		GUILayout.Label(rc.teamBBots[y].GetComponent<BotAi>().KillAll.ToString(), GUILayout.Width(75));
			//		GUILayout.Label(rc.teamBBots[y].GetComponent<BotAi>().DieAll.ToString(), GUILayout.Width(75));
			//		GUILayout.EndHorizontal();
			//		GUILayout.EndVertical();
			//	}
			//}

		}
		GUILayout.EndVertical();
	}
}
