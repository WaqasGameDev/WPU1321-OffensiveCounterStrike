//Poylgon Planet - Contact. https://polygonplanet.com/contact/
//Copyright © 2016-2018 Polygon Planet. All rights reserved. https://polygonplanet.com/privacy-policy/
//This source file is subject to Unity Technologies Asset Store Terms of Service. https://unity3d.com/legal/as_terms

#pragma warning disable 0168 //Variable declared, but not used.
#pragma warning disable 0219 //Variable assigned, but not used.
#pragma warning disable 0414 //Private field assigned, but not used.
#pragma warning disable 0649 //Variable asisgned to, and will always have default value.

using PolygonPlanet.ConditionalHide;
using PolygonPlanet.ReorderableList;
using System;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Case", order = 1000)]
public class CaseObject : ScriptableObject
{
    [Header("Info")]
    public string caseName;

    [Header("UI")]
    public Sprite iconSprite;
    public Color mainColor;

    [Header("Defaults")]
    public bool free;
    [ConditionalHide(conditionalSourceField = "free", inverse = true)]
    public float normalCurrencyOpenCost;

    [Header("Skins")]
    [Reorderable(elementNameOverride = "Skin")]
    public SkinList skins;

    //Unique ID
    [HideInInspector]
    public string uniqueID;
}

[Serializable]
public class CaseList : ReorderableArray<CaseObject>
{
}

[Serializable]
public class CaseSaveData
{
    //Unique ID
    public string uniqueID;

    //Skins
    public List<SkinSaveData> skins;
}

[Serializable]
public class Skin
{
    [Header("Info")]
    public string skinName;

    [Header("Defaults")]
    public float normalCurrencyWorth;
    public int rarityIndex;

    [Header("UI")]
    public Sprite iconSprite;

    [Header("Weapon")]
    public Material weaponSabit;
    public Material weaponSabitTR;
    public Texture weaponDeisen;
    public Texture weaponDeisenTR;
    public Texture weaponOrjin;

    //Unique ID
    [HideInInspector]
    public string uniqueID;
}

[Serializable]
public class SkinList : ReorderableArray<Skin>
{
}

[Serializable]
public class SkinSaveData
{
    //Unique ID
    public string uniqueID;

    //Variables
    public int amountOwned;
}