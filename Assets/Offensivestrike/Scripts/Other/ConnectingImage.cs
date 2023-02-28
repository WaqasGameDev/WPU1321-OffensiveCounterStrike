using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ConnectingImage : MonoBehaviour
{
	public bool canRotate = true;
	public float speed = 10;

	void Update()
	{
		if (canRotate)
			transform.Rotate(speed * (- Vector3.forward) * Time.deltaTime);
	}
}
