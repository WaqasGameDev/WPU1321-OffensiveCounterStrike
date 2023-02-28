using UnityEngine;
using System.Collections;

public class GrenadeOpen : MonoBehaviour {
	
	[HideInInspector]
	public bool upGrenade = true;

	public GameObject GrenadeDownMe;

	float timeLeftShow = 120.0f;

	void FixedUpdate ()
	{
		if (!upGrenade) {
			timeLeftShow -= Time.deltaTime;
			if (timeLeftShow < 0) {
				upGrenade = true;
				GrenadeDownMe.SetActive (true);
				timeLeftShow = 120.0f;
			}
		}

	}


}
