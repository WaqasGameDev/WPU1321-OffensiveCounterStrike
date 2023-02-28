using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class FadeCase : MonoBehaviour {

	public Image fadeImage;
	private bool İsInTransition;
	private float transition;
	private bool İsShowing;
	private float duration;
	// Use this for initialization
	public void MenuOn () {
		StartCoroutine("MenuONn");
	}

	IEnumerator MenuONn()
	{
		Destroy(GameObject.Find("MenuAll"));
		Fade(true, 0.85f);
		yield return new WaitForSeconds(0.95f);
		SceneManager.LoadScene(2);
	}

	public void Fade(bool showing, float duration)
	{
		İsShowing = showing;
		İsInTransition = true;
		this.duration = duration;
		transition = (İsShowing) ? 0 : 1;
	}

	// Update is called once per frame
	void Update () {


		if (!İsInTransition)
			return;

		transition += (İsShowing) ? Time.deltaTime * (1 / duration) : -Time.deltaTime * (1 / duration);
		fadeImage.color = Color.Lerp(new Color(0, 0, 0, 0), Color.black, transition);

		if (transition > 1 || transition < 0)
			İsInTransition = false;

	}
}
