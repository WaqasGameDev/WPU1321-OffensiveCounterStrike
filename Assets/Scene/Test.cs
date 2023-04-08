using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Test : MonoBehaviour
{

	[SerializeField] GUISkin guiSkin;
	float screenCenterX;
	float screenCenterY;
	Vector2 wheelImageSize = new Vector2(500, 500);
	float wheelCenterX;
	float wheelCenterY;

	private void OnGUI()
    {
		screenCenterX = Screen.width / 2;
		screenCenterY = Screen.height / 2;
		// Transparent buy main window
		GUI.Window(0, new Rect(0, 0, Screen.width, Screen.height), BuyMenuWindow, "", guiSkin.customStyles[10]);
    }

    void BuyMenuWindow(int windowID)
	{
		var wheelRectStartingPosX = screenCenterX - wheelImageSize.x / 2;
		var wheelRectStartingPosY = screenCenterY - wheelImageSize.y / 2;

		// Wheel image
		GUI.Box(new Rect(new Vector2( wheelRectStartingPosX, wheelRectStartingPosY), wheelImageSize), GUIContent.none, guiSkin.customStyles[6]);

		wheelCenterX = wheelRectStartingPosX + wheelImageSize.x / 2;
		wheelCenterY = wheelRectStartingPosY + wheelImageSize.y / 2;

		// Minimize Button
		if (GUI.Button(new Rect(Screen.width - 50, 50, 28, 28), "", guiSkin.customStyles[9]))
		{
			Debug.Log("Buy Menu Closed!");
		}


		CreateWeaponButtonWithBackground("Pistol",new Vector2(120,50),new Vector2(-150,-180));
		CreateWeaponButtonWithBackground("Shotgun", new Vector2(120, 50), new Vector2(25, -180));
		CreateWeaponButtonWithBackground("Light-Machine", new Vector2(120, 50), new Vector2(85, -30));
		CreateWeaponButtonWithBackground("Heavy-Machine", new Vector2(120, 50), new Vector2(-210, -30));
		CreateWeaponButtonWithBackground("Sniper", new Vector2(120, 50), new Vector2(-150, 130));
		CreateWeaponButtonWithBackground("Ammunition", new Vector2(120, 50), new Vector2(25, 130));
	}

	private void CreateWeaponButtonWithBackground(string weaponName, Vector2 buttonSize, Vector2 offsets)
    {
		var buyButtonBackgroundSize = new Vector2(buttonSize.x, buttonSize.y);
		var weaponBuyBackgroundRectStartingPositioX = wheelCenterX + offsets.x;
		var weaponBuyBackgroundRectStartingPositionY = wheelCenterY + offsets.y;

		var buyButtonBackgroundRect = new Rect(weaponBuyBackgroundRectStartingPositioX, weaponBuyBackgroundRectStartingPositionY, buyButtonBackgroundSize.x, buyButtonBackgroundSize.y);

		if (GUI.Button(buyButtonBackgroundRect, "", guiSkin.customStyles[8]))
		{
			Debug.Log($"{weaponName} Section opened!");
		}

		var weaponRect = new Rect(weaponBuyBackgroundRectStartingPositioX, weaponBuyBackgroundRectStartingPositionY, buyButtonBackgroundSize.x, buyButtonBackgroundSize.y);


		if (GUI.Button(weaponRect, weaponName, guiSkin.customStyles[7]))
		{
		}
	}

}
