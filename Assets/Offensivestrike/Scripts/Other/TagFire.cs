using UnityEngine;
using System.Collections;

public class TagFire : MonoBehaviour {

	bool tagOn = false;
	float timer = 7.5f;
	// Use this for initialization
	public void AllClear () {
		timer = 7.5f;
		tagOn = false;
	}
	
	// Update is called once per frame
	void Update () {
		if (gameObject.tag == "Counter" || gameObject.tag == "Teror" && !tagOn) {
			timer -= Time.deltaTime;
			if (timer < 0) {
				gameObject.tag = "Null";
				tagOn = true;
				timer = 7.5f;
			}
		}
	
	}
}
