using System.Collections;
using System.Collections.Generic;
using UnityEngine;
//using Photon.Pun;
using Photon.Realtime;
using Photon.Chat;
using UnityEngine.SceneManagement;
using TMPro;
using Hashtable = ExitGames.Client.Photon.Hashtable; //Replace defaulat Hashtables with Photon hashtables

public class PlayerKicker : Photon.MonoBehaviour
{
    GameObject player;
    NetworkPlayer playerNet;

    public void KickPlayer(string playerName)
    {
        GameObject[] Players = GameObject.FindGameObjectsWithTag("Player");
        for (int i = 0; i < Players.Length; i++)
        {
            if (Players[i].GetComponent<PlayerNetwork>().MeName == playerName)
            {
                Players[i].GetComponent<NetworkPlayer>().KickPlayer(playerName);
            }
        }
    }

    //public override void OnDisconnected(DisconnectCause cause)
    //{
    //    SceneManager.LoadScene("Lobby");
    //}

}
