//Poylgon Planet - Contact. https://polygonplanet.com/contact/
//Copyright © 2016-2018 Polygon Planet. All rights reserved. https://polygonplanet.com/privacy-policy/
//This source file is subject to Unity Technologies Asset Store Terms of Service. https://unity3d.com/legal/as_terms

#pragma warning disable 0168 //Variable declared, but not used.
#pragma warning disable 0219 //Variable assigned, but not used.
#pragma warning disable 0414 //Private field assigned, but not used.
#pragma warning disable 0649 //Variable asisgned to, and will always have default value.

using PolygonPlanet.ReorderableList;
using System;
using UnityEngine;

public class RarityManager : MonoBehaviour 
{
    [Header("Rarirtys")]
    [Reorderable(elementNameOverride = "Rarirty")]
    public RarityList raritys;

    //Singleton
    public static RarityManager instance;

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
    }

    public string GetRarityName(int index)
    {
        return raritys[index].rarityName;
    }

    public Color GetRarityColor(int index)
    {
        return raritys[index].mainColor;
    }

    public float GetRarityWeight(int index)
    {
        return raritys[index].weight;
    }

    public string GetRairtySoundName(int index)
    {
        return raritys[index].soundName;
    }
}

[Serializable]
public class Rarity
{
    [Header("Info")]
    public string rarityName;

    [Header("UI")]
    public Color mainColor;

    [Header("Game")]
    public float weight;
    public string soundName;
}

[Serializable]
public class RarityList : ReorderableArray<Rarity>
{
}