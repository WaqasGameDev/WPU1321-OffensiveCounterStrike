using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraCollision : MonoBehaviour
{
    public float minDistance = 1f;
    public float maxDistance = 4f;
    public float smooth = 10f;
    private float distanceBetweenPointOfCollisionAndCameraPivot;


    public void UpdateCameraPosition(Transform target)
    {
        Debug.DrawLine(target.position, transform.position, Color.green);

        RaycastHit hit;

        if (Physics.Linecast(target.position, transform.position, out hit))
        {
            Debug.DrawLine(target.position, transform.position, Color.red);

            distanceBetweenPointOfCollisionAndCameraPivot = Mathf.Clamp(hit.distance, minDistance, maxDistance);
            Debug.LogError("DIFF : " + distanceBetweenPointOfCollisionAndCameraPivot + "Local pos :" + transform.localPosition);

            //var XdistanceBetweenCameraAndPlayer = target.position.x - cameraCurrentPosition.x;
            //var ZdistanceBetweenCameraAndPlayer = target.position.z - cameraCurrentPosition.z;

            //var angle = Mathf.Rad2Deg * (Mathf.Atan(ZdistanceBetweenCameraAndPlayer / XdistanceBetweenCameraAndPlayer));

            //var xMovementOfCamera = distanceBetweenPointOfCollisionAndCameraPivot * Mathf.Cos(angle);
            //var zMovementOfCamera = distanceBetweenPointOfCollisionAndCameraPivot * Mathf.Sin(angle);
            //transform.localPosition = Vector3.Lerp(transform.localPosition,)
        }
    }
}
