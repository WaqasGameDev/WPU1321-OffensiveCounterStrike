using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class UIButton :MonoBehaviour, IPointerDownHandler, IPointerUpHandler
{

    public bool isPassTroughTouch;
    public UIDragLookScript lookScript;
    public bool isPressing;

  

    public void OnPointerDown(PointerEventData eventData)
    {
       
            isPressing = true;
        if (isPassTroughTouch)
        {
            List<RaycastResult> results = new List<RaycastResult>();
            EventSystem.current.RaycastAll(eventData, results);
            foreach (RaycastResult res in results)
            {
                if (res.gameObject.gameObject.GetComponent<UIDragLookScript>())
                {
                    lookScript = res.gameObject.gameObject.GetComponent<UIDragLookScript>();
                    lookScript.OnPointerDown( eventData);
                }
            }
        }
       
    }


    public void OnPointerUp(PointerEventData eventData)
    {
        isPressing = false;
        if (isPassTroughTouch && lookScript)
        {
            lookScript.OnPointerUp(eventData);
            lookScript = null;
        }
    }
}