//Poylgon Planet - Contact. https://polygonplanet.com/contact/
//Copyright © 2016-2018 Polygon Planet. All rights reserved. https://polygonplanet.com/privacy-policy/
//This source file is subject to Unity Technologies Asset Store Terms of Service. https://unity3d.com/legal/as_terms

#pragma warning disable 0168 //Variable declared, but not used.
#pragma warning disable 0219 //Variable assigned, but not used.
#pragma warning disable 0414 //Private field assigned, but not used.
#pragma warning disable 0649 //Variable asisgned to, and will always have default value.

using UnityEngine;
using UnityEngine.UI;

namespace PolygonPlanet.UI
{
    public class EqualPadding : MonoBehaviour
    {
        //Variables
        private Vector2 lastResolution;

        private void Awake()
        {
            lastResolution = new Vector2(Screen.width, Screen.height);
            ApplyEqualPadding();
        }

        private void Update()
        {
            if (lastResolution.x != Screen.width || lastResolution.y != Screen.height)
            {
                ApplyEqualPadding();
                lastResolution = new Vector2(Screen.width, Screen.height);
            }
        }

        private void ApplyEqualPadding()
        {
            float totalRowSpace = GetComponent<RectTransform>().rect.width / GetComponent<GridLayoutGroup>().cellSize.x;
            int rowCount = (int)Mathf.Floor(totalRowSpace);
            float padding = (GetComponent<GridLayoutGroup>().cellSize.x * (totalRowSpace - rowCount)) / (rowCount + 1);

            GetComponent<GridLayoutGroup>().padding.left = (int)Mathf.Floor(padding);
            GetComponent<GridLayoutGroup>().padding.right = (int)Mathf.Floor(padding);
            GetComponent<GridLayoutGroup>().padding.top = (int)Mathf.Floor(padding);
            GetComponent<GridLayoutGroup>().padding.bottom = (int)Mathf.Floor(padding);
            GetComponent<GridLayoutGroup>().spacing = new Vector2(padding, padding);
        }
    }
}