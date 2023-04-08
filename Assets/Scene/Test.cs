using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Test : MonoBehaviour
{
    void OnGUI()
    {
        GUI.depth = 0;
        // Draw GUI style 1
        GUI.Label(new Rect(0, 0, 200, 30), "GUI Style 1");


        GUI.depth = 1;
        // Draw GUI style 2
        GUI.Label(new Rect(0, 0, 200, 30), "+++++++++++++");
    }



}
