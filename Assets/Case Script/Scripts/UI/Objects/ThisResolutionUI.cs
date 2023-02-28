//Poylgon Planet - Contact. https://polygonplanet.com/contact/
//Copyright © 2016-2018 Polygon Planet. All rights reserved. https://polygonplanet.com/privacy-policy/
//This source file is subject to Unity Technologies Asset Store Terms of Service. https://unity3d.com/legal/as_terms

#pragma warning disable 0168 //Variable declared, but not used.
#pragma warning disable 0219 //Variable assigned, but not used.
#pragma warning disable 0414 //Private field assigned, but not used.
#pragma warning disable 0649 //Variable asisgned to, and will always have default value.

using UnityEngine;
using UnityEngine.UI;

public class ThisResolutionUI : MonoBehaviour 
{
    [Header("UI")]
    public Text resolutionText;

    //Variables
    [HideInInspector]
    public int resolutionIndex;

	public void ChangeResolution() 
    {
        Screen.SetResolution(SettingsUI.instance.resolutions[resolutionIndex].width, SettingsUI.instance.resolutions[resolutionIndex].height, Screen.fullScreen);
        SettingsUI.instance.resolutionDropdown.dropdownTitleText.text = SettingsUI.instance.resolutions[resolutionIndex].width.ToString() + "x" + 
            SettingsUI.instance.resolutions[resolutionIndex].height.ToString();
        SettingsUI.instance.resolutionDropdown.dropdownLayout.SetActive(false);
    }
}