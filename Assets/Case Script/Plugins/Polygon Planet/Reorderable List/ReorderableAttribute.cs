//Poylgon Planet - Contact. https://polygonplanet.com/contact/
//Copyright © 2016-2018 Polygon Planet. All rights reserved. https://polygonplanet.com/privacy-policy/
//This source file is subject to Unity Technologies Asset Store Terms of Service. https://unity3d.com/legal/as_terms

#pragma warning disable 0168 //Variable declared, but not used.
#pragma warning disable 0219 //Variable assigned, but not used.
#pragma warning disable 0414 //Private field assigned, but not used.
#pragma warning disable 0649 //Variable asisgned to, and will always have default value.

using UnityEngine;

namespace PolygonPlanet.ReorderableList
{
    public class ReorderableAttribute : PropertyAttribute
    {
        //Variables
		public bool add;
		public bool remove;
		public bool draggable;
		public bool singleLine;
		public string elementNameProperty;
		public string elementNameOverride;

		public ReorderableAttribute() : this(null)
        {
		}

		public ReorderableAttribute(string elementNameProperty) : this(true, true, true, elementNameProperty, null)
        {
		}

		public ReorderableAttribute(string elementNameProperty, string elementNameOverride) : this(true, true, true, elementNameProperty, elementNameOverride)
        {
		}

		public ReorderableAttribute(bool add, bool remove, bool draggable, string elementNameProperty = null) : this(add, remove, draggable, elementNameProperty, null)
        {
		}

		public ReorderableAttribute(bool add, bool remove, bool draggable, string elementNameProperty = null, string elementNameOverride = null)
        {
			this.add = add;
			this.remove = remove;
			this.draggable = draggable;
			this.elementNameProperty = elementNameProperty;
			this.elementNameOverride = elementNameOverride;
		}
	}
}