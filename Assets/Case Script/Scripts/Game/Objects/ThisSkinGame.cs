//Poylgon Planet - Contact. https://polygonplanet.com/contact/
//Copyright © 2016-2018 Polygon Planet. All rights reserved. https://polygonplanet.com/privacy-policy/
//This source file is subject to Unity Technologies Asset Store Terms of Service. https://unity3d.com/legal/as_terms

#pragma warning disable 0168 //Variable declared, but not used.
#pragma warning disable 0219 //Variable assigned, but not used.
#pragma warning disable 0414 //Private field assigned, but not used.
#pragma warning disable 0649 //Variable asisgned to, and will always have default value.

using UnityEngine;

public class ThisSkinGame : MonoBehaviour 
{
    [Header("UI")]
    public SpriteRenderer skinRarity;
    public SpriteRenderer skinIcon;

    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.gameObject.tag == "Selector")
        {
            AudioManager.instance.PlaySound("GameScroll");
        }
    }
}