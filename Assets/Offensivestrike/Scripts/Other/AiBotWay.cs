#if UNITY_EDITOR
using UnityEngine;
using System.Collections;

public class AiBotWay : MonoBehaviour
{

    void OnDrawGizmos()
    {
        Vector3 startPoint = new Vector3(transform.position.x, transform.position.y + 1, transform.position.z);
        Gizmos.color = Color.black;
        Gizmos.DrawSphere(startPoint, 1);
    }
}
#endif
