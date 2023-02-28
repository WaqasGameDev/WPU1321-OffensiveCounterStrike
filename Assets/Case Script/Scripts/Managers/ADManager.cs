//Poylgon Planet - Contact. https://polygonplanet.com/contact/
//Copyright © 2016-2018 Polygon Planet. All rights reserved. https://polygonplanet.com/privacy-policy/
//This source file is subject to Unity Technologies Asset Store Terms of Service. https://unity3d.com/legal/as_terms

#pragma warning disable 0168 //Variable declared, but not used.
#pragma warning disable 0219 //Variable assigned, but not used.
#pragma warning disable 0414 //Private field assigned, but not used.
#pragma warning disable 0649 //Variable asisgned to, and will always have default value.

using System;
using UnityEngine;
using Random = UnityEngine.Random;
public class ADManager : MonoBehaviour
{
    [Header("Variables")]
    public bool enableAdvertisements;

    [HideInInspector]


    //Singleton
    public static ADManager instance;
    public GameObject showReward;
    public GameObject showRewardCase;
    public GameObject Admob;

    //Class Save Data
    [HideInInspector]
    public ClassSaveData classSaveData;

    int howOftenToPlayAdvertisement;


    //Variables
    [HideInInspector]
    public bool removedAdvertisements;
    [HideInInspector]
    public int playedGames;

    public void Awake()
    {

        //if (instance != null)
        //{
        //    Destroy(gameObject);

        //}
        //else
        //{
        //    instance = this;
        //    DontDestroyOnLoad(gameObject);

        //}

        if (instance == null)
        {
            instance = this;
        }

    }

    private void Start()
    {
         howOftenToPlayAdvertisement = Random.Range(1,6);
    }


    /// <summary>

    /// </summary>
    /// <param name="zone"></param>
    public void PlayAdvertisement(string zone = "")
    {
        if (enableAdvertisements == true)
        {
            if (removedAdvertisements == false)
            {
                 playedGames++;

                if (playedGames >= howOftenToPlayAdvertisement)
                {
                   
                   playedGames = 0;
                   howOftenToPlayAdvertisement = Random.Range(5, 10);

                    GameSettings.rc.PrepareRespawn(0, true, false);
                   AdmobAds.singleton.ShowADS();

                }

            }
        }
    }

 
    public void RewardSound()
    {
        AudioManager.instance.PlaySound("Reward");
    }

    public void ShowRewardedAd() 
    {
        Admob.GetComponent<AdmobAds>().ShowInterstitialAd();
    }

    public void rewardUser()
    {
        showReward.SetActive(true);
        showRewardCase.SetActive(true);
        AudioManager.instance.PlaySound("Reward");
    }

    /*private void HandleShowResult(ShowResult result)
    {
        switch (result)
        {
            case ShowResult.Finished:
                showReward.SetActive(true);
                showRewardCase.SetActive(true);
                AudioManager.instance.PlaySound("Reward");
                //
                // YOUR CODE TO REWARD THE GAMER
                // Give coins etc.
                break;
            case ShowResult.Skipped:
                showReward.SetActive(false);
                showRewardCase.SetActive(false);
                break;
            case ShowResult.Failed:
                showReward.SetActive(false);
                showRewardCase.SetActive(false);
                break;
        }
    }*/

    public void AdsOn()
    {
        Admob.GetComponent<AdmobAds>().ShowInterstitialAd();
    }

    public void RemoveAdvertisements20()
    {
        AudioManager.instance.PlaySound("UIClick");
        CurrencyManager.instance.normalCurrency += 20;
        SaveLoadManager.instance.Save();
        AudioManager.instance.PlaySound("UIBuy");
    }

    public void RemoveAdvertisements40Coin()
    {
        AudioManager.instance.PlaySound("UIClick");
        CurrencyManager.instance.normalCurrency += 40;
        SaveLoadManager.instance.Save();
        AudioManager.instance.PlaySound("UIBuy");
    }

    public void RemoveAdvertisements100Coin()
    {
        AudioManager.instance.PlaySound("UIClick");
        CurrencyManager.instance.normalCurrency += 100;
        SaveLoadManager.instance.Save();
        AudioManager.instance.PlaySound("UIBuy");
    }

    public void OdulLvlCoin()
    {
        AudioManager.instance.PlaySound("UIClick");
        CurrencyManager.instance.normalCurrency += 5;
        SaveLoadManager.instance.Save();
        AudioManager.instance.PlaySound("UIBuy");
    }

    public void OdulAdsCoin()
    {
        AudioManager.instance.PlaySound("UIClick");
        CurrencyManager.instance.normalCurrency += 2;
        SaveLoadManager.instance.Save();
        AudioManager.instance.PlaySound("UIBuy");
    }

    #region Save Data
    [Serializable]
    public struct ClassSaveData
    {
        public int playedGames;
        public bool removedAdvertisements;
    }

    public ClassSaveData DefaultSaveData()
    {
        ClassSaveData saveData = new ClassSaveData
        {
            playedGames = 0,
            removedAdvertisements = false
        };
        return saveData;
    }

    public ClassSaveData GetSaveData()
    {
        classSaveData.playedGames = playedGames;
        classSaveData.removedAdvertisements = removedAdvertisements;
        return classSaveData;
    }

    public void LoadSaveData(SaveData saveData)
    {
        classSaveData = saveData.adManagerSaveData;
        playedGames = classSaveData.playedGames;
        removedAdvertisements = classSaveData.removedAdvertisements;
    }
    #endregion
}