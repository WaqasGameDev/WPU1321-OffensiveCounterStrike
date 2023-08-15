using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RagdollManager : MonoBehaviour
{
    public Rigidbody[] rigidbodies; // References to the Rigidbody components of body parts
    public Collider[] colliders; // References to the Collider components of body parts

    private void Start()
    {
      //  SetRagdollState(false);
    }

    private void SetRagdollState()
    {
        int i;
        for (i = 0; i < rigidbodies.Length; i++)
        {
            rigidbodies[i].isKinematic = false;
        }
        for (i = 0; i < colliders.Length; i++)
        {
            colliders[i].enabled = true;
        }
    }

    public void ActivateRagdoll()
    {
        SetRagdollState();
    }

    public IEnumerator DestroyIt()
    {
        yield return new WaitForSeconds(4);
        Destroy(this.gameObject);
    }
}
