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
using System.IO;
using System.Linq;
using System.Xml;
using UnityEditor;
using UnityEngine;

[CustomEditor(typeof(CaseManager))]
public class CaseManagerEditor : Editor
{
    //Object
    private CaseManager script;

    private void OnEnable()
    {
        script = (CaseManager)target;
    }

    public override void OnInspectorGUI()
    {
        DrawDefaultInspector();
        EditorGUILayout.Space();
        Info();
        EditorGUILayout.Space();
        Utilities();
    }

    private void Utilities()
    {
        EditorGUILayout.LabelField("Utilities", EditorStyles.boldLabel);
        if (GUILayout.Button("Export Cases"))
        {
            ExportCasesToXMLFile();
        }
    }

    private void Info()
    {
        EditorGUILayout.LabelField("Info", EditorStyles.boldLabel);
        EditorGUILayout.HelpBox("You must increment the Save Load Manager current version when adding or removing case objects.", MessageType.Info);
    }

    private void ExportCasesToXMLFile()
    {
        try
        {
            string exportFolder = EditorUtility.OpenFolderPanel("Choose output directory", Application.dataPath, "");
            foreach (CaseObject caseObject in script.casesData)
            {
                //Sort skins.
                List<Skin> skins = caseObject.skins.ToList();
                skins = skins.OrderBy(x => x.rarityIndex).ThenBy(x => x.skinName).ToList();
                caseObject.skins.CopyFrom(skins);

                //Export case to xml file.
                string outputPath = Path.Combine(exportFolder, caseObject.caseName + ".xml");
                if (outputPath.Length != 0)
                {
                    XmlDocument xmlDocument = new XmlDocument();
                    XmlNode rootNode = xmlDocument.CreateElement("Case");
                    xmlDocument.AppendChild(rootNode);

                    XmlElement caseNameNode = xmlDocument.CreateElement("CaseName");
                    caseNameNode.InnerText = caseObject.caseName;
                    rootNode.AppendChild(caseNameNode);

                    XmlElement freeNode = xmlDocument.CreateElement("Free");
                    freeNode.InnerText = caseObject.free.ToString();
                    rootNode.AppendChild(freeNode);

                    XmlElement normalCurrencyOpenCostNode = xmlDocument.CreateElement("NormalCurrencyOpenCost");
                    normalCurrencyOpenCostNode.InnerText = caseObject.normalCurrencyOpenCost.ToString();
                    rootNode.AppendChild(normalCurrencyOpenCostNode);

                    XmlElement skinsNode = xmlDocument.CreateElement("Skins");
                    rootNode.AppendChild(skinsNode);

                    foreach (Skin skin in caseObject.skins)
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
        }
        catch (Exception exception)
        {
            Debug.Log(exception);
        }
    }
}
#endif