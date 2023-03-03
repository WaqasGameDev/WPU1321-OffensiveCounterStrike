using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraCollision : MonoBehaviour
{
    public float minDistance = 1f;
    public float maxDistance = 4f;
    public float smooth = 10f;
    private float distanceBetweenPointOfCollisionAndCameraPivot;
    private Transform cameraPivot;
    Vector3 cameraNewPosition;

    void Awake()
    {
        cameraPivot = transform.parent;
    }

    void Update()
    {
        cameraNewPosition = cameraPivot.TransformPoint(Vector3.back * maxDistance);

        Debug.DrawLine(cameraPivot.position, cameraNewPosition, Color.green);

        RaycastHit hit;
     
        if (Physics.Linecast(cameraPivot.position, cameraNewPosition, out hit))
        {
            Debug.DrawLine(cameraPivot.position, cameraNewPosition, Color.red);
            
            distanceBetweenPointOfCollisionAndCameraPivot = Mathf.Clamp(hit.distance, minDistance, maxDistance);
           
            cameraNewPosition = Vector3.Lerp(transform.localPosition, Vector3.back * distanceBetweenPointOfCollisionAndCameraPivot, smooth * Time.deltaTime);

            transform.localPosition =  cameraNewPosition;
        }
        else
        {
            transform.position = cameraNewPosition;
        }


    }
}
