using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.Advertisements;

public class MenuButtons : MonoBehaviour {

	public GameObject ButtonFalse;
	public GameObject ButtonTrue;
	public GameObject Play;
	public GameObject Looby;
	public GameObject[] Creates;
	public GameObject[] CreateRoom;
	public GameObject[] Loobys;
	public GameObject Create;
	public GameObject İnfo;
	public GameObject İnfoOnn;
	public GameObject İnfoOfff;
	public GameObject OnlyOneText;
	public GameObject CaseOnOff;

	public AudioClip ClickSong;
	string Mode;
	public Text ModeTex;
	public Text CoinTex;



	private GameObject Sound1;
	private GameObject Sound2;
	private GameObject Sound3;
	AudioSource thisAudioSource;


	public static MenuButtons Instance{ set; get;}

	public Image fadeImage;
	private bool İsInTransition;
	private float transition;
	private bool İsShowing;
	private float duration;

	[Header("[ Main Menu]")]
	public GameObject MainObject;

	[Header("[ Create Room Object]")]
	public GameObject CrObject;

	[Header("[ Create Offline Room Object]")]
	public GameObject CrOfflineObject;

	[Header("[ Create Game Room Object]")]
	public GameObject CrGameObject;

	[Header("[ Create Offline Game Room Object]")]
	public GameObject CrOfflineGameObject;

	[Header("[ Lobby Object]")]
	public GameObject LobyObject;

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

	public void CreateRoomEnabled()
    {
		thisAudioSource.clip = ClickSong;
		thisAudioSource.Play();
		MainObject.gameObject.SetActive(false);
		CrObject.gameObject.SetActive(true);
	}

	public void CreateOfflineRoomEnabled()
	{
		thisAudioSource.clip = ClickSong;
		thisAudioSource.Play();
		MainObject.gameObject.SetActive(false);
		// CrObject.gameObject.SetActive(true);
		CrOfflineObject.gameObject.SetActive(true);
	}

	public void MainMenuEnabled()
	{
		thisAudioSource.clip = ClickSong;
		thisAudioSource.Play();
		MainObject.gameObject.SetActive(true);
		CrObject.gameObject.SetActive(false);
		CrOfflineObject.gameObject.SetActive(false);
		LobyObject.gameObject.SetActive(false);
	}

	public void CreateGameRoomEnabled()
	{
		thisAudioSource.clip = ClickSong;
		thisAudioSource.Play();
		CrObject.gameObject.SetActive(true);
		CrGameObject.gameObject.SetActive(false);
	}

	public void CreateOfflineGameRoomEnabled()
	{
		thisAudioSource.clip = ClickSong;
		thisAudioSource.Play();
		//CrOfflineObject.gameObject.SetActive(true);
		CrOfflineGameObject.gameObject.SetActive(false);
	}

	public void LoobyEnabled()
	{
		thisAudioSource.clip = ClickSong;
		thisAudioSource.Play();
		MainObject.gameObject.SetActive(false);
		LobyObject.gameObject.SetActive(true);
	}



	void Start(){
		thisAudioSource = GetComponent<AudioSource>();
		Sound1 = GameObject.FindWithTag ("Dust2");
		Sound2 = GameObject.FindWithTag ("car");
		Sound3 = GameObject.FindWithTag ("c4bip");
	}

	public void FalseSounds(){
		thisAudioSource.clip = ClickSong;
		thisAudioSource.Play ();
		ButtonFalse.SetActive (true);
		ButtonTrue.SetActive (false);
		Sound1.GetComponent<AudioSource> ().Stop ();
		Sound2.GetComponent<AudioSource> ().Stop ();
		Sound3.GetComponent<AudioSource> ().volume = 0;

		
	}

	public void Ads(){
		thisAudioSource.clip = ClickSong;
		thisAudioSource.Play ();
		//Advertisement.Show();
	}

	public void TrueSounds(){
		thisAudioSource.clip = ClickSong;
		thisAudioSource.Play ();
		ButtonTrue.SetActive (true);
		ButtonFalse.SetActive (false);
		Sound1.GetComponent<AudioSource> ().Play ();
		Sound2.GetComponent<AudioSource> ().Play ();
		Sound3.GetComponent<AudioSource> ().volume = 0.5f;


	}

	public void Click(){
		thisAudioSource.clip = ClickSong;
		thisAudioSource.Play ();
	}



	public void CreaterBombMode(){
		thisAudioSource.clip = ClickSong;
		thisAudioSource.Play ();
		StartCoroutine ("CreateRommOnBomb");
	}

	public void CreaterTeamMode(){
		thisAudioSource.clip = ClickSong;
		thisAudioSource.Play ();
		StartCoroutine ("CreateRommOnTeam");
	}

	public void CreaterOnlyOne(){
		thisAudioSource.clip = ClickSong;
		thisAudioSource.Play ();
		StartCoroutine ("CreateRommOnOne");
	}





	public void CreaterBombModeOffline()
	{
		thisAudioSource.clip = ClickSong;
		thisAudioSource.Play();
		StartCoroutine("CreateOfflineRommOnBomb");
	}

	public void CreaterTeamModeOffline()
	{
		thisAudioSource.clip = ClickSong;
		thisAudioSource.Play();
		StartCoroutine("CreateOfflineRommOnTeam");
	}

	public void CreaterOnlyOneOffline()
	{
		thisAudioSource.clip = ClickSong;
		thisAudioSource.Play();
		StartCoroutine("CreateOfflineRommOnOne");
	}

	public void İnfoOn(){
		thisAudioSource.clip = ClickSong;
		thisAudioSource.Play ();
		İnfo.SetActive (true);
		İnfoOfff.SetActive (true);
		İnfoOnn.SetActive (false);
	}
	public void İnfoOff(){
		thisAudioSource.clip = ClickSong;
		thisAudioSource.Play ();
		İnfo.SetActive (false);
		İnfoOfff.SetActive (false);
		İnfoOnn.SetActive (true);
	}

	public void PlayLoff(){
		Play.SetActive (false);
	}

	IEnumerator PlaysOn()
	{
		Fade (true, 0.85f);
		yield return new WaitForSeconds (0.95f);
		Fade (false, 1f);
		for (int i = 0; i < 8; i++) {
			Creates [i].SetActive (true);	
		}
		Play.SetActive (false);
		CaseOnOff.SetActive (false);
	}

	IEnumerator CaseOn()
	{
		Fade (true, 0.85f);
		yield return new WaitForSeconds (0.95f);
		SceneManager.LoadScene (3);
	}

	public void PlayOn(){
		thisAudioSource.clip = ClickSong;
		thisAudioSource.Play ();
		StartCoroutine ("PlaysOn");
	}

	public void CaseOnn(){
		thisAudioSource.clip = ClickSong;
		thisAudioSource.Play ();
		StartCoroutine ("CaseOn");
	}

	IEnumerator CreatesL()
	{
		Fade (true, 0.85f);
		yield return new WaitForSeconds (0.95f);
		Fade (false, 1f);
		for (int i = 0; i < 8; i++) {
			Creates [i].SetActive (false);	
		}
		for (int i = 0; i < 4; i++) {
			Loobys [i].SetActive (true);	
		}
	}

	public void CreatesLobi(){
		thisAudioSource.clip = ClickSong;
		thisAudioSource.Play ();
		StartCoroutine ("CreatesL");
	}

	IEnumerator BackAllPlay()
	{
		Fade (true, 0.85f);
		yield return new WaitForSeconds (0.95f);
		Fade (false, 1f);
		for (int i = 0; i < 8; i++) {
			Creates [i].SetActive (false);	
		}
		for (int i = 0; i < 4; i++) {
			Loobys [i].SetActive (false);	
		}
		for (int i = 0; i < 15; i++) {
			CreateRoom [i].SetActive (false);	
		}
		Play.SetActive (true);
		OnlyOneText.SetActive (false);
		CaseOnOff.SetActive (true);
	}

	public void OffAll(){
		thisAudioSource.clip = ClickSong;
		thisAudioSource.Play ();
		StartCoroutine ("BackAllPlay");
	}

	public void CreateRommOnBomb()
	{
		Mode = "BOMB";
		ModeTex.text = Mode;
		thisAudioSource.clip = ClickSong;
		thisAudioSource.Play();
		CrObject.gameObject.SetActive(false);
		CrGameObject.gameObject.SetActive(true);
	}

	public void CreateRommOnTeam()
	{
		Mode = "TDM";
		ModeTex.text = Mode;
		thisAudioSource.clip = ClickSong;
		thisAudioSource.Play();
		CrObject.gameObject.SetActive(false);
		CrGameObject.gameObject.SetActive(true);
	}

	public void CreateRommOnOne()
	{
		Mode = "FFA";
		ModeTex.text = Mode;
		thisAudioSource.clip = ClickSong;
		thisAudioSource.Play();
		CrObject.gameObject.SetActive(false);
		CrGameObject.gameObject.SetActive(true);
	}

	public void CreateOfflineRommOnBomb()
	{
		Mode = "BOMB";
		ModeTex.text = Mode;
		thisAudioSource.clip = ClickSong;
		thisAudioSource.Play();
		CrOfflineObject.gameObject.SetActive(false);
		CrOfflineGameObject.gameObject.SetActive(true);
	}

	public void CreateOfflineRommOnTeam()
	{
		Mode = "TDM";
		ModeTex.text = Mode;
		thisAudioSource.clip = ClickSong;
		thisAudioSource.Play();
		CrOfflineObject.gameObject.SetActive(false);
		CrOfflineGameObject.gameObject.SetActive(true);
	}

	public void CreateOfflineRommOnOne()
	{
		Mode = "FFA";
		ModeTex.text = Mode;
		thisAudioSource.clip = ClickSong;
		thisAudioSource.Play();
		CrOfflineObject.gameObject.SetActive(false);
		CrOfflineGameObject.gameObject.SetActive(true);
	}

	IEnumerator BackLobys()
	{
		Fade (true, 0.85f);
		yield return new WaitForSeconds (0.95f);
		Fade (false, 1f);
		for (int i = 0; i < 8; i++) {
			Creates [i].SetActive (true);	
		}
		for (int i = 0; i < 4; i++) {
			Loobys [i].SetActive (false);	
		}
		for (int i = 0; i < 15; i++) {
			CreateRoom [i].SetActive (false);	
		}

	}

	public void BackLooby(){
		thisAudioSource.clip = ClickSong;
		thisAudioSource.Play ();
		StartCoroutine ("BackLobys");
	}


}
