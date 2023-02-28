using System.Collections;
using System.Collections.Generic;
using UnityEngine;
//using Photon.Pun;
using Photon.Realtime;
using Photon.Chat;
using UnityEngine.SceneManagement;
using TMPro;
using Hashtable = ExitGames.Client.Photon.Hashtable; //Replace default Hashtables with Photon hashtables

public class NetworkPlayer : Photon.MonoBehaviour
{

    private void Awake()
    {
        //if (photonView.isMine == false)
        //{
        //    tag = "OtherPlayer";
        //}
        //else
        //{
        //    tag = "Player";
        //}
    }

    public void KickPlayer(string name)
    {
        photonView.RPC(nameof(RPCKickPlayer), PhotonTargets.All, name);
        Debug.Log("Kick Attempt");
    }

    [PunRPC]
    public void RPCKickPlayer(string name)
    {
        if (PhotonNetwork.player.NickName == name)
        {
            PhotonNetwork.LeaveRoom();
            Debug.Log("Left Room");
        }
        else
        {
            Debug.Log("Name not matching");
        }
    }
}
