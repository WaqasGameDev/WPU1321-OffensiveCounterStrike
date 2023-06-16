using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class RoomListSee : MonoBehaviour
{

    public Text RoomName;
    public Text GameMode;
    public Text Players;
    public Text Map;
    public Text Pings;

    public void Roomsİnfo()
    {
        ConnectMenu MenuFind = GameObject.Find("MenuAll").GetComponent<ConnectMenu>();
        MenuButtons Click = GameObject.Find("Camera").GetComponent<MenuButtons>();
        Click.Click();
        MenuFind.SelectRoomName.text = RoomName.text;
        MenuFind.GameMode.text = GameMode.text;
        MenuFind.SelectMapName = Map.text;

        for (int a = 0; a < MenuFind.availableMaps.Length ; a++)
        {
            if (MenuFind.availableMaps[a].mapName == MenuFind.SelectMapName)
            {
                
                MenuFind.SelectImage.sprite = MenuFind.availableMaps[a].mapPreview;
            }
        }
    }

}
