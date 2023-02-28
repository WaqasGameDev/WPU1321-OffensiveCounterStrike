//Poylgon Planet - Contact. https://polygonplanet.com/contact/
//Copyright © 2016-2018 Polygon Planet. All rights reserved. https://polygonplanet.com/privacy-policy/
//This source file is subject to Unity Technologies Asset Store Terms of Service. https://unity3d.com/legal/as_terms

#pragma warning disable 0168 //Variable declared, but not used.
#pragma warning disable 0219 //Variable assigned, but not used.
#pragma warning disable 0414 //Private field assigned, but not used.
#pragma warning disable 0649 //Variable asisgned to, and will always have default value.

using PolygonPlanet.ReorderableList;
using PolygonPlanet.UniqueString;
using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class CaseManager : MonoBehaviour
{
    [Header("Cases")]
    [Reorderable(elementNameOverride = "Case")]
    public CaseList casesData;

    //Singleton
    public static CaseManager instance;

    //Class Save Data
    private bool dataSet;
    [HideInInspector]
    public ClassSaveData classSaveData;

    //Variables
    [HideInInspector]
    public List<CaseSaveData> casesSaveData;

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
    }

    private void Start()
    {
        SetData();
    }

    public void SetData()
    {
        if (dataSet == false)
        {
            SetCasesUniqueID();
            SortCases();
            GetSaveData();
            dataSet = true;
        }
    }

    private void SetCasesUniqueID()
    {
        foreach (CaseObject caseObject in casesData)
        {
            //Set case unique id;
            caseObject.uniqueID = UniqueString.EncodeString(caseObject.caseName);

            //Set skins unique id.
            foreach (Skin skin in caseObject.skins)
            {
                skin.uniqueID = UniqueString.EncodeString(skin.skinName);
            }
        }
    }

    private void SortCases()
    {
        //Sort cases data.
        List<CaseObject> caseObjects = casesData.ToList();
        caseObjects = caseObjects.OrderBy(x => x.uniqueID).ToList();
        casesData.CopyFrom(caseObjects);
        for (int i = 0; i < casesData.Count; i++)
        {
            List<Skin> questions = casesData[i].skins.ToList();
            questions = questions.OrderBy(x => x.uniqueID).ToList();
            casesData[i].skins.CopyFrom(questions);
        }

        //Sort cases save data.
        casesSaveData = casesSaveData.OrderBy(x => x.uniqueID).ToList();
        for (int i = 0; i < casesSaveData.Count; i++)
        {
            casesSaveData[i].skins = casesSaveData[i].skins.OrderBy(x => x.uniqueID).ToList();
        }
    }

    #region Save Data
    [Serializable]
    public struct ClassSaveData
    {
        public List<CaseSaveData> casesSaveData;
    }

    public ClassSaveData DefaultSaveData()
    {
        SetCasesUniqueID();
        ClassSaveData saveData = new ClassSaveData
        {
            casesSaveData = GenerateCasesSaveData()
        };
        return saveData;
    }

    public List<CaseSaveData> GenerateCasesSaveData()
    {
        SetCasesUniqueID();
        List<CaseSaveData> caseSaveData = new List<CaseSaveData>();
        for (int i = 0; i < casesData.Count; i++)
        {
            //Set case save data.
            CaseSaveData newCase = new CaseSaveData
            {
                uniqueID = casesData[i].uniqueID
            };

            //Set skin save data.
            newCase.skins = new List<SkinSaveData>();
            for (int j = 0; j < casesData[i].skins.Count; j++)
            {
                SkinSaveData newSkin = new SkinSaveData
                {
                    uniqueID = casesData[i].skins[j].uniqueID,
                    amountOwned = 0
                };
                newCase.skins.Add(newSkin);
            }

            casesSaveData.Add(newCase);
        }
        return casesSaveData;
    }

    public ClassSaveData GetSaveData()
    {
        classSaveData.casesSaveData = casesSaveData;
        return classSaveData;
    }

    public void LoadSaveData(SaveData saveData)
    {
        classSaveData = saveData.caseManagerSaveData;
        casesSaveData = classSaveData.casesSaveData;
    }
    #endregion
}