using UnityEngine;
using System.Collections;


public class SoldierAnimation : MonoBehaviour
{
	public Transform spine1;
	public Transform spine2;

	//Animations
	[System.Serializable]
	public class WeaponAnimationSet
	{
		public AnimationClip idle;
		public AnimationClip fire;
		public AnimationClip ReloadT;
	}

	public WeaponAnimationSet normalSet;
	public WeaponAnimationSet ShotGunSet;
	public WeaponAnimationSet pistolSet;
	public WeaponAnimationSet knifeSet;
	public WeaponAnimationSet bombSet;
	public WeaponAnimationSet eliteSet;
	public WeaponAnimationSet m246Set;
	public WeaponAnimationSet C4Set;

	[System.Serializable]
	public class AnimationSet
	{
		public AnimationClip idle;
		public AnimationClip walk_front;
		public AnimationClip walk_front_left;
		public AnimationClip walk_front_right;
		public AnimationClip crouchDie;
	}

	public AnimationSet standingSet;
	public AnimationSet crouchSet;

	/*public AnimationClip reload;
	public AnimationClip jumpPose;
	public AnimationClip[] killedFalls;
	public AnimationClip HeadFalls;
	*/
	public AnimationClip TPose;

	public WeaponAnimationSet currentWeaponAnimationSet;
	public AnimationSet currentAnimationSet;
	public AnimationClip currentWalkAnimation;
	FPSWeapon previousSelectedWeapon;

	float forwardSpeed;
	float strafeSpeed;
	Vector3 velocity;
	float speed;
	Vector3 lastPosition;

	//[HideInInspector]
	Animator soldierAnimationComponent;
	[HideInInspector]
	public PlayerWeapons playerWeapons;
	[HideInInspector]
	public PlayerNetwork playerNetwork;

	public int movementState = 0; //1 - grounded, 2 - crouch, 3 - in air
	[HideInInspector]
	public bool isMoving = false;

	bool isKilled = false;

	Vector2 hitPosition;
	Vector2 currentHitPosition;

	public AnimationClip currentAnimationToPlay;
	public AnimationClip previousAnimationPlayed;

	//Aiming
	Quaternion referenceRotation;
	Quaternion startParentRotationQ = Quaternion.identity;
	Quaternion startChildRotationQ;
	//Spine2
	Quaternion startParentRotationQ2;
	Quaternion startChildRotationQ2;

	bool doneSetup = false;

	//Called from PlayerNetwork.cs upon initialization
	public void Setup()
	{
		soldierAnimationComponent = GetComponent<Animator>();
		//playerWeapons = GetComponent<PlayerWeapons>();
		//soldierAnimationComponent.playAutomatically = false;

		//Prepare animations
		/*
		SetMixedTransforms(ShotGunSet);
		SetMixedTransforms(pistolSet);
		SetMixedTransforms(knifeSet);
		SetMixedTransforms(bombSet);
		SetMixedTransforms(eliteSet);
		SetMixedTransforms(m246Set);
		SetMixedTransforms(C4Set);
		SetMixedTransforms(normalSet, true);

		SetWalkAnimations(crouchSet);
		SetWalkAnimations(standingSet);


		soldierAnimationComponent[reload.name].wrapMode = WrapMode.Once;
		soldierAnimationComponent[reload.name].AddMixingTransform(spine2);
		soldierAnimationComponent[reload.name].layer = 4;

		soldierAnimationComponent[ShotGunSet.ReloadT.name].wrapMode = WrapMode.Once;
		soldierAnimationComponent[ShotGunSet.ReloadT.name].AddMixingTransform(spine2);
		soldierAnimationComponent[ShotGunSet.ReloadT.name].layer = 4;

		soldierAnimationComponent[pistolSet.ReloadT.name].wrapMode = WrapMode.Once;
		soldierAnimationComponent[pistolSet.ReloadT.name].AddMixingTransform(spine2);
		soldierAnimationComponent[pistolSet.ReloadT.name].layer = 4;

		soldierAnimationComponent[eliteSet.ReloadT.name].wrapMode = WrapMode.Once;
		soldierAnimationComponent[eliteSet.ReloadT.name].AddMixingTransform(spine2);
		soldierAnimationComponent[eliteSet.ReloadT.name].layer = 4;

		soldierAnimationComponent[m246Set.ReloadT.name].wrapMode = WrapMode.Once;
		soldierAnimationComponent[m246Set.ReloadT.name].AddMixingTransform(spine2);
		soldierAnimationComponent[m246Set.ReloadT.name].layer = 4;

		soldierAnimationComponent[normalSet.ReloadT.name].wrapMode = WrapMode.Once;
		soldierAnimationComponent[normalSet.ReloadT.name].AddMixingTransform(spine2);
		soldierAnimationComponent[normalSet.ReloadT.name].layer = 4;


		soldierAnimationComponent[jumpPose.name].wrapMode = WrapMode.Loop;

		for (int i = 0; i < killedFalls.Length; i++)
		{
			soldierAnimationComponent[killedFalls[i].name].wrapMode = WrapMode.Once;
		}

		movementState = 1;

		standingSet.idle.SampleAnimation(gameObject, 0);
		Invoke("RecalculateBoneRotations", 0.15f);
		*/
		//Keep track of player speed
		InvokeRepeating("CalculatePlayerSpeed", 0, 0.15f);

		doneSetup = true;
	}

	void SetMixedTransforms(WeaponAnimationSet anmset, bool fix = false)
	{
		if (anmset.idle != null && anmset.fire != null)
		{
			/*
			soldierAnimationComponent[anmset.fire.name].wrapMode = WrapMode.Once;
			soldierAnimationComponent[anmset.fire.name].AddMixingTransform(spine2);
			soldierAnimationComponent[anmset.fire.name].layer = 5;*/
			//soldierAnimationComponent[anmset.fire.name].speed = 1.25f;

		}
	}

	void SetWalkAnimations(AnimationSet anmset)
	{
		/*soldierAnimationComponent[anmset.idle.name].wrapMode = WrapMode.Loop;
		soldierAnimationComponent[anmset.walk_front.name].wrapMode = WrapMode.Loop;

		if (anmset.walk_front_left != null)
		{
			soldierAnimationComponent[anmset.walk_front_left.name].wrapMode = WrapMode.Loop;
		}
		if (anmset.walk_front_right != null)
		{
			soldierAnimationComponent[anmset.walk_front_right.name].wrapMode = WrapMode.Loop;
		}*/
	}

	// Update is called once per frame
	void LateUpdate()
	{
		if (isKilled || !playerWeapons || !doneSetup)
			return;

		if (playerWeapons.currentSelectedWeapon != null && previousSelectedWeapon != playerWeapons.currentSelectedWeapon)
		{
			if (playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.Knife)
			{
				currentWeaponAnimationSet = knifeSet;
				soldierAnimationComponent.speed = 0.2f;
			}
			if (playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.GRENADE_LAUNCHER || playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.FlashBang)
			{
				currentWeaponAnimationSet = bombSet;
				soldierAnimationComponent.speed = 0.2f;
			}
			if (playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.C4)
			{
				currentWeaponAnimationSet = C4Set;
			}
			if (playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.Dual)
			{
				currentWeaponAnimationSet = eliteSet;
			}
			if (playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.m246)
			{
				currentWeaponAnimationSet = m246Set;
			}
			if (playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.Shotgun)
			{
				SetMixedTransforms(ShotGunSet);
				currentWeaponAnimationSet = ShotGunSet;
			}
			if (playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.MachinePistol || playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.Pistol)
			{
				SetMixedTransforms(pistolSet);
				currentWeaponAnimationSet = pistolSet;
			}
			if (playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.MachineGun || playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.SniperRifle || playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.SniperRifleAuto)
			{
				currentWeaponAnimationSet = normalSet;
			}


			/*soldierAnimationComponent.Play(currentWeaponAnimationSet.idle.name);*/
			//Debug.LogFormat("<color=green>Playing idle: {0}</color>", currentWeaponAnimationSet.idle.name);

			//RecalculateBoneRotations();

			/*if (currentWeaponAnimationSet.idle == null)
			{
				currentWeaponAnimationSet = normalSet;
			}

			previousSelectedWeapon = playerWeapons.currentSelectedWeapon;*/
		}

		if (movementState == 3)
		{
			//In Air
			//soldierAnimationComponent.CrossFade(jumpPose.name);
			/*currentAnimationToPlay = jumpPose;*/
		}
		else
		{
			if (movementState == 0 || movementState == 1)
			{
				if (currentAnimationSet != standingSet)
				{
					currentAnimationSet = standingSet;
				}
			}

			if (movementState == 2)
			{
				if (currentAnimationSet != crouchSet)
				{
					currentAnimationSet = crouchSet;
				}
			}

			if (isMoving && (forwardSpeed > 0.2f || forwardSpeed < -0.2f))
			{
				//CHECKPOINT
				soldierAnimationComponent.SetFloat("Forward",forwardSpeed);
				/*if ((currentAnimationSet.walk_front_left != null && currentAnimationSet.walk_front_right != null) && (strafeSpeed > 0.3f || strafeSpeed < -0.3f))
				{
					currentWalkAnimation = strafeSpeed > 0.3f ? currentAnimationSet.setf;
				}
				else
				{
					currentWalkAnimation = currentAnimationSet.walk_front;
				}

				if (soldierAnimationComponent.speed != forwardSpeed + 0.2f)
				{
					soldierAnimationComponent.speed = forwardSpeed + 0.2f;
				}*/

				//soldierAnimationComponent.CrossFade(currentWalkAnimation.name);
				currentAnimationToPlay = currentWalkAnimation;
			}

			
			else
			{
				currentWalkAnimation = movementState == 2 ? crouchSet.idle : standingSet.idle;
				currentAnimationToPlay = currentWalkAnimation;
				//soldierAnimationComponent.CrossFade(currentAnimationSet.idle.name);

			}

			if (isMoving && (strafeSpeed > 0.2f || strafeSpeed < -0.2f))
			{
				soldierAnimationComponent.SetFloat("Strafe", strafeSpeed);
			}
		}

		if (previousAnimationPlayed != currentAnimationToPlay)
		{
			/*previousAnimationPlayed = currentAnimationToPlay;
			soldierAnimationComponent.CrossFade(currentAnimationToPlay.name);*/

			//Debug.LogFormat("<color=green>"+ previousAnimationPlayed.name + " " + soldierAnimationComponent[previousAnimationPlayed.name].wrapMode.ToString() + "</color>");
			//print (previousAnimationPlayed.name + " " + soldierAnimationComponent[previousAnimationPlayed.name].wrapMode.ToString());
		}

		//Aiming
		if (startParentRotationQ != Quaternion.identity)
		{
			Vector3 directionTmp = playerWeapons.playerCamera.forward;
			//Rotate first spine only 35% of direction and rotate spine 2 fully
			referenceRotation = Quaternion.LookRotation((playerWeapons.playerCamera.position + new Vector3(directionTmp.x, directionTmp.y * 0.35f, directionTmp.z) * 2.5f) - spine1.position, spine1.position - spine2.position);
			//print ("Tmp direction: " + playerWeapons.playerCamera.forward.ToString());
			spine1.rotation = (referenceRotation * Quaternion.Inverse(startParentRotationQ)) * startChildRotationQ;

			//Spine2
			referenceRotation = Quaternion.LookRotation((playerWeapons.playerCamera.position + directionTmp * 2.5f) - spine2.position, spine1.position - spine2.position);
			spine2.rotation = (referenceRotation * Quaternion.Inverse(startParentRotationQ2)) * startChildRotationQ2;
		}

		//Hit effect rotation
		spine2.eulerAngles = new Vector3(spine2.eulerAngles.x + currentHitPosition.x, spine2.eulerAngles.y + currentHitPosition.y, spine2.eulerAngles.z);
	}

	void CalculatePlayerSpeed()
	{
		if (!doneSetup)
			return;

		//Calculate speed
		if (isMoving)
		{
			velocity = (playerNetwork.thisT.position - lastPosition) / Time.deltaTime; //Units per second.
			speed = (playerNetwork.thisT.position - lastPosition).magnitude / Time.deltaTime;

			lastPosition = playerNetwork.thisT.position;

			if (speed > 0)
			{
				forwardSpeed = playerNetwork.thisT.InverseTransformDirection(velocity).z * Time.deltaTime * 2.0f;
				strafeSpeed = -(playerNetwork.thisT.InverseTransformDirection(velocity).x * Time.deltaTime) * 2.0f;

				/*if ((strafeSpeed > 0.3f || strafeSpeed < -0.3f) && forwardSpeed > -0.2f && forwardSpeed < 0.2f)
				{
					forwardSpeed = Mathf.Abs(strafeSpeed);
				}*/
			}
		}
		else
		{
			speed = 0;
			velocity = Vector3.zero;
			forwardSpeed = 0;
			strafeSpeed = 0;
		}
	}

	void RecalculateBoneRotations()
	{
		if (gameObject.activeSelf && playerWeapons)
		{
			//Setup references for aiming
			Vector3 directionTmp = transform.forward;
			referenceRotation = Quaternion.LookRotation((playerWeapons.playerCamera.position + directionTmp * 1f) - spine1.position, spine1.position - spine2.position);
			startParentRotationQ = referenceRotation;
			startChildRotationQ = spine1.rotation;
			//Spine2
			referenceRotation = Quaternion.LookRotation((playerWeapons.playerCamera.position + directionTmp * 5f) - spine2.position, spine1.position - spine2.position);
			startParentRotationQ2 = referenceRotation;
			startChildRotationQ2 = spine2.rotation;
		}
	}

	public void PlayFireAnimation()
	{
		//soldierAnimationComponent.Rewind(currentWeaponAnimationSet.fire.name);
		soldierAnimationComponent.Play(currentWeaponAnimationSet.fire.name);
		//print ("Play fire animation remote!");
	}

	public void PlayFireAnimationC4()
	{
		/*soldierAnimationComponent.Stop(C4Set.fire.name);
		soldierAnimationComponent.Rewind(C4Set.idle.name);
		soldierAnimationComponent[C4Set.fire.name].speed = 1.2275f;
		soldierAnimationComponent.Play(C4Set.fire.name);*/
		//print ("Play fire animation remote!");
	}

	public void PlayFireC4Stop()
	{
		//soldierAnimationComponent.Stop(C4Set.fire.name);
	}

	public void PlayİdleC4()
	{
		/*soldierAnimationComponent.Stop(C4Set.fire.name);
		soldierAnimationComponent.Rewind(C4Set.idle.name);
		soldierAnimationComponent.Play(C4Set.idle.name);*/
		//print ("Play fire animation remote!");
	}

	public void PlayReloadAnimation(float duration)
	{
		if (playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.Shotgun || playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.m246 || playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.Dual || playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.Pistol || playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.MachinePistol || playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.MachineGun)
		{
			if (playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.Shotgun)
			{
				/*soldierAnimationComponent.Rewind(ShotGunSet.ReloadT.name);
				soldierAnimationComponent[ShotGunSet.ReloadT.name].speed = soldierAnimationComponent[ShotGunSet.ReloadT.name].length / duration;
				soldierAnimationComponent.Play(ShotGunSet.ReloadT.name);*/
			}
			else if (playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.MachinePistol)
			{
				/*soldierAnimationComponent.Rewind(pistolSet.ReloadT.name);
				soldierAnimationComponent[pistolSet.ReloadT.name].speed = soldierAnimationComponent[pistolSet.ReloadT.name].length / duration;
				soldierAnimationComponent.Play(pistolSet.ReloadT.name);*/
			}
			else if (playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.MachineGun)
			{
				/*soldierAnimationComponent.Rewind(normalSet.ReloadT.name);
				soldierAnimationComponent[normalSet.ReloadT.name].speed = soldierAnimationComponent[normalSet.ReloadT.name].length / duration;
				soldierAnimationComponent.Play(normalSet.ReloadT.name);*/
			}
			else if (playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.Dual)
			{
				/*soldierAnimationComponent.Rewind(eliteSet.ReloadT.name);
				soldierAnimationComponent[eliteSet.ReloadT.name].speed = soldierAnimationComponent[eliteSet.ReloadT.name].length / duration;
				soldierAnimationComponent.Play(eliteSet.ReloadT.name);*/
			}
			else if (playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.m246)
			{
				/*soldierAnimationComponent.Rewind(m246Set.ReloadT.name);
				soldierAnimationComponent[m246Set.ReloadT.name].speed = soldierAnimationComponent[m246Set.ReloadT.name].length / duration;
				soldierAnimationComponent.Play(m246Set.ReloadT.name);*/
			}
			else
			{
				/*soldierAnimationComponent.Rewind(pistolSet.ReloadT.name);
				soldierAnimationComponent[pistolSet.ReloadT.name].speed = soldierAnimationComponent[pistolSet.ReloadT.name].length / duration;
				soldierAnimationComponent.Play(pistolSet.ReloadT.name);*/
			}
		}
		else
		{
			/*soldierAnimationComponent.Rewind(reload.name);
			soldierAnimationComponent[reload.name].speed = soldierAnimationComponent[reload.name].length / duration;
			soldierAnimationComponent.Play(reload.name);*/
		}
	}

	public void PlayKillAnimationHead()
	{
		if (!doneSetup)
		{
			/*soldierAnimationComponent = GetComponent<Animation>();
			soldierAnimationComponent[HeadFalls.name].wrapMode = WrapMode.Once;*/
		}

		isKilled = true;
		/*soldierAnimationComponent.Stop();*/
		if (movementState == 2)
		{
			/*soldierAnimationComponent.Play(crouchSet.crouchDie.name);*/
		}
		else
		{
			/*soldierAnimationComponent.Play(HeadFalls.name);*/
		}
	}

	public void PlayKillAnimation()
	{
		if (!doneSetup)
		{
			soldierAnimationComponent = GetComponent<Animator>();
			/*for (int i = 0; i < killedFalls.Length; i++)
			{
				soldierAnimationComponent[killedFalls[i].name].wrapMode = WrapMode.Once;
			}*/
		}

		isKilled = true;
		/*soldierAnimationComponent.Stop();*/
		if (movementState == 2)
		{
			/*soldierAnimationComponent.Play(crouchSet.crouchDie.name);*/
		}
		else
		{
			/*if (killedFalls.Length > 0)
			{
				int rnd = Random.Range(0, killedFalls.Length - 1);
				soldierAnimationComponent.Play(killedFalls[rnd].name);
		}*/
		}
	}

	public void DoHitMovement()
	{
		hitPosition = new Vector2(Random.Range(-15, 15), Random.Range(-15, 15));
		StopCoroutine(DoHitMovementCoroutine());
		StartCoroutine(DoHitMovementCoroutine());
	}

	IEnumerator DoHitMovementCoroutine()
	{
		while (Mathf.Abs(hitPosition.magnitude - currentHitPosition.magnitude) > 0.25f)
		{
			currentHitPosition = Vector2.Lerp(currentHitPosition, hitPosition, Time.deltaTime * 19);
			yield return null;
		}

		hitPosition = Vector2.zero;

		while (Mathf.Abs(hitPosition.magnitude - currentHitPosition.magnitude) > 0.01f)
		{
			currentHitPosition = Vector2.Lerp(currentHitPosition, hitPosition, Time.deltaTime * 7);
			yield return null;
		}
	}
}
