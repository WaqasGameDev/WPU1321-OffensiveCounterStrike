using UnityEngine;
using System.Collections;

public class FlashBang : MonoBehaviour {

	public Collider[] ArroundNear;
	public Collider[] Arround;
	public float timeLeft;
	public Transform particleEffect;
	public Rigidbody rb;
	public SkinnedMeshRenderer FlashTP;
	public SkinnedMeshRenderer FlashDw;

	void  Start (){
		rb = GetComponent<Rigidbody>();
		Invoke ("FlashFalse", 2.25f);
		FlashTP.enabled = true;
		FlashDw.enabled = true;
	}

	void FlashFalse(){
		FlashTP.enabled = false;
		FlashDw.enabled = false;
	}

	void  AreaOfEffectLongDamage (GameObject Longplayers){
		//FlashbangEffectScript bpn;
		//bpn = Longplayers.GetComponent<FlashbangEffectScript>();

  //      if (Physics.Linecast(transform.position, Longplayers.transform.position) && 
		//	Vector3.Angle(Longplayers.transform.forward, transform.position - Longplayers.transform.position) < 110)
  //      {
		//	bpn.isBlinded = true;
		//}

        //if (Physics.Linecast(transform.position, Longplayers.transform.position)) {
        //	Debug.Log ("Blocked");
        //}
        //else {
        //	if (Vector3.Angle (Longplayers.transform.forward, transform.position - Longplayers.transform.position) < 110) {
        //		bpn.isBlinded = true;
        //	}
        //}

  //      if (Physics.Linecast(new Vector3(transform.position.x + 0.75f, transform.position.y + 0.5f, transform.position.z), Longplayers.transform.position) &&
		//	Vector3.Angle(Longplayers.transform.forward, transform.position - Longplayers.transform.position) < 110)
  //      {
		//	bpn.isBlinded = true;
		//}

        //if (Physics.Linecast (new Vector3(transform.position.x + 0.75f,transform.position.y + 0.5f,transform.position.z), Longplayers.transform.position)) {
        //	Debug.Log ("Blocked");
        //}
        //else {
        //	if (Vector3.Angle (Longplayers.transform.forward, transform.position - Longplayers.transform.position) < 110) {
        //		bpn.isBlinded = true;
        //	}
        //}

  //      if (Physics.Linecast(new Vector3(transform.position.x - 0.75f, transform.position.y + 0.5f, transform.position.z), Longplayers.transform.position) &&
		//	Vector3.Angle(Longplayers.transform.forward, transform.position - Longplayers.transform.position) < 110)
  //      {
		//	bpn.isBlinded = true;
		//}

        //if (Physics.Linecast (new Vector3(transform.position.x - 0.75f,transform.position.y + 0.5f,transform.position.z), Longplayers.transform.position)) {
        //	Debug.Log ("Blocked");
        //}
        //else {
        //	if (Vector3.Angle (Longplayers.transform.forward, transform.position - Longplayers.transform.position) < 110) {
        //		bpn.isBlinded = true;
        //	}
        //}

  //      if (Physics.Linecast(new Vector3(transform.position.x, transform.position.y + 0.5f, transform.position.z - 0.75f), Longplayers.transform.position) &&
		//	Vector3.Angle(Longplayers.transform.forward, transform.position - Longplayers.transform.position) < 110)
  //      {
		//	bpn.isBlinded = true;
		//}

		//if (Physics.Linecast (new Vector3(transform.position.x,transform.position.y + 0.5f,transform.position.z - 0.75f), Longplayers.transform.position)) {
		//	Debug.Log ("Blocked");
		//}
		//else {
		//	if (Vector3.Angle (Longplayers.transform.forward, transform.position - Longplayers.transform.position) < 110) {
		//		bpn.isBlinded = true;
		//	}
		//}

		//bpn.isBlinded = true;
		//Debug.Log($"Bpn IsBlinded: {bpn.isBlinded}");

		//if (hit.collider != null)
		//{
		//	Debug.Log($"Hit collider type: {hit.collider.GetType()}");
		//}
	}

	void Update(){
		Physics.IgnoreLayerCollision (9,11);
		timeLeft -= Time.deltaTime;
		if (timeLeft <= 0) {
			Transform expode;
			expode = Instantiate (particleEffect, transform.position, transform.rotation) as Transform;
			Destroy (expode.gameObject, 10.5f);
			rb.velocity = Vector3.zero;
			Arround = Physics.OverlapSphere (transform.position, 25.0f);
			foreach (Collider inExp in Arround) {
				if (inExp.tag == "Player") {
					AreaOfEffectLongDamage (inExp.gameObject);
				}
				Destroy (gameObject, 1.10f);
			}
			timeLeft = 2.25f;
		}
	}
}
