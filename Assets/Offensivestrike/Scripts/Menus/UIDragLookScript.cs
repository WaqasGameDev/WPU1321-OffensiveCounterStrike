using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class UIDragLookScript : MonoBehaviour, IPointerUpHandler, IPointerDownHandler
{
    private Vector2 distanceBetweenTouch;
    private Vector2 PointerOld;
    private int eventPointerID;
    private bool pressingTouchPad;
    private Vector2 touchPadInput;
    [Range(0.2f, 20)]
    public float senstivityX = 3f;
    [Range(0.2f, 20)]
    public float senstivityY = 3f;

   

  
        void Update()
    {


            if (pressingTouchPad)
        {

            if (eventPointerID < Input.touches.Length && eventPointerID >= 0)
            {
                distanceBetweenTouch = Input.touches[eventPointerID].position - PointerOld;
                PointerOld = Input.touches[eventPointerID].position;
            }
            else
            {

                distanceBetweenTouch = new Vector2(Input.mousePosition.x, Input.mousePosition.y) - PointerOld;
                PointerOld = Input.mousePosition;
            }
        }
        else
        {
            distanceBetweenTouch = Vector2.zero;
        }
        touchPadInput.x = distanceBetweenTouch.x * Time.deltaTime * senstivityX;
        touchPadInput.y = distanceBetweenTouch.y * Time.deltaTime * senstivityY;
    }

  
    public void OnPointerDown(PointerEventData eventData)
    {


        pressingTouchPad = true;
        eventPointerID = eventData.pointerId;
        PointerOld = eventData.position;


    }
    public void OnPointerUp(PointerEventData eventData)
    {
        pressingTouchPad = false;
    }
    public float GetVerticalValue()
    {
        return touchPadInput.y;
    }
    public float GetHorizontalValue()
    {
        return touchPadInput.x;
    }
    public Vector2 GetHorizontalAndVerticalValue()
    {
        return touchPadInput;
    }

 

   
}

