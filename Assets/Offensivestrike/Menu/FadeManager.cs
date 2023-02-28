using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class FadeManager : MonoBehaviour {

	public static FadeManager Instance{ set; get;}

	public Image fadeImage;
	private bool İsInTransition;
	private float transition;
	private bool İsShowing;
	private float duration;

	private void Awake()
	{
		Instance = this;
	}

	public void Fade(bool showing,float duration)
	{
		İsShowing = showing;
		İsInTransition = true;
		this.duration = duration;
		transition = (İsShowing) ? 0 : 1;
	}

	private void Update(){
		if (!İsInTransition)
			return;

		transition += (İsShowing) ? Time.deltaTime * (1 / duration) : -Time.deltaTime * (1 / duration);
		fadeImage.color = Color.Lerp (new Color (0, 0, 0, 0), Color.black, transition);

		if (transition > 1 || transition < 0)
			İsInTransition = false;

	}

	IEnumerator FadeOutWait()
	{
		Fade (true, 0.75f);
		yield return new WaitForSeconds (1f);
		Fade (false, 0.75f);
	}

	public void fadeOnOff(){
		StartCoroutine ("FadeOutWait");
	}




}
