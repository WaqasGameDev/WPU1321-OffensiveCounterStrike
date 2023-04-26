using UnityEngine;
using System.Collections;

[RequireComponent(typeof(CharacterController))]

public class FPSController : MonoBehaviour
{
	public Transform firstPersonView;
	public Transform playerCamera;
	public GameObject playerCamCounter;
	public GameObject playerCamTerror;
	public float walkSpeed = 9f;
	public float runSpeed = 11.0f;
	public float crouchSpeed = 4f;
	public float jumpSpeed = 8.0f;
	public float ladderSpeed = 6.5f;
	public float gravity = 20.0f;
	// Units that player can fall before a falling damage function is run. To disable, type "infinity" in the inspector
	public float fallingDamageThreshold = 10.0f;
	// If the player ends up on a slope which is at least the Slope Limit as set on the character controller, then he will slide down
	public bool slideWhenOverSlopeLimit = true;
	public float slideSpeed = 12.0f;
	// If checked, then the player can change direction while in the air
	bool airControl = false;

	[HideInInspector]
	public int movementState = 0; //0 - walking, 1 - sprinting, 2 - crouch, 3 - in air, 4 - on ladder
	[HideInInspector]
	public bool isMoving = false;
	//[HideInInspector]
	public bool isGrounded = false;
	[HideInInspector]
	public bool isCrouching = false;
	[HideInInspector]
	public bool C4tg = false;
	[HideInInspector]
	public bool Diffusetg = false;
	[HideInInspector]
	public bool C4XTG = false;
	[HideInInspector]
	public bool isSprintingSlowly = false; //Only true if running speed is less than walking speed (Reduce recoil in this case)
	[HideInInspector]
	public float speed;
	[HideInInspector]
	public PlayerNetwork pn;
	[HideInInspector]
	public float fallSlowDown = 1; //Slow player down if we fall or get shot. Set at PlayerNetwork.cs
								   //Used for recoil and fall damage effect
	[HideInInspector]
	public Vector3 firstPersonViewRotation;

	float antiBumpFactor = 0.75f; // Small amounts of this results in bumping when walking down slopes, but large amounts results in falling too fast
	Vector3 moveDirection = Vector3.zero;
	LayerMask layerMask = ~(/*1 << 8 |*/ 1 << 2);
	CharacterController controller;
	Transform myTransform;
	RaycastHit hit;
	float fallStartLevel;
	bool falling;
	float slideLimit;
	float rayDistance;
	//Vector3 contactPoint;
	bool sliding = false;
	// If true, diagonal speed (when strafing + moving forward or back) can't exceed normal move speed; otherwise it's about 1.4 times faster
	bool limitDiagonalSpeed = true;

	float inputX;
	float inputY;
	float inputXSet;
	float inputYSet;
	float inputModifyFactor;

	Vector3 defaultCamPos;
	float defaultControllerHeight;
	float camHeight;

	Transform currentLadder;
	Vector3 climbingDirection;
	float climbDownThreshold = -0.4f;
	float ladderAngle; //Check if we facing ladder

	Vector3 slidingDirection;
	float slidingSpeedTmp;
	float slopeAngle;
	public bool WhoTeam = false;

	void Start()
	{
		WhoTeam = false;
	}

	public void startWhoTeam()
	{
		WhoTeam = true;
		firstPersonView = pn.firstPersonView.transform;
		if (pn.playerTeam == 1)
		{
			playerCamera = playerCamCounter.transform;
			if (playerCamera == null)
				return;
		}
		if (pn.playerTeam == 2)
		{
			playerCamera = playerCamTerror.transform;
			if (playerCamera == null)
				return;
		}
		controller = GetComponent<CharacterController>();
		myTransform = transform;
		speed = walkSpeed;
		rayDistance = controller.height * 0.5f + controller.radius;
		slideLimit = controller.slopeLimit - 0.1f;
		defaultCamPos = firstPersonView.localPosition;
		defaultControllerHeight = controller.height;
		isMoving = false;
		firstPersonViewRotation = Vector3.zero;
		Diffusetg = false;
		C4tg = false;
		C4XTG = false;
	}

	public void AssignLadder(Transform ladder)
	{
		currentLadder = ladder;
		climbingDirection = currentLadder.up;
	}

	public void RemoveLadder(Transform ladder)
	{
		if (currentLadder == ladder)
		{
			currentLadder = null;
		}
	}

	void OnTriggerEnter(Collider other)
	{
		if (other.CompareTag("Ladder"))
		{
			if (!GetComponent<FPSController>())
			{
				GetComponent<FPSController>();
			}

			if (GetComponent<FPSController>())
			{
				AssignLadder(other.GetComponent<LadderScript>().thisT);
			}
		}

		if (other.CompareTag("Sea"))
		{
			gravity = 4.5f;
			jumpSpeed = 5.0f;
			if (isCrouching)
			{
				walkSpeed = 3.0f;
			}
			else
			{
				walkSpeed = 3.0f;
			}
			crouchSpeed = 2.5f;
		}

		if (other.CompareTag("A") || other.CompareTag("B"))
		{
			C4tg = true;
		}

		if (other.CompareTag("C4") && pn.playerTeam == 1)
		{
			Diffusetg = true;
		}

		if (other.CompareTag("C4Box") && pn.playerTeam == 2 && pn.MeName != GameSettings.C4Who)
		{
			if (!pn.playerKilled)
			{
				C4XTG = true;
				GameObject C4Box = GameObject.Find("C4Box(Clone)");
				if (C4Box != null)
				{
					Destroy(C4Box);
				}
			}
		}

	}

	void OnTriggerExit(Collider other)
	{
		if (other.CompareTag("Ladder"))
		{
			if (GetComponent<FPSController>())
			{
				GetComponent<FPSController>();
			}

			if (GetComponent<FPSController>())
			{
				RemoveLadder(other.GetComponent<LadderScript>().thisT);
			}
		}

		if (other.CompareTag("Sea"))
		{
			gravity = 20.0f;
			jumpSpeed = 8.0f;
			if (!isCrouching)
			{
				walkSpeed = 6.75f;
			}
			else
			{
				walkSpeed = 3.0f;
			}
			crouchSpeed = 4.0f;
		}

		if (other.CompareTag("A") || other.CompareTag("B"))
		{
			C4tg = false;
		}

		if (other.CompareTag("C4") && pn.playerTeam == 1)
		{
			Diffusetg = false;
		}

	}


	void Update()
	{
		Physics.IgnoreLayerCollision(2, 8);
		//Vertical movement
		if (!pn.playerKilled)
		{

			if (walkSpeed != 3.0f)
			{
				if (pn.playerWeapons)
				{
					if (pn.playerWeapons.currentSelectedWeapon)
					{
						if (pn.playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.Knife || pn.playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.m246)
						{
							if (pn.playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.Knife)
							{
								walkSpeed = 7.10f;
							}
							if (pn.playerWeapons.currentSelectedWeapon.wSettings.fireType == PlayerWeapons.FireType.m246)
							{
								walkSpeed = 6.0f;
							}
						}
						else
						{
							walkSpeed = 6.75f;
						}
					}
				}
			}

			if (!GameSettings.menuOpened)
			{
				if (GameSettings.currentGameMode != "NORMAL")
				{
#if UNITY_ANDROID || UNITY_IOS || UNITY_WP8 || UNITY_WP8_1
					inputXSet = GameSettings.moveDirection.x;
					inputYSet = GameSettings.moveDirection.y;

					if (Mathf.Abs(inputXSet) < 0.5f && Mathf.Abs(inputYSet) < 0.5f && runSpeed < walkSpeed)
					{
						isSprintingSlowly = true;
						movementState = 1; //Sprinting
					}
					else
					{
						isSprintingSlowly = false;
						movementState = 0;
					}

					speed = walkSpeed;

#else
                if (Input.GetKey(GameSettings.playerKeys[6]) || Input.GetKey(GameSettings.playerKeys[7]))
                {
					if(Input.GetKey(GameSettings.playerKeys[6]))
                {
						inputYSet = 1;
					}
                    else
                    {
						inputYSet = -1;
				    }
				}
                else
                {
					inputYSet = 0;
				}
				
				//Horizontal movement
				if(Input.GetKey(GameSettings.playerKeys[8]) || Input.GetKey(GameSettings.playerKeys[9]))
                {
					if(Input.GetKey(GameSettings.playerKeys[8]))
                    {
						inputXSet = -1;
					}
                    else
                    {
						inputXSet = 1;
					}
				}
                else
                {
					inputXSet = 0;
				}
#endif
				}
				else
				{
					if (GameSettings.MoveOn == true)
					{
#if UNITY_ANDROID || UNITY_IOS || UNITY_WP8 || UNITY_WP8_1
						inputXSet = GameSettings.moveDirection.x;
						inputYSet = GameSettings.moveDirection.y;
					}
					if (Mathf.Abs(inputXSet) < 0.5f && Mathf.Abs(inputYSet) < 0.5f && runSpeed < walkSpeed)
					{
						isSprintingSlowly = true;
						movementState = 1; //Sprinting
					}
					else
					{
						isSprintingSlowly = false;
						movementState = 0;
					}

					speed = walkSpeed;
#endif
				}
			}
			else
			{
				inputYSet = 0;
				inputXSet = 0;
			}

			inputY = Mathf.Lerp(inputY, inputYSet, Time.deltaTime * 19);
			inputX = Mathf.Lerp(inputX, inputXSet, Time.deltaTime * 19);
			// If both horizontal and vertical are used simultaneously, limit speed (if allowed), so the total doesn't exceed normal move speed
			inputModifyFactor = Mathf.Lerp(inputModifyFactor, (inputYSet != 0 && inputXSet != 0 && limitDiagonalSpeed) ? 0.75f : 1.0f, Time.deltaTime * 19);
			fallSlowDown = Mathf.Lerp(fallSlowDown, 1, Time.deltaTime * 5);
			inputModifyFactor *= fallSlowDown;
			firstPersonViewRotation = Vector3.Lerp(firstPersonViewRotation, Vector3.zero, Time.deltaTime * 5);
			firstPersonView.localEulerAngles = firstPersonViewRotation;

			if (!currentLadder)
			{
				if (isGrounded)
				{
					// If we were falling, and we fell a vertical distance greater than the threshold, run a falling damage routine ###
					if (falling)
					{
						falling = false;

						if (myTransform.position.y < fallStartLevel - fallingDamageThreshold)
						{
							FallingDamageAlert(fallStartLevel - myTransform.position.y);
						}
					}

#if !UNITY_ANDROID && !UNITY_IOS && !UNITY_WP8 && !UNITY_WP8_1

                    //Crouching
                    if (Input.GetKeyDown(GameSettings.playerKeys[10]) && !GameSettings.menuOpened) 
                    {
						if(!isCrouching)
                        {
							isCrouching = true;
						}
                        else
                        {
							if(CanGetUp())
                            {
								isCrouching = false;
							}
						}

						this.StopCoroutine(MoveCameraCrouch());
						this.StartCoroutine(MoveCameraCrouch());
					}

					if(isCrouching)
                    {
						speed = crouchSpeed;
						movementState = 2;
					}
                    else
                    {
						//Sprinting
						if(Input.GetKey(GameSettings.playerKeys[11]))
                    {
							speed = runSpeed;
							isSprintingSlowly = runSpeed < walkSpeed;
							movementState = 1; //Sprinting
						}
                        else
                        {
							speed = walkSpeed;
							isSprintingSlowly = false;
							movementState = 0; //Walking
						}
					}

#endif

					//Sliding and movement calculations
					if (sliding && slideWhenOverSlopeLimit)
					{
						//Sliding
						Vector3 hitNormal = hit.normal;
						slidingDirection = new Vector3(hitNormal.x, -hitNormal.y, hitNormal.z);
						moveDirection = slidingDirection;
						Vector3.OrthoNormalize(ref hitNormal, ref moveDirection);
						//moveDirection *= slideSpeed;
						//Gradually increase slide speed
						slidingSpeedTmp = Mathf.Lerp(slidingSpeedTmp, slideSpeed, Time.deltaTime * slopeAngle * 0.015f);
						moveDirection *= slidingSpeedTmp;
					}
					else
					{
						// Otherwise recalculate moveDirection directly from axes, adding a bit of -y to avoid bumping down inclines
						moveDirection = new Vector3(inputX * inputModifyFactor, 0, inputY * inputModifyFactor);
						moveDirection = myTransform.TransformDirection(moveDirection) * speed;

						//Continue slide
						moveDirection += slidingDirection * slidingSpeedTmp;
						slidingDirection = Vector3.Lerp(slidingDirection, Vector3.zero, Time.deltaTime * 1.5f);
						slidingSpeedTmp = Mathf.Lerp(slidingSpeedTmp, 0, Time.deltaTime * 1.5f);
					}

#if UNITY_ANDROID || UNITY_IOS || UNITY_WP8 || UNITY_WP8_1


					//Crouching
					if (GameSettings.mobileCrounch && !GameSettings.menuOpened)
					{
						if (!isCrouching)
						{
							isCrouching = true;
						}
						else
						{
							if (CanGetUp())
							{
								isCrouching = false;
								walkSpeed = 6.75f;
								movementState = 0;
							}
						}

						this.StopCoroutine(MoveCameraCrouch());
						this.StartCoroutine(MoveCameraCrouch());
					}

					if (isCrouching)
					{
						walkSpeed = 3.0f;
						movementState = 2;
					}

					if (GameSettings.mobileCrounch)
					{
						GameSettings.mobileCrounch = false;
					}

					//Jumping mobile
					if (GameSettings.mobileJumping && !GameSettings.menuOpened)
					{
						if (isCrouching)
						{
							if (CanGetUp())
							{
								isCrouching = false;
								walkSpeed = 6.75f;
								movementState = 0;
								this.StopCoroutine(MoveCameraCrouch());
								this.StartCoroutine(MoveCameraCrouch());
							}
						}
						else
						{
							moveDirection.y = jumpSpeed;
						}
					}

					if (GameSettings.mobileJumping)
					{
						GameSettings.mobileJumping = false;
					}

#else
                    //Jumping
                    if (Input.GetKeyDown(GameSettings.playerKeys[12]) && !GameSettings.menuOpened)
                    {
                        if (isCrouching)
                        {
                            if (CanGetUp())
                            {
                                isCrouching = false;
                                this.StopCoroutine(MoveCameraCrouch());
                                this.StartCoroutine(MoveCameraCrouch());
                            }
                        }
                        else
                        {
                            moveDirection.y = jumpSpeed;
                        }
                    }
#endif

				}
				else
				{
					// If we stepped over a cliff or something, set the height at which we started falling ###
					if (!falling)
					{
						falling = true;
						fallStartLevel = myTransform.position.y;
					}

					// If air control is allowed, check movement but don't touch the y component
					if (airControl)
					{
						moveDirection.x = inputX * speed * inputModifyFactor;
						moveDirection.z = inputY * speed * inputModifyFactor;
						moveDirection = myTransform.TransformDirection(moveDirection);
					}

					movementState = 3; //In Air
				}

				// Apply gravity
				moveDirection.y -= gravity * Time.deltaTime;
			}
			else
			{
				//Our player is climbing Ladder ###
				falling = true;
				fallStartLevel = myTransform.position.y;

				if (!GameSettings.menuOpened)
				{
					moveDirection = climbingDirection * inputY * ladderSpeed * inputModifyFactor * ((playerCamera.forward.y > climbDownThreshold) ? 1 : -1);
					moveDirection.x = inputX * ladderSpeed / 1.75f * inputModifyFactor;
					moveDirection.z = inputY * ladderSpeed / 1.75f * inputModifyFactor;
					moveDirection = currentLadder.TransformDirection(moveDirection);

					ladderAngle = Vector3.Angle(myTransform.position - currentLadder.position, myTransform.forward);
					if (ladderAngle < 90)
					{
						RemoveLadder(currentLadder);
					}

					if (Input.GetKeyDown(KeyCode.Space))
					{
						moveDirection.y = jumpSpeed;
						moveDirection.z = -3.5f;
						moveDirection = currentLadder.TransformDirection(moveDirection);
						RemoveLadder(currentLadder);
					}
				}

				movementState = 4; //On Ladder
			}
		}
		else
		{
			//Continue applying gravity even after our player was killed
			if (!isGrounded)
			{
				moveDirection.y -= gravity * Time.deltaTime;
			}
			else
			{
				moveDirection = Vector3.Lerp(moveDirection, Vector3.zero, Time.deltaTime * 1.5f);
			}
		}

		// Move the controller, and set grounded true or false depending on whether we're standing on something
		isGrounded = (controller.Move(moveDirection * Time.deltaTime) & CollisionFlags.Below) != 0;

		// Do not turn off is grounded flag only due to small obstacles otherwise it will start to do a lot of jumps on ground as well

		var rayOrigin = new Vector3(controller.transform.position.x, controller.transform.position.x - controller.height / 2, controller.transform.position.z);
		var rayDirection = Vector3.down;
		var maximumDistance = 5f;
		//var layerMask = 


		if (Physics.Raycast(rayOrigin, Vector3.down,out RaycastHit hitInfo, maximumDistance))
        {

        }

		isMoving = controller.velocity.magnitude > 0.15f;
	}

	void FixedUpdate()
	{
		if (isGrounded)
		{
			// See if surface immediately below should be slid down. We use this normally rather than a ControllerColliderHit point,
			// because that interferes with step climbing amongst other annoyances
			if (Physics.Raycast(myTransform.position, -Vector3.up, out hit, rayDistance))
			{
				slopeAngle = Vector3.Angle(hit.normal, Vector3.up);
				sliding = slopeAngle > slideLimit;
			}
			else
			{
				// However, just raycasting straight down from the center can fail when on steep slopes
				// So if the above raycast didn't catch anything, raycast down from the stored ControllerColliderHit point instead
				//Physics.Raycast(contactPoint + Vector3.up, -Vector3.up, out hit);
				//sliding = Vector3.Angle(hit.normal, Vector3.up) > slideLimit;
				sliding = false;
			}
		}
	}

	//Check if player can get up from crouch position
	bool CanGetUp()
	{
		Ray platformRay = new Ray(myTransform.position, myTransform.up);
		RaycastHit platformHit;

		if (Physics.SphereCast(platformRay, controller.radius + 0.05f, out platformHit, rayDistance, layerMask))
		{
			if (Vector3.Distance(myTransform.position, platformHit.point) < 2.3f)
			{
				return false;
			}
		}

		return true;
	}

	IEnumerator MoveCameraCrouch()
	{
		controller.height = isCrouching ? defaultControllerHeight * 0.5f : defaultControllerHeight;
		controller.center = isCrouching ? new Vector3(0, -0.37f, 0) : Vector3.zero;
		camHeight = isCrouching ? defaultCamPos.y - 0.5f : defaultCamPos.y;

		while (Mathf.Abs(camHeight - firstPersonView.localPosition.y) > 0.01f)
		{
			firstPersonView.localPosition = Vector3.Lerp(firstPersonView.localPosition, new Vector3(defaultCamPos.x, camHeight, defaultCamPos.z), Time.deltaTime * 11);
			yield return null;
		}
	}

	// Store point that we're in contact with for use in FixedUpdate if needed
	/*void OnControllerColliderHit (ControllerColliderHit hit) 
    {
		contactPoint = hit.point;
	}*/

	// If falling damage occured, this is the place to do something about it. You can make the player
	// have hitpoints and remove some of them based on the distance fallen, add sound effects, etc.
	void FallingDamageAlert(float fallDistance)
	{
		print("Ouch! Fell " + fallDistance + " units!");
		fallSlowDown = 0.35f;
		firstPersonViewRotation = new Vector3(firstPersonViewRotation.x, firstPersonViewRotation.y, 7);

		int[] values = new int[3];
		values[0] = -(int)fallDistance * 3; //What weapon we used to make damage
		values[1] = -35; //What body part we hit, this should be -35 to indicate that we fell down
		values[2] = -1; //What side of player was hit (For hit marks), this is assigned later at HitBox.cs

		pn.ApplyDamage(values);
	}
}