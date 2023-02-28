//Poylgon Planet - Contact. https://polygonplanet.com/contact/
//Copyright © 2016-2018 Polygon Planet. All rights reserved. https://polygonplanet.com/privacy-policy/
//This source file is subject to Unity Technologies Asset Store Terms of Service. https://unity3d.com/legal/as_terms

#pragma warning disable 0168 //Variable declared, but not used.
#pragma warning disable 0219 //Variable assigned, but not used.
#pragma warning disable 0414 //Private field assigned, but not used.
#pragma warning disable 0649 //Variable asisgned to, and will always have default value.

#if UNITY_EDITOR
using UnityEditor;
using UnityEngine;

namespace PolygonPlanet.ConditionalHide
{
    [CustomPropertyDrawer(typeof(ConditionalHideAttribute))]
    public class ConditionalHidePropertyDrawer : PropertyDrawer
    {
        public override void OnGUI(Rect position, SerializedProperty property, GUIContent label)
        {
            ConditionalHideAttribute condHAtt = (ConditionalHideAttribute)attribute;
            bool enabled = GetConditionalHideAttributeResult(condHAtt, property);
            bool wasEnabled = GUI.enabled;
            GUI.enabled = enabled;
            if (!condHAtt.hideInInspector || enabled)
            {
                EditorGUI.PropertyField(position, property, label, true);
            }
            GUI.enabled = wasEnabled;
        }

        private bool GetConditionalHideAttributeResult(ConditionalHideAttribute condHAtt, SerializedProperty property)
        {
            bool enabled = new bool();
            string propertyPath = property.propertyPath;
            string conditionPath = propertyPath.Replace(property.name, condHAtt.conditionalSourceField);
            SerializedProperty sourcePropertyValue = property.serializedObject.FindProperty(conditionPath);
            if (sourcePropertyValue != null)
            {
                enabled = CheckPropertyType(sourcePropertyValue);
            }
            if (condHAtt.inverse)
            {
                enabled = !enabled;
            }
            return enabled;
        }

        private bool CheckPropertyType(SerializedProperty sourcePropertyValue)
        {
            switch (sourcePropertyValue.propertyType)
            {
                default:
                    Debug.LogError("Data type of the property used for conditional hiding [" + sourcePropertyValue.propertyType + "] is currently not supported");
                    return true;
                case SerializedPropertyType.Boolean:
                    return sourcePropertyValue.boolValue;
                case SerializedPropertyType.ObjectReference:
                    return sourcePropertyValue.objectReferenceValue != null;
            }
        }
    }
}
#endif