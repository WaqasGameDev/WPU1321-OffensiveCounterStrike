using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AttackScript : MonoBehaviour
{
    EnemyAnimator enemyAnimator;
    RaycastHit hit;
    int attackRange = 50;
    public bool isOffLinePlayerGetHit = false;

    public static AttackScript instance;
    private void Start()
    {
        if(instance == null)
        {
            instance = this;
        }
        enemyAnimator = GetComponent<EnemyAnimator>();
    }

    // Update is called once per frame
    void FixedUpdate()
    {
       
        if (Physics.Raycast(transform.position, transform.up, out hit, attackRange))
        {
            Debug.LogWarning("RAY CASTING IN ATTACK SCRIPT");
            Debug.DrawRay(transform.position, transform.up, Color.green);
            if (hit.transform.tag == "Player")
            {
                isOffLinePlayerGetHit = true;
                Debug.LogWarning("BOT HITS THE OFFLINEPLAYER WITH TAG = " + hit.transform.tag);

                
                int[] values = new int[3];
                GameSettings.rc.DoHitDetector((int)values[2]);
                var PN = hit.transform.GetComponent<PlayerNetwork>(); 
                PN.rc.currentHP -= 4;
                if (PN.rc.currentHP < 1)
                {
                    PN.KillPlayer(0);
                    EnemyManager.instance.StopSpawningEnemies();
                }
                // hit.transform.GetComponent<PlayerNetwork>().ApplyDamage(values);
            }
            else
            {
                isOffLinePlayerGetHit = false;
            }
        }
    }
}
