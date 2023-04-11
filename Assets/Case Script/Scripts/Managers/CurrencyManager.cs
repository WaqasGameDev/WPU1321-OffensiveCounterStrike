﻿//Poylgon Planet - Contact. https://polygonplanet.com/contact/
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

    

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
    }

    public void AddMoreCurrencyToAccount(UnityEngine.Purchasing.Product product)
    {
        normalCurrency += int.Parse(product.metadata.localizedTitle);
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