using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ThisOptionsPanel : MonoBehaviour
{
    [SerializeField] Button backButton;
    [SerializeField] Button saveButton;
    [SerializeField] Button screenLeftButton;
    [SerializeField] Button screenRightButton;
    [SerializeField] Button qualityLeftButton;
    [SerializeField] Button qualityRightutton;

    [SerializeField] Slider touchSensitivity;

    private void Start()
    {
        backButton.onClick.AddListener(() => { });
        saveButton.onClick.AddListener(() => { });
        backButton.onClick.AddListener(() => { });
        backButton.onClick.AddListener(() => { });
        backButton.onClick.AddListener(() => { });
    }
}
