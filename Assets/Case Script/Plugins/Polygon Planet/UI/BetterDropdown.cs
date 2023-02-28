//Poylgon Planet - Contact. https://polygonplanet.com/contact/
//Copyright © 2016-2018 Polygon Planet. All rights reserved. https://polygonplanet.com/privacy-policy/
//This source file is subject to Unity Technologies Asset Store Terms of Service. https://unity3d.com/legal/as_terms

#pragma warning disable 0168 //Variable declared, but not used.
#pragma warning disable 0219 //Variable assigned, but not used.
#pragma warning disable 0414 //Private field assigned, but not used.
#pragma warning disable 0649 //Variable asisgned to, and will always have default value.

using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class BetterDropdown : MonoBehaviour 
{
    [Header("UI")]
    public Text dropdownTitleText;
    public GameObject dropdownLayout;

	private void Awake() 
    {
        dropdownLayout.GetComponent<RectTransform>().localPosition = new Vector2(0, ((GetComponent<RectTransform>().rect.height / 2) * -1) + 
            ((dropdownLayout.GetComponent<RectTransform>().rect.height / 2) * -1));
    }

    private void OnEnable()
    {
        dropdownLayout.SetActive(false);
    }

    private void Update()
    {
        if (dropdownLayout.activeSelf == true)
        {
            if (Input.GetMouseButtonDown(0))
            {
                if (EventSystem.current.IsPointerOverGameObject())
                {
                    if (EventSystem.current.currentSelectedGameObject == null)
                    {
                        dropdownLayout.SetActive(false);
                    }
                }
            }
        }
    }

    public void ToggleDropDown()
    {
        if (dropdownLayout.activeSelf == false)
        {
            dropdownLayout.SetActive(true);
        }
        else
        {
            dropdownLayout.SetActive(false);
        }
    }
}