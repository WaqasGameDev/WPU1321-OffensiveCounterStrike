//Poylgon Planet - Contact. https://polygonplanet.com/contact/
//Copyright © 2016-2018 Polygon Planet. All rights reserved. https://polygonplanet.com/privacy-policy/
//This source file is subject to Unity Technologies Asset Store Terms of Service. https://unity3d.com/legal/as_terms

#pragma warning disable 0168 //Variable declared, but not used.
#pragma warning disable 0219 //Variable assigned, but not used.
#pragma warning disable 0414 //Private field assigned, but not used.
#pragma warning disable 0649 //Variable asisgned to, and will always have default value.

using System.Collections;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

public class GameLogic : MonoBehaviour
{
    [Header("Classes")]
    public ObjectPooler objectPooler;
    public UIManager mainUIManager;

    [Header("Game Layout")]
    public Transform skinsLayout;

    [Header("Animation")]
    public float transitionDuration;
    public AnimationCurve animationCurve;
    public float timeToWaitAtEnd;

    [Header("Ending Skin UI")]
    public Text es_NameText;
    public Text es_RarityText;
    public Text es_WorthText;
    public Image es_RarityImage;
    public Image es_IconImage;
    public Button es_SaveButton;

    //Singleton
    public static GameLogic instance;

    //Variables
    [HideInInspector]
    public int currentCaseIndex;
    private int endingSkinIndex;

    //Animation
    private GameObject es_GameObject;
    private Vector3 skinsHolderEndPosition;

    [SerializeField] GameObject messagePanel;

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
    }

    public void Spin()
    {
        //Stop coroutines.
        StopAllCoroutines();

        //Set variables.
        if (CaseManager.instance.casesData[currentCaseIndex].free == false)
        {
            CurrencyManager.instance.normalCurrency -= CaseManager.instance.casesData[currentCaseIndex].normalCurrencyOpenCost;
        }

        //Set game variables. 
        skinsLayout.position = Vector3.zero;

        //Deactivate skin game objects.
        foreach (Transform childTransform in skinsLayout.transform)
        {
            childTransform.gameObject.SetActive(false);
        }

        //Show skin game objects.
        for (int i = 0; i < 30; i++)
        {
            GameObject skinGameObject = objectPooler.GetPooledObject("Skin Game_Prefab");
            skinGameObject.transform.position = new Vector2(i * 4.5f, 0);
            int currentSkin = GetSkin();
            skinGameObject.GetComponent<ThisSkinGame>().skinRarity.color = RarityManager.instance.GetRarityColor(CaseManager.instance.casesData[currentCaseIndex].skins[currentSkin].rarityIndex);
            skinGameObject.GetComponent<ThisSkinGame>().skinIcon.sprite = CaseManager.instance.casesData[currentCaseIndex].skins[currentSkin].iconSprite;
            if (i == 24)
            {
                endingSkinIndex = currentSkin;
                es_GameObject = skinGameObject;
                skinsHolderEndPosition = Vector3.zero + new Vector3(Random.Range(-es_GameObject.GetComponent<Renderer>().bounds.min.x, 
                    -es_GameObject.GetComponent<Renderer>().bounds.max.x), 0, 0);
            }
        }

        //Switch ui.
        mainUIManager.ChangeUI(9);

        //Start animation.
        StartCoroutine(AnimatePosition());
    }

    private int GetSkin()
    {
        int index = new int();
        float total = new float();
        float random = Random.Range(0, CaseManager.instance.casesData[currentCaseIndex].skins.Sum(skin => RarityManager.instance.GetRarityWeight(skin.rarityIndex)));
        for (index = 0; index < CaseManager.instance.casesData[currentCaseIndex].skins.Count; index++)
        {
            total += RarityManager.instance.GetRarityWeight(CaseManager.instance.casesData[currentCaseIndex].skins[index].rarityIndex);
            if (total >= random)
            {
                break;
            }
        }
        return index;
    }

    public IEnumerator AnimatePosition()
    {
        float timeElapsed = 0.0f;
        float eval = 0;
        while (skinsLayout.position != skinsHolderEndPosition && eval <= 1f && timeElapsed <= 8)
        {
            timeElapsed += Time.deltaTime;
            eval = animationCurve.Evaluate(timeElapsed / transitionDuration);
            skinsLayout.position = Vector3.Lerp(Vector3.zero, skinsHolderEndPosition, eval);
            yield return null;
        }
        yield return new WaitForSeconds(timeToWaitAtEnd);
        EndGame();
    }

    public void EndGame()
    {
        AudioManager.instance.PlaySound(RarityManager.instance.GetRairtySoundName(CaseManager.instance.casesData[currentCaseIndex].skins[endingSkinIndex].rarityIndex));

        //Stop coroutines.
        StopAllCoroutines();

        //Set ui.
        es_NameText.text = "You got a " + "<i>" + CaseManager.instance.casesData[currentCaseIndex].skins[endingSkinIndex].skinName + "</i>";
        es_RarityText.text = RarityManager.instance.GetRarityName(CaseManager.instance.casesData[currentCaseIndex].skins[endingSkinIndex].rarityIndex);
        es_WorthText.text = "$" + CaseManager.instance.casesData[currentCaseIndex].skins[endingSkinIndex].normalCurrencyWorth.ToString("F2");
        es_RarityImage.color = RarityManager.instance.GetRarityColor(CaseManager.instance.casesData[currentCaseIndex].skins[endingSkinIndex].rarityIndex);
        es_IconImage.sprite = CaseManager.instance.casesData[currentCaseIndex].skins[endingSkinIndex].iconSprite;
        if (InventoryManager.CountSkins() >= InventoryManager.instance.inventoryMaxSize)
        {
            es_SaveButton.interactable = false;
        }
        else
        {
            es_SaveButton.interactable = true;
        }

#if UNITY_ADS
        ADManager.instance.PlayAdvertisement();
#endif

        //Switch ui.
        mainUIManager.ChangeUI(10, false);
    }

    public void SellSkin()
    {
        CurrencyManager.instance.normalCurrency += CaseManager.instance.casesData[currentCaseIndex].skins[endingSkinIndex].normalCurrencyWorth;
        SaveLoadManager.instance.Save();
        CaseUI.instance.InspectCaseUI();
    }

    int selectedCaseIndex;
    public void SetCurrentCaseIndex(int selectedCaseIndex)
    {
        this.selectedCaseIndex = selectedCaseIndex;
    }

    int selectedSkinIndex;
    public void SetCurrentSkinIndex(int selectedSkinIndex)
    {
        this.selectedSkinIndex = selectedSkinIndex;
    }

    public void SaveSkin()
    {
        if(CurrencyManager.instance.normalCurrency < CaseManager.instance.casesData[selectedCaseIndex].skins[selectedSkinIndex].normalCurrencyWorth || CurrencyManager.instance.normalCurrency <= 0)
        {
            StartCoroutine(nameof(ShowInsufficientCurrencyMessage));
            return;
        }
        CurrencyManager.instance.normalCurrency -= CaseManager.instance.casesData[selectedCaseIndex].skins[selectedSkinIndex].normalCurrencyWorth;
        CaseManager.instance.casesSaveData[selectedCaseIndex].skins[selectedSkinIndex].amountOwned++;
        SaveLoadManager.instance.Save();
        CaseUI.instance.LoadPreviewSkinsUI();
    }

    IEnumerator ShowInsufficientCurrencyMessage()
    {

        messagePanel.SetActive(true);
        yield return new WaitForSeconds(2f);

        messagePanel.SetActive(false);
    }
}