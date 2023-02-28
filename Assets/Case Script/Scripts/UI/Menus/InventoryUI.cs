

#pragma warning disable 0168 //Variable declared, but not used.
#pragma warning disable 0219 //Variable assigned, but not used.
#pragma warning disable 0414 //Private field assigned, but not used.
#pragma warning disable 0649 //Variable asisgned to, and will always have default value.

using System.Collections;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;
using Hashtable = ExitGames.Client.Photon.Hashtable;


public class InventoryUI : Photon.MonoBehaviour
{
    [Header("Classes")]
    public ObjectPooler objectPooler;
    public UIManager mainUIManager;

    [Header("Skins UI")]
    public SkinsSortMode skinsSortMode;
    public enum SkinsSortMode
    {
        name,
        price,
        rarity,
        amount
    }
    public Text s_InventorySizeText;
    public GameObject s_Layout;
    public ScrollRect s_ScrollRect;

    [Header("Inspecting Skin UI")]
    public Text is_NameText;
    public Text is_SkinRarityText;
    public Text is_SkinWorthText;
    public Text is_SkinAmountText;
    public Image is_RarityImage;
    public Image is_IconImage;
    public Button is_WearButton;
    public Button is_DefaultButton;
    public Text is_WearText;
    public Button is_DecreaseSellAmountButton;
    public Button is_IncreaseSellAmountButton;
    public Text is_SellAmountText;
    public Button is_SellButton;

    //Singleton
    public static InventoryUI instance;

    //Inspecting Skin Variables
    [HideInInspector]
    public int selectedCaseIndex, selectedSkinIndex;
    private int currentSellAmount;

	void Start(){
        StartCoroutine(WaitFor());

     

    }

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
    }

        private void OnGUI()
    {
        //Decrease sell amount button.
        if (currentSellAmount > 0)
        {
            is_DecreaseSellAmountButton.interactable = true;
        }
        else
        {
            is_DecreaseSellAmountButton.interactable = false;
        }

        //Increase sell amount button and current sell amount.
        if (currentSellAmount >= CaseManager.instance.casesSaveData[selectedCaseIndex].skins[selectedSkinIndex].amountOwned)
        {
            currentSellAmount = CaseManager.instance.casesSaveData[selectedCaseIndex].skins[selectedSkinIndex].amountOwned;
            is_IncreaseSellAmountButton.interactable = false;
            is_WearButton.gameObject.SetActive(false);
        }
        else
        {
            is_WearButton.gameObject.SetActive(true);
            is_IncreaseSellAmountButton.interactable = true;
        }

        is_SellAmountText.text = currentSellAmount.ToString();

        //Sell amount button.
        if (currentSellAmount <= 0)
        {
            is_SellButton.interactable = false;
        }
        else
        {
            is_SellButton.interactable = true;
        }
        if (CaseManager.instance.casesData[selectedCaseIndex].skins[selectedSkinIndex].weaponSabit != null)
        {
            if (CaseManager.instance.casesData[selectedCaseIndex].skins[selectedSkinIndex].weaponSabit.mainTexture.name == CaseManager.instance.casesData[selectedCaseIndex].skins[selectedSkinIndex].weaponDeisen.name)
            {
                is_WearButton.interactable = false;
                is_WearText.text = "Worn";
                is_DefaultButton.gameObject.SetActive(true);
            }
            else
            {
                is_WearButton.interactable = true;
                is_WearText.text = "Wear";
                is_DefaultButton.gameObject.SetActive(false);
            }
        }
    }

    public void LoadInventoryUI()
    {
        //Set ui.
        s_InventorySizeText.text = InventoryManager.CountSkins() + "/" + InventoryManager.instance.inventoryMaxSize;

        //Reset and deactivate case game objects.
        foreach (Transform childTransform in s_Layout.transform)
        {
            childTransform.GetComponent<ThisInventorySkinUI>().caseIndex = 0;
            childTransform.GetComponent<ThisInventorySkinUI>().skinIndex = 0;
            childTransform.gameObject.SetActive(false);
        }

        //Activate skin game objects.
        for (int i = 0; i < CaseManager.instance.casesData.Count; i++)
        {
            for (int j = 0; j < CaseManager.instance.casesData[i].skins.Count; j++)
            {
                if (CaseManager.instance.casesSaveData[i].skins[j].amountOwned > 0)
                {
                    GameObject skinGameObject = objectPooler.GetPooledObject("Inventory Skin UI_Prefab");
                    skinGameObject.GetComponent<ThisInventorySkinUI>().skinRarityImage.color = RarityManager.instance.GetRarityColor(CaseManager.instance.casesData[i].skins[j].rarityIndex);
                    skinGameObject.GetComponent<ThisInventorySkinUI>().skinIconImage.sprite = CaseManager.instance.casesData[i].skins[j].iconSprite;
                    skinGameObject.GetComponent<ThisInventorySkinUI>().skinAmountText.text = CaseManager.instance.casesSaveData[i].skins[j].amountOwned.ToString();
                    skinGameObject.GetComponent<ThisInventorySkinUI>().skinNameText.text = CaseManager.instance.casesData[i].skins[j].skinName;
                    skinGameObject.GetComponent<ThisInventorySkinUI>().caseIndex = i;
                    skinGameObject.GetComponent<ThisInventorySkinUI>().skinIndex = j;
                }
            }
        }

        //Sort skin game objects.
        if (skinsSortMode == SkinsSortMode.name)
        {
            int index = objectPooler.spawnedPoolItems.FindIndex(x => (x.poolItemName == "Inventory Skin UI_Prefab"));
            objectPooler.spawnedPoolItems[index].gameObjects =
                objectPooler.spawnedPoolItems[index].gameObjects.OrderBy(x =>
                CaseManager.instance.casesData[x.GetComponent<ThisInventorySkinUI>().caseIndex].skins[x.GetComponent<ThisInventorySkinUI>().skinIndex].skinName).ToList();
            for (int i = 0; i < objectPooler.spawnedPoolItems[index].gameObjects.Count; i++)
            {
                objectPooler.spawnedPoolItems[index].gameObjects[i].transform.SetSiblingIndex(i);
            }
        }
        else if (skinsSortMode == SkinsSortMode.price)
        {
            int index = objectPooler.spawnedPoolItems.FindIndex(x => (x.poolItemName == "Inventory Skin UI_Prefab"));
            objectPooler.spawnedPoolItems[index].gameObjects =
                objectPooler.spawnedPoolItems[index].gameObjects.OrderBy(x =>
                CaseManager.instance.casesData[x.GetComponent<ThisInventorySkinUI>().caseIndex].skins[x.GetComponent<ThisInventorySkinUI>().skinIndex].normalCurrencyWorth).ThenBy(y =>
                CaseManager.instance.casesData[y.GetComponent<ThisInventorySkinUI>().caseIndex].skins[y.GetComponent<ThisInventorySkinUI>().skinIndex].skinName).ToList();
            for (int i = 0; i < objectPooler.spawnedPoolItems[index].gameObjects.Count; i++)
            {
                objectPooler.spawnedPoolItems[index].gameObjects[i].transform.SetSiblingIndex(i);
            }
        }
        else if (skinsSortMode == SkinsSortMode.rarity)
        {
            int index = objectPooler.spawnedPoolItems.FindIndex(x => (x.poolItemName == "Inventory Skin UI_Prefab"));
            objectPooler.spawnedPoolItems[index].gameObjects =
                objectPooler.spawnedPoolItems[index].gameObjects.OrderBy(x =>
                CaseManager.instance.casesData[x.GetComponent<ThisInventorySkinUI>().caseIndex].skins[x.GetComponent<ThisInventorySkinUI>().skinIndex].rarityIndex).ThenBy(y =>
                CaseManager.instance.casesData[y.GetComponent<ThisInventorySkinUI>().caseIndex].skins[y.GetComponent<ThisInventorySkinUI>().skinIndex].skinName).ToList();
            for (int i = 0; i < objectPooler.spawnedPoolItems[index].gameObjects.Count; i++)
            {
                objectPooler.spawnedPoolItems[index].gameObjects[i].transform.SetSiblingIndex(i);
            }
        }
        else if (skinsSortMode == SkinsSortMode.amount)
        {
            int index = objectPooler.spawnedPoolItems.FindIndex(x => (x.poolItemName == "Inventory Skin UI_Prefab"));
            objectPooler.spawnedPoolItems[index].gameObjects =
                objectPooler.spawnedPoolItems[index].gameObjects.OrderBy(x =>
                CaseManager.instance.casesSaveData[x.GetComponent<ThisInventorySkinUI>().caseIndex].skins[x.GetComponent<ThisInventorySkinUI>().skinIndex].amountOwned).ThenBy(y =>
                CaseManager.instance.casesData[y.GetComponent<ThisInventorySkinUI>().caseIndex].skins[y.GetComponent<ThisInventorySkinUI>().skinIndex].skinName).ToList();
            for (int i = 0; i < objectPooler.spawnedPoolItems[index].gameObjects.Count; i++)
            {
                objectPooler.spawnedPoolItems[index].gameObjects[i].transform.SetSiblingIndex(i);
            }
        }

        //Switch ui.
        mainUIManager.ChangeUI(5);

        //Fix scroll rect position.
        s_ScrollRect.normalizedPosition = new Vector2(0, 1);
    }

    public void InspectPreviewSkin(int caseIndex, int skinIndex)
    {
        //Set variables.
        currentSellAmount = 0;

        //Set ui.
        is_NameText.text = "Inspecting " + "<i>" + CaseManager.instance.casesData[caseIndex].skins[skinIndex].skinName + "</i>" + " Skin";
        is_SkinRarityText.text = RarityManager.instance.GetRarityName(CaseManager.instance.casesData[caseIndex].skins[skinIndex].rarityIndex);
        is_SkinWorthText.text = "$" + CaseManager.instance.casesData[caseIndex].skins[skinIndex].normalCurrencyWorth.ToString("F2");
        is_SkinAmountText.text = CaseManager.instance.casesSaveData[caseIndex].skins[skinIndex].amountOwned.ToString();
        is_RarityImage.color = RarityManager.instance.GetRarityColor(CaseManager.instance.casesData[caseIndex].skins[skinIndex].rarityIndex);
        is_IconImage.sprite = CaseManager.instance.casesData[caseIndex].skins[skinIndex].iconSprite;

        //Switch ui.
        mainUIManager.ChangeUI(6);
    }

    public void DecreaseSellAmount()
    {
        AudioManager.instance.PlaySound("UIClick");
        currentSellAmount--;
        if (currentSellAmount < 0)
        {
            currentSellAmount = 0;
        }
    }

    public void IncreaseSellAmount()
    {
        AudioManager.instance.PlaySound("UIClick");
        if (CaseManager.instance.casesSaveData[selectedCaseIndex].skins[selectedSkinIndex].amountOwned >= currentSellAmount)
        {
            currentSellAmount++;
        }
    }

    public void SellSkins()
    {
        AudioManager.instance.PlaySound("UIClick");

        //Set variables.
        CurrencyManager.instance.normalCurrency += CaseManager.instance.casesData[selectedCaseIndex].skins[selectedSkinIndex].normalCurrencyWorth * currentSellAmount;
        CaseManager.instance.casesSaveData[selectedCaseIndex].skins[selectedSkinIndex].amountOwned -= currentSellAmount;
        SaveLoadManager.instance.Save();

        if (CaseManager.instance.casesData[selectedCaseIndex].skins[selectedSkinIndex].weaponSabit.mainTexture.name == CaseManager.instance.casesData[selectedCaseIndex].skins[selectedSkinIndex].weaponDeisen.name)
        {
            CaseManager.instance.casesData[selectedCaseIndex].skins[selectedSkinIndex].weaponSabit.mainTexture = CaseManager.instance.casesData[selectedCaseIndex].skins[selectedSkinIndex].weaponOrjin;
            CaseManager.instance.casesData[selectedCaseIndex].skins[selectedSkinIndex].weaponSabitTR.mainTexture = CaseManager.instance.casesData[selectedCaseIndex].skins[selectedSkinIndex].weaponDeisenTR;
        }

        //Set ui.
        is_SkinAmountText.text = CaseManager.instance.casesSaveData[selectedCaseIndex].skins[selectedSkinIndex].amountOwned.ToString();
    }




    public void WearSkin()
    {


        AudioManager.instance.PlaySound("UIClick");

        //Set variables.
        CaseManager.instance.casesData[selectedCaseIndex].skins[selectedSkinIndex].weaponSabit.mainTexture = CaseManager.instance.casesData[selectedCaseIndex].skins[selectedSkinIndex].weaponDeisen;
        CaseManager.instance.casesData[selectedCaseIndex].skins[selectedSkinIndex].weaponSabitTR.mainTexture = CaseManager.instance.casesData[selectedCaseIndex].skins[selectedSkinIndex].weaponDeisen;
        SaveLoadManager.instance.Save();

    
    }
  
    //[PunRPC]
    // void WearSkinto()
    //{
    //    if (photonView.isMine)
    //        AudioManager.instance.PlaySound("UIClick");

    //    //Set variables.
    //    CaseManager.instance.casesData[selectedCaseIndex].skins[selectedSkinIndex].weaponSabit.mainTexture = CaseManager.instance.casesData[selectedCaseIndex].skins[selectedSkinIndex].weaponDeisen;
    //    CaseManager.instance.casesData[selectedCaseIndex].skins[selectedSkinIndex].weaponSabitTR.mainTexture = CaseManager.instance.casesData[selectedCaseIndex].skins[selectedSkinIndex].weaponDeisen;
    //    SaveLoadManager.instance.Save();


    //}

    //public void wearit()
    //{
    //    AudioManager.instance.PlaySound("UIClick");

    //    //Set variables.
    //    CaseManager.instance.casesData[selectedCaseIndex].skins[selectedSkinIndex].weaponSabit.mainTexture = CaseManager.instance.casesData[selectedCaseIndex].skins[selectedSkinIndex].weaponDeisen;
    //    CaseManager.instance.casesData[selectedCaseIndex].skins[selectedSkinIndex].weaponSabitTR.mainTexture = CaseManager.instance.casesData[selectedCaseIndex].skins[selectedSkinIndex].weaponDeisen;
    //    SaveLoadManager.instance.Save();

    //}

    public void DefaultSkin()
    {
        AudioManager.instance.PlaySound("UIClick");

        //Set variables.
        CaseManager.instance.casesData[selectedCaseIndex].skins[selectedSkinIndex].weaponSabit.mainTexture = CaseManager.instance.casesData[selectedCaseIndex].skins[selectedSkinIndex].weaponOrjin;
        CaseManager.instance.casesData[selectedCaseIndex].skins[selectedSkinIndex].weaponSabitTR.mainTexture = CaseManager.instance.casesData[selectedCaseIndex].skins[selectedSkinIndex].weaponDeisenTR;
        SaveLoadManager.instance.Save();

    }

    IEnumerator WaitFor()
    {
        yield return new WaitForSeconds(0.25f);
        LoadInventoryUI();
    }

}