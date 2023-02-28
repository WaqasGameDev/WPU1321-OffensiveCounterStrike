using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class C4Menü : MonoBehaviour {

	public GameObject fadeLight;
	public AudioClip pip;
	bool pip1 = false;
	public float bombTime = 0.60f;
	Light c4point;
	// Use this for initialization
	void Start () {
		fadeLight = GameObject.Find ("C4Point");
		c4point = fadeLight.GetComponent<Light> ();
		pip1 = true;
		fadeLight.SetActive (true);
	}
	
	// Update is called once per frame
	void Update () {
		bombTime -= Time.deltaTime / 45f;
		if (bombTime > 0.55f && pip1 == true) {
			pip1 = false;
			StartCoroutine (OnOff40 ());
		} else {
			bombTime = 0.60f;
		}
		
	}

	IEnumerator OnOff40(){
		c4point.range = 0;
		yield return new WaitForSeconds(2);
		GetComponent<AudioSource>().PlayOneShot(pip);
		c4point.range  = 15;
		yield return new WaitForSeconds(0.15f);
		pip1 = true;
	}

}
