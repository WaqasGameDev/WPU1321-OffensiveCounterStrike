using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DropGunsMechanism : MonoBehaviour
{
    [HideInInspector]
    public PlayerNetwork playerNetwork;
    [HideInInspector]
    public PlayerWeapons playerweaponController;

    public DropableGun[] primaryGuns;
    public DropableGun[] secondaryGuns;

    float throwForce = 3f;
    

    public void DropGun()
    {

        if (GameSettings.isPrimaryGun)
        {
            if(playerweaponController.selectedPrimary > 0)
            {
                DropMechanism(playerweaponController.primaryWeapons, primaryGuns, playerweaponController.selectedPrimary);
                ChangeGun();
            }

            
            
        }
        else if(GameSettings.isSecondaryGun)
        {
            DropMechanism(playerweaponController.secondaryWeapons , secondaryGuns, playerweaponController.selectedSecondary);
            ChangeGun();
        }
    }
    GameObject droppedGun;
    void DropMechanism(List<PlayerWeapons.WeaponSet> weaponList , DropableGun[] dropGunArray , int weaponINdex)
    {
        for (int i = 0; i < weaponList.Count; i++)
        {
            if (dropGunArray[i].fireType == weaponList[i].fireType && i == weaponINdex)
            {
                droppedGun = Instantiate(dropGunArray[i].gameObject, playerNetwork.transform.position, Quaternion.identity);
                Physics.IgnoreCollision(playerNetwork.GetComponent<CharacterController>(), droppedGun.GetComponent<Collider>());
                Physics.IgnoreCollision(playerNetwork.GetComponent<CapsuleCollider>(), droppedGun.GetComponent<Collider>());
                droppedGun.SetActive(true);
                dropGunArray[i].tempObject = droppedGun;
                Rigidbody gunRigidbody = droppedGun.AddComponent<Rigidbody>();
                Vector3 throwDirection = playerNetwork.transform.forward + Vector3.up;
                gunRigidbody.AddForce(throwDirection * throwForce, ForceMode.Impulse);
                StartCoroutine(StopPhysic(droppedGun , gunRigidbody));
                return;
            }
        }
       
    }

    void ChangeGun()
    {
        if(GameSettings.isPrimaryGun)
        {
            playerweaponController.selectedPrimary = 0;
            playerweaponController.selectedSecondary = PlayerPrefs.GetInt(GameSettings.LastSelectedSecondaryGun);
            playerweaponController.GetWeaponToSelect(1, playerweaponController.primaryWeapons);
            if (playerweaponController.selectedSecondary > 0)
            {
                playerweaponController.GetWeaponToSelect(2, playerweaponController.primaryWeapons);
            }
            else
            {
                playerweaponController.GetWeaponToSelect(2, playerweaponController.primaryWeapons);
            }
        }
        else
        {
            playerweaponController.selectedSecondary = 0;
            playerweaponController.selectedPrimary = PlayerPrefs.GetInt(GameSettings.LastSelectedPrimaryGun);
            playerweaponController.GetWeaponToSelect(1, playerweaponController.primaryWeapons);
            if (playerweaponController.selectedPrimary > 0)
            {
                playerweaponController.GetWeaponToSelect(1, playerweaponController.primaryWeapons);
            }
            else
            {
                playerweaponController.GetWeaponToSelect(3, playerweaponController.primaryWeapons);
            }
        }
       
    }

    IEnumerator StopPhysic(GameObject go , Rigidbody rb)
    {
        yield return new WaitForSeconds(0.8f);
        Collider col = go.AddComponent<BoxCollider>();
        col.isTrigger = true;
        rb.isKinematic = true;
    }

    public void DestroyIt()
    {
        RoomUIController.instance.switchPopUp.SetActive(false);
        if (GameSettings.droppedGunType == 1)
        {
            Destroy(primaryGuns[GameSettings.droppedGunIndex].tempObject);
        }
        else if (GameSettings.droppedGunType == 2)
        {
            Destroy(secondaryGuns[GameSettings.droppedGunIndex].tempObject);
        }
    
    }
}
