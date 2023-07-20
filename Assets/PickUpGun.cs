using UnityEngine;
using System.Collections;

public class PickUpGun : MonoBehaviour {
    public int indexNumber;
    bool stop = false;
    float timeCount = 0;
    IEnumerator rotateGun()
    {
        yield return new WaitForSeconds(0.1f);
        while (!stop)
        {
            
            yield return new WaitForSeconds(0.08f);
            timeCount += 0.08f;
            if(timeCount > 10f)
            {
                stop = true;
                Destroy(this.gameObject);
            }
            else
            {
                this.transform.eulerAngles += new Vector3(0f, 10f, 0f);
            }
        }
        Destroy(this.gameObject);
    }
	// Use this for initialization
	void Start () {
        StartCoroutine(rotateGun());
	}
	
	// Update is called once per frame
	

    void OnTriggerEnter(Collider other)
    {
        if(other.tag == "Player")
        {
            Debug.Log("Trigger");
            stop = true;
            // other.gameObject.GetComponent<PlayerWeapons>().globalWeaponIndex = indexNumber;
            FindObjectOfType<PlayerWeapons>().globalWeaponIndex = indexNumber;// = 27;
                                                                              //  other.gameObject.GetComponent<PlayerWeapons>().SwitchWeaponRemote();
            FindObjectOfType<PlayerWeapons>().SwitchWeaponRemote();
        }
    }

}
