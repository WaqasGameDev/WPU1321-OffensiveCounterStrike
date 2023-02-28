using UnityEngine;
using System.Collections;

public class FareT : MonoBehaviour 
{
	private Touch touch;
	private Vector2 touchPosition;
	private Quaternion rotationY;

	private float rotationSpeedModifier = 0.25f;

	void Update(){

		if (Input.touchCount > 0){


			touch = Input.GetTouch (0);

			if (touch.position.x > Screen.width / 2) {
				if (touch.phase == TouchPhase.Moved) {
					rotationY = Quaternion.Euler (
						0f,
						-touch.deltaPosition.x * rotationSpeedModifier,
						0f);
					transform.rotation = rotationY * transform.rotation;
				}
			}

		}

	}



}