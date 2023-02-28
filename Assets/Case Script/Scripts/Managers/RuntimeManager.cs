//Poylgon Planet - Contact. https://polygonplanet.com/contact/
//Copyright © 2016-2018 Polygon Planet. All rights reserved. https://polygonplanet.com/privacy-policy/
//This source file is subject to Unity Technologies Asset Store Terms of Service. https://unity3d.com/legal/as_terms

#pragma warning disable 0168 //Variable declared, but not used.
#pragma warning disable 0219 //Variable assigned, but not used.
#pragma warning disable 0414 //Private field assigned, but not used.
#pragma warning disable 0649 //Variable asisgned to, and will always have default value.

using UnityEngine;

public class RuntimeManager : MonoBehaviour 
{
    [Header("Classes")]
    public UIManager mainUIManager;

    [Header("Main Menu UI")]
    public GameObject normalMainMenu;
    public GameObject noMobileMainMenu;

    [Header("Settings UI")]
    public GameObject videoSettingsButton;

    [Header("Variables")]
    public bool demo;

    private void Awake()
    {
        if (Application.isEditor == false)
        {
            if (demo == false)
            {
                if (Application.isMobilePlatform == false)
                {
                    normalMainMenu.SetActive(false);
                    noMobileMainMenu.SetActive(true);
                    mainUIManager.uiObjects[0].uiGameObject = noMobileMainMenu;
                }
                else
                {
                    mainUIManager.uiObjects[0].uiGameObject = normalMainMenu;
                }

                if (Application.isMobilePlatform == true || Application.isConsolePlatform == true || Application.platform == RuntimePlatform.WebGLPlayer)
                {
                    videoSettingsButton.SetActive(false);
                }
            }
        }
	}
}