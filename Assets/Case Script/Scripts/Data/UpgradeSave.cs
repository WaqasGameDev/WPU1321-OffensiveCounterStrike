//Poylgon Planet - Contact. https://polygonplanet.com/contact/
//Copyright © 2016-2018 Polygon Planet. All rights reserved. https://polygonplanet.com/privacy-policy/
//This source file is subject to Unity Technologies Asset Store Terms of Service. https://unity3d.com/legal/as_terms

#pragma warning disable 0168 //Variable declared, but not used.
#pragma warning disable 0219 //Variable assigned, but not used.
#pragma warning disable 0414 //Private field assigned, but not used.
#pragma warning disable 0649 //Variable asisgned to, and will always have default value.

using System.Collections.Generic;
using UnityEngine;

public class UpgradeSave : MonoBehaviour
{
    public static SaveData VersionCheck(SaveData saveData)
    {
        Debug.Log("Checking Version.");
        DefaultVersion(saveData);
        return saveData;
    }

    public static SaveData DefaultVersion(SaveData saveData)
    {
        Debug.Log("Upgrading default version.");
        saveData = UpgradeSavedCasesData(saveData);
        return saveData;
    }

    public static SaveData UpgradeSavedCasesData(SaveData saveData)
    {
        List<CaseSaveData> oldCasesSaveData = saveData.caseManagerSaveData.casesSaveData;
        List<CaseSaveData> newCasesSaveData = CaseManager.instance.GenerateCasesSaveData();

        //Parse case data.
        foreach (CaseSaveData newCaseSaveData in newCasesSaveData)
        {
            foreach (CaseSaveData oldCaseSaveData in oldCasesSaveData)
            {
                if (newCaseSaveData.uniqueID == oldCaseSaveData.uniqueID)
                {
                    foreach (SkinSaveData newSkinSaveData in newCaseSaveData.skins)
                    {
                        foreach (SkinSaveData oldSkinSaveData in oldCaseSaveData.skins)
                        {
                            if (newSkinSaveData.uniqueID == oldSkinSaveData.uniqueID)
                            {
                                //Set new skin data.
                                newSkinSaveData.amountOwned = oldSkinSaveData.amountOwned;
                            }
                        }
                    }
                }
            }
        }

        saveData.caseManagerSaveData.casesSaveData = newCasesSaveData;
        return saveData;
    }
}