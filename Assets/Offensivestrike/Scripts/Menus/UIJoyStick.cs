using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class UIJoyStick : MonoBehaviour, IPointerUpHandler, IPointerDownHandler, IDragHandler
{
    [SerializeField] private RectTransform joystickBackground;
    [SerializeField] private RectTransform joyStick;

    [Range(0, 10f)] [SerializeField] private float joystickMovementRange = 1f;

    private Vector2 joyStickInput = Vector2.zero;


    private Vector2 joystickCurrentPosition = new Vector2(0, 0);
    [SerializeField] private Color normalColor = Color.white;
    [SerializeField] private Color pressedColor = Color.white;
 

    private void Start()
    {
        SetJoystickColor(normalColor);
    }

    public void OnPointerDown(PointerEventData eventdata)
    {
        SetJoystickColor(pressedColor);
        joystickCurrentPosition = eventdata.position;
        joystickBackground.position = eventdata.position;
        joyStick.anchoredPosition = Vector2.zero;
        OnDrag(eventdata);
    }
    public void OnPointerUp(PointerEventData eventdata)
    {
        SetJoystickColor(normalColor);

        joyStickInput = new Vector2(0, 0);
        joyStick.anchoredPosition = new Vector2(0, 0);
    }
    public void OnDrag(PointerEventData eventdata)
    {

        Vector2 direction = eventdata.position - joystickCurrentPosition;

        if (direction.magnitude > joystickBackground.sizeDelta.x / 2f)
        {
            joyStickInput = direction.normalized;
        }
        else
        {
            joyStickInput = direction / (joystickBackground.sizeDelta.x / 2f);
        }

        joyStick.anchoredPosition = (joyStickInput * joystickBackground.sizeDelta.x / 2f) * joystickMovementRange;
    }

    private void SetJoystickColor(Color color)
    {
        joystickBackground.gameObject.GetComponent<Image>().color = color;
        joyStick.gameObject.GetComponent<Image>().color = color;
    }

    public float GetVerticalValue()
    {
        return joyStickInput.y;
    }
    public float GetHorizontalValue()
    {
        return joyStickInput.x;
    }
    public Vector2 GetHorizontalAndVerticalValue()
    {
        return joyStickInput;
    }
 
}
