//Poylgon Planet - Contact. https://polygonplanet.com/contact/
//Copyright © 2016-2018 Polygon Planet. All rights reserved. https://polygonplanet.com/privacy-policy/
//This source file is subject to Unity Technologies Asset Store Terms of Service. https://unity3d.com/legal/as_terms

#pragma warning disable 0168 //Variable declared, but not used.
#pragma warning disable 0219 //Variable assigned, but not used.
#pragma warning disable 0414 //Private field assigned, but not used.
#pragma warning disable 0649 //Variable asisgned to, and will always have default value.

using System;
using UnityEngine;

namespace PolygonPlanet.ConditionalHide
{
    [AttributeUsage(AttributeTargets.Field | AttributeTargets.Property | AttributeTargets.Class | AttributeTargets.Struct, Inherited = true)]
    public class ConditionalHideAttribute : PropertyAttribute
    {
        //Variables
        public string conditionalSourceField = "";
        public bool hideInInspector = false;
        public bool inverse = false;

        public ConditionalHideAttribute(string conditionalSourceField)
        {
            this.conditionalSourceField = conditionalSourceField;
            this.hideInInspector = false;
            this.inverse = false;
        }

        public ConditionalHideAttribute(bool hideInInspector = false)
        {
            this.conditionalSourceField = "";
            this.hideInInspector = hideInInspector;
            this.inverse = false;
        }

        public ConditionalHideAttribute(string conditionalSourceField, bool hideInInspector)
        {
            this.conditionalSourceField = conditionalSourceField;
            this.hideInInspector = hideInInspector;
            this.inverse = false;
        }

        public ConditionalHideAttribute(string conditionalSourceField, bool hideInInspector, bool inverse)
        {
            this.conditionalSourceField = conditionalSourceField;
            this.hideInInspector = hideInInspector;
            this.inverse = inverse;
        }
    }
}