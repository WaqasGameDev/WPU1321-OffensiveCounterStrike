using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEditorInternal;

[CustomEditor(typeof(PlayerWeapons))]
public class PlayerWeaponsEditor : Editor
{
	
	bool showPrimaryWeapons = true;
	bool showSecondaryWeapons = true;
	bool showSpecialWeapons = true;
	bool showGrenade = true;
	bool showFlash = true;
	bool showC4 = true;

	bool showPrimaryWeaponsPrevious = false;
	bool showSecondaryWeaponsPrevious = false;
	bool showSpecialWeaponsPrevious = false;
	bool showGrenadePrevious = false;
	bool showFlashPrevious = false;
	bool showC4Previous = false;

	int highlightIndex = 0;

	string statusString;

	GUIStyle foldoutStyleNew = new GUIStyle(EditorStyles.foldout);

	private void OnEnable()
    {
		PlayerWeapons myTarget = (PlayerWeapons)target;

		statusString = "Ready...";

		//Check if selected indexes within range
		if(myTarget.selectedPrimary < 0 || myTarget.selectedPrimary > myTarget.primaryWeapons.Count - 1)
        {
			myTarget.selectedPrimary = 0;
		}
		if(myTarget.selectedSecondary < 0 || myTarget.selectedSecondary > myTarget.secondaryWeapons.Count - 1)
        {
			myTarget.selectedSecondary = 0;
		}
		if(myTarget.selectedSpecial < 0 || myTarget.selectedSpecial > myTarget.specialWeapons.Count - 1)
        {
			myTarget.selectedSpecial = 0;
		}
		if(myTarget.selectedGrenade < 0 || myTarget.selectedGrenade > myTarget.Grenade.Count - 1)
		{
			myTarget.selectedGrenade = 0;
		}
		if(myTarget.selectedFlash < 0 || myTarget.selectedFlash > myTarget.Flash.Count - 1)
		{
			myTarget.selectedFlash = 0;
		}
		if(myTarget.selectedC4 < 0 || myTarget.selectedC4 > myTarget.C4.Count - 1)
		{
			myTarget.selectedC4 = 0;
		}

		if(EditorPrefs.HasKey("FoldOutStates"))
        {
			string foldOutStates = EditorPrefs.GetString("FoldOutStates");
			showPrimaryWeapons = foldOutStates[0] == 'T';
			showSecondaryWeapons = foldOutStates[1] == 'T';
			showSpecialWeapons = foldOutStates[2] == 'T';
			showGrenade = foldOutStates[3] == 'T';
			showFlash = foldOutStates[4] == 'T';
			showC4 = foldOutStates[5] == 'T';
		}

		foldoutStyleNew.fontStyle = FontStyle.Bold;

		Undo.RegisterCompleteObjectUndo (target, "PlayerWeaponsUndoRedo");
	}

	public override void OnInspectorGUI()
    {
		PlayerWeapons myTarget = (PlayerWeapons)target;

		myTarget.playerCamera = EditorGUILayout.ObjectField("Player Camera", myTarget.playerCamera, typeof(Transform), true) as Transform;
		myTarget.weaponCamera = EditorGUILayout.ObjectField("Weapon Camera", myTarget.weaponCamera, typeof(Camera), true) as Camera;


		myTarget.concreteParticles= EditorGUILayout.ObjectField("Concrete Particles", myTarget.concreteParticles, typeof(GameObject), true) as GameObject;
		myTarget.metalParticles = EditorGUILayout.ObjectField("Metal Particles", myTarget.metalParticles, typeof(GameObject), true) as GameObject;
		myTarget.bloodParticles = EditorGUILayout.ObjectField("Blood Particles", myTarget.bloodParticles, typeof(GameObject), true) as GameObject;
		myTarget.scopeModel = EditorGUILayout.ObjectField("ScopeModel", myTarget.scopeModel, typeof(GameObject), true) as GameObject;

		myTarget.scopeModelMuzleflash1 = EditorGUILayout.ObjectField("ScopeModelMuzleFlash1", myTarget.scopeModelMuzleflash1, typeof(GameObject), true) as GameObject;
		myTarget.scopeModelMuzleflash2 = EditorGUILayout.ObjectField("ScopeModelMuzleFlash2", myTarget.scopeModelMuzleflash2, typeof(GameObject), true) as GameObject;
		myTarget.firstPersonAudioSource = EditorGUILayout.ObjectField("First Person Audio Source", myTarget.firstPersonAudioSource, typeof(AudioSource), true) as AudioSource;
		myTarget.thirdPersonAudioSource = EditorGUILayout.ObjectField("Third Person Audio Source", myTarget.thirdPersonAudioSource, typeof(AudioSource), true) as AudioSource;

		showPrimaryWeapons = EditorGUILayout.Foldout(showPrimaryWeapons, "Primary Weapons");
		if(showPrimaryWeapons)
        {
			DisplayWeaponUnit (myTarget.primaryWeapons, 1);
		}

		showSecondaryWeapons = EditorGUILayout.Foldout(showSecondaryWeapons, "Secondary Weapons"); 
		if(showSecondaryWeapons)
        {
			DisplayWeaponUnit (myTarget.secondaryWeapons, 2);
		}

		showSpecialWeapons = EditorGUILayout.Foldout(showSpecialWeapons, "Special Weapons"); 
		if(showSpecialWeapons)
        {
			DisplayWeaponUnit (myTarget.specialWeapons, 3);
		}

		showGrenade = EditorGUILayout.Foldout(showGrenade, "Grenade");
		if(showGrenade)
		{
			DisplayWeaponUnit (myTarget.Grenade, 4);
		}

		showFlash = EditorGUILayout.Foldout(showFlash, "FlashBang"); 
		if(showFlash)
		{
			DisplayWeaponUnit (myTarget.Flash, 5);
		}

		showC4 = EditorGUILayout.Foldout(showC4, "C4"); 
		if(showC4)
		{
			DisplayWeaponUnit (myTarget.C4, 6);
		}

		EditorGUILayout.LabelField(statusString, EditorStyles.miniLabel);

		if(GUILayout.Button("Refresh Weapons"))
        {
			AutoAssignPlayerWeapons();
		}

		/*if(GUILayout.Button("Clear All"))
        {
			myTarget.primaryWeapons.Clear();
			myTarget.secondaryWeapons.Clear();
			myTarget.specialWeapons.Clear();
		}*/

		if(
			showPrimaryWeaponsPrevious != showPrimaryWeapons || 
			showSecondaryWeaponsPrevious != showSecondaryWeapons ||
			showSpecialWeaponsPrevious != showSpecialWeapons || 
			showGrenadePrevious != showGrenade || 
			showFlashPrevious != showFlash ||
			showC4Previous != showC4
		)
        {

			showPrimaryWeaponsPrevious = showPrimaryWeapons;
			showSecondaryWeaponsPrevious = showSecondaryWeapons;
			showSpecialWeaponsPrevious = showSpecialWeapons;
			showGrenadePrevious = showGrenade;
			showFlashPrevious = showFlash;
			showC4Previous = showC4;

			//Set Editor prefs
			string foldOutStates = "";
			foldOutStates += showPrimaryWeapons ? "T" : "F";
			foldOutStates += showSecondaryWeapons ? "T" : "F";
			foldOutStates += showSpecialWeapons ? "T" : "F";
			foldOutStates += showGrenade ? "T" : "F";
			foldOutStates += showFlash ? "T" : "F";
			foldOutStates += showC4 ? "T" : "F";
			EditorPrefs.SetString("FoldOutStates",  foldOutStates);

			//Debug.Log("Set EditorPrefs");
		}

		if(GUI.changed)
        {
			EditorUtility.SetDirty( target );
			Undo.RegisterCompleteObjectUndo (target, "PlayerWeaponsUndoRedo");
			//Debug.Log("Custom GUI changed for PlayerWeapons.cs");
		}
	}

	void DisplayWeaponUnit (List<PlayerWeapons.WeaponSet> wsets, int type)
    {
		PlayerWeapons myTarget = (PlayerWeapons)target;

		for(int i = 0; i < wsets.Count; i++)
        {
			EditorGUILayout.BeginVertical("box");
				if(wsets[i].firstPersonWeapon != null)
                {
					EditorGUILayout.BeginHorizontal();
						//EditorGUILayout.LabelField("Weapon Name", wsets[i].firstPersonWeapon.name, EditorStyles.boldLabel);
						GUILayout.Space(15);
						wsets[i].showThis = EditorGUILayout.Foldout(wsets[i].showThis, wsets[i].firstPersonWeapon.name, foldoutStyleNew);
						if(wsets[i].thirdPersonWeapon == null)
                        {
							GUILayout.FlexibleSpace();
							GUI.color = Color.yellow;
							GUILayout.Label("[TPW Mising]", EditorStyles.miniLabel);
						}
					EditorGUILayout.EndHorizontal();

					GUI.color = Color.white;

					if(wsets[i].showThis)
                    {
						wsets[i].weaponCost = EditorGUILayout.IntField("Weapon Cost", wsets[i].weaponCost);
						wsets[i].fireType = (PlayerWeapons.FireType)EditorGUILayout.EnumPopup("Fire Type", wsets[i].fireType);
						wsets[i].timeToDeploy = EditorGUILayout.FloatField("Time To Deploy", wsets[i].timeToDeploy);
						wsets[i].reloadTime = EditorGUILayout.FloatField("Reload Time", wsets[i].reloadTime);
						wsets[i].fireRate = EditorGUILayout.FloatField("Fire Rate", wsets[i].fireRate);
						wsets[i].bulletsPerClip = EditorGUILayout.IntField("Bullets Per Clip", wsets[i].bulletsPerClip);
						wsets[i].reserveBullets = EditorGUILayout.IntField("Reserve Bullets", wsets[i].reserveBullets);
						wsets[i].clipOutTime = EditorGUILayout.FloatField("ClipOut Time", wsets[i].clipOutTime);
						wsets[i].clipInTime = EditorGUILayout.FloatField("ClipIn Time", wsets[i].clipInTime);
						wsets[i].clipPullTime = EditorGUILayout.FloatField("ClipPull Time", wsets[i].clipPullTime);
						
						wsets[i].fireSound = EditorGUILayout.ObjectField("Fire Sound", wsets[i].fireSound, typeof(AudioClip), false) as AudioClip;
						wsets[i].clipOut = EditorGUILayout.ObjectField("Reload Clip Out", wsets[i].clipOut, typeof(AudioClip), false) as AudioClip;
						wsets[i].clipIn = EditorGUILayout.ObjectField("Reload Clip In", wsets[i].clipIn, typeof(AudioClip), false) as AudioClip;
						wsets[i].clipPull = EditorGUILayout.ObjectField("Reload Clip Pull", wsets[i].clipPull, typeof(AudioClip), false) as AudioClip;
						wsets[i].takeInSound = EditorGUILayout.ObjectField("Take In Sound", wsets[i].takeInSound, typeof(AudioClip), false) as AudioClip;

						wsets[i].headDamage = EditorGUILayout.IntField("Head Damage", wsets[i].headDamage);
						wsets[i].torsoDamage = EditorGUILayout.IntField("Torso Damage", wsets[i].torsoDamage);
						wsets[i].limbsDamage = EditorGUILayout.IntField("Limbs Damage", wsets[i].limbsDamage);

						wsets[i].aimType = (PlayerWeapons.AimType)EditorGUILayout.EnumPopup("Aim Type", wsets[i].aimType);

						if(wsets[i].aimType == PlayerWeapons.AimType.CameraOnly || wsets[i].aimType == PlayerWeapons.AimType.CameraAndIronsights)
                        {
							wsets[i].aimFOV = EditorGUILayout.Slider("Aim FOV", wsets[i].aimFOV, 3, GameSettings.defaultFOV);
						}

						if(wsets[i].aimType == PlayerWeapons.AimType.CameraOnly)
                        {
							wsets[i].scopeTexture = EditorGUILayout.ObjectField("Scope Texture", wsets[i].scopeTexture, typeof(Sprite), false) as Sprite;
						}

						if(wsets[i].aimType == PlayerWeapons.AimType.CameraAndIronsights)
                        {
							wsets[i].aimObject = EditorGUILayout.ObjectField("Aim Object", wsets[i].aimObject, typeof(Transform), true) as Transform;
						}

						wsets[i].gunPreview = EditorGUILayout.ObjectField("Gun Texture", wsets[i].gunPreview, typeof(Texture), false) as Texture;

						EditorGUILayout.BeginHorizontal();
							if(GUILayout.Button("Highlight",  EditorStyles.miniButton, GUILayout.Width(75)))
                            {
								if(highlightIndex == 0 || wsets[i].thirdPersonWeapon == null)
                                {
									EditorGUIUtility.PingObject(wsets[i].firstPersonWeapon.gameObject);
									highlightIndex = 1;
								}
                                else
                                {
									EditorGUIUtility.PingObject(wsets[i].thirdPersonWeapon.gameObject);
									highlightIndex = 0;
								}
							}

							GUILayout.FlexibleSpace();
							
							if(type == 1 && myTarget.selectedPrimary != i ||
					   			type == 2  && myTarget.selectedSecondary != i ||
									type == 3 && myTarget.selectedSpecial != i ||
										type == 4 && myTarget.selectedGrenade != i ||
											type == 5 && myTarget.selectedFlash != i ||
												type == 6 && myTarget.selectedC4 != i 
				  		 	)
                            {
								if(GUILayout.Button("Select",  EditorStyles.miniButton, GUILayout.Width(75)))
                                {
									if(type == 1)
                                    {
										myTarget.selectedPrimary = i;
									}
									if(type == 2)
                                    {
										myTarget.selectedSecondary = i;
									}
									if(type == 3)
                                    {
										myTarget.selectedSpecial = i;
									}
									if(type == 4)
									{
										myTarget.selectedGrenade = i;
									}
									if(type == 5)
									{
										myTarget.selectedFlash = i;
									}
									if(type == 6)
									{
										myTarget.selectedC4 = i;
									}
								}
							}
                            else
                            {
								GUILayout.Label("Selected", EditorStyles.whiteMiniLabel, GUILayout.Height(15));
							}

							//Uncomment this to able move elements up down on the list
							/*if(i > 0)
                            {
								if(GUILayout.Button("Move Up",  EditorStyles.miniButton, GUILayout.Width(75)))
                                {
									MoveWeapon(wsets, i, true);
								}
							}
							if(i != wsets.Count -1)
                            {
								if(GUILayout.Button("Move Down",  EditorStyles.miniButton, GUILayout.Width(75)))
                                {
									MoveWeapon(wsets, i, false);
								}
							}*/
						EditorGUILayout.EndHorizontal();
					}
				}
                else
                {
					EditorGUILayout.BeginHorizontal();
						GUILayout.Space(15);
						GUI.color = Color.yellow;
						EditorGUILayout.Foldout(true, "This field is empty, press Refresh Weapons to remove it", foldoutStyleNew);
						GUI.color = Color.white;
					EditorGUILayout.EndHorizontal();
				}
			EditorGUILayout.EndVertical();
		}
	}

	void MoveWeapon (List<PlayerWeapons.WeaponSet> wsets, int index, bool up)
    {
		PlayerWeapons.WeaponSet set = wsets[index];
		wsets.RemoveAt(index);
		if(up)
        {
			wsets.Insert(index - 1, set);
		}
        else
        {
			wsets.Insert(index + 1, set);
		}
	}

	void AutoAssignPlayerWeapons ()
    {
		PlayerWeapons myTarget = (PlayerWeapons)target;

		int newWeapons = 0;

		//Clear empty weapons
		for(int i = myTarget.primaryWeapons.Count - 1; i > -1; i--)
        {
			if( myTarget.primaryWeapons[i].firstPersonWeapon == null ||  myTarget.primaryWeapons[i].firstPersonWeapon.weaponType != FPSWeapon.WeaponType.Primary)
            {
				myTarget.primaryWeapons.RemoveAt(i);
			}
		}
		for(int i = myTarget.secondaryWeapons.Count - 1; i > -1; i--)
        {
			if(myTarget.secondaryWeapons[i].firstPersonWeapon == null || myTarget.secondaryWeapons[i].firstPersonWeapon.weaponType != FPSWeapon.WeaponType.Secondary)
            {
				myTarget.secondaryWeapons.RemoveAt(i);
			}
		}
		for(int i = myTarget.specialWeapons.Count - 1; i > -1; i--)
        {
			if(myTarget.specialWeapons[i].firstPersonWeapon == null || myTarget.specialWeapons[i].firstPersonWeapon.weaponType != FPSWeapon.WeaponType.Special)
            {
				myTarget.specialWeapons.RemoveAt(i);
			}
		}
		for(int i = myTarget.Grenade.Count - 1; i > -1; i--)
		{
			if( myTarget.Grenade[i].firstPersonWeapon == null ||  myTarget.Grenade[i].firstPersonWeapon.weaponType != FPSWeapon.WeaponType.Grenade)
			{
				myTarget.Grenade.RemoveAt(i);
			}
		}
		for(int i = myTarget.Flash.Count - 1; i > -1; i--)
		{
			if(myTarget.Flash[i].firstPersonWeapon == null || myTarget.Flash[i].firstPersonWeapon.weaponType != FPSWeapon.WeaponType.Flash)
			{
				myTarget.Flash.RemoveAt(i);
			}
		}
		for(int i = myTarget.C4.Count - 1; i > -1; i--)
		{
			if(myTarget.C4[i].firstPersonWeapon == null || myTarget.C4[i].firstPersonWeapon.weaponType != FPSWeapon.WeaponType.C4)
			{
				myTarget.C4.RemoveAt(i);
			}
		}

		//Find first person weapons
		FPSWeapon[] tmpWeapons = myTarget.firstPersonAudioSource.GetComponentsInChildren<FPSWeapon>(true);

		for(int i = 0; i < tmpWeapons.Length; i++)
        {
			bool canBeAdded = true;

			if(tmpWeapons[i].weaponType == FPSWeapon.WeaponType.Primary)
            {
				for(int a = 0; a < myTarget.primaryWeapons.Count; a++)
                {
					if(myTarget.primaryWeapons[a].firstPersonWeapon == tmpWeapons[i])
                    {
						canBeAdded = false;
					}
				}

				if(canBeAdded)
                {
					myTarget.primaryWeapons.Add(new PlayerWeapons.WeaponSet(tmpWeapons[i], null));
					newWeapons ++;
				}
			}

			if(tmpWeapons[i].weaponType == FPSWeapon.WeaponType.Secondary)
            {
				for(int a = 0; a < myTarget.secondaryWeapons.Count; a++)
                {
					if(myTarget.secondaryWeapons[a].firstPersonWeapon == tmpWeapons[i])
                    {
						canBeAdded = false;
					}
				}
				
				if(canBeAdded)
                {
					myTarget.secondaryWeapons.Add(new PlayerWeapons.WeaponSet(tmpWeapons[i], null));
					newWeapons ++;
				}
			}
			if(tmpWeapons[i].weaponType == FPSWeapon.WeaponType.Special)
            {
				for(int a = 0; a < myTarget.specialWeapons.Count; a++)
                {
					if(myTarget.specialWeapons[a].firstPersonWeapon == tmpWeapons[i])
                    {
						canBeAdded = false;
					}
				}
				
				if(canBeAdded)
                {
					myTarget.specialWeapons.Add(new PlayerWeapons.WeaponSet(tmpWeapons[i], null));
					newWeapons ++;
				}
			}
			if(tmpWeapons[i].weaponType == FPSWeapon.WeaponType.Grenade)
			{
				for(int a = 0; a < myTarget.Grenade.Count; a++)
				{
					if(myTarget.Grenade[a].firstPersonWeapon == tmpWeapons[i])
					{
						canBeAdded = false;
					}
				}

				if(canBeAdded)
				{
					myTarget.Grenade.Add(new PlayerWeapons.WeaponSet(tmpWeapons[i], null));
					newWeapons ++;
				}
			}
			if(tmpWeapons[i].weaponType == FPSWeapon.WeaponType.Flash)
			{
				for(int a = 0; a < myTarget.Flash.Count; a++)
				{
					if(myTarget.Flash[a].firstPersonWeapon == tmpWeapons[i])
					{
						canBeAdded = false;
					}
				}

				if(canBeAdded)
				{
					myTarget.Flash.Add(new PlayerWeapons.WeaponSet(tmpWeapons[i], null));
					newWeapons ++;
				}
			}
			if(tmpWeapons[i].weaponType == FPSWeapon.WeaponType.C4)
			{
				for(int a = 0; a < myTarget.C4.Count; a++)
				{
					if(myTarget.C4[a].firstPersonWeapon == tmpWeapons[i])
					{
						canBeAdded = false;
					}
				}

				if(canBeAdded)
				{
					myTarget.C4.Add(new PlayerWeapons.WeaponSet(tmpWeapons[i], null));
					newWeapons ++;
				}
			}
		}

		//Now add third person weapons
		FPSWeapon[] tmpWeaponsThirdPerson = myTarget.thirdPersonAudioSource.GetComponentsInChildren<FPSWeapon>(true);

		for(int i = 0; i < tmpWeaponsThirdPerson.Length; i++)
        {
			for(int a = 0; a < myTarget.primaryWeapons.Count; a++)
            {
				if(myTarget.primaryWeapons[a].firstPersonWeapon.name.Replace(" ", "") == tmpWeaponsThirdPerson[i].name.Replace(" ", ""))
                {
					myTarget.primaryWeapons[a].thirdPersonWeapon = tmpWeaponsThirdPerson[i];
				}
			}
			
			for(int a = 0; a < myTarget.secondaryWeapons.Count; a++)
            {
				if(myTarget.secondaryWeapons[a].firstPersonWeapon.name.Replace(" ", "") == tmpWeaponsThirdPerson[i].name.Replace(" ", ""))
                {
					myTarget.secondaryWeapons[a].thirdPersonWeapon = tmpWeaponsThirdPerson[i];
				}
			}
			
			for(int a = 0; a < myTarget.specialWeapons.Count; a++)
            {
				if(myTarget.specialWeapons[a].firstPersonWeapon.name.Replace(" ", "") == tmpWeaponsThirdPerson[i].name.Replace(" ", ""))
                {
					myTarget.specialWeapons[a].thirdPersonWeapon = tmpWeaponsThirdPerson[i];
				}
			}
			for(int a = 0; a < myTarget.Grenade.Count; a++)
			{
				if(myTarget.Grenade[a].firstPersonWeapon.name.Replace(" ", "") == tmpWeaponsThirdPerson[i].name.Replace(" ", ""))
				{
					myTarget.Grenade[a].thirdPersonWeapon = tmpWeaponsThirdPerson[i];
				}
			}

			for(int a = 0; a < myTarget.Flash.Count; a++)
			{
				if(myTarget.Flash[a].firstPersonWeapon.name.Replace(" ", "") == tmpWeaponsThirdPerson[i].name.Replace(" ", ""))
				{
					myTarget.Flash[a].thirdPersonWeapon = tmpWeaponsThirdPerson[i];
				}
			}

			for(int a = 0; a < myTarget.C4.Count; a++)
			{
				if(myTarget.C4[a].firstPersonWeapon.name.Replace(" ", "") == tmpWeaponsThirdPerson[i].name.Replace(" ", ""))
				{
					myTarget.C4[a].thirdPersonWeapon = tmpWeaponsThirdPerson[i];
				}
			}
		}

		if(newWeapons == 0)
        {
			statusString = "No new weapons found";
		}
        else
        {
			statusString = "Added " + newWeapons.ToString() + " new weapons";
		}
	}
}
