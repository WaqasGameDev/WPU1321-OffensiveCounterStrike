using UnityEngine;
using System.Collections;

public class GrenadeSpot : MonoBehaviour
{
	
	public GrenadeOpen go;
	public GameObject sgr;

	[HideInInspector]
	public RoomController rc;
	[HideInInspector]
	public Transform thisT;

	//How close player need to be to able use this ammo spot
	float distanceToBuyLimit = 2.0f; 
	float distance = -1;
	bool isInside = false;

	void Start(){
		go.upGrenade = true;
	}


	void FixedUpdate ()
	{
		if(rc.ourPlayer && thisT && rc.ourPlayer.thisT)
		{
			distance = Vector3.Distance(thisT.position, rc.ourPlayer.thisT.position);
		}
		else
		{
			distance = -1;
		}

		if(distance > 0 && distance < distanceToBuyLimit)
		{
			if(!isInside)
			{
				isInside = true;
				rc.eneteredGrenadeSpot = true;
			}
		}
		else
		{
			if(isInside)
			{
				isInside = false;
				rc.eneteredGrenadeSpot = false;
			}
		}

		//Refill ammo
		if(isInside && rc.eneteredGrenadeSpot && rc.ourPlayer && go.upGrenade == true)
		{

			if (rc.ourPlayer.playerWeapons.selectedGrenade != 1) {
				rc.ourPlayer.playerWeapons.selectedGrenade = 1;
				if (rc.ourPlayer.playerWeapons.Grenade [1].bulletsPerClip == 0) {
					rc.ourPlayer.playerWeapons.Grenade [1].bulletsPerClip = 1;
				}
				rc.audioSource.clip = rc.bombDisarm;
				rc.audioSource.Play();
				go.upGrenade = false;
				sgr.SetActive (false);
			}
			else{
				go.upGrenade = true;
				}

		}

	}


}
