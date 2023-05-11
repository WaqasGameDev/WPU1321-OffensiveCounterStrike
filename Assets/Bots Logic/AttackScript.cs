using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AttackScript : MonoBehaviour
{
    EnemyAnimator enemyAnimator;
    private void Start()
    {
        enemyAnimator = GetComponent<EnemyAnimator>();
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        RaycastHit hit;
        int attackRange = 50;
        if (Physics.Raycast(transform.position, transform.up, out hit, attackRange))
        {
            Debug.LogWarning("RAY CASTING IN ATTACK SCRIPT");
            Debug.DrawRay(transform.position, transform.up, Color.green);
            if (hit.transform.gameObject.name == "OfflinePlayer")
            {
                Debug.LogWarning("BOT HITS THE PLAYER WITH TAG = " + hit.transform.tag);

                Debug.DrawRay(transform.position, transform.forward, Color.red);
                enemyAnimator.Attack();
                int[] values = new int[3];
                values[1] = -35; //What body part we hit, this should be -35 to indicate that we fell down
                values[2] = -1; //What side of player was hit (For hit marks), this is assigned later at HitBox.cs
                                // Player is hit, deal damage
                hit.transform.GetComponent<PlayerNetwork>().ApplyDamage(values);
            }
        }
    }
}
