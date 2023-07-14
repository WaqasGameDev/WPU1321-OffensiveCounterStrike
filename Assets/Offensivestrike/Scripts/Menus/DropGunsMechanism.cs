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

    void DropMechanism(List<PlayerWeapons.WeaponSet> weaponList , DropableGun[] dropGunArray , int weaponINdex)
    {
        for (int i = 0; i < weaponList.Count; i++)
        {
            if (dropGunArray[i].fireType == weaponList[i].fireType && i == weaponINdex)
            {
                GameObject droppedGun = Instantiate(dropGunArray[i].gameObject, playerNetwork.transform.position, playerNetwork.transform.rotation);
                droppedGun.SetActive(true);
                Rigidbody gunRigidbody = droppedGun.AddComponent<Rigidbody>();
                Vector3 throwDirection = playerNetwork.transform.forward + Vector3.up;
                gunRigidbody.AddForce(throwDirection * throwForce, ForceMode.Impulse);
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
}
