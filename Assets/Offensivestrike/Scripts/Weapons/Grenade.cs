using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;

public class Grenade : MonoBehaviour {

	public Collider[] ArroundNear;
	public Collider[] Arround;
	public float timeLeft;
	public Transform particleEffect;
	public Rigidbody rb;
	public int kilrID;
	public SkinnedMeshRenderer GrenadeTp;
	public Image GrenadeUI;

	void  Start (){
		GrenadeUI.enabled = true;
		rb = GetComponent<Rigidbody>();
		Invoke ("BombFalse", 2.7f);
		GrenadeTp.enabled = true;
	}

	void BombFalse(){
		GrenadeTp.enabled = false;
		GrenadeUI.enabled = false;
	}

	void  AreaOfEffectDamage (GameObject players){
			PlayerNetwork bpn;
			bpn = players.GetComponent<PlayerNetwork> ();
		if (GameSettings.currentGameMode == "TDM" || GameSettings.currentGameMode == "NORMAL") {
			if (this.gameObject.name == "Grenade1(Clone)" && bpn.playerTeam == 1) {
			} else if (this.gameObject.name == "Grenade1(Clone)" && bpn.playerTeam == 2) {
				bpn.BombDmg (kilrID);
			} else if (this.gameObject.name == "Grenade2(Clone)" && bpn.playerTeam == 2) {
			} else {
				bpn.BombDmg (kilrID);
			}
		} 
		else {
			bpn.BombDmg (kilrID);
		}
	}

	void  AreaOfEffectLongDamage (GameObject Longplayers){
		PlayerNetwork bpn;
		bpn = Longplayers.GetComponent<PlayerNetwork> ();
		if (GameSettings.currentGameMode == "TDM" || GameSettings.currentGameMode == "NORMAL") {
			if (this.gameObject.name == "Grenade1(Clone)" && bpn.playerTeam == 1) {
			} else if (this.gameObject.name == "Grenade1(Clone)" && bpn.playerTeam == 2) {
				bpn.BombDmgLong (kilrID);
			} else if (this.gameObject.name == "Grenade2(Clone)" && bpn.playerTeam == 2) {
			} else {
				bpn.BombDmgLong (kilrID);
			}
		} 
		else {
			bpn.BombDmgLong (kilrID);
		}
	}

	void Update(){
		Physics.IgnoreLayerCollision (10,11);
		timeLeft -= Time.deltaTime;
		if (timeLeft <= 0) {
			Transform expode;
			expode = Instantiate (particleEffect, transform.position, transform.rotation) as Transform;
			Destroy (expode.gameObject, 5f);

			rb.velocity = Vector3.zero;
			ArroundNear = Physics.OverlapSphere (transform.position, 6.0f);
			Arround = Physics.OverlapSphere (transform.position, 12.0f);
			foreach (Collider intoExp in ArroundNear) {
				if (intoExp.tag == "Player") {
					AreaOfEffectDamage (intoExp.gameObject);
				}
				if(intoExp.gameObject.GetComponent<TacticalAI.HitBox>())
                {
					intoExp.gameObject.GetComponent<TacticalAI.HitBox>().ApplyDamage(100f);

				}
				Destroy(gameObject, 1.68f);
			}

			foreach (Collider inExp in Arround) {
				if (inExp.tag == "Player") {
					AreaOfEffectLongDamage (inExp.gameObject);
				}
				if (inExp.gameObject.GetComponent<TacticalAI.HitBox>())
				{
					inExp.gameObject.GetComponent<TacticalAI.HitBox>().ApplyDamage(100f);

				}
				Destroy(gameObject, 1.68f);
			}
			timeLeft = 5f;
		}
	}




}
