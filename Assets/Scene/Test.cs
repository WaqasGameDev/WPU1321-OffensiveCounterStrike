using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Test : MonoBehaviour
{

    [SerializeField] Texture2D triangleTexture;
	[SerializeField] Texture2D BuyMenuBackground;
	[SerializeField] GUISkin guiSkin;
	float screenCenterX;
	float screenCenterY;
	Vector2 size = new Vector2(500, 500);


	private void OnGUI()
    {
		screenCenterX = Screen.width / 2;
		screenCenterY = Screen.height / 2;
		// Transparent buy main window
		GUI.Window(0, new Rect(0, 0, Screen.width, Screen.height), BuyMenuWindow, "", guiSkin.customStyles[10]);
    }

    void BuyMenuWindow(int windowID)
	{
		// Wheel image
		GUI.Box(new Rect(new Vector2(screenCenterX - size.x / 2, screenCenterY - size.y / 2), size), GUIContent.none, guiSkin.customStyles[6]);

		// Minimize Button
		if (GUI.Button(new Rect(Screen.width - 50, 50, 28, 28), "", guiSkin.customStyles[9]))
		{
			Debug.Log("Buy Menu Closed!");
		}


		// Buy button background
		var buyButtonBackgroundSize = new Vector2(70, 40);

		var buyButtonBackgroundRect = new Rect(new Vector2(screenCenterX , screenCenterY), buyButtonBackgroundSize);

		if (GUI.Button(buyButtonBackgroundRect, "", guiSkin.customStyles[8]))
		{

		}

		var pistolSize = new Vector2(100, 100);

		var pistolRect = new Rect(screenCenterX - size.x / 2 - pistolSize.x / 2, screenCenterY - size.y / 2 + pistolSize.y / 2, pistolSize.x, pistolSize.y);


		if (GUI.Button(pistolRect, "Pistol", guiSkin.customStyles[7]))
		{
			Debug.Log("Pistol Section opened!");
		}

		return;

		if (GUI.Button(new Rect(screenCenterX, screenCenterY, 140, 38), "LightMachine", GameSettings.buyMenuButtonStyle))
		{
			Debug.Log("LightMachine Section opened!");
		}

		if (GUI.Button(new Rect(screenCenterX, screenCenterY, 140, 38), "HeavyMachine", GameSettings.buyMenuButtonStyle))
		{
			Debug.Log("HeavyMachine Section opened!");
		}

		if (GUI.Button(new Rect(screenCenterX, screenCenterY, 140, 38), "Shotgun", GameSettings.buyMenuButtonStyle))
		{
			Debug.Log("Shotgun Section opened!");
		}

		if (GUI.Button(new Rect(screenCenterX, screenCenterY, 140, 38), "Sniper", GameSettings.buyMenuButtonStyle))
		{
			Debug.Log("Sniper Section opened!");
		}

		if (GUI.Button(new Rect(screenCenterX, screenCenterY, 140, 38), "Ammunition", GameSettings.buyMenuButtonStyle))
		{
			Debug.Log("Ammuniation Section opened!");
		}
	}

	//void OnGUI()
 //   {

 //       float rotationAngle = 45f; // Example rotation angle in degrees
 //       Vector2 buttonSize = new Vector2(500f, 500f); // Example button size

 //       Vector2 buttonPosition = new Vector2(50f, 50f); // Example button position

 //       // Save the current GUI matrix
 //       Matrix4x4 originalMatrix = GUI.matrix;

 //       // Apply rotation to the GUI matrix
 //       GUIUtility.RotateAroundPivot(rotationAngle, new Vector2(Screen.width / 2, Screen.height / 2));

 //       // Draw the rotated button
 //       if (GUILayout.Button("Rotated Button", GUILayout.Width(buttonSize.x), GUILayout.Height(buttonSize.y)))
 //       {
 //           // Button click event handling
 //           Debug.Log("Button clicked!");
 //       }

 //       // Restore the original GUI matrix
 //       GUI.matrix = originalMatrix;
 //       // Example texture for the triangular button

 //       // Check for mouse input
 //       Event currentEvent = Event.current;
 //       Vector2 mousePosition = currentEvent.mousePosition;

 //       // Convert mouse position to local GUI coordinates
 //       mousePosition.y = Screen.height - mousePosition.y;

 //       // Check if mouse is inside the button area
 //       Rect buttonRect = new Rect(buttonPosition.x, buttonPosition.y, buttonSize.x, buttonSize.y);
 //       if (buttonRect.Contains(mousePosition))
 //       {
 //           // Handle button interaction
 //           if (currentEvent.type == EventType.MouseDown && currentEvent.button == 0)
 //           {
 //               // Left mouse button down, button clicked
 //               Debug.Log("Button clicked!");
 //           }
 //       }

 //       // Draw the triangular button
 //       GUI.DrawTexture(buttonRect, triangleTexture, ScaleMode.StretchToFill);
 //   }

}
