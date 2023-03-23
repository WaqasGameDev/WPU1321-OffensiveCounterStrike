using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(EnemyPlayer))]
public class EnemyShoot : WeaponController {

	[SerializeField] float shootingSpeed;
	[SerializeField] float burstDurationMax;
	[SerializeField] float burstDurationMin;

	EnemyPlayer enemyPlayer;
	bool shouldFire;

	void Start () 
	{
		enemyPlayer = GetComponent<EnemyPlayer> ();
		enemyPlayer.OnTargetSelected += EnemyPlayer_OnTargetSelected;
	}

	private void EnemyPlayer_OnTargetSelected (PlayerController target)
	{
		Debug.Log("1");
		/*ActiveWeapon.AimTarget = target.transform;
		ActiveWeapon.AimTargetOffset = Vector3.up * 1.5f;*/
		StartBurst ();
	}

	void StartBurst () 
	{
		Debug.Log("2");
		if (!enemyPlayer.EnemyHealth.IsAlive)
			return;
		Debug.Log("5");

		CheckReload();
		shouldFire = true;

		GetComponent<Timer>().Add (EndBurst, Random.Range (burstDurationMin, burstDurationMax));
	}

	void EndBurst ()
	{
		shouldFire = false;

		if (!enemyPlayer.EnemyHealth.IsAlive)
			return;
		
		CheckReload ();
		GetComponent<Timer>().Add (StartBurst, shootingSpeed);
	}

	void CheckReload () 
	{
		/*if (ActiveWeapon.reloader.RoundsRemainingInClip == 0)
			ActiveWeapon.Reload ();*/
		Debug.Log("3");

	}

	void Update () 
	{
		//if (!shouldFire || !CanFire || !enemyPlayer.EnemyHealth.IsAlive)
		if (!shouldFire || !enemyPlayer.EnemyHealth.IsAlive)
			return;
		Debug.Log("FIRED!");
		//ActiveWeapon.Fire ();
	}
}
