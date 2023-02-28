using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class levelLoader : MonoBehaviour {


	public GameObject LoadingScreen;
	public Slider slider;

	void Start(){
		StartCoroutine ("Load");
	}
		

	IEnumerator LoadAsynchronously(int sceneIndex){
		AsyncOperation operation = SceneManager.LoadSceneAsync (sceneIndex);
		LoadingScreen.SetActive (true);
		while (!operation.isDone) {
			float progress = Mathf.Clamp01 (operation.progress / 1f);
			slider.value = progress;
			yield return null;
		}

	}

	IEnumerator Load(){
		yield return new WaitForSeconds(0.25f);
		StartCoroutine (LoadAsynchronously(2));
	}

}
