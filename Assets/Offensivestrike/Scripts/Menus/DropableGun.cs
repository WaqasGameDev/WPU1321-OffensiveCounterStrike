using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DropableGun : MonoBehaviour
{
    public int index;
    public int gunType;
    public int DisableTime;
    public PlayerWeapons.FireType fireType;
    int timeToClose;
    [HideInInspector]
    public GameObject tempObject;
    public Collider childCollider;

    private void Start()
    {
        //gameObject.AddComponent<Rigidbody>();
        StartCoroutine(StopPhysic(gameObject, gameObject.GetComponent<Rigidbody>()));
    }

    IEnumerator StopPhysic(GameObject go, Rigidbody rb)
    {
        yield return new WaitForSeconds(0.8f);
        Collider col = go.GetComponent<BoxCollider>();
        col.enabled = true;
        rb.isKinematic = true;
    }
    private void OnTriggerEnter(Collider other)
    {
        if (other.GetComponent<PlayerNetwork>())
        {
            //Debug.Log(" other " + other.gameObject.name);
            if (!other.GetComponent<PlayerNetwork>().isBot && other.GetComponent<PlayerNetwork>().photonView.isMine)
            {
                StartCoroutine(ShowPopUp());
                RoomUIController.instance.switchPopUp.SetActive(true);
                GameSettings.droppedGunIndex = index;
                GameSettings.droppedGunType = gunType;
                RoomUIController.instance.tempGunObject = gameObject;
                //gameObject.GetComponent<Collider>().enabled = false;
            }

        }
    }

    //private void OnTriggerExit(Collider other)
    //{
    //    if (other.GetComponent<PlayerNetwork>())
    //    {
    //        //Debug.Log(" other " + other.gameObject.name);
    //        if (!other.GetComponent<PlayerNetwork>().isBot && other.GetComponent<PlayerNetwork>().photonView.isMine)
    //        {
    //            gameObject.GetComponent<Collider>().enabled = true;

    //        }
    //    }
    //}
    IEnumerator ShowPopUp()
    {
        //Allow some time (in seconds) to allow newly spawned player purchase weapon)
        timeToClose = DisableTime;

        while (timeToClose > 0)
        {
            timeToClose--;
            yield return new WaitForSeconds(1);
        }


        if (timeToClose == 0)
        {
            RoomUIController.instance.switchPopUp.SetActive(false);
        }
    }

    public void DestroyOnAll()
    {
        if(GameSettings.rc.offlineMode)
        {
            Destroy(this.gameObject);
        }
        else
        {
            if (gameObject.GetComponent<PhotonView>())
            {
                gameObject.GetComponent<PhotonView>().RPC("RPCDestroyItem", PhotonTargets.AllViaServer);
                //RPCDestroyItem();
            }
        }
       
    }
    [PunRPC]
    public void RPCDestroyItem()
    {
        if (gameObject.GetComponent<PhotonView>().isMine)
        {
                    PhotonNetwork.Destroy(this.gameObject);

        }
    }
}
