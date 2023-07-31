using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;

public class BuyMenu : MonoBehaviour
{

	float screenCenterX;
	float screenCenterY;
	Vector2 wheelImageSize = new Vector2(350, 350);
	float wheelCenterX;
	float wheelCenterY;
	GUISkin guiSkin;

	//This script is enabled/disabled from RoomController.cs
	//Here player select weapons to buy

	[HideInInspector]
	public int lastSelectedWeapon;

	public enum BuySection { Primary, Secondary, Special, Sniper, ShotGuns, HalfPrimary}
	[HideInInspector]
	public BuySection buySection = BuySection.Secondary;

	public AudioClip ClickSong;
	AudioSource scoreAudioSource;
	RoomController rc;
	xmlReader xml;
	string languagesPrefsName = "SelectedLanguages";

	//Temporarily store player wepaon list
	List<PlayerWeapons.WeaponSet> primaryWeaponsTmp = new List<PlayerWeapons.WeaponSet>();
	List<PlayerWeapons.WeaponSet> secondaryWeaponsTmp = new List<PlayerWeapons.WeaponSet>();
	List<PlayerWeapons.WeaponSet> specialWeaponsTmp = new List<PlayerWeapons.WeaponSet>();
	List<PlayerWeapons.WeaponSet> grenadeTmp = new List<PlayerWeapons.WeaponSet>();
	List<PlayerWeapons.WeaponSet> flashTmp = new List<PlayerWeapons.WeaponSet>();
	
	int selectedPrimary;
	int selectedSecondary;
	int selectedSpecial;
	int selectedGrenade;
	int selectedFlash;
	int selectedC4;

	public GameObject GunScreen;
	public GunData[] GunData;

	int showGunIndex = 0;
	public void LoadGuns(int buySection)
    {
		RefreshGunData();
		switch (buySection)
        {
			case 0: //primary

				ShowGunData(primaryWeaponsTmp, BuySection.Primary);
				break;

			case 1: //Secondary

				ShowGunData(secondaryWeaponsTmp, BuySection.Secondary);
				break;

			case 2: //Special

				ShowGunData(specialWeaponsTmp, BuySection.Special);
				if (rc.ourPlayer.playerWeapons.selectedGrenade < 1)
				{
					ShowGunData(grenadeTmp, BuySection.Special);
				}
				if (rc.ourPlayer.playerWeapons.selectedFlash < 1)
				{
					ShowGunData(flashTmp, BuySection.Special);
				}
				break;

			case 3: //Sniper


				ShowGunData(primaryWeaponsTmp, BuySection.Sniper);
				break;

			case 4: //ShotGuns


				ShowGunData(primaryWeaponsTmp, BuySection.ShotGuns);
				break;

			case 5: //HalfPrimary


				ShowGunData(primaryWeaponsTmp, BuySection.HalfPrimary);
				break;
		}
    }

	private void ShowGunData(List<PlayerWeapons.WeaponSet> weaponList , BuySection buySection)
    {
		for (int i = 0; i < weaponList.Count; i++)
		{
			if(weaponList[i].weaponCost < 1 && (weaponList == secondaryWeaponsTmp || weaponList == specialWeaponsTmp))
            {
				PlayerPrefs.SetInt(weaponList[i].firstPersonWeapon.name, 1);
			}

			if (weaponList[i].BuySection == buySection)
			{
				GunData[showGunIndex].gameObject.SetActive(true);
				GunData[showGunIndex].tempBuySection = buySection;
				GunData[showGunIndex].fireType = weaponList[i].fireType;
				GunData[showGunIndex].weaponName = weaponList[i].firstPersonWeapon.name;
				GunData[showGunIndex].nameTxt.text = weaponList[i].firstPersonWeapon.name.ToString();
				Sprite newSprite = Sprite.Create((Texture2D)weaponList[i].gunPreview, new Rect(0, 0, weaponList[i].gunPreview.width, weaponList[i].gunPreview.height), Vector2.one * 0.5f);
				GunData[showGunIndex].GunIcon.sprite = newSprite;
				//CHECK GUN PRICES
				CheckGunPrices(weaponList, i );
               
				showGunIndex++;
			}
		}
		
	}

	void CheckGunPrices(List<PlayerWeapons.WeaponSet> weaponList , int weaponIndex)
    {
		if (PlayerPrefs.GetInt(weaponList[weaponIndex].firstPersonWeapon.name) == 1 )
        {
			GunData[showGunIndex].priceTxt.gameObject.SetActive(false);
			GunData[showGunIndex].equippedTxt.gameObject.SetActive(false);
			GunData[showGunIndex].onClickBtn.interactable = true;
		}
		else
        {
			GunData[showGunIndex].priceTxt.gameObject.SetActive(true);

			if ((GameSettings.cnst - weaponList[weaponIndex].obfuscatedPrice) >= (GameSettings.cnst - rc.totalCash))
			{
				if(weaponList == primaryWeaponsTmp)
                {
					GunData[showGunIndex].priceTxt.text = (GameSettings.cnst - weaponList[weaponIndex].obfuscatedPrice).ToString() + " $";
					GunData[showGunIndex].priceTxt.color = Color.red;
					GunData[showGunIndex].onClickBtn.interactable = false;
				}
				else if(weaponList == secondaryWeaponsTmp)
                {
					GunData[showGunIndex].priceTxt.text = (GameSettings.cnst - weaponList[weaponIndex].obfuscatedPrice).ToString() + " $";
					GunData[showGunIndex].priceTxt.color = Color.red;
					GunData[showGunIndex].onClickBtn.interactable = false;
				}
				else
                {
					GunData[showGunIndex].priceTxt.text = (GameSettings.cnst - weaponList[weaponIndex].obfuscatedPrice).ToString() + " $";
					GunData[showGunIndex].priceTxt.color = Color.red;
					GunData[showGunIndex].onClickBtn.interactable = false;
				}
				
			}
			else
			{
				GunData[showGunIndex].onClickBtn.interactable = true;
				if (weaponList == primaryWeaponsTmp)
				{
					GunData[showGunIndex].priceTxt.text = (GameSettings.cnst - weaponList[weaponIndex].obfuscatedPrice).ToString() + " $";
				}
				else if (weaponList == secondaryWeaponsTmp)
				{
					GunData[showGunIndex].priceTxt.text = (GameSettings.cnst - weaponList[weaponIndex].obfuscatedPrice).ToString() + " $";
				}
				else
				{
					GunData[showGunIndex].priceTxt.text = (GameSettings.cnst - weaponList[weaponIndex].obfuscatedPrice).ToString() + " $";
				}
				
			}
		}

		// Check if gun is in player inventry
		if (weaponIndex == PlayerPrefs.GetInt(GameSettings.LastSelectedPrimaryGun) && weaponList == primaryWeaponsTmp)
		{
			GunData[showGunIndex].equippedTxt.gameObject.SetActive(true);
		}
		else if (weaponIndex == PlayerPrefs.GetInt(GameSettings.LastSelectedSecondaryGun) && weaponList == secondaryWeaponsTmp)
		{
			GunData[showGunIndex].equippedTxt.gameObject.SetActive(true);
		}


	}

	public void RefreshGunData()
    {
		showGunIndex = 0;

		for(int i = 0; i < GunData.Length; i++)
        {
			GunData[i].gameObject.SetActive(false);
			GunData[i].priceTxt.color = Color.green;
			GunData[i].equippedTxt.gameObject.SetActive(false);
			GunData[showGunIndex].onClickBtn.interactable = true;
		} 
	}

	public void BuyGun(int GunBtnIndex)
    {
		RefreshGunData();
		switch(GunData[GunBtnIndex].tempBuySection)
        {
			case BuySection.Primary:

				Buy(primaryWeaponsTmp, GunBtnIndex, 1);
				ShowGunData(primaryWeaponsTmp, BuySection.Primary);

				break;

			case BuySection.Secondary:

				Buy(secondaryWeaponsTmp, GunBtnIndex, 2);
				ShowGunData(secondaryWeaponsTmp, BuySection.Secondary);

				break;

			case BuySection.Special:

				if(GunData[GunBtnIndex].fireType == specialWeaponsTmp[0].fireType)
                {
					Buy(specialWeaponsTmp, GunBtnIndex, 3);
				}
				else if (GunData[GunBtnIndex].fireType == grenadeTmp[0].fireType)
				{
					if(rc.ourPlayer.playerWeapons.selectedGrenade < 1)
                    {
						Buy(grenadeTmp, GunBtnIndex, 4);
					}
					
				}
				else
				{
					if (rc.ourPlayer.playerWeapons.selectedFlash < 1)
                    {
						Buy(flashTmp, GunBtnIndex, 5);
					}
						
				}

				ShowGunData(specialWeaponsTmp, BuySection.Special);

				if (rc.ourPlayer.playerWeapons.selectedGrenade < 1)
                {
					ShowGunData(grenadeTmp, BuySection.Special);
				}
				else
                {
					GunData[showGunIndex].equippedTxt.gameObject.SetActive(false);
				}

				if (rc.ourPlayer.playerWeapons.selectedFlash < 1)
                {
					ShowGunData(flashTmp, BuySection.Special);
				}
				else
                {
					GunData[showGunIndex].equippedTxt.gameObject.SetActive(false);
				}
					

				break;

			case BuySection.Sniper:

				Buy(primaryWeaponsTmp, GunBtnIndex, 1);
				ShowGunData(primaryWeaponsTmp, BuySection.Sniper);

				break;

			case BuySection.ShotGuns:

				Buy(primaryWeaponsTmp, GunBtnIndex, 1);
				ShowGunData(primaryWeaponsTmp, BuySection.ShotGuns);

				break;

			case BuySection.HalfPrimary:

				Buy(primaryWeaponsTmp, GunBtnIndex, 1);
				ShowGunData(primaryWeaponsTmp, BuySection.HalfPrimary);

				break;
		}
    }

	void Buy(List<PlayerWeapons.WeaponSet> weaponList , int weaponIndex , int type)
    {

		for (int i = 0; i < weaponList.Count; i++)
		{
			if (GunData[weaponIndex].weaponName == weaponList[i].firstPersonWeapon.name)
            {
				if (PlayerPrefs.GetInt(weaponList[i].firstPersonWeapon.name) == 1)
				{
					StoreWeaponSelectedIndex(weaponList, i , type);
					GunData[weaponIndex].equippedTxt.gameObject.SetActive(true);
					rc.ourPlayer.playerWeapons.GetWeaponToSelect(lastSelectedWeapon, weaponList);
				}
				else
                {
					StoreWeaponSelectedIndex(weaponList, i, type);
					rc.SubstractCash(type);
					if(GunData[weaponIndex].tempBuySection != BuySection.Special)
                    {
						PlayerPrefs.SetInt(weaponList[i].firstPersonWeapon.name, 1);
						PlayerPrefs.Save();
					}
					
					GunData[weaponIndex].priceTxt.gameObject.SetActive(false);
					GunData[weaponIndex].equippedTxt.gameObject.SetActive(true);
					if (rc.ourPlayer)
					{
						rc.ourPlayer.playerWeapons.GetWeaponToSelect(lastSelectedWeapon, weaponList);
					}
					
				}

				return;
			}
				
			
		}
    }

	void StoreWeaponSelectedIndex(List<PlayerWeapons.WeaponSet> weaponList , int index , int type)
    {
		if(weaponList == primaryWeaponsTmp)
        {
			selectedPrimary = index;
			rc.ourPlayer.playerWeapons.selectedPrimary = selectedPrimary;
			PlayerPrefs.SetInt(GameSettings.LastSelectedPrimaryGun, selectedPrimary);
		}
		else if(weaponList == secondaryWeaponsTmp)
        {
			selectedSecondary = index;
			rc.ourPlayer.playerWeapons.selectedSecondary = selectedSecondary;
			PlayerPrefs.SetInt(GameSettings.LastSelectedSecondaryGun, selectedSecondary);
		}
		else if (weaponList == specialWeaponsTmp)
        {
			selectedSpecial = index;
			rc.ourPlayer.playerWeapons.selectedSpecial = selectedSpecial;
			PlayerPrefs.SetInt(GameSettings.LastSelectedSpecialGun, selectedSpecial);
		}
		else if (weaponList == grenadeTmp)
		{
			selectedGrenade = index;
			rc.ourPlayer.playerWeapons.selectedGrenade = 1;
			PlayerPrefs.SetInt(GameSettings.LastSelectedSpecialGun, selectedSpecial);
			//Invoke("ApplySelectedWeaponsGrenades", 0.035f);
		}
		else if (weaponList == flashTmp)
		{
			selectedFlash = index;
			rc.ourPlayer.playerWeapons.selectedFlash = 2;
			PlayerPrefs.SetInt(GameSettings.LastSelectedSpecialGun, selectedSpecial);
		}

		lastSelectedWeapon = type;
		
		PlayerPrefs.SetInt(GameSettings.LastSelectedType, type);

		for (int i = 0; i < GunData.Length; i++)
		{
			GunData[i].equippedTxt.gameObject.SetActive(false);
		}
	}














	public void CloseGunMenu()
    {
		GunScreen.SetActive(false);
    }

	//Sort weapons by their cost

	// Use this for initialization
	public void Weapons ()
    {
		scoreAudioSource = GetComponent<AudioSource>();
		xml = GetComponent<xmlReader>();
		rc = GetComponent<RoomController>();
		xml.currentLanguage = PlayerPrefs.GetInt(languagesPrefsName);

		primaryWeaponsTmp.Clear();
		secondaryWeaponsTmp.Clear();
		specialWeaponsTmp.Clear();
		grenadeTmp.Clear();
		flashTmp.Clear();

		//Here we get all available weapons, sort them, obfusctae price and making them ready to use in game
		if(rc.ourPlayer)
        {
			PlayerWeapons pwTmp = rc.ourPlayer.GetComponent<PlayerNetwork>().playerWeapons;
			
			selectedPrimary = pwTmp.selectedPrimary;
			selectedSecondary = pwTmp.selectedSecondary;
			selectedSpecial = pwTmp.selectedSpecial;
			selectedGrenade = pwTmp.selectedGrenade;
			selectedFlash = pwTmp.selectedFlash;
			
			primaryWeaponsTmp.InsertRange(0, pwTmp.primaryWeapons);
			secondaryWeaponsTmp.InsertRange(0, pwTmp.secondaryWeapons);
			specialWeaponsTmp.InsertRange(0, pwTmp.specialWeapons);
			grenadeTmp.InsertRange(0, pwTmp.Grenade);
			flashTmp.InsertRange(0, pwTmp.Flash);
			
			//print (primaryWeaponsTmp.Count);
			
			if(selectedPrimary < 0 || selectedPrimary > primaryWeaponsTmp.Count - 1)
            {
				selectedPrimary = 0;
			}
			if(selectedSecondary < 0 || selectedSecondary > secondaryWeaponsTmp.Count - 1)
            {
				selectedSecondary = 0;
			}
			if(selectedSpecial < 0 || selectedSpecial > specialWeaponsTmp.Count - 1)
            {
				selectedSpecial = 0;
			}
			if(selectedGrenade < 0 || selectedGrenade > grenadeTmp.Count - 1)
			{
				selectedGrenade = 0;
			}
			if(selectedFlash < 0 || selectedFlash > flashTmp.Count - 1)
			{
				selectedFlash = 0;
			}
			
			//Set initially selected weapon to be first in the list
			PlayerWeapons.WeaponSet tmpPrimary = primaryWeaponsTmp[selectedPrimary];
			primaryWeaponsTmp.RemoveAt(selectedPrimary);
			
			PlayerWeapons.WeaponSet  tmpSecondary = secondaryWeaponsTmp[selectedSecondary];
			secondaryWeaponsTmp.RemoveAt(selectedSecondary);
			
			PlayerWeapons.WeaponSet tmpSpecial = specialWeaponsTmp[selectedSpecial];
			specialWeaponsTmp.RemoveAt(selectedSpecial);

			PlayerWeapons.WeaponSet tmpGrenade = grenadeTmp[selectedGrenade];
			grenadeTmp.RemoveAt(selectedGrenade);

			PlayerWeapons.WeaponSet tmpFlash = flashTmp[selectedFlash];
			flashTmp.RemoveAt(selectedFlash);
			
			//Sort remaining weapons by price

			
			//Add selected weapons back
			primaryWeaponsTmp.Insert(0, tmpPrimary);
			secondaryWeaponsTmp.Insert(0, tmpSecondary);
			specialWeaponsTmp.Insert(0, tmpSpecial);
			grenadeTmp.Insert(0, tmpGrenade);
			flashTmp.Insert(0, tmpFlash);
			
			selectedPrimary = 0;
			selectedSecondary = 0;
			selectedSpecial = 0;
			selectedGrenade = 0;
			selectedFlash = 0;
			
			//Obfuscate each weapon cost
			ObfuscateWeaponCost(primaryWeaponsTmp, selectedPrimary);
			ObfuscateWeaponCost(secondaryWeaponsTmp, selectedSecondary);
			ObfuscateWeaponCost(specialWeaponsTmp, selectedSpecial);
			ObfuscateWeaponCost(grenadeTmp, selectedGrenade);
			ObfuscateWeaponCost(flashTmp, selectedFlash);
		}

		this.enabled = false;
	}
		




	void ObfuscateWeaponCost (List<PlayerWeapons.WeaponSet> wpmList, int selectedIndex)
    {
		for(int i = 0; i < wpmList.Count; i++)
        {
			if(i == selectedIndex && wpmList[i].weaponCost < 1)
            {
				wpmList[i].obfuscatedPrice = GameSettings.cnst;
			}
            else
            {
				wpmList[i].obfuscatedPrice = GameSettings.cnst - wpmList[i].weaponCost;
			}
		}
	}

	//public void  ApplySelectedWeapons ()
 //   {
	//	//Check what weapons we have selected and apply them to newly spawned player
	//	if(rc.ourPlayer)
 //       {
	//		for(int i = 0; i < rc.ourPlayer.playerWeapons.primaryWeapons.Count; i++)
 //           {
	//			if(rc.ourPlayer.playerWeapons.primaryWeapons[i].firstPersonWeapon.name == primaryWeaponsTmp[selectedPrimary].firstPersonWeapon.name)
 //               {
	//				rc.ourPlayer.playerWeapons.selectedPrimary = i;
	//			}
	//		}
			
	//		for(int i = 0; i < rc.ourPlayer.playerWeapons.secondaryWeapons.Count; i++)
 //           {
	//			if(rc.ourPlayer.playerWeapons.secondaryWeapons[i].firstPersonWeapon.name == secondaryWeaponsTmp[selectedSecondary].firstPersonWeapon.name)
 //               {
	//				rc.ourPlayer.playerWeapons.selectedSecondary = i;
	//			}
	//		}
			
	//		for(int i = 0; i < rc.ourPlayer.playerWeapons.specialWeapons.Count; i++)
 //           {
	//			if(rc.ourPlayer.playerWeapons.specialWeapons[i].firstPersonWeapon.name == specialWeaponsTmp[selectedSpecial].firstPersonWeapon.name)
 //               {
	//				rc.ourPlayer.playerWeapons.selectedSpecial =  i;
	//			}
	//		}

	//		for(int i = 0; i < rc.ourPlayer.playerWeapons.Grenade.Count; i++)
	//		{
	//			if(rc.ourPlayer.playerWeapons.Grenade[i].firstPersonWeapon.name == grenadeTmp[selectedGrenade].firstPersonWeapon.name)
	//			{
	//				rc.ourPlayer.playerWeapons.selectedGrenade =  i;
	//			}
	//		}

	//		for(int i = 0; i < rc.ourPlayer.playerWeapons.Flash.Count; i++)
	//		{
	//			if(rc.ourPlayer.playerWeapons.Flash[i].firstPersonWeapon.name == flashTmp[selectedFlash].firstPersonWeapon.name)
	//			{
	//				rc.ourPlayer.playerWeapons.selectedFlash =  i;
	//			}
	//		}
			
	//		rc.ourPlayer.playerWeapons.GetWeaponToSelect(lastSelectedWeapon);
	//	}
	//}

	public void  ApplySelectedWeaponsGrenades ()
	{
		//Check what weapons we have selected and apply them to newly spawned player
		if(rc.ourPlayer)
		{

			for(int i = 0; i < rc.ourPlayer.playerWeapons.Grenade.Count; i++)
			{
				if(rc.ourPlayer.playerWeapons.Grenade[i].firstPersonWeapon.name == grenadeTmp[selectedGrenade].firstPersonWeapon.name)
				{
					rc.ourPlayer.playerWeapons.selectedGrenade =  i;
				}
			}

			for(int i = 0; i < rc.ourPlayer.playerWeapons.Flash.Count; i++)
			{
				if(rc.ourPlayer.playerWeapons.Flash[i].firstPersonWeapon.name == flashTmp[selectedFlash].firstPersonWeapon.name)
				{
					rc.ourPlayer.playerWeapons.selectedFlash =  i;
				}
			}
				
		}
	}

	//This is called from RoomController.cs when our player was killed
	public void ResetSelectedWeapons ()
    {
		selectedPrimary = 0;
		selectedSecondary = 0;
		selectedSpecial = 0;
		selectedGrenade = 0;
		selectedFlash = 0;

#if UNITY_ANDROID || UNITY_IOS || UNITY_WP8 || UNITY_WP8_1
        GameSettings.switchWeaponIndex = 1;
#endif

    }

	//This is called from RoomController.cs when buying new weapon
	public int GetWeaponCost (int type)
    {
		if(type == 1)
        {
			return GameSettings.cnst - primaryWeaponsTmp[selectedPrimary].obfuscatedPrice;
		}

		if(type == 2)
        {
			return GameSettings.cnst - secondaryWeaponsTmp[selectedSecondary].obfuscatedPrice;
		}

		if(type == 3)
        {
			return GameSettings.cnst - specialWeaponsTmp[selectedSpecial].obfuscatedPrice;
		}

		if(type == 4)
		{
			return GameSettings.cnst - grenadeTmp[selectedGrenade].obfuscatedPrice;
		}

		if(type == 5)
		{
			return GameSettings.cnst - flashTmp[selectedFlash].obfuscatedPrice;
		}

		return -1;
	}

    // Update is called once per frame
    //void OnGUI()
    //{
    //    guiSkin = GameSettings.theRawGuiSkin;
    //    screenCenterX = Screen.width / 2;
    //    screenCenterY = Screen.height / 2;
    //    // Transparent buy main window
    //    GUI.Window(0, new Rect(0, 0, Screen.width, Screen.height), BuyMenuWindow, "", guiSkin.customStyles[10]);
    //}

    void Update()
	{
		if(rc != null)
        {
			if (rc.ourPlayer)
			{
				selectedSpecial = rc.ourPlayer.playerWeapons.selectedSpecial;
			}
		}
		
	}

	void BuyMenuWindow (int windowID)
    {
		var wheelRectStartingPosX = screenCenterX - wheelImageSize.x / 2 + 200;
		var wheelRectStartingPosY = screenCenterY - wheelImageSize.y / 2;

		// Wheel image
		GUI.Box(new Rect(new Vector2(wheelRectStartingPosX, wheelRectStartingPosY), wheelImageSize), GUIContent.none, guiSkin.customStyles[6]);

		wheelCenterX = wheelRectStartingPosX + wheelImageSize.x / 2;
		wheelCenterY = wheelRectStartingPosY + wheelImageSize.y / 2;

		// Minimize Button
		if (GUI.Button(new Rect(Screen.width - 50, 50, 28, 28), "", guiSkin.customStyles[9]))
		{
			rc.showBuyMenu = false;
            if (rc.offlineMode)
            {
				rc.bm.GunScreen.SetActive(false);
				//rc.bm.enabled = false;	
			}
		}

		GUI.Label(new Rect(15, 0, 300, 35), xml.button67);

		GUI.enabled = buySection != BuySection.Secondary;

		var gunBackgroungButtonStyle = GameSettings.theRawGuiSkin.customStyles[11];

		var buttonSize = new Vector2(70, 30);

		CreateWeaponButtonWithBackground(xml.button100, buttonSize, new Vector2(-105, -130), BuySection.Secondary);

		GUI.enabled = buySection != BuySection.HalfPrimary;

		CreateWeaponButtonWithBackground(xml.button101, buttonSize, new Vector2(80, -21),BuySection.HalfPrimary);

		GUI.enabled = buySection != BuySection.Primary;

		CreateWeaponButtonWithBackground(xml.button102, buttonSize, new Vector2(-145, -21), BuySection.Primary);

		GUI.enabled = buySection != BuySection.ShotGuns;

		CreateWeaponButtonWithBackground(xml.button103, buttonSize, new Vector2(18, -130), BuySection.ShotGuns);

		GUI.enabled = buySection != BuySection.Sniper;

		CreateWeaponButtonWithBackground(xml.button104, buttonSize, new Vector2(-105, 90), BuySection.Sniper);

		GUI.enabled = buySection != BuySection.Special;

		CreateWeaponButtonWithBackground(xml.button105, buttonSize, new Vector2(18, 90), BuySection.Special);

		GUI.enabled = true;
		
		if(buySection == BuySection.Secondary)
        {
			ShowWeaponItems(secondaryWeaponsTmp, selectedSecondary, 2);
		}

		if(buySection == BuySection.HalfPrimary)
		{
			ShowWeaponItems(primaryWeaponsTmp, selectedPrimary, 1);
		}

		if(buySection == BuySection.Primary)
        {
			ShowWeaponItems(primaryWeaponsTmp, selectedPrimary, 1);
		}

		if(buySection == BuySection.ShotGuns)
		{
			ShowWeaponItems(primaryWeaponsTmp, selectedPrimary, 1);
		}

		if(buySection == BuySection.Sniper)
		{
			ShowWeaponItems(primaryWeaponsTmp, selectedPrimary, 1);
		}

		if(buySection == BuySection.Special)
        {
			ShowWeaponItems(specialWeaponsTmp, selectedSpecial, 3);
			ShowWeaponItems(grenadeTmp, selectedGrenade, 4);
			ShowWeaponItems(flashTmp, selectedFlash, 5);
		}
	}

	private void CreateWeaponButtonWithBackground(string weaponName, Vector2 buttonSize, Vector2 offsets, BuySection weaponSectionToOpen)
	{
		var buyButtonBackgroundSize = new Vector2(buttonSize.x, buttonSize.y);
		var weaponBuyBackgroundRectStartingPositioX = wheelCenterX + offsets.x;
		var weaponBuyBackgroundRectStartingPositionY = wheelCenterY + offsets.y;

		var buyButtonBackgroundRect = new Rect(weaponBuyBackgroundRectStartingPositioX, weaponBuyBackgroundRectStartingPositionY, buyButtonBackgroundSize.x, buyButtonBackgroundSize.y);

		var weaponRect = new Rect(weaponBuyBackgroundRectStartingPositioX, weaponBuyBackgroundRectStartingPositionY, buyButtonBackgroundSize.x, buyButtonBackgroundSize.y);

		if (GUI.Button(weaponRect, weaponName, guiSkin.customStyles[7]))
		{
			scoreAudioSource.clip = ClickSong;
			scoreAudioSource.Play();
			buySection = weaponSectionToOpen;
		}
	}

	private GUIStyle guiStyle = new GUIStyle ();
	void ShowWeaponItems (List<PlayerWeapons.WeaponSet> weaponListTmp, int selectedIndex, int type)
	{
		var weaponButtonGuiStyle = guiSkin.customStyles[11];
		var weaponPanelGuiStyle = guiSkin.customStyles[12];
		if (weaponListTmp != null) {
			if (weaponListTmp == primaryWeaponsTmp && buySection == BuySection.Sniper) {
				GUILayout.Space (30);
				GUI.Box (new Rect (170, 39, 255, 350), "", weaponPanelGuiStyle);
				for (int i = 0; i < weaponListTmp.Count; i++) {
					GUI.enabled = true;

					GUILayout.Space (10);
					
			//		GUI.enabled = i != selectedIndex && weaponListTmp [i].obfuscatedPrice >= rc.totalCash;

					if (i == 12) {
						if(PlayerPrefs.GetInt(primaryWeaponsTmp[i].firstPersonWeapon.name) == 1)
                        {
							if (GUI.Button(new Rect(169, 39, 256, 70), i != selectedIndex ? "" : xml.button71, weaponButtonGuiStyle))
                            {
								selectedPrimary = i;
								lastSelectedWeapon = type;
								PlayerPrefs.SetInt(GameSettings.LastSelectedPrimaryGun, selectedPrimary);
								Invoke("ApplySelectedWeapons", 0.035f);
							}
							if(i == PlayerPrefs.GetInt(GameSettings.LastSelectedPrimaryGun))
                            {
								GUI.Button(new Rect(169, 39, 256, 70), xml.button71, weaponButtonGuiStyle);

							}
						}
						else
                        {
							if (GUI.Button(new Rect(169, 39, 256, 70), i != selectedIndex ? "" : xml.button71, weaponButtonGuiStyle))
							{
								if (rc.GetCash() >= GameSettings.cnst - weaponListTmp[i].obfuscatedPrice)
								{
									if (type == 1)
									{
										selectedPrimary = i;
										rc.SubstractCash(1);
										PlayerPrefs.SetInt(GameSettings.LastSelectedPrimaryGun, selectedPrimary);
										PlayerPrefs.SetInt(primaryWeaponsTmp[i].firstPersonWeapon.name, 1);
                                        PlayerPrefs.Save();
                                    }
									if (rc.ourPlayer)
									{
										lastSelectedWeapon = type;
										Invoke("ApplySelectedWeapons", 0.035f);
									}

									rc.showBuyMenu = false;
								}
							}
						}
						
					}
					if (i == 13) {
						if (PlayerPrefs.GetInt(primaryWeaponsTmp[i].firstPersonWeapon.name) == 1)
						{
							if (GUI.Button(new Rect(169, 109, 256, 70), i == selectedIndex ? xml.button71 : "" , weaponButtonGuiStyle))
                            {
								selectedPrimary = i;
								lastSelectedWeapon = type;
								PlayerPrefs.SetInt(GameSettings.LastSelectedPrimaryGun, selectedPrimary);
								Invoke("ApplySelectedWeapons", 0.035f);
							}
							if (i == PlayerPrefs.GetInt(GameSettings.LastSelectedPrimaryGun))
							{
								GUI.Button(new Rect(169, 109, 256, 70), xml.button71, weaponButtonGuiStyle);

							}
						}
						else
                        {
							if (GUI.Button(new Rect(169, 109, 256, 70), i != selectedIndex ? "" : xml.button71, weaponButtonGuiStyle))
							{
								if (rc.GetCash() >= GameSettings.cnst - weaponListTmp[i].obfuscatedPrice)
								{
									if (type == 1)
									{
										selectedPrimary = i;
										rc.SubstractCash(1);
										PlayerPrefs.SetInt(GameSettings.LastSelectedPrimaryGun, selectedPrimary);
										PlayerPrefs.SetInt(primaryWeaponsTmp[i].firstPersonWeapon.name, 1);
                                        PlayerPrefs.Save();

                                    }
									if (rc.ourPlayer)
									{
										lastSelectedWeapon = type;
										Invoke("ApplySelectedWeapons", 0.035f);
									}

									rc.showBuyMenu = false;
								}
							}
						}
						
					}


					GUI.enabled = true;

					guiStyle.fontSize = 22;
					guiStyle.alignment = TextAnchor.UpperCenter;
					guiStyle.normal.textColor = weaponListTmp[i].obfuscatedPrice >= rc.totalCash ? GameSettings.drawColor : GameSettings.customRedColor ; /*PlayerPrefs.SetInt(Sniper1, 0);*/
					if (i == 12  && PlayerPrefs.GetInt(primaryWeaponsTmp[i].firstPersonWeapon.name) == 0) {
						if (i != selectedIndex) {
							GUI.Label (new Rect (330, 66, 70, 50), (GameSettings.cnst - weaponListTmp [i].obfuscatedPrice).ToString () + " $", guiStyle);
							guiStyle.normal.textColor = Color.white;
						} else {
							GUILayout.Label ("", guiStyle);
						}
					} else if (i == 13  && PlayerPrefs.GetInt(primaryWeaponsTmp[i].firstPersonWeapon.name) == 0) {
						if (i != selectedIndex) {
                            GUI.Label(new Rect(330, 134, 70, 50), (GameSettings.cnst - weaponListTmp[i].obfuscatedPrice).ToString() + " $", guiStyle);
                            guiStyle.normal.textColor = Color.white;
                        } else {
							GUILayout.Label ("", guiStyle);
						}
					}



					if (i == 12) {
						GUI.DrawTexture (new Rect (175, 34, 150, 75), primaryWeaponsTmp [12].gunPreview);
						guiStyle.fontSize = 12;
						guiStyle.normal.textColor = Color.white;
						GUI.Label (new Rect (170, 89, 70, 70), primaryWeaponsTmp [12].firstPersonWeapon.name, guiStyle);
					}
					if (i == 13) {
						GUI.DrawTexture (new Rect (175, 104, 150, 75), primaryWeaponsTmp [13].gunPreview);
						guiStyle.fontSize = 11;
						guiStyle.normal.textColor = Color.white;
						GUI.Label (new Rect (173, 158, 70, 70), primaryWeaponsTmp [13].firstPersonWeapon.name, guiStyle);
					}

				}
			} else if (weaponListTmp == primaryWeaponsTmp && buySection == BuySection.ShotGuns) {
				GUILayout.Space (30);
				GUI.Box (new Rect (170, 39, 255, 350), "", weaponPanelGuiStyle);
				for (int i = 0; i < weaponListTmp.Count; i++) {
					GUI.enabled = true;

					GUILayout.Space (10);

					GUI.enabled = i != selectedIndex && weaponListTmp [i].obfuscatedPrice >= rc.totalCash;
					if (i == 9) {
						if (GUI.Button (new Rect (169, 39, 256, 70), i != selectedIndex ? "" : xml.button71, weaponButtonGuiStyle)) {
							if (rc.GetCash () >= GameSettings.cnst - weaponListTmp [i].obfuscatedPrice) {
								if (type == 1) {
									selectedPrimary = i;
									rc.SubstractCash (1);
								}
								if (rc.ourPlayer) {
									lastSelectedWeapon = type;
									Invoke ("ApplySelectedWeapons", 0.035f);
								}

								rc.showBuyMenu = false;
							}
						}
					}
					if (i == 10) {
						if (GUI.Button (new Rect (169, 109, 256, 70), i != selectedIndex ? "" : xml.button71, weaponButtonGuiStyle)) {
							if (rc.GetCash () >= GameSettings.cnst - weaponListTmp [i].obfuscatedPrice) {
								if (type == 1) {
									selectedPrimary = i;
									rc.SubstractCash (1);
								}
								if (rc.ourPlayer) {
									lastSelectedWeapon = type;
									Invoke ("ApplySelectedWeapons", 0.035f);
								}

								rc.showBuyMenu = false;
							}
						}
					}


					GUI.enabled = true;

					guiStyle.fontSize = 22;
					guiStyle.alignment = TextAnchor.UpperCenter;
					guiStyle.normal.textColor = weaponListTmp [i].obfuscatedPrice >= rc.totalCash ? GameSettings.drawColor : GameSettings.customRedColor;
					if (i == 9) {
						if (i != selectedIndex) {
							GUI.Label (new Rect (330, 66, 70, 50), (GameSettings.cnst - weaponListTmp [i].obfuscatedPrice).ToString () + " $", guiStyle);
							guiStyle.normal.textColor = Color.white;
						} else {
							GUILayout.Label ("", guiStyle);
						}
					} else if (i == 10) {
						if (i != selectedIndex) {
							GUI.Label (new Rect (330, 134, 70, 50), (GameSettings.cnst - weaponListTmp [i].obfuscatedPrice).ToString () + " $", guiStyle);
							guiStyle.normal.textColor = Color.white;
						} else {
							GUILayout.Label ("", guiStyle);
						}
					}


					if (i == 9) {
						GUI.DrawTexture (new Rect (175, 34, 150, 75), primaryWeaponsTmp [9].gunPreview);
						guiStyle.fontSize = 12;
						guiStyle.normal.textColor = Color.white;
						GUI.Label (new Rect (155, 89, 70, 70), primaryWeaponsTmp [9].firstPersonWeapon.name, guiStyle);
					}
					if (i == 10) {
						GUI.DrawTexture (new Rect (175, 104, 150, 75), primaryWeaponsTmp [10].gunPreview);
						guiStyle.fontSize = 12;
						guiStyle.normal.textColor = Color.white;
						GUI.Label (new Rect (173, 158, 70, 70), primaryWeaponsTmp [10].firstPersonWeapon.name, guiStyle);
					}

				}
			} else if (weaponListTmp == primaryWeaponsTmp && buySection == BuySection.HalfPrimary) {
				GUILayout.Space (30);
				GUI.Box (new Rect (170, 39, 255, 350), "", weaponPanelGuiStyle);
				for (int i = 0; i < weaponListTmp.Count; i++) {
					GUI.enabled = true;

					GUILayout.Space (10);

					GUI.enabled = i != selectedIndex && weaponListTmp [i].obfuscatedPrice >= rc.totalCash;
					if (i == 2) {
						if (GUI.Button (new Rect (169, 39, 256, 70), i != selectedIndex ? "" : xml.button71, weaponButtonGuiStyle)) {
							if (rc.GetCash () >= GameSettings.cnst - weaponListTmp [i].obfuscatedPrice) {
								if (type == 1) {
									selectedPrimary = i;
									rc.SubstractCash (1);
								}
								if (rc.ourPlayer) {
									lastSelectedWeapon = type;
									Invoke ("ApplySelectedWeapons", 0.035f);
								}

								rc.showBuyMenu = false;
							}
						}
					}
					if (i == 4) {
						if (GUI.Button (new Rect (169, 109, 256, 70), i != selectedIndex ? "" : xml.button71, weaponButtonGuiStyle)) {
							if (rc.GetCash () >= GameSettings.cnst - weaponListTmp [i].obfuscatedPrice) {
								if (type == 1) {
									selectedPrimary = i;
									rc.SubstractCash (1);
								}
								if (rc.ourPlayer) {
									lastSelectedWeapon = type;
									Invoke ("ApplySelectedWeapons", 0.035f);
								}

								rc.showBuyMenu = false;
							}
						}
					}
					if (i == 3) {
						if (GUI.Button (new Rect (169, 179, 256, 70), i != selectedIndex ? "" : xml.button71, weaponButtonGuiStyle)) {
							if (rc.GetCash () >= GameSettings.cnst - weaponListTmp [i].obfuscatedPrice) {
								if (type == 1) {
									selectedPrimary = i;
									rc.SubstractCash (1);
								}
								if (rc.ourPlayer) {
									lastSelectedWeapon = type;
									Invoke ("ApplySelectedWeapons", 0.035f);
								}

								rc.showBuyMenu = false;
							}
						}
					}
					if (i == 15) {
						if (GUI.Button (new Rect (169, 249, 256, 70), i != selectedIndex ? "" : xml.button71, weaponButtonGuiStyle)) {
							if (rc.GetCash () >= GameSettings.cnst - weaponListTmp [i].obfuscatedPrice) {
								if (type == 1) {
									selectedPrimary = i;
									rc.SubstractCash (1);
								}
								if (rc.ourPlayer) {
									lastSelectedWeapon = type;
									Invoke ("ApplySelectedWeapons", 0.035f);
								}

								rc.showBuyMenu = false;
							}
						}
					}
					if (i == 11) {
						if (GUI.Button (new Rect (169, 319, 256, 70), i != selectedIndex ? "" : xml.button71, weaponButtonGuiStyle)) {
							if (rc.GetCash () >= GameSettings.cnst - weaponListTmp [i].obfuscatedPrice) {
								if (type == 1) {
									selectedPrimary = i;
									rc.SubstractCash (1);
								}
								if (rc.ourPlayer) {
									lastSelectedWeapon = type;
									Invoke ("ApplySelectedWeapons", 0.035f);
								}

								rc.showBuyMenu = false;
							}
						}
					}

					GUI.enabled = true;

					guiStyle.fontSize = 22;
					guiStyle.alignment = TextAnchor.UpperCenter;
					guiStyle.normal.textColor = weaponListTmp [i].obfuscatedPrice >= rc.totalCash ? GameSettings.drawColor : GameSettings.customRedColor;
					if (i == 2) {
						if (i != selectedIndex) {
							GUI.Label (new Rect (330, 66, 70, 50), (GameSettings.cnst - weaponListTmp [i].obfuscatedPrice).ToString () + " $", guiStyle);
							guiStyle.normal.textColor = Color.white;
						} else {
							GUILayout.Label ("", guiStyle);
						}
					} else if (i == 4) {
						if (i != selectedIndex) {
							GUI.Label (new Rect (330, 134, 70, 50), (GameSettings.cnst - weaponListTmp [i].obfuscatedPrice).ToString () + " $", guiStyle);
							guiStyle.normal.textColor = Color.white;
						} else {
							GUILayout.Label ("", guiStyle);
						}
					} else if (i == 3) {
						if (i != selectedIndex) {
							GUI.Label (new Rect (330, 206, 70, 50), (GameSettings.cnst - weaponListTmp [i].obfuscatedPrice).ToString () + " $", guiStyle);
							guiStyle.normal.textColor = Color.white;
						} else {
							GUILayout.Label ("", guiStyle);
						}
					} else if (i == 15) {
						if (i != selectedIndex) {
							GUI.Label (new Rect (330, 275, 70, 50), (GameSettings.cnst - weaponListTmp [i].obfuscatedPrice).ToString () + " $", guiStyle);
							guiStyle.normal.textColor = Color.white;
						} else {
							GUILayout.Label ("", guiStyle);
						}
					}
					else if (i == 11) {
						if (i != selectedIndex) {
							GUI.Label (new Rect (330, 344, 70, 50), (GameSettings.cnst - weaponListTmp [i].obfuscatedPrice).ToString () + " $", guiStyle);
							guiStyle.normal.textColor = Color.white;
						} else {
							GUILayout.Label ("", guiStyle);
						}
					}


					if (i == 2) {
						GUI.DrawTexture (new Rect (200, 34, 150, 75), primaryWeaponsTmp [2].gunPreview);
						guiStyle.fontSize = 12;
						guiStyle.normal.textColor = Color.white;
						GUI.Label (new Rect (170, 89, 70, 70), primaryWeaponsTmp [2].firstPersonWeapon.name, guiStyle);
					}
					if (i == 4) {
						GUI.DrawTexture (new Rect (190, 104, 150, 75), primaryWeaponsTmp [4].gunPreview);
						guiStyle.fontSize = 12;
						guiStyle.normal.textColor = Color.white;
						GUI.Label (new Rect (160, 158, 70, 70), primaryWeaponsTmp [4].firstPersonWeapon.name, guiStyle);
					}
					if (i == 3) {
						GUI.DrawTexture (new Rect (191, 174, 150, 75), primaryWeaponsTmp [3].gunPreview);
						guiStyle.fontSize = 11;
						guiStyle.normal.textColor = Color.white;
						GUI.Label (new Rect (160, 229, 70, 70), primaryWeaponsTmp [3].firstPersonWeapon.name, guiStyle);
					}
					if (i == 15) {
						GUI.DrawTexture (new Rect (178, 246, 150, 75), primaryWeaponsTmp [15].gunPreview);
						guiStyle.fontSize = 12;
						guiStyle.normal.textColor = Color.white;
						GUI.Label (new Rect (165, 297, 70, 70), primaryWeaponsTmp [15].firstPersonWeapon.name, guiStyle);
					}
					if (i == 11) {
						GUI.DrawTexture (new Rect (175, 316, 150, 75), primaryWeaponsTmp [11].gunPreview);
						guiStyle.fontSize = 12;
						guiStyle.normal.textColor = Color.white;
						GUI.Label (new Rect (161, 365, 70, 70), primaryWeaponsTmp [11].firstPersonWeapon.name, guiStyle);
					}

				}
			} else if (weaponListTmp == primaryWeaponsTmp) {
				GUILayout.Space (30);
				GUI.Box (new Rect (170, 39, 255, 350), "", weaponPanelGuiStyle);
				for (int i = 0; i < weaponListTmp.Count; i++) {
					GUI.enabled = true;

					GUILayout.Space (10);

					GUI.enabled = i != selectedIndex && weaponListTmp [i].obfuscatedPrice >= rc.totalCash;
					if (i == 5) {
						if (GUI.Button (new Rect (169, 39, 256, 70), i != selectedIndex ? "" : xml.button71, weaponButtonGuiStyle)) {
							if (rc.GetCash () >= GameSettings.cnst - weaponListTmp [i].obfuscatedPrice) {
								if (type == 1) {
									selectedPrimary = i;
									rc.SubstractCash (1);
								}
								if (rc.ourPlayer) {
									lastSelectedWeapon = type;
									Invoke ("ApplySelectedWeapons", 0.035f);
								}

								rc.showBuyMenu = false;
							}
						}
					}
					if (i == 6) {
						if (GUI.Button (new Rect (169, 109, 256, 70), i != selectedIndex ? "" : xml.button71, weaponButtonGuiStyle)) {
							if (rc.GetCash () >= GameSettings.cnst - weaponListTmp [i].obfuscatedPrice) {
								if (type == 1) {
									selectedPrimary = i;
									rc.SubstractCash (1);
								}
								if (rc.ourPlayer) {
									lastSelectedWeapon = type;
									Invoke ("ApplySelectedWeapons", 0.035f);
								}

								rc.showBuyMenu = false;
							}
						}
					}
					if (i == 7) {
						if (GUI.Button (new Rect (169, 179, 256, 70), i != selectedIndex ? "" : xml.button71, weaponButtonGuiStyle)) {
							if (rc.GetCash () >= GameSettings.cnst - weaponListTmp [i].obfuscatedPrice) {
								if (type == 1) {
									selectedPrimary = i;
									rc.SubstractCash (1);
								}
								if (rc.ourPlayer) {
									lastSelectedWeapon = type;
									Invoke ("ApplySelectedWeapons", 0.035f);
								}

								rc.showBuyMenu = false;
							}
						}
					}
					if (i == 8) {
						if (GUI.Button (new Rect (169, 249, 256, 70), i != selectedIndex ? "" : xml.button71, weaponButtonGuiStyle)) {
							if (rc.GetCash () >= GameSettings.cnst - weaponListTmp [i].obfuscatedPrice) {
								if (type == 1) {
									selectedPrimary = i;
									rc.SubstractCash (1);
								}
								if (rc.ourPlayer) {
									lastSelectedWeapon = type;
									Invoke ("ApplySelectedWeapons", 0.035f);
								}

								rc.showBuyMenu = false;
							}
						}
					}



					GUI.enabled = true;

					guiStyle.fontSize = 22;
					guiStyle.alignment = TextAnchor.UpperCenter;
					guiStyle.normal.textColor = weaponListTmp [i].obfuscatedPrice >= rc.totalCash ? GameSettings.drawColor : GameSettings.customRedColor;
					if (i == 5) {
						if (i != selectedIndex) {
							GUI.Label (new Rect (330, 66, 70, 50), (GameSettings.cnst - weaponListTmp [i].obfuscatedPrice).ToString () + " $", guiStyle);
							guiStyle.normal.textColor = Color.white;
						} else {
							GUILayout.Label ("", guiStyle);
						}
					} else if (i == 6) {
						if (i != selectedIndex) {
							GUI.Label (new Rect (330, 134, 70, 50), (GameSettings.cnst - weaponListTmp [i].obfuscatedPrice).ToString () + " $", guiStyle);
							guiStyle.normal.textColor = Color.white;
						} else {
							GUILayout.Label ("", guiStyle);
						}
					} else if (i == 7) {
						if (i != selectedIndex) {
							GUI.Label (new Rect (330, 206, 70, 50), (GameSettings.cnst - weaponListTmp [i].obfuscatedPrice).ToString () + " $", guiStyle);
							guiStyle.normal.textColor = Color.white;
						} else {
							GUILayout.Label ("", guiStyle);
						}
					} else if (i == 8) {
						if (i != selectedIndex) {
							GUI.Label (new Rect (330, 275, 70, 50), (GameSettings.cnst - weaponListTmp [i].obfuscatedPrice).ToString () + " $", guiStyle);
							guiStyle.normal.textColor = Color.white;
						} else {
							GUILayout.Label ("", guiStyle);
						}
					} 


					if (i == 5) {
						GUI.DrawTexture (new Rect (180, 34, 150, 75), primaryWeaponsTmp [5].gunPreview);
						guiStyle.fontSize = 12;
						guiStyle.normal.textColor = Color.white;
						GUI.Label (new Rect (160, 89, 70, 70), primaryWeaponsTmp [5].firstPersonWeapon.name, guiStyle);
					}
					if (i == 6) {
						GUI.DrawTexture (new Rect (180, 104, 150, 75), primaryWeaponsTmp [6].gunPreview);
						guiStyle.fontSize = 12;
						guiStyle.normal.textColor = Color.white;
						GUI.Label (new Rect (160, 158, 70, 70), primaryWeaponsTmp [6].firstPersonWeapon.name, guiStyle);
					}
					if (i == 7) {
						GUI.DrawTexture (new Rect (180, 178, 150, 75), primaryWeaponsTmp [7].gunPreview);
						guiStyle.fontSize = 11;
						guiStyle.normal.textColor = Color.white;
						GUI.Label (new Rect (158, 229, 70, 70), "552", guiStyle);
					}
					if (i == 8) {
						GUI.DrawTexture (new Rect (175, 246, 150, 75), primaryWeaponsTmp [8].gunPreview);
						guiStyle.fontSize = 12;
						guiStyle.normal.textColor = Color.white;
						GUI.Label (new Rect (158, 297, 70, 70), "AUG", guiStyle);
					}


				}
			} else if (weaponListTmp == specialWeaponsTmp || weaponListTmp == grenadeTmp) {
				GUILayout.Space (30);
				GUI.Box (new Rect (170, 39, 255, 350), "", weaponPanelGuiStyle);
				for (int i = 0; i < weaponListTmp.Count; i++) {
					GUI.enabled = true;

					GUILayout.Space (10);

					GUI.enabled = false;
					if (i == 0) {
						if (GUI.Button (new Rect (169, 39, 256, 70), i != selectedIndex ? xml.button71 : xml.button71, weaponButtonGuiStyle)) {
						}
					}
					GUI.enabled = i != selectedIndex && weaponListTmp [i].obfuscatedPrice >= rc.totalCash;
					if (i == 1) {
						if (GUI.Button (new Rect (169, 109, 256, 70), i != selectedIndex ? "" : xml.button71, weaponButtonGuiStyle)) {
							if (rc.GetCash () >= GameSettings.cnst - weaponListTmp [i].obfuscatedPrice) {
								if (type == 4) {
									selectedGrenade = i;
									rc.SubstractCash (4);
								}
								Invoke ("ApplySelectedWeaponsGrenades", 0.035f);
							}
						}
					}
					GUI.enabled = true;


					guiStyle.fontSize = 22;
					guiStyle.alignment = TextAnchor.UpperCenter;
					guiStyle.normal.textColor = weaponListTmp [i].obfuscatedPrice >= rc.totalCash ? GameSettings.drawColor : GameSettings.customRedColor;
					if (i == 1) {
						if (i != selectedIndex) {
							GUI.Label (new Rect (330, 134, 70, 50), (GameSettings.cnst - weaponListTmp [i].obfuscatedPrice).ToString () + " $", guiStyle);
							guiStyle.normal.textColor = Color.white;
						} else {
							GUILayout.Label ("", guiStyle);
						}
					}


					if (i == 0) {
						GUI.DrawTexture (new Rect (180, 32, 150, 75), specialWeaponsTmp [0].gunPreview);
						guiStyle.fontSize = 12;
						guiStyle.normal.textColor = Color.white;
						GUI.Label (new Rect (163, 89, 70, 70), specialWeaponsTmp [0].firstPersonWeapon.name, guiStyle);
					}
					if (i == 1) {
						GUI.DrawTexture (new Rect (205, 107, 150, 75), grenadeTmp [1].gunPreview);
						guiStyle.fontSize = 12;
						guiStyle.normal.textColor = Color.white;
						GUI.Label (new Rect (175, 158, 70, 70), grenadeTmp [1].firstPersonWeapon.name, guiStyle);
					}

				}

			} 
			else if (weaponListTmp == flashTmp) {
				for (int i = 0; i < weaponListTmp.Count; i++) {
					GUI.enabled = true;
					GUILayout.Space (10);
					GUI.enabled = i != selectedIndex && weaponListTmp [i].obfuscatedPrice >= rc.totalCash;
					if (i == 2) {
						if (GUI.Button (new Rect (169, 179, 256, 70), i != selectedIndex ? "" : xml.button71, weaponButtonGuiStyle)) {
							if (rc.GetCash () >= GameSettings.cnst - weaponListTmp [i].obfuscatedPrice) {
								if (type == 5) {
									selectedFlash = i;
									rc.SubstractCash (5);
								}
								Invoke ("ApplySelectedWeaponsGrenades", 0.035f);
							}
						}
					}
					GUI.enabled = true;
					guiStyle.fontSize = 22;
					guiStyle.alignment = TextAnchor.UpperCenter;
					guiStyle.normal.textColor = weaponListTmp [i].obfuscatedPrice >= rc.totalCash ? GameSettings.drawColor : GameSettings.customRedColor;
					if (i == 2) {
						if (i != selectedIndex) {
							GUI.Label (new Rect (330, 205, 70, 50), (GameSettings.cnst - weaponListTmp [i].obfuscatedPrice).ToString () + " $", guiStyle);
							guiStyle.normal.textColor = Color.white;
						} else {
							GUILayout.Label ("", guiStyle);
						}
					}

					if (i == 2) {
						GUI.DrawTexture (new Rect (205, 177, 150, 75), flashTmp [2].gunPreview);
						guiStyle.fontSize = 12;
						guiStyle.normal.textColor = Color.white;
						GUI.Label (new Rect (167, 229, 70, 70), flashTmp [2].firstPersonWeapon.name, guiStyle);
					}

				}
			}
			else {
				GUILayout.Space (30);
				GUI.Box (new Rect(170, 39, 255, 350),"", weaponPanelGuiStyle);
				for (int i = 0; i < weaponListTmp.Count; i++) {
					GUI.enabled = true;

					GUILayout.Space (10);

					GUI.enabled = i != selectedIndex && weaponListTmp [i].obfuscatedPrice >= rc.totalCash;
					if (i == 0){
					if (GUI.Button (new Rect (169, 39, 256, 70), i != selectedIndex ? "" : xml.button71, weaponButtonGuiStyle)) {
						if (rc.GetCash () >= GameSettings.cnst - weaponListTmp [i].obfuscatedPrice) {
							if (type == 2) {
								selectedSecondary = i;
								rc.SubstractCash (2);
							}
							if (rc.ourPlayer) {
								if (rc.ourPlayer.playerWeapons.selectedPrimary > 1) {
									lastSelectedWeapon = type;
									GameSettings.switchWeaponIndex = type;
								} else {
									if (type == 2) {
										lastSelectedWeapon = 1;
										GameSettings.switchWeaponIndex = 1;
									}
								}
								Invoke ("ApplySelectedWeapons", 0.035f);
							}

							rc.showBuyMenu = false;
						}
					}
				}
					if (i == 1) {
						if (GUI.Button (new Rect (169, 109, 256, 70), i != selectedIndex ? "" : xml.button71, weaponButtonGuiStyle)) {
							if (rc.GetCash () >= GameSettings.cnst - weaponListTmp [i].obfuscatedPrice) {
								if (type == 2) {
									selectedSecondary = i;
									rc.SubstractCash (2);
								}
								if (rc.ourPlayer) {
									if (rc.ourPlayer.playerWeapons.selectedPrimary > 1) {
										lastSelectedWeapon = type;
										GameSettings.switchWeaponIndex = type;
									} else {
										if (type == 2) {
											lastSelectedWeapon = 1;
											GameSettings.switchWeaponIndex = 1;
										}
									}
									Invoke ("ApplySelectedWeapons", 0.035f);
								}

								rc.showBuyMenu = false;
							}
						}
					}
					if (i == 2) {
						if (GUI.Button (new Rect (169, 179, 256, 70), i != selectedIndex ? "" : xml.button71, weaponButtonGuiStyle)) {
							if (rc.GetCash () >= GameSettings.cnst - weaponListTmp [i].obfuscatedPrice) {
								if (type == 2) {
									selectedSecondary = i;
									rc.SubstractCash (2);
								}
								if (rc.ourPlayer) {
									if (rc.ourPlayer.playerWeapons.selectedPrimary > 1) {
										lastSelectedWeapon = type;
										GameSettings.switchWeaponIndex = type;
									} else {
										if (type == 2) {
											lastSelectedWeapon = 1;
											GameSettings.switchWeaponIndex = 1;
										}
									}
									Invoke ("ApplySelectedWeapons", 0.035f);
								}

								rc.showBuyMenu = false;
							}
						}
					}
					if (i == 4) {
						if (GUI.Button (new Rect (169, 249, 256, 70), i != selectedIndex ? "" : xml.button71, weaponButtonGuiStyle)) {
							if (rc.GetCash () >= GameSettings.cnst - weaponListTmp [i].obfuscatedPrice) {
								if (type == 2) {
									selectedSecondary = i;
									rc.SubstractCash (2);
								}
								if (rc.ourPlayer) {
									if (rc.ourPlayer.playerWeapons.selectedPrimary > 1) {
										lastSelectedWeapon = type;
										GameSettings.switchWeaponIndex = type;
									} else {
										if (type == 2) {
											lastSelectedWeapon = 1;
											GameSettings.switchWeaponIndex = 1;
										}
									}
									Invoke ("ApplySelectedWeapons", 0.035f);
								}

								rc.showBuyMenu = false;
							}
						}
					}
					if (i == 3) {
						if (GUI.Button (new Rect (169, 319, 256, 70), i != selectedIndex ? "" : xml.button71, weaponButtonGuiStyle)) {
							if (rc.GetCash () >= GameSettings.cnst - weaponListTmp [i].obfuscatedPrice) {
								if (type == 2) {
									selectedSecondary = i;
									rc.SubstractCash (2);
								}
								if (rc.ourPlayer) {
									if (rc.ourPlayer.playerWeapons.selectedPrimary > 1) {
										lastSelectedWeapon = type;
										GameSettings.switchWeaponIndex = type;
									} else {
										if (type == 2) {
											lastSelectedWeapon = 1;
											GameSettings.switchWeaponIndex = 1;
										}
									}
									Invoke ("ApplySelectedWeapons", 0.035f);
								}

								rc.showBuyMenu = false;
							}
						}
					}


					GUI.enabled = true;

					guiStyle.fontSize = 22;
					guiStyle.alignment = TextAnchor.UpperCenter;
					guiStyle.normal.textColor = weaponListTmp [i].obfuscatedPrice >= rc.totalCash ? GameSettings.drawColor : GameSettings.customRedColor;
					if (i == 0) {
						if (i != selectedIndex) {
							GUI.Label (new Rect (330, 66, 70, 50), (GameSettings.cnst - weaponListTmp [i].obfuscatedPrice).ToString () + " $", guiStyle);
							guiStyle.normal.textColor = Color.white;
						} else {
							GUILayout.Label ("", guiStyle);
						}
					} 
					else if (i == 1) {
						if (i != selectedIndex) {
							GUI.Label (new Rect (330, 134, 70, 50), (GameSettings.cnst - weaponListTmp [i].obfuscatedPrice).ToString () + " $", guiStyle);
							guiStyle.normal.textColor = Color.white;
						} else {
							GUILayout.Label ("", guiStyle);
						}
					}
					else if (i == 2) {
						if (i != selectedIndex) {
							GUI.Label (new Rect (330, 206, 70, 50), (GameSettings.cnst - weaponListTmp [i].obfuscatedPrice).ToString () + " $", guiStyle);
							guiStyle.normal.textColor = Color.white;
						} else {
							GUILayout.Label ("", guiStyle);
						}
					}
					else if (i == 4) {
						if (i != selectedIndex) {
							GUI.Label (new Rect (330, 275, 70, 50), (GameSettings.cnst - weaponListTmp [i].obfuscatedPrice).ToString () + " $", guiStyle);
							guiStyle.normal.textColor = Color.white;
						} else {
							GUILayout.Label ("", guiStyle);
						}
					}
					else if (i == 3) {
						if (i != selectedIndex) {
							GUI.Label (new Rect (330, 344, 70, 50), (GameSettings.cnst - weaponListTmp [i].obfuscatedPrice).ToString () + " $", guiStyle);
							guiStyle.normal.textColor = Color.white;
						} else {
							GUILayout.Label ("", guiStyle);
						}
					}
						

					if (i == 0) {
						GUI.DrawTexture (new Rect (167, 34, 150, 75), secondaryWeaponsTmp [0].gunPreview);
						guiStyle.fontSize = 12;
						guiStyle.normal.textColor = Color.white;
						GUI.Label (new Rect (170, 89, 70, 70), secondaryWeaponsTmp [0].firstPersonWeapon.name, guiStyle);
					}
					if (i == 1) {
						GUI.DrawTexture (new Rect (192, 104, 150, 75), secondaryWeaponsTmp [1].gunPreview);
						guiStyle.fontSize = 12;
						guiStyle.normal.textColor = Color.white;
						GUI.Label (new Rect (165, 158, 70, 70), secondaryWeaponsTmp [1].firstPersonWeapon.name, guiStyle);
					}
					if (i == 2) {
						GUI.DrawTexture (new Rect (192, 174, 150, 75), secondaryWeaponsTmp [2].gunPreview);
						guiStyle.fontSize = 11;
						guiStyle.normal.textColor = Color.white;
						GUI.Label (new Rect (180, 229, 70, 70), secondaryWeaponsTmp [2].firstPersonWeapon.name, guiStyle);
					}
					if (i == 4) {
						GUI.DrawTexture (new Rect (180, 247, 150, 75), secondaryWeaponsTmp [4].gunPreview);
						guiStyle.fontSize = 12;
						guiStyle.normal.textColor = Color.white;
						GUI.Label (new Rect (162, 297, 70, 70), secondaryWeaponsTmp [4].firstPersonWeapon.name, guiStyle);
					}
					if (i == 3) {
						GUI.DrawTexture (new Rect (190, 314, 150, 75), secondaryWeaponsTmp [3].gunPreview);
						guiStyle.fontSize = 12;
						guiStyle.normal.textColor = Color.white;
						GUI.Label (new Rect (172, 367, 70, 70), secondaryWeaponsTmp [3].firstPersonWeapon.name, guiStyle);
					}

				}
			}
	  }
	}
}
