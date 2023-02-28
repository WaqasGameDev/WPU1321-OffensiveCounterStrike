//Poylgon Planet - Contact. https://polygonplanet.com/contact/
//Copyright © 2016-2018 Polygon Planet. All rights reserved. https://polygonplanet.com/privacy-policy/
//This source file is subject to Unity Technologies Asset Store Terms of Service. https://unity3d.com/legal/as_terms

#pragma warning disable 0168 //Variable declared, but not used.
#pragma warning disable 0219 //Variable assigned, but not used.
#pragma warning disable 0414 //Private field assigned, but not used.
#pragma warning disable 0649 //Variable asisgned to, and will always have default value.

using UnityEngine;

public class InventoryManager : MonoBehaviour
{
    [Header("Variables")]
    public int inventoryMaxSize;

    //Singleton
    public static InventoryManager instance;

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
    }

    public static int CountSkins()
    {
        int amount = new int();
        for (int i = 0; i < CaseManager.instance.casesData.Count; i++)
        {
            for (int j = 0; j < CaseManager.instance.casesData[i].skins.Count; j++)
            {
                if (CaseManager.instance.casesSaveData[i].skins[j].amountOwned > 0)
                {
                    amount += CaseManager.instance.casesSaveData[i].skins[j].amountOwned;
                }
            }
        }
        return amount;
    }
}