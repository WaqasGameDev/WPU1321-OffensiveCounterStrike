using UnityEngine;
using System.Collections;

public class ExplosionScript : MonoBehaviour {

	[Header("Customizable Options")]
	//How long before the explosion prefab is destroyed
	public float despawnTime = 10.0f;
	//How long the light flash is visible


	[Header("Audio")]
	public AudioClip[] explosionSounds;
	public AudioSource audioSource;

	private void Start () {
		//Start the coroutines
		StartCoroutine (DestroyTimer ());


		//Get a random impact sound from the array
		audioSource.clip = explosionSounds
			[Random.Range(0, explosionSounds.Length)];
		//Play the random explosion sound
		audioSource.Play();
	}


	private IEnumerator DestroyTimer () {
		//Destroy the explosion prefab after set amount of seconds
		yield return new WaitForSeconds (despawnTime);
		Destroy (gameObject);
	}
}