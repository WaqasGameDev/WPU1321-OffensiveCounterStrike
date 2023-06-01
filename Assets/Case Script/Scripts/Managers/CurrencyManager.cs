//Poylgon Planet - Contact. https://polygonplanet.com/contact/
//Copyright © 2016-2018 Polygon Planet. All rights reserved. https://polygonplanet.com/privacy-policy/
//This source file is subject to Unity Technologies Asset Store Terms of Service. https://unity3d.com/legal/as_terms

#pragma warning disable 0168 //Variable declared, but not used.
#pragma warning disable 0219 //Variable assigned, but not used.
#pragma warning disable 0414 //Private field assigned, but not used.
#pragma warning disable 0649 //Variable asisgned to, and will always have default value.

using System;
using UnityEngine;

public class CurrencyManager : MonoBehaviour 
{
    [Header("Variables")]
    public float defaultNormalCurrency;

    //Singleton
    public static CurrencyManager instance;

    //Class Save Data

    public ClassSaveData classSaveData;

    //Variables
    [HideInInspector]
    public float normalCurrency;

    public class PurchaseItemIDs
    {
        public const string buycurrency500 = "offensivestrike.buycurrency500";
        public const string buycurrency1800 = "offensivestrike.buycurrency1800";
        public const string buycurrency3200 = "offensivestrike.buycurrency3200";
    }


    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
    }

    public void AddMoreCurrencyToAccount(UnityEngine.Purchasing.Product product)
    {
        Debug.Log($"Product transaction Id clicked was :"+product.metadata.localizedTitle);

        var currencyAddition = 0;

        switch (product.transactionID)
        {
            case PurchaseItemIDs.buycurrency500:
                currencyAddition = 500;
                break;
            case PurchaseItemIDs.buycurrency1800:
                currencyAddition = 1800;
                break;
            case PurchaseItemIDs.buycurrency3200:
                currencyAddition = 3200;
                break;
        }

        normalCurrency += currencyAddition;
        SaveLoadManager.instance.Save();
    }

    #region Save Data
    [Serializable]
    public struct ClassSaveData
    {
        public float normalCurrency;
    }

    public ClassSaveData DefaultSaveData()
    {
        ClassSaveData saveData = new ClassSaveData
        {
            normalCurrency = defaultNormalCurrency
        };
        return saveData;
    }

    public ClassSaveData GetSaveData()
    {
       // Debug.LogError("Value in GetSaveData"+ normalCurrency);
        classSaveData.normalCurrency = normalCurrency;
        return classSaveData;
        
    }

    public void LoadSaveData(SaveData saveData)
    {
      // Debug.LogError("CALLED Load Data");
        classSaveData = saveData.currencyManagerSaveData;
      //  Debug.LogError("Loaded value is"+classSaveData.normalCurrency);
        if(classSaveData.normalCurrency < 0 || classSaveData.normalCurrency == 0)
        {
            classSaveData.normalCurrency = 0;
        }
        normalCurrency = classSaveData.normalCurrency;
    }
    #endregion
}