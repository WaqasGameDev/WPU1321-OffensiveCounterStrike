using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class HealthScript : MonoBehaviour
{
    private EnemyAnimator enemyAnimator;
    private NavMeshAgent navAgent;
    private EnemyController enemyController;
    public float health = 100f;
    public bool isPlayer, isCannible, isBot;
    private bool isDead;
    private EnemyAudio enemyAudio;

    public static HealthScript instance;
   // private PlayerStats playerStats;
    void Start()
    {
        if(instance == null)
        {
            instance = this;
        }
            enemyAnimator = GetComponent<EnemyAnimator>();
            enemyController = GetComponent<EnemyController>();
            navAgent = GetComponent<NavMeshAgent>();
            // get enemy Audio
            enemyAudio = GetComponentInChildren<EnemyAudio>();
        
    }
    public void ApplyDamage(float damage)
    {
        // if we died dont execute rest of the Code
        if (isDead)
            return;

        health -= damage;

        if (isBot)
        {
            // if enemy is patrolling far away from player and player shoot 

            if (enemyController.EnemyState == EnemyState.PATROL)
            {
                // enemy will notic the shoot and chase the player 
                enemyController.chaseDistance = 60f;
            }
        }

        if (health <= 0f)
        {
            PlayerDied();
            isDead = true;
        }

    }

    void PlayerDied()
    {
            gameObject.GetComponent<Rigidbody>().constraints = RigidbodyConstraints.FreezeAll;
            navAgent.velocity = Vector3.zero;
            navAgent.enabled = false;
            enemyController.enabled = false;
       
            enemyAnimator.Dead();
            // start Coroutine for dead sound
           // StartCoroutine(DeadSound());
            // Spawn more enemies

            Invoke(nameof(DestroyEnemy), 5f);
    }
   
    void DestroyEnemy()
    {
        EnemyManager.instance.EnemyDied(this.gameObject);

    }
    IEnumerator DeadSound()
    {
        yield return new WaitForSeconds(0.3f);
        //enemyAudio.PlayDeadSound();
    }
}
