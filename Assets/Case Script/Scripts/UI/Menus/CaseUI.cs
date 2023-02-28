//Poylgon Planet - Contact. https://polygonplanet.com/contact/
//Copyright © 2016-2018 Polygon Planet. All rights reserved. https://polygonplanet.com/privacy-policy/
//This source file is subject to Unity Technologies Asset Store Terms of Service. https://unity3d.com/legal/as_terms

#pragma warning disable 0168 //Variable declared, but not used.
#pragma warning disable 0219 //Variable assigned, but not used.
#pragma warning disable 0414 //Private field assigned, but not used.
#pragma warning disable 0649 //Variable asisgned to, and will always have default value.

using System.Linq;
using UnityEngine;
using UnityEngine.UI;

public class CaseUI : MonoBehaviour 
{
    [Header("Classes")]
    public ObjectPooler objectPooler;
    public UIManager mainUIManager;

    [Header("Cases UI")]
    public CasesSortMode casesSortMode;
    public enum CasesSortMode
    {
        name,
        price
    }
    public Transform c_Layout;
    public ScrollRect c_ScrollRect;
    public GameObject AccountNotification;

    [Header("Inspecting Case UI")]
    public Text ic_NameText;
    public Text ic_CostText;
    public PolygonPlanet.Gradient.Gradient ic_RarityGradient;
    public Outline ic_RarityOutline;
    public Image ic_IconImage;
    public Button ic_OpenButton;
    public GameObject ic_InventoryFullPanel;

    [Header("Skins UI")]
    public SkinsSortMode skinsSortMode;
    public enum SkinsSortMode
    {
        name,
        price,
        rarity
    }
    public Text s_CaseNameText;
    public Transform s_Layout;
    public ScrollRect s_ScrollRect;

    [Header("Inspecting Skin UI")]
    public Text is_NameText;
    public PolygonPlanet.Gradient.Gradient is_RarityGradient;
    public Outline is_RarityOutline;
    public Image is_IconImage;
    public Text is_RarityText;
    public Text is_WorthText;

    //Singleton
    public static CaseUI instance;

    //Variables
    [HideInInspector]
    public int selectedCaseIndex;

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
        AccountNotification.SetActive(false);
    }

    public void LoadCasesUI()
    {

      if (bl_DataBase.IsUserLogged)
      {
            //Reset and deactivate case game objects.
            foreach (Transform childTransform in c_Layout.transform)
        {
            childTransform.GetComponent<ThisCaseUI>().caseIndex = 0;
            childTransform.gameObject.SetActive(false);
        }

        //Activate case game objects.
        for (int i = 0; i < CaseManager.instance.casesData.Count; i++)
        {
            GameObject caseGameObject = objectPooler.GetPooledObject("Case UI_Prefab");
            caseGameObject.GetComponent<PolygonPlanet.Gradient.Gradient>().color1 = CaseManager.instance.casesData[i].mainColor;
            caseGameObject.GetComponent<ThisCaseUI>().caseIconImage.sprite = CaseManager.instance.casesData[i].iconSprite;
            caseGameObject.GetComponent<ThisCaseUI>().caseRarityImage.color = CaseManager.instance.casesData[i].mainColor;
            caseGameObject.GetComponent<ThisCaseUI>().caseNameText.text = CaseManager.instance.casesData[i].caseName;
            caseGameObject.GetComponent<ThisCaseUI>().caseIndex = i;
        }

        //Sort case game objects.
        if (casesSortMode == CasesSortMode.name)
        {
            int index = objectPooler.spawnedPoolItems.FindIndex(x => (x.poolItemName == "Case UI_Prefab"));
            objectPooler.spawnedPoolItems[index].gameObjects = 
                objectPooler.spawnedPoolItems[index].gameObjects.OrderBy(x => CaseManager.instance.casesData[x.GetComponent<ThisCaseUI>().caseIndex].caseName).ToList();
            for (int i = 0; i < objectPooler.spawnedPoolItems[index].gameObjects.Count; i++)
            {
                objectPooler.spawnedPoolItems[index].gameObjects[i].transform.SetSiblingIndex(i);
            }
        }
        else if (casesSortMode == CasesSortMode.price)
        {
            int index = objectPooler.spawnedPoolItems.FindIndex(x => (x.poolItemName == "Case UI_Prefab"));
            objectPooler.spawnedPoolItems[index].gameObjects =
                objectPooler.spawnedPoolItems[index].gameObjects.OrderBy(x => CaseManager.instance.casesData[x.GetComponent<ThisCaseUI>().caseIndex].normalCurrencyOpenCost).ThenBy(y =>
                CaseManager.instance.casesData[y.GetComponent<ThisCaseUI>().caseIndex].caseName).ToList();
            for (int i = 0; i < objectPooler.spawnedPoolItems[index].gameObjects.Count; i++)
            {
                objectPooler.spawnedPoolItems[index].gameObjects[i].transform.SetSiblingIndex(i);
            }
        }

        //Switch ui.
        mainUIManager.ChangeUI(1);

        //Fix scroll rect position.
        c_ScrollRect.normalizedPosition = new Vector2(0, 1);
        }
        else
        {
            AccountNotification.SetActive(true);
        }
    }

    public void InspectCaseUI()
    {
        //Set ui.
        ic_NameText.text = "Inspecting " + "<i>"+ CaseManager.instance.casesData[selectedCaseIndex].caseName + "</i>" + " Case";
        if (CaseManager.instance.casesData[selectedCaseIndex].free == true)
        {
            ic_CostText.text = "Free";
        }
        else
        {
            ic_CostText.text = "$" + CaseManager.instance.casesData[selectedCaseIndex].normalCurrencyOpenCost.ToString("F2");
        }
        ic_RarityGradient.color1 = CaseManager.instance.casesData[selectedCaseIndex].mainColor;
        ic_RarityOutline.effectColor = CaseManager.instance.casesData[selectedCaseIndex].mainColor;
        ic_IconImage.sprite = CaseManager.instance.casesData[selectedCaseIndex].iconSprite;
        if (CaseManager.instance.casesData[selectedCaseIndex].free == true)
        {
            ic_OpenButton.interactable = true;
        }
        else
        {
            if (CurrencyManager.instance.normalCurrency >= CaseManager.instance.casesData[selectedCaseIndex].normalCurrencyOpenCost)
            {
                ic_OpenButton.interactable = true;
            }
            else
            {
                ic_OpenButton.interactable = false;
            }
        }
        if (InventoryManager.CountSkins() >= InventoryManager.instance.inventoryMaxSize)
        {
            ic_InventoryFullPanel.SetActive(true);
        }
        else
        {
            ic_InventoryFullPanel.SetActive(false);
        }

        //Switch ui.
        mainUIManager.ChangeUI(2);
    }

    public void Spin()
    {
        GameLogic.instance.currentCaseIndex = selectedCaseIndex;
        GameLogic.instance.Spin();
    }

    public void LoadPreviewSkinsUI()
    {
        //Set ui.
        s_CaseNameText.text = "<i>" + CaseManager.instance.casesData[selectedCaseIndex].caseName + "</i>" + " Skins";

        //Reset and deactivate skin game objects.
        foreach (Transform childTransform in s_Layout.transform)
        {
            childTransform.GetComponent<ThisPreviewSkinUI>().skinIndex = 0;
            childTransform.gameObject.SetActive(false);
        }

        //Activate skin game objects.
        for (int i = 0; i < CaseManager.instance.casesData[selectedCaseIndex].skins.Count; i++)
        {
            GameObject skinGameObject = objectPooler.GetPooledObject("Preview Skin UI_Prefab");
            skinGameObject.GetComponent<PolygonPlanet.Gradient.Gradient>().color1 = 
                RarityManager.instance.GetRarityColor(CaseManager.instance.casesData[selectedCaseIndex].skins[i].rarityIndex);
            skinGameObject.GetComponent<ThisPreviewSkinUI>().skinRarityImage.color = 
                RarityManager.instance.GetRarityColor(CaseManager.instance.casesData[selectedCaseIndex].skins[i].rarityIndex);
            skinGameObject.GetComponent<ThisPreviewSkinUI>().skinIconImage.sprite = CaseManager.instance.casesData[selectedCaseIndex].skins[i].iconSprite;
            skinGameObject.GetComponent<ThisPreviewSkinUI>().skinNameText.text = CaseManager.instance.casesData[selectedCaseIndex].skins[i].skinName;
            skinGameObject.GetComponent<ThisPreviewSkinUI>().skinIndex = i;
        }

        //Sort skin game objects.
        if (skinsSortMode == SkinsSortMode.name)
        {
            int index = objectPooler.spawnedPoolItems.FindIndex(x => (x.poolItemName == "Preview Skin UI_Prefab"));
            objectPooler.spawnedPoolItems[index].gameObjects =
                objectPooler.spawnedPoolItems[index].gameObjects.OrderBy(x =>
                CaseManager.instance.casesData[selectedCaseIndex].skins[x.GetComponent<ThisPreviewSkinUI>().skinIndex].skinName).ToList();
            for (int i = 0; i < objectPooler.spawnedPoolItems[index].gameObjects.Count; i++)
            {
                objectPooler.spawnedPoolItems[index].gameObjects[i].transform.SetSiblingIndex(i);
            }
        }
        else if (skinsSortMode == SkinsSortMode.price)
        {
            int index = objectPooler.spawnedPoolItems.FindIndex(x => (x.poolItemName == "Preview Skin UI_Prefab"));
            objectPooler.spawnedPoolItems[index].gameObjects =
                objectPooler.spawnedPoolItems[index].gameObjects.OrderBy(x => 
                CaseManager.instance.casesData[selectedCaseIndex].skins[x.GetComponent<ThisPreviewSkinUI>().skinIndex].normalCurrencyWorth).ThenBy(y => 
                CaseManager.instance.casesData[selectedCaseIndex].skins[y.GetComponent<ThisPreviewSkinUI>().skinIndex].skinName).ToList();
            for (int i = 0; i < objectPooler.spawnedPoolItems[index].gameObjects.Count; i++)
            {
                objectPooler.spawnedPoolItems[index].gameObjects[i].transform.SetSiblingIndex(i);
            }
        }
        else if (skinsSortMode == SkinsSortMode.rarity)
        {
            int index = objectPooler.spawnedPoolItems.FindIndex(x => (x.poolItemName == "Preview Skin UI_Prefab"));
            objectPooler.spawnedPoolItems[index].gameObjects =
                objectPooler.spawnedPoolItems[index].gameObjects.OrderBy(x =>
                CaseManager.instance.casesData[selectedCaseIndex].skins[x.GetComponent<ThisPreviewSkinUI>().skinIndex].rarityIndex).ThenBy(y =>
                CaseManager.instance.casesData[selectedCaseIndex].skins[y.GetComponent<ThisPreviewSkinUI>().skinIndex].skinName).ToList();
            for (int i = 0; i < objectPooler.spawnedPoolItems[index].gameObjects.Count; i++)
            {
                objectPooler.spawnedPoolItems[index].gameObjects[i].transform.SetSiblingIndex(i);
            }
        }

        //Switch ui.
        mainUIManager.ChangeUI(3);

        //Fix scroll rect position.
        s_ScrollRect.normalizedPosition = new Vector2(0, 1);
    }

    public void InspectPreviewSkinUI(int skinIndex)
    {
        //Set ui.
        is_NameText.text = "Inspecting " + "<i>" + CaseManager.instance.casesData[selectedCaseIndex].skins[skinIndex].skinName + "</i>" + " Skin";
        is_RarityGradient.color1 = RarityManager.instance.GetRarityColor(CaseManager.instance.casesData[selectedCaseIndex].skins[skinIndex].rarityIndex);
        is_RarityOutline.effectColor = RarityManager.instance.GetRarityColor(CaseManager.instance.casesData[selectedCaseIndex].skins[skinIndex].rarityIndex);
        is_IconImage.sprite = CaseManager.instance.casesData[selectedCaseIndex].skins[skinIndex].iconSprite;
        is_RarityText.text = RarityManager.instance.GetRarityName(CaseManager.instance.casesData[selectedCaseIndex].skins[skinIndex].rarityIndex);
        is_WorthText.text = "$" + CaseManager.instance.casesData[selectedCaseIndex].skins[skinIndex].normalCurrencyWorth.ToString("F2");

        //Switch ui.
        mainUIManager.ChangeUI(4);
    }
}