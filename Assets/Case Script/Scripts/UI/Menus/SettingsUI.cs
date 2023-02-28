//Poylgon Planet - Contact. https://polygonplanet.com/contact/
//Copyright © 2016-2018 Polygon Planet. All rights reserved. https://polygonplanet.com/privacy-policy/
//This source file is subject to Unity Technologies Asset Store Terms of Service. https://unity3d.com/legal/as_terms

#pragma warning disable 0168 //Variable declared, but not used.
#pragma warning disable 0219 //Variable assigned, but not used.
#pragma warning disable 0414 //Private field assigned, but not used.
#pragma warning disable 0649 //Variable asisgned to, and will always have default value.

using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

public class SettingsUI : MonoBehaviour 
{
    [Header("Classes")]
    public UIManager mainUIManager;
    public UIManager settingsUIManager;

    [Header("Audio Settings UI")]
    public Toggle soundToggle;
    public Slider soundSlider;
    public Text soundSliderValueText;
    public Toggle musicToggle;
    public Slider musicSlider;
    public Text musicSliderValueText;

    [Header("Video Settings UI")]
    public BetterDropdown resolutionDropdown;
    public GameObject resolutionLayout;
    public GameObject resolutionUIPrefab;
    public Toggle fullscreenToggle;

    [Header("Other Settings UI")]
    public GameObject resetInventoryWarningUI;

    //Singleton
    public static SettingsUI instance;

    //Video settings.
    public List<Resolution> resolutions;

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
    }

    public void LoadAudioSettingsUI()
    {
        //Ensure sound and music are in there correct state.
        bool soundOn = AudioManager.instance.soundOn;
        bool musicOn = AudioManager.instance.musicOn;

        //Set ui.
        soundToggle.isOn = AudioManager.instance.soundOn;
        soundSlider.value = AudioManager.instance.soundVolume;
        soundSliderValueText.text = (AudioManager.instance.soundVolume * 100).ToString("F0");
        musicToggle.isOn = AudioManager.instance.musicOn;
        musicSlider.value = AudioManager.instance.musicVolume;
        musicSliderValueText.text = (AudioManager.instance.musicVolume * 100).ToString("F0");

        //Set variables.
        AudioManager.instance.soundOn = soundOn;
        AudioManager.instance.musicOn = musicOn;
        SaveLoadManager.instance.Save();

        //Change ui.
        settingsUIManager.ChangeUI(0, false);
        mainUIManager.ChangeUI(8, true);
    }

    public void UpdateSoundVolume()
    {
        AudioManager.instance.UpdateSoundVolume(soundSlider.value);
        soundSliderValueText.text = (AudioManager.instance.soundVolume * 100).ToString("F0");
    }

    public void UpdateMusicVolume()
    {
        AudioManager.instance.UpdateMusicVolume(musicSlider.value);
        musicSliderValueText.text = (AudioManager.instance.musicVolume * 100).ToString("F0");
    }

    public void LoadVideoSettingsUI()
    {
        //Ensure fullscreen is in its correct state.
        bool fullscreen = Screen.fullScreen;

        //Set ui.
        resolutionDropdown.dropdownTitleText.text = Screen.width.ToString() + "x" + Screen.height.ToString();
        fullscreenToggle.isOn = Screen.fullScreen;

        //Set variables.
        Screen.fullScreen = fullscreen;

        //Change ui.
        settingsUIManager.ChangeUI(1, false);
        mainUIManager.ChangeUI(8, true);
    }

    public void ResolutionDropdown()
    {
        if (resolutionDropdown.dropdownLayout.activeSelf == false)
        {
            //Destroy resolution game objects.
            foreach (Transform childTransform in resolutionLayout.transform)
            {
                Destroy(childTransform.gameObject);
            }

            //Set variables.
            resolutions = Screen.resolutions.ToList();
            resolutions = resolutions.GroupBy(x => x.height).Select(y => y.First()).ToList();

            //Instiantiate resolution game objects.
            for (int i = 0; i < resolutions.Count; i++)
            {
                GameObject resolutionGameObject = Instantiate(resolutionUIPrefab);
                resolutionGameObject.transform.SetParent(resolutionLayout.transform, false);
                resolutionGameObject.GetComponent<ThisResolutionUI>().resolutionText.text = resolutions[i].width.ToString() + "x" + resolutions[i].height.ToString();
                resolutionGameObject.GetComponent<ThisResolutionUI>().resolutionIndex= i;

            }
        }
    }

    public void ToggleFullscreen()
    {
        Screen.fullScreen = !Screen.fullScreen;
    }

    public void LoadOtherSettingsUI()
    {
        settingsUIManager.ChangeUI(2, false);
        mainUIManager.ChangeUI(8, true);
    }

    public void ShowResetInventoryWarningUI()
    {
        AudioManager.instance.PlaySound("UIClick");
        resetInventoryWarningUI.SetActive(true);
    }

    public void HideResetInventoryWarningUI()
    {
        AudioManager.instance.PlaySound("UIClick");
        resetInventoryWarningUI.SetActive(false);
    }

    public void ResetInventory()
    {
        AudioManager.instance.PlaySound("UIClick");

        //Set variables.
        foreach (CaseSaveData caseSaveData in CaseManager.instance.casesSaveData)
        {
            foreach (SkinSaveData skinSaveData in caseSaveData.skins)
            {
                skinSaveData.amountOwned = 0;
            }
        }
        SaveLoadManager.instance.Save();

        //Switch ui.
        HideResetInventoryWarningUI();
    }
}