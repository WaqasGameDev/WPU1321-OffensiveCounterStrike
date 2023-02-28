using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.Collections;
using System.IO;

public class SplashFade : MonoBehaviour
{
    public Image splashImage;
    public string loadLevel;
	public GameObject İnternet;
	public Text Error1;
	public Text updatcheck;
	public int deviceMem;

    IEnumerator Start()
    {
		İnternet.SetActive(false);
        splashImage.canvasRenderer.SetAlpha(0.0f);

        FadeIn();
        yield return new WaitForSeconds(6.5f);
        FadeOut();
        yield return new WaitForSeconds(6.5f);

		if (Application.internetReachability == NetworkReachability.NotReachable) {
			İnternet.SetActive(true);
			Error1.text = "Please Check Internet Connection...";
		}
		else {
			//if (SystemInfo.systemMemorySize >= deviceMem) {
				SceneManager.LoadScene (loadLevel);
			//} 
			//else {
			//	İnternet.SetActive(true);
			//	Error1.text = deviceMem.ToString() + " MB RAM Needed.";
			//}
		}
    }

    void FadeIn()
    {
        splashImage.CrossFadeAlpha(5.0f, 5.5f, false);
		updatcheck.CrossFadeAlpha(15.0f, 5.5f, false);

	}

    void FadeOut()
    {
        splashImage.CrossFadeAlpha(0.0f, 6.5f, false);

		updatcheck.CrossFadeAlpha(0.0f, 6.5f, false);
	}

	public void Rstart(){
		SceneManager.LoadScene (0);
	}

}
