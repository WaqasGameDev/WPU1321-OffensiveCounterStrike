using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class FakeScoreboard : MonoBehaviour
{
    public PlayerData[] teamA;
    public PlayerData[] teamB;
    public PlayerData[] ffa_Player;

    public GameObject TDM_Screen;
    public GameObject FFA_Screen;
    public GameObject Leave_Room_Screen;

    public Text teamAScore, teamBScore;

    [HideInInspector]
    public RoomController roomController;

    public AudioClip ClickSong;
    AudioSource scoreAudioSource;

 
    private void OnEnable()
    {
        scoreAudioSource = GetComponent<AudioSource>();
        if (roomController.currentGameMode == "TDM")
        {
            TDM_Screen.SetActive(true);
            teamAScore.text = GameSettings.rc.teamAScore.ToString();
            teamBScore.text = GameSettings.rc.teamBScore.ToString();
            ShowPlayers(roomController.FakeTeamA, teamA);
            ShowPlayers(roomController.FakeTeamB, teamB);
        }
        else if (roomController.currentGameMode == "FFA")
        {
            FFA_Screen.SetActive(true);
            ShowPlayers(roomController.FakeTeamA, ffa_Player);
        }

        
    }


    public void ShowPlayers(List<GameObject> team , PlayerData[] players)
    {
        if(team.Count > 0 && team != null)
        {
            for (int i = 0; i < team.Count; i++)
            {
                if(team[i] !=null)
                {
                    players[i].gameObject.SetActive(true);
                    players[i]._PlayerName.text = team[i].name.ToString();
                    players[i]._Ping.text = Random.Range(0, 1000).ToString("000");
                    if (!team[i].GetComponent<PlayerNetwork>())
                    {
                        players[i]._DeathCount.text = team[i].GetComponent<TacticalAI.BaseScript>()._AiDataManager.Death_Count.ToString();
                        players[i]._KillCount.text = team[i].GetComponent<TacticalAI.BaseScript>()._AiDataManager.kill_Count.ToString();
                    }
                    else
                    {
                        // Add MAinPLayer Kill Count
                        players[i]._KillCount.text = GameSettings.rc.PLayerKillCount.ToString();
                        players[i]._DeathCount.text = GameSettings.rc.PlayerDeathCount.ToString();
                    }
                }
                else
                {
                    team.Remove(team[i].gameObject);
                }
               

            }
        }
        else
        {
            players[0].gameObject.SetActive(true);
            players[0]._PlayerName.text = "Empty";
            players[0]._Ping.text = "0";
            players[0]._DeathCount.text = "0";
            players[0]._KillCount.text = "0";
        }
       
    }

  
    public void ResetValues()
    {
        for(int i = 0; i < teamA.Length; i++)
        {
            teamA[i].gameObject.SetActive(false);
        }
        for (int i = 0; i < teamB.Length; i++)
        {
            teamB[i].gameObject.SetActive(false);
        }
    }
    public void JoinGameFFA()
    {
        if((int)PhotonNetwork.player.CustomProperties["Team"] == 1)
        {
            return;
        }
        onClick();
        roomController.PrepareRespawn(1, true, false);
        roomController.PrepareSpawnFakePlayer();
        gameObject.SetActive(false);
    }
    public void PlayAsCounter()
    {
        if ((int)PhotonNetwork.player.CustomProperties["Team"] == 1)
        {
            return;
        }
        onClick();
        roomController.PrepareRespawn(1, true, false);
        roomController.isRespawnAi = true;
        roomController.PrepareSpawnFakePlayer();
        gameObject.SetActive(false);
    }

    public void PlayAsTerorist()
    {
        if ((int)PhotonNetwork.player.CustomProperties["Team"] == 2)
        {
            return;
        }

        onClick();
        roomController.PrepareRespawn(2, true, false);
        roomController.isRespawnAi = true;
        roomController.PrepareSpawnFakePlayer();
        gameObject.SetActive(false);
    }

    public void  PlayAsSpectator()
    {
        onClick();
        roomController.PrepareRespawn(0, true, false);
        gameObject.SetActive(false);
    }

    public void ShowOption()
    {
        gameObject.SetActive(false);
        roomController.showOptions = true;
        roomController.showScoreBoard = false;
        roomController.showBuyMenu = false;

    }

    public void LeaveRoom()
    {
        gameObject.SetActive(false);
        roomController.leavingRoom = true;
        Leave_Room_Screen.SetActive(true);
        PhotonNetwork.LeaveRoom();

    }
    public void CloseScoreboard()
    {
        onClick();
        gameObject.SetActive(false);
    }

    void onClick()
    {
        scoreAudioSource.clip = ClickSong;
        scoreAudioSource.Play();
    }
    private void OnDisable()
    {
        ResetValues();
    }

}
