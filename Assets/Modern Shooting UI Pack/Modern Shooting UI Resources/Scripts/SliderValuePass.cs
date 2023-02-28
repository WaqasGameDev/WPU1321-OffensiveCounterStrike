using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SliderValuePass : MonoBehaviour {

	Text progress;
	public Slider loading;

	// Use this for initialization
	void Start () {
		progress = GetComponent<Text>();

	}
	
	void Update () {
		progress.text = Mathf.Round(loading.value * 100) +"%";
	}


}
