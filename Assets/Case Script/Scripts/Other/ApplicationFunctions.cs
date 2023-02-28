#pragma warning disable 0168 //Variable declared, but not used.
#pragma warning disable 0219 //Variable assigned, but not used.
#pragma warning disable 0414 //Private field assigned, but not used.
#pragma warning disable 0649 //Variable asisgned to, and will always have default value.

using UnityEngine;

public class ApplicationFunctions : MonoBehaviour 
{
    [Header("Classes")]
    public UIManager mainUIManager;

    [Header("Quit UI")]
    public GameObject quitWarningUI;

    private void Update()
    {
        if (mainUIManager.selectedMenu == 0 && Input.GetKeyDown(KeyCode.Escape))
        {
            ShowQuitWarningUI();
        }
    }

    public void RateUrl()
    {
        AudioManager.instance.PlaySound("UIClick");
    }

    public void ShowQuitWarningUI()
    {
        AudioManager.instance.PlaySound("UIClick");
        quitWarningUI.SetActive(true);
    }

    public void HideQuitWarningUI()
    {
        AudioManager.instance.PlaySound("UIClick");
        quitWarningUI.SetActive(false);
    }

    public void Quit()
    {
        AudioManager.instance.PlaySound("UIClick");
        Application.Quit();
    }
}