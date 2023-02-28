using UnityEngine; 
using System.Collections;
public class ThirdPersonCamera : MonoBehaviour
{
    [Header("Mouse Look")]

    public bool lockCursor;
    public float mouseSensitivity = 10;
    public Transform target;
    public Vector2 pitchMinMax = new Vector2(-40, 85);
    public float smoothing = .12f;

    Vector3 rotationSmoothvelocity;

    Vector3 currentRotation;
    float yaw;
    float pitch;

    [Header("Camera-Collision")]
    Vector3 cameraDirection;
    float camDistance;
    Vector2 cameraDistanceMinMax = new Vector2(0.5f, 5f);
    public Transform cam;

    void Start()
    {
        cameraDirection = cam.transform.localPosition.normalized;
        camDistance = cameraDistanceMinMax.y;


        if (lockCursor)
        {
            Cursor.lockState = CursorLockMode.Locked;
            Cursor.visible = false;
        }
    }

    void LateUpdate()
            {

                yaw += Input.GetAxis("Mouse X") * mouseSensitivity;
                pitch -= Input.GetAxis("Mouse Y") * mouseSensitivity;
                pitch = Mathf.Clamp(pitch, pitchMinMax.x, pitchMinMax.y);

                currentRotation = Vector3.SmoothDamp(currentRotation, new Vector3(pitch, yaw), ref rotationSmoothvelocity, smoothing);
        
        transform.eulerAngles = currentRotation;

                transform.position = Vector3.MoveTowards(transform.position, target.position, 0.5f);
        CheckCameraOcclusionAndCollision(cam);

    }


            public void CheckCameraOcclusionAndCollision(Transform cam)
            {
                Vector3 desiredCameraPosition = transform.TransformPoint(cameraDirection * cameraDistanceMinMax.y);
                RaycastHit hit;

                if (Physics.Linecast(transform.position, desiredCameraPosition, out hit))
                {
                    camDistance = Mathf.Clamp(hit.distance, cameraDistanceMinMax.x, cameraDistanceMinMax.y);

                }
                else
                {

                    camDistance = cameraDistanceMinMax.y;
                }
                cam.localPosition = cameraDirection * camDistance;

            }
}