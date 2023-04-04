using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TestButton : MonoBehaviour
{
    [SerializeField] Button pistolButton;
    [SerializeField] Button heavyMachineButton;
    [SerializeField] Button lightMachineButton;
    [SerializeField] Button shotgunButton;
    [SerializeField] Button sniperButton;
    [SerializeField] Button ammunitionButton;

    public GameObject[] weaponPanels;

    private float posX, posY, posZ, rotZ;

    public Image sector;
    void Start()
    {
        SetListener(lightMachineButton, new Vector4(112f, 0, 0, 0));
        SetListener(ammunitionButton, new Vector4(56f, -97f, 0f, -60f));
        SetListener(pistolButton, new Vector4(56f, 97f, 0f, 60f));
        SetListener(shotgunButton, new Vector4(-56f, 96.3f, 0f, -240f));
        SetListener(sniperButton, new Vector4(-56f, -97, 0f, -120));
        //lightMachineButton.onClick.AddListener(() => { WeaponButtonPressed(112f, 0, 0, 0); });
        //ammunitionButton.onClick.AddListener(() => { WeaponButtonPressed(56f, -97f, 0, -60f); });
        //pistolButton.onClick.AddListener(() => { WeaponButtonPressed(56f, 97f, 0f, 60f); });
        //shotgunButton.onClick.AddListener(() => { WeaponButtonPressed(-56.1f, 96.3f, 0f, -240f); });
        //heavyMachineButton.onClick.AddListener(() => { WeaponButtonPressed(-112f, 0f, 0f, 180f); });
        //sniperButton.onClick.AddListener(() => { WeaponButtonPressed(-56f, -97f, 0f, -120f); });
    }

    private void SetListener(Button button, Vector4 values)
    {
        button.onClick.AddListener(() => { WeaponButtonPressed(values.x,values.y,values.z,values.w); });

    }

    private void WeaponButtonPressed(float posX , float posY, float posZ, float rotZ )
    {
        sector.gameObject.SetActive(true);
        sector.raycastTarget = false;
        sector.rectTransform.anchorMin = new Vector2(0.5f, 0.5f);
        sector.rectTransform.anchorMax = new Vector2(0.5f, 0.5f);
        sector.rectTransform.sizeDelta = new Vector2(160f, 180f);
        sector.rectTransform.pivot = new Vector2(0.5f, 0.5f);
        sector.rectTransform.localPosition = new Vector3(posX, posY, posZ);
        sector.rectTransform.localRotation = Quaternion.Euler(0f,0f,rotZ);
    }

    public void SelectWeaponPanel(int index)
    {
        foreach (var panel in weaponPanels)
        {
            panel.transform.gameObject.SetActive(false);
        }

        weaponPanels[index].transform.gameObject.SetActive(true);
    }
}
