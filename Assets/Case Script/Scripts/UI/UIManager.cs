//Poylgon Planet - Contact. https://polygonplanet.com/contact/
//Copyright © 2016-2018 Polygon Planet. All rights reserved. https://polygonplanet.com/privacy-policy/
//This source file is subject to Unity Technologies Asset Store Terms of Service. https://unity3d.com/legal/as_terms

#pragma warning disable 0168 //Variable declared, but not used.
#pragma warning disable 0219 //Variable assigned, but not used.
#pragma warning disable 0414 //Private field assigned, but not used.
#pragma warning disable 0649 //Variable asisgned to, and will always have default value.

using PolygonPlanet.ConditionalHide;
using PolygonPlanet.ReorderableList;
using System;
using UnityEngine;
using UnityEngine.UI;

public class UIManager : MonoBehaviour 
{
    [Header("UI")]
    [Reorderable(elementNameOverride = "Menu")]
    public UIList uiObjects;

    //Variables
    [HideInInspector]
    public int selectedMenu;

    public void ChangeUI(int index)
    {
        AudioManager.instance.PlaySound("UIClick");

        //Deactivate all other ui objects.
        foreach (UI ui in uiObjects)
        {
            ui.uiGameObject.SetActive(false);
            if (ui.hasNavigation == true)
            {
                ui.navigationGameObject.SetActive(false);
                ui.activeNavigationImage.color = ui.defaultNavigationColor;
            }
        }

        //Activate current ui object.
        selectedMenu = index;
        uiObjects[selectedMenu].uiGameObject.SetActive(true);
        if (uiObjects[selectedMenu].hasNavigation == true)
        {
            uiObjects[selectedMenu].navigationGameObject.SetActive(true);
            uiObjects[selectedMenu].activeNavigationImage.color = uiObjects[selectedMenu].activeNavigationColor;
        }
    }

    public void ChangeUI(int index, bool playSound) //Changes ui with the option to disable clicking sound.
    {
        if (playSound == true)
        {
            AudioManager.instance.PlaySound("UIClick");
        }

        //Deactivate all other ui objects.
        foreach (UI ui in uiObjects)
        {
            ui.uiGameObject.SetActive(false);
            if (ui.hasNavigation == true)
            {
                ui.navigationGameObject.SetActive(false);
                ui.activeNavigationImage.color = ui.defaultNavigationColor;
            }
        }

        //Activate current ui object.
        selectedMenu = index;
        uiObjects[selectedMenu].uiGameObject.SetActive(true);
        if (uiObjects[selectedMenu].hasNavigation == true)
        {
            uiObjects[selectedMenu].navigationGameObject.SetActive(true);
            uiObjects[selectedMenu].activeNavigationImage.color = uiObjects[selectedMenu].activeNavigationColor;
        }
    }
}

[Serializable]
public class UI
{
    [Header("UI")]
    public GameObject uiGameObject;
    public bool hasNavigation;
    [ConditionalHide(conditionalSourceField = "hasNavigation")]
    public GameObject navigationGameObject;
    [ConditionalHide(conditionalSourceField = "hasNavigation")]
    public Image activeNavigationImage;
    [ConditionalHide(conditionalSourceField = "hasNavigation")]
    public Color defaultNavigationColor;
    [ConditionalHide(conditionalSourceField = "hasNavigation")]
    public Color activeNavigationColor;
}

[Serializable]
public class UIList : ReorderableArray<UI>
{
}