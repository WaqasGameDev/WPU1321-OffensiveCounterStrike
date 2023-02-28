//Poylgon Planet - Contact. https://polygonplanet.com/contact/
//Copyright © 2016-2018 Polygon Planet. All rights reserved. https://polygonplanet.com/privacy-policy/
//This source file is subject to Unity Technologies Asset Store Terms of Service. https://unity3d.com/legal/as_terms

#pragma warning disable 0168 //Variable declared, but not used.
#pragma warning disable 0219 //Variable assigned, but not used.
#pragma warning disable 0414 //Private field assigned, but not used.
#pragma warning disable 0649 //Variable asisgned to, and will always have default value.

using System;
using System.Collections.Generic;
using System.Text;
using UnityEngine;

namespace PolygonPlanet.UniqueString
{
    public class UniqueString : MonoBehaviour
    {
        public static string EncodeString(string normalText)
        {
            var bytes = Encoding.UTF8.GetBytes(normalText);
            return Convert.ToBase64String(bytes);
        }

        public static string EncodeString(List<string> normalText)
        {
            string tempString = null;
            foreach (string s in normalText)
            {
                tempString += s;
            }
            var bytes = Encoding.UTF8.GetBytes(tempString);
            return Convert.ToBase64String(bytes);
        }
    }
}