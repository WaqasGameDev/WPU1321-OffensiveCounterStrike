using UnityEngine;
public class Test : MonoBehaviour
{
    public LayerMask layerMask;
    private void FixedUpdate()
    {
        var ray = new Ray(transform.position, transform.up * -1);
        var hit = Physics.Raycast(ray,out RaycastHit hitInfo, 100, layerMask);

        if (hit)
        {
            Debug.Log(hit ? hitInfo.transform.name : "Not collided");
            Debug.Log("Hitbox = "+ hitInfo.transform.GetComponent<HitBox>());
            Debug.DrawRay(transform.position, transform.up * -100, Color.red);
        }
        else
        {
            Debug.DrawRay(transform.position, transform.up * -100, Color.green);
        }
    }
}