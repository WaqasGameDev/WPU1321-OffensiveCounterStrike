using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraCollision : MonoBehaviour
{
    public float minDistance = 1f;
    private bool hit;
    float distanceBetweenTargetAndCollisionPoint;

    public void UpdateCameraPosition(Transform target, Vector3 cameraCurrentPosition, Renderer[] enemySMRs)
    {

        hit = Physics.Linecast(target.position, cameraCurrentPosition, out RaycastHit hitInfo);

        distanceBetweenTargetAndCollisionPoint = Vector3.Distance(target.position, hitInfo.point);

        transform.position = hit ? hitInfo.point : cameraCurrentPosition;

        Debug.DrawLine(target.position, cameraCurrentPosition, hit ? Color.red : Color.green);

        SetSMRsState(enemySMRs, distanceBetweenTargetAndCollisionPoint > minDistance);
    }

    bool allActive = true;

    private void SetSMRsState(Renderer[] enemySMRs, bool active)
    {
        if (allActive == active)
            return;

        allActive = active;

        if (enemySMRs==null)
        {
            return;
        }
        foreach (var smr in enemySMRs)
        {
            smr.enabled = active;
        }
    }
}
