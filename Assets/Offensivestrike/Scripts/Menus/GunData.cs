using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GunData : MonoBehaviour
{
    public Image GunIcon;
    public Text nameTxt;
    public Text priceTxt;
    public Text equippedTxt;
    public Button onClickBtn;

    [HideInInspector]
    public BuyMenu.BuySection tempBuySection;
    [HideInInspector]
    public string weaponName;
    [HideInInspector]
    public PlayerWeapons.FireType fireType;
}
