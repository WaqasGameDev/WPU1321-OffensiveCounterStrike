using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class C4TerroristOn : MonoBehaviour {

	public GameObject fadeLight;
	public float bombTime = 0.60f;
	Light c4point;
	// Use this for initialization
	void Start () {
		c4point = fadeLight.GetComponent<Light> ();

		fadeLight.SetActive (true);
	}

	// Update is called once per frame
	void Update () {
		bombTime -= Time.deltaTime / 45f;
		if (bombTime > 0.55f) {
			StartCoroutine (OnOff40 ());
		} else {
			bombTime = 0.60f;
		}

	}

	IEnumerator OnOff40(){
		c4point.range = 0;
		yield return new WaitForSeconds(3);
		c4point.range = 0.1f;
		yield return new WaitForSeconds(0.15f);
	}
}




