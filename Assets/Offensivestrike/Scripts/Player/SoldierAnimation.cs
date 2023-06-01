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

	
	
	Vector3 velocity;
	
	Vector3 lastPosition;

	//[HideInInspector]
	Animator soldierAnimator;
	[HideInInspector]
	public PlayerWeapons playerWeapons;
	[HideInInspector]
	public PlayerNetwork playerNetwork;


	public enum MovementStates { IDLE, GROUNDED, CROUCH, JUMP   };

	public MovementStates movementState = MovementStates.IDLE;

	[HideInInspector]
	public bool isMoving = false;

	bool isDead = false;

	// Animator Parameters
	public enum AnimationWeaponSwitch {PISTOL_IDLE, RIFFLE, SHOTGUN, C4, KNIFE_OR_GRENADE };

	public class AnimationParameters
    {
		public bool jumpInputReceivingAllowed = true;
		public bool jumpKeyWasPressed = false;
		public readonly string isDead = "isDead";
		public readonly string isGrounded = "IsGrounded";
		public readonly string isJumping = "IsJumping";
		public readonly string canAim = "CanAim";
		public readonly string isAiming = "IsAiming";
		public readonly string isCrouching = "IsCrouching";
		public readonly string shoottrigger = "Shoot";
		public readonly string inputHorizontal = "InputHorizontal";
		public readonly string inputVertical = "InputVertical";
		public readonly string inputMagnitude = "InputMagnitude";
		public readonly string upperBody_ID = "UpperBody_ID";
		public float inputVerticalValue;
		public float inputHorizontalValue;
		public float inputMagnitudeValue;
	}

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

	public AnimationParameters animationParameters;

	//Called from PlayerNetwork.cs upon initialization
	public void Setup()
	{
		soldierAnimator = GetComponent<Animator>();
		animationParameters = new AnimationParameters();
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

        soldierAnimator.SetBool(animationParameters.canAim, true);
        soldierAnimator.SetBool(animationParameters.isAiming, true);
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

	private float ConvertEnumToFloat(AnimationWeaponSwitch animationWeaponSwitch)
    {
		return (float) animationWeaponSwitch;
    }

	private void SetUpperBodyAnimatin(AnimationWeaponSwitch animationWeaponSwitch)
    {
		soldierAnimator.SetFloat(animationParameters.upperBody_ID, ConvertEnumToFloat(animationWeaponSwitch));
	}

	private void SetAnimationToPistolIdle()
    {
		soldierAnimator.SetFloat(animationParameters.upperBody_ID, ConvertEnumToFloat(AnimationWeaponSwitch.PISTOL_IDLE));
	}

	// Update is called once per frame
	void LateUpdate()
	{
		if (isDead || !playerWeapons || !doneSetup)
			return;
		if (playerWeapons.currentSelectedWeapon != null && previousSelectedWeapon != playerWeapons.currentSelectedWeapon)
		{
			if (playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.Knife)
			{
				SetUpperBodyAnimatin(AnimationWeaponSwitch.KNIFE_OR_GRENADE);
				Debug.LogWarning("UPPERBODY_ID FOR KNIFE OR GRENADE >>>>>>" + AnimationWeaponSwitch.KNIFE_OR_GRENADE);
				/*currentWeaponAnimationSet = knifeSet;
				soldierAnimationComponent.speed = 0.2f;*/
			}
			else
			{
                SetAnimationToPistolIdle();
            }
            if (playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.GRENADE_LAUNCHER || playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.FlashBang)
			{
				SetUpperBodyAnimatin(AnimationWeaponSwitch.RIFFLE);
				Debug.LogWarning("UPPERBODY_ID FOR RIFFLE >>>>>>" + AnimationWeaponSwitch.RIFFLE);
				/*currentWeaponAnimationSet = bombSet;
				soldierAnimationComponent.speed = 0.2f;*/
			}
			else
			{
                SetAnimationToPistolIdle();
            }
			if (playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.C4)
			{
				SetUpperBodyAnimatin(AnimationWeaponSwitch.C4);
				Debug.LogWarning("UPPERBODY_ID FOR C4 >>>>>>" + AnimationWeaponSwitch.C4);
				/*currentWeaponAnimationSet = C4Set;*/
			}
			else
			{
                SetAnimationToPistolIdle();
            }
			if (playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.Dual)
			{
				SetUpperBodyAnimatin(AnimationWeaponSwitch.RIFFLE);
				Debug.LogWarning("UPPERBODY_ID FOR RIFFLE >>>>>>" + AnimationWeaponSwitch.RIFFLE);
				/*currentWeaponAnimationSet = eliteSet;*/
			}
			else
			{
                SetAnimationToPistolIdle();
            }
			if (playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.m246)
			{
				SetUpperBodyAnimatin(AnimationWeaponSwitch.RIFFLE);
				/*currentWeaponAnimationSet = m246Set;*/
			}
			else
			{
				SetAnimationToPistolIdle();
			}
			if (playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.Shotgun)
			{
				SetUpperBodyAnimatin(AnimationWeaponSwitch.SHOTGUN);
				Debug.LogWarning("UPPERBODY_ID FOR SHOTGUN >>>>>>" + AnimationWeaponSwitch.SHOTGUN);
				/*SetMixedTransforms(ShotGunSet);
				currentWeaponAnimationSet = ShotGunSet;*/
			}
			else
			{
				SetAnimationToPistolIdle();
			}
			if (playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.MachinePistol || playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.Pistol)
			{
				SetAnimationToPistolIdle();
				/*SetMixedTransforms(pistolSet);
				currentWeaponAnimationSet = pistolSet;*/
			}
			else
			{
				SetAnimationToPistolIdle();
			}
			if (playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.MachineGun || playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.SniperRifle || playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.SniperRifleAuto)
			{
				SetUpperBodyAnimatin(AnimationWeaponSwitch.RIFFLE);
				/*currentWeaponAnimationSet = normalSet;*/
			}
			else
			{
				SetAnimationToPistolIdle();
			}


			/*soldierAnimationComponent.Play(currentWeaponAnimationSet.idle.name);*/
			//Debug.LogFormat("<color=green>Playing idle: {0}</color>", currentWeaponAnimationSet.idle.name);
			RecalculateBoneRotations();
			/*if (currentWeaponAnimationSet.idle == null)
			{
				currentWeaponAnimationSet = normalSet;
			}

			previousSelectedWeapon = playerWeapons.currentSelectedWeapon;*/
		}

		if (movementState == MovementStates.JUMP)
		{
            if (animationParameters.jumpKeyWasPressed)
            {
                soldierAnimator.SetBool(animationParameters.isJumping, true);
                soldierAnimator.SetBool(animationParameters.isGrounded, false);
                animationParameters.jumpInputReceivingAllowed = true;
				animationParameters.jumpKeyWasPressed = false;
            }
        }
		else
		{
			if (movementState == MovementStates.IDLE || movementState == MovementStates.GROUNDED)
			{
				soldierAnimator.SetBool(animationParameters.isJumping, false);
				soldierAnimator.SetBool(animationParameters.isGrounded, true);
			}

			if (movementState == MovementStates.CROUCH)
			{
				soldierAnimator.SetBool(animationParameters.isCrouching, true);
				soldierAnimator.SetBool(animationParameters.isJumping, false);
				soldierAnimator.SetBool(animationParameters.isGrounded, true);
			}
			else
			{
				soldierAnimator.SetBool(animationParameters.isCrouching, false);
			}

			if ((animationParameters.inputVerticalValue > 0.2f || animationParameters.inputVerticalValue < -0.2f))
			{
				//CHECKPOINT
				if (movementState != MovementStates.JUMP)
				{
					soldierAnimator.SetFloat(animationParameters.inputVertical, animationParameters.inputVerticalValue);
				}
				else
				{
					soldierAnimator.SetFloat(animationParameters.inputVertical, 0);
				}
			}
			else
			{
				soldierAnimator.SetFloat(animationParameters.inputVertical, 0);
			}

			if ((animationParameters.inputHorizontalValue > 0.3f || animationParameters.inputHorizontalValue < -0.3f))
			{
				if (movementState != MovementStates.JUMP)
				{
					soldierAnimator.SetFloat(animationParameters.inputHorizontal, animationParameters.inputHorizontalValue);
				}
				else
				{
					soldierAnimator.SetFloat(animationParameters.inputHorizontal, 0);
				}
			}
			else
			{
				soldierAnimator.SetFloat(animationParameters.inputHorizontal, 0);
			}
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

		soldierAnimator.SetFloat(animationParameters.inputMagnitude, animationParameters.inputMagnitudeValue);
	
	}

	void CalculatePlayerSpeed()
	{
		if (!doneSetup || playerNetwork == null)
			return;

            velocity = (playerNetwork.thisT.position - lastPosition) / Time.deltaTime; //Units per second.
            lastPosition = playerNetwork.thisT.position;

		animationParameters.inputVerticalValue = Mathf.Clamp(playerNetwork.thisT.InverseTransformDirection(velocity).z * Time.deltaTime * 2.0f,-1,1);
		animationParameters.inputHorizontalValue = Mathf.Clamp(playerNetwork.thisT.InverseTransformDirection(velocity).x * Time.deltaTime * 2.0f,-1,1);
			
				animationParameters.inputMagnitudeValue = Mathf.Approximately(animationParameters.inputVerticalValue, 0) && Mathf.Approximately(animationParameters.inputHorizontalValue, 0) ? 0 : 1;
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
		/*soldierAnimationComponent.Play(currentWeaponAnimationSet.fire.name);*/
		//print ("Play fire animation remote!");


		if (playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.Knife)
		{
			soldierAnimator.SetTrigger(animationParameters.shoottrigger);
		}
		if (playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.GRENADE_LAUNCHER || playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.FlashBang)
		{
			soldierAnimator.SetTrigger(animationParameters.shoottrigger);
		}
		/*if (playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.C4)
		{
			soldierAnimationComponent.SetBool("C4Idle", true);
		}
		*/
		if (playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.Dual)
		{
			soldierAnimator.SetTrigger(animationParameters.shoottrigger);
		}
		if (playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.m246)
		{
			soldierAnimator.SetTrigger(animationParameters.shoottrigger);
		}
		if (playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.Shotgun)
		{
			soldierAnimator.SetTrigger(animationParameters.shoottrigger);
		}
		if (playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.MachinePistol || playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.Pistol)
		{
			soldierAnimator.SetTrigger(animationParameters.shoottrigger);
		}
		if (playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.MachineGun || playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.SniperRifle || playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.SniperRifleAuto)
		{
			soldierAnimator.SetTrigger(animationParameters.shoottrigger);
		}
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
			else if (playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.Pistol)
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

		//soldierAnimator.SetTrigger("Reload");
	}

	public void PlayKillAnimationHead()
	{
		if (!doneSetup)
		{
			/*soldierAnimationComponent = GetComponent<Animation>();
			soldierAnimationComponent[HeadFalls.name].wrapMode = WrapMode.Once;*/
		}

		isDead = true;
		/*soldierAnimationComponent.Stop();*/
		if (movementState == MovementStates.CROUCH)
		{
			/*soldierAnimationComponent.Play(crouchSet.crouchDie.name);*/
			//soldierAnimationComponent.SetTrigger("CrouchDie");
			soldierAnimator.SetTrigger(animationParameters.isDead);
		}
		else
		{
			/*soldierAnimationComponent.Play(HeadFalls.name);*/
			soldierAnimator.SetTrigger(animationParameters.isDead);
		}
	}

	public void PlayKillAnimation()
	{
		if (!doneSetup)
		{
			soldierAnimator = GetComponent<Animator>();
			soldierAnimator.SetTrigger(animationParameters.isDead);
			/*for (int i = 0; i < killedFalls.Length; i++)
			{
				soldierAnimationComponent[killedFalls[i].name].wrapMode = WrapMode.Once;
			}*/
		}

		isDead = true;
		/*soldierAnimationComponent.Stop();*/
		if (movementState == MovementStates.CROUCH)
		{
			/*soldierAnimationComponent.Play(crouchSet.crouchDie.name);*/
			//soldierAnimationComponent.SetTrigger("CrouchDie");
			soldierAnimator.SetTrigger(animationParameters.isDead);
		}
		else
		{
			soldierAnimator.SetTrigger(animationParameters.isDead);
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
