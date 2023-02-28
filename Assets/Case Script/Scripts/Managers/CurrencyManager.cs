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

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
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
        classSaveData.normalCurrency = normalCurrency;
        return classSaveData;
    }

    public void LoadSaveData(SaveData saveData)
    {
        classSaveData = saveData.currencyManagerSaveData;
        normalCurrency = classSaveData.normalCurrency;
    }
    #endregion
}