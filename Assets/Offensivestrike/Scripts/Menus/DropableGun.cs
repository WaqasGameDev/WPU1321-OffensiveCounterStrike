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

    private void OnTriggerEnter(Collider other)
    {
        if(other.GetComponent<PlayerNetwork>())
        {
            StartCoroutine(ShowPopUp());
            RoomUIController.instance.switchPopUp.SetActive(true);
            GameSettings.droppedGunIndex = index;
            GameSettings.droppedGunType = gunType;
            gameObject.GetComponent<Collider>().enabled = false;
        }
    }

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

    public void Destroy()
    {
        Destroy(this.gameObject);
    }
}
