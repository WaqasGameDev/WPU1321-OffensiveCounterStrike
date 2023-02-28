//Poylgon Planet - Contact. https://polygonplanet.com/contact/
//Copyright © 2016-2018 Polygon Planet. All rights reserved. https://polygonplanet.com/privacy-policy/
//This source file is subject to Unity Technologies Asset Store Terms of Service. https://unity3d.com/legal/as_terms

#pragma warning disable 0168 //Variable declared, but not used.
#pragma warning disable 0219 //Variable assigned, but not used.
#pragma warning disable 0414 //Private field assigned, but not used.
#pragma warning disable 0649 //Variable asisgned to, and will always have default value.

#if UNITY_EDITOR
using System;
using System.Collections.Generic;
using System.Linq;
using System.Xml;
using System.Xml.Linq;
using UnityEditor;
using UnityEngine;

[CustomEditor(typeof(CaseObject))]
public class CaseObjectEditor : Editor
{
    //Object
    private CaseObject script;

    private void OnEnable()
    {
        script = (CaseObject)target;
        SortSkins();
    }

    public override void OnInspectorGUI()
    {
        DrawDefaultInspector();
        EditorGUILayout.Space();
        Info();
        EditorGUILayout.Space();
        Utilities();
    }

    private void Info()
    {
        EditorGUILayout.LabelField("Info", EditorStyles.boldLabel);
        EditorGUILayout.HelpBox("Skins Count: " + script.skins.Count, MessageType.Info);
    }

    private void Utilities()
    {
        EditorGUILayout.LabelField("Utilities", EditorStyles.boldLabel);
        if (GUILayout.Button("Sort Skins"))
        {
            SortSkins();
        }
        if (GUILayout.Button("Delete ALL Skins"))
        {
            DeleteSkins();
        }
        if (GUILayout.Button("Import Case"))
        {
            ImportXMLFile();
        }
        if (GUILayout.Button("Export Case"))
        {
            ExportToXMLFile();
        }
    }

    private void SortSkins()
    {
        List<Skin> skins = script.skins.ToList();
        skins = skins.OrderBy(x => x.rarityIndex).ThenBy(x => x.skinName).ToList();
        script.skins.CopyFrom(skins);
        serializedObject.Update();
    }

    private void DeleteSkins()
    {
        if (EditorUtility.DisplayDialog("Delete all skins?", "Are you sure you want to delete ALL of this case skins?", "Yes", "Cancel"))
        {
            script.skins.Clear();
        }
    }

    private void ImportXMLFile()
    {
        try
        {
            string path = EditorUtility.OpenFilePanel("Choose an XML file", Application.dataPath, "xml");
            if (path.Length != 0)
            {
                XDocument xDocument = XDocument.Load(path);

                //Case info.
                script.caseName = xDocument.Element("Case").Element("CaseName").Value;

                //Case variables.
                script.free = bool.Parse(xDocument.Element("Case").Element("Free").Value);
                script.normalCurrencyOpenCost = int.Parse(xDocument.Element("Case").Element("NormalCurrencyOpenCost").Value);

                //Case skins.
                foreach (var child in xDocument.Element("Case").Element("Skins").Elements())
                {
                    Skin skin = new Skin
                    {
                        skinName = child.Element("SkinName").Value,
                        normalCurrencyWorth = float.Parse(child.Element("NormalCurrencyWorth").Value),
                        rarityIndex = int.Parse(child.Element("RarityIndex").Value)
                    };
                    script.skins.Add(skin);
                }

                SortSkins();
                serializedObject.Update();
            }
        }
        catch (Exception exception)
        {
            Debug.Log(exception);
        }
    }

    private void ExportToXMLFile()
    {
        try
        {
            SortSkins();

            //Export case to xml file.
            string outputPath = EditorUtility.SaveFilePanel("Choose ouput directory", Application.dataPath, script.caseName, "xml");
            if (outputPath.Length != 0)
            {
                XmlDocument xmlDocument = new XmlDocument();
                XmlNode rootNode = xmlDocument.CreateElement("Case");
                xmlDocument.AppendChild(rootNode);

                XmlElement caseNameNode = xmlDocument.CreateElement("CaseName");
                caseNameNode.InnerText = script.caseName;
                rootNode.AppendChild(caseNameNode);

                XmlElement freeNode = xmlDocument.CreateElement("Free");
                freeNode.InnerText = script.free.ToString();
                rootNode.AppendChild(freeNode);

                XmlElement normalCurrencyOpenCostNode = xmlDocument.CreateElement("NormalCurrencyOpenCost");
                normalCurrencyOpenCostNode.InnerText = script.normalCurrencyOpenCost.ToString();
                rootNode.AppendChild(normalCurrencyOpenCostNode);

                XmlElement skinsNode = xmlDocument.CreateElement("Skins");
                rootNode.AppendChild(skinsNode);

                foreach (Skin skin in script.skins)
                {
                    XmlElement skinNode = xmlDocument.CreateElement("Skin");
                    skinsNode.AppendChild(skinNode);

                    XmlElement skinNameNode = xmlDocument.CreateElement("SkinName");
                    skinNameNode.InnerText = skin.skinName;
                    skinNode.AppendChild(skinNameNode);

                    XmlElement normalCurrencyWorthNode = xmlDocument.CreateElement("NormalCurrencyWorth");
                    normalCurrencyWorthNode.InnerText = skin.normalCurrencyWorth.ToString();
                    skinNode.AppendChild(normalCurrencyWorthNode);

                    XmlElement rarityIndexNode = xmlDocument.CreateElement("RarityIndex");
                    rarityIndexNode.InnerText = skin.rarityIndex.ToString();
                    skinNode.AppendChild(rarityIndexNode);
                }

                xmlDocument.Save(outputPath);
            }
        }
        catch (Exception exception)
        {
            Debug.Log(exception);
        }
    }
}
#endif