using UnityEngine;
using System.Collections;
using Hashtable = ExitGames.Client.Photon.Hashtable;


public class C4 : Photon.MonoBehaviour {
	
	[HideInInspector]
	public Collider[] ArroundNear;
	[HideInInspector]
	public Collider[] Arround;
	public Transform particleEffect;
	public AudioClip pip;
	public AudioClip c4ctbackmusic;
	public AudioClip c4terbackmusic;
	public AudioClip explode;
	public AudioClip bombpl;
	//public AudioClip Fc4armed;
	//public AudioClip c4_plant;

	//RoomController teamscheck;
	public float bombTime = 1;
	public GameObject fadeLight;
	Light c4point;
	public GameObject C4Tp;
	[HideInInspector]
	public bool diffuse = false;
	//public PlayerNetwork rcd;
	bool pip1 = false;


	// Use this for initialization
	void Start () {

		gameObject.transform.rotation = Quaternion.Euler(0,gameObject.transform.rotation.y,0);
		photonView.viewID = 166;
		GameSettings.C4on = true;
		GameSettings.C4Who = "";
		fadeLight = GameObject.Find ("C4Point");
		GetComponent<AudioSource>().PlayOneShot(bombpl);


        //teamscheck = GetComponent<RoomController>();
        if (GameSettings.ourTeam == 1)
        {
            GetComponent<AudioSource>().PlayOneShot(c4ctbackmusic);
		}
		else if (GameSettings.ourTeam == 2)
		{
			GetComponent<AudioSource>().PlayOneShot(c4terbackmusic);
		}


		c4point = fadeLight.GetComponent<Light> ();
		pip1 = true;
		fadeLight.SetActive (true);
		C4Tp.gameObject.SetActive (true);
		diffuse = false;
	}

	void  AreaOfEffectDamage (GameObject players){
		PlayerNetwork bpn;
		bpn = players.GetComponent<PlayerNetwork> ();
		bpn.C4Dmg();
	}

	void  AreaOfEffectLongDamage (GameObject Longplayers){
		PlayerNetwork bpn;
		bpn = Longplayers.GetComponent<PlayerNetwork> ();
		bpn.C4DmgLong();
	}

	//void AreaOfEffectDamageAI(GameObject players)
	//{
	//	BotAi bpn;
	//	bpn = players.GetComponent<BotAi>();
	//	bpn.AiDamage(120,null);
	//}

	//void AreaOfEffectLongDamageAI(GameObject Longplayers)
	//{
	//	BotAi bpn;
	//	bpn = Longplayers.GetComponent<BotAi>();
	//	bpn.AiDamage(60, null);
	//}

	// Update is called once per frame
	void Update () {
		bombTime -= Time.deltaTime / 45f;
		if (bombTime > 0.55f && pip1 == true) {
			pip1 = false;
			StartCoroutine (OnOff40());
		}
		if (bombTime > 0.31f && bombTime < 0.56f && pip1 == true) {
			pip1 = false;
			StartCoroutine (OnOff20());
		}
		if (bombTime > 0.17f && bombTime < 0.32f && pip1 == true) {
			pip1 = false;
			StartCoroutine (OnOff10());
		}
		if (bombTime > 0.10f && bombTime < 0.18f && pip1 == true) {
			pip1 = false;
			StartCoroutine (OnOff05());
		}
		if (bombTime > 0.01f && bombTime < 0.11f && pip1 == true) {
			pip1 = false;
			StartCoroutine (OnOff0());
		}
		if (photonView.isMine) {
			if (bombTime < 0) {
				photonView.RPC ("Explode", PhotonTargets.All);
			}
			if (bombTime < -0.05f && enabled == true) {
				PhotonNetwork.SetMasterClient(PhotonNetwork.masterClient.GetNext());
			}
		}

		if (GameSettings.C4Diffuse) {
			if (photonView.isMine) {
				photonView.RPC ("Difuse2", PhotonTargets.All);
			}
		}

		if (!enabled) {
			Destroy (gameObject, 2.75f);
		}

		if (diffuse) {
			Destroy (gameObject, 0.25f);
		}

		gameObject.transform.rotation = Quaternion.Euler(0,gameObject.transform.rotation.y,0);
	}


	IEnumerator OnOff40(){
		c4point.range = 0;
		yield return new WaitForSeconds(2);
		GetComponent<AudioSource>().PlayOneShot(pip);
		c4point.range = 0.35f;
		yield return new WaitForSeconds(0.15f);
		pip1 = true;
	}
	IEnumerator OnOff20(){
		c4point.range = 0;
		yield return new WaitForSeconds(1);
		GetComponent<AudioSource>().PlayOneShot(pip);
		c4point.range = 0.35f;
		yield return new WaitForSeconds(0.15f);
		pip1 = true;
	}
	IEnumerator OnOff10(){
		c4point.range = 0;
		yield return new WaitForSeconds(0.35f);
		GetComponent<AudioSource>().PlayOneShot(pip);
		c4point.range = 0.35f;
		yield return new WaitForSeconds(0.10f);
		pip1 = true;
	}
	IEnumerator OnOff05(){
		c4point.range = 0;
		yield return new WaitForSeconds(0.225f);
		GetComponent<AudioSource>().PlayOneShot(pip);
		c4point.range = 0.35f;
		yield return new WaitForSeconds(0.10f);
		pip1 = true;
	}
	IEnumerator OnOff0(){
		c4point.range = 0;
		yield return new WaitForSeconds(0.07f);
		GetComponent<AudioSource>().PlayOneShot(pip);
		c4point.range = 0.35f;
		yield return new WaitForSeconds(0.07f);
		pip1 = true;
	}

	[PunRPC]
	private void Explode()
	{
		GetComponent<AudioSource>().PlayOneShot(explode);
		Transform expode;
		expode = Instantiate (particleEffect, transform.position, transform.rotation) as Transform;
		Destroy (expode.gameObject, 6.5f);
		ArroundNear = Physics.OverlapSphere (transform.position, 15.0f);
		Arround = Physics.OverlapSphere (transform.position, 30.0f);

		foreach (Collider intoExp in ArroundNear) {
			if (intoExp.tag == "Player") {
				AreaOfEffectDamage (intoExp.gameObject);
			}
			//if (intoExp.tag == "Ai")
			//{
			//	AreaOfEffectDamageAI(intoExp.gameObject);
			//}
			//if (intoExp.tag == "AiTr")
			//{
			//	AreaOfEffectDamageAI(intoExp.gameObject);
			//}
			Destroy (gameObject, 2);
		}

		foreach (Collider inExp in Arround) {
			if (inExp.tag == "Player") {
				AreaOfEffectLongDamage(inExp.gameObject);
			}
			//if (inExp.tag == "Ai")
			//{
			//	AreaOfEffectLongDamageAI(inExp.gameObject);
			//}
			//if (inExp.tag == "AiTr")
			//{
			//	AreaOfEffectLongDamageAI(inExp.gameObject);
			//}
			Destroy (gameObject, 2);
		}

		GameSettings.WinTeam = "Terorist";
		C4Tp.gameObject.SetActive (false);
		fadeLight.SetActive (false);
		GameSettings.C4on = false;
		enabled = false;
	}

	[PunRPC]
	public void Difuse2()
	{
			GameSettings.WinTeam = "Counter";
			C4Tp.gameObject.SetActive (false);
			fadeLight.SetActive (false);
			GameSettings.C4on = false;
			GameSettings.Diffuse = true;
			GameSettings.C4Diffuse = false;
			diffuse = true;
	}

	
}
