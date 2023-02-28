/// <summary>
/// This is Radar System. using to detection an objects and showing on minimap by Tags[]
/// </summary>
using UnityEngine;
using System.Collections;

public enum Alignment
{
	None,
	LeftTop,
	RightTop,
	LeftBot,
	RightBot,
	MiddleTop,
	MiddleBot
}

public class RadarSystem : MonoBehaviour
{

	private Vector2 inposition;
	public float Size = 400; // size of minimap
	public float Distance = 1;// maximum distance of objects
	public Texture2D[] Navtexture;// textutes list
	public string[] EnemyTag;// object tags list
	public Texture2D NavCompass;// compass texture
	public Texture2D NavBG;// background texture
	public Vector2 PositionOffset = new Vector2(0, 0);// minimap position offset
	public Alignment PositionAlignment = Alignment.None;// position alignment
	public float Scale = 4;// mini map scale ( Scale < 1 = zoom in , Scale > 1 = zoom out)
	public float ScaleIndicator = 1;
	public bool MapRotation;
	public GameObject Player;
	public bool Show = true;
	public Color ColorMult = Color.white;

	PlayerNetwork pn;

	void Start()
	{
		pn = GetComponent<PlayerNetwork>();
	}

	void Update()
	{
		if (!Player)
		{
			Player = this.gameObject;
		}

		if (GameSettings.currentGameMode == "TDM" || GameSettings.currentGameMode == "NORMAL")
		{
			if (pn.TeamName == "CT")
			{
				EnemyTag[2] = "Teror";
				EnemyTag[3] = "CT";
				//EnemyTag[5] = "C4Null";
			}
			else
			{
				EnemyTag[2] = "Counter";
				EnemyTag[3] = "T";
				//EnemyTag[5] = "C4Take";
			}
		}
		else
		{
			EnemyTag[2] = "CT";
			EnemyTag[3] = "T";
		}

		if (Scale <= 0)
		{
			Scale = 1;
		}

		switch (PositionAlignment)
		{
			case Alignment.None:
				inposition = PositionOffset;
				break;
			case Alignment.LeftTop:
				inposition = Vector2.zero + PositionOffset;
				break;
			case Alignment.RightTop:
				inposition = new Vector2(Screen.width - Size, 0) + PositionOffset;
				break;
			case Alignment.LeftBot:
				inposition = new Vector2(0, Screen.height - Size) + PositionOffset;
				break;
			case Alignment.RightBot:
				inposition = new Vector2(Screen.width - Size, Screen.height - Size) + PositionOffset;
				break;
			case Alignment.MiddleTop:
				inposition = new Vector2((Screen.width / 2) - (Size / 2), Size) + PositionOffset;
				break;
			case Alignment.MiddleBot:
				inposition = new Vector2((Screen.width / 2) - (Size / 2), Screen.height - Size) + PositionOffset;
				break;
		}

	}

	Vector2 ConvertToNavPosition(Vector3 pos)
	{
		Vector2 res = Vector2.zero;
		if (Player)
		{
			res.x = inposition.x + (((pos.x - Player.transform.position.x) + (Size * Scale) / 2f) / Scale);
			res.y = inposition.y + ((-(pos.z - Player.transform.position.z) + (Size * Scale) / 2f) / Scale);
		}
		return res;
	}

	void DrawNav(GameObject[] enemylists, Texture2D navtexture)
	{
		if (Player)
		{
			for (int i = 0; i < enemylists.Length; i++)
			{
				if (Vector3.Distance(Player.transform.position, enemylists[i].transform.position) <= (Distance * Scale))
				{
					Vector2 pos = ConvertToNavPosition(enemylists[i].transform.position);

					if (Vector2.Distance(pos, (inposition + new Vector2(Size / 2f, Size / 2f))) + (navtexture.width / 2) < (Size / 2f))
					{
						float navscale = Scale;
						if (navscale < 1)
						{
							navscale = 1;
						}
						GUI.DrawTexture(new Rect(pos.x - (navtexture.width / navscale * ScaleIndicator) / 2, pos.y - (navtexture.height / navscale * ScaleIndicator) / 2, navtexture.width / navscale * ScaleIndicator, navtexture.height / navscale * ScaleIndicator), navtexture);
					}
				}
			}
		}
	}

	void OnGUI()
	{
		if (!Show)
			return;

		GUI.color = ColorMult;
		if (MapRotation)
		{
			GUIUtility.RotateAroundPivot(-(this.transform.eulerAngles.y), inposition + new Vector2(Size / 2f, Size / 2f));
		}
		if (NavBG)
			GUI.DrawTexture(new Rect(inposition.x, inposition.y, Size, Size), NavBG);
		for (int i = 0; i < EnemyTag.Length; i++)
		{
			DrawNav(GameObject.FindGameObjectsWithTag(EnemyTag[i]), Navtexture[i]);
		}
		GUIUtility.RotateAroundPivot((this.transform.eulerAngles.y), inposition + new Vector2(Size / 2f, Size / 2f));
		if (NavCompass)
			GUI.DrawTexture(new Rect(inposition.x + (Size / 2f) - (NavCompass.width / 2f), inposition.y + (Size / 2f) - (NavCompass.height / 2f), NavCompass.width, NavCompass.height), NavCompass);

	}
}