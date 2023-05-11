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
    public bool isPlayer, isCannible, isBoar;
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

        if (isBoar || isCannible)
        {
            enemyAnimator = GetComponent<EnemyAnimator>();
            enemyController = GetComponent<EnemyController>();
            navAgent = GetComponent<NavMeshAgent>();
            // get enemy Audio
            enemyAudio = GetComponentInChildren<EnemyAudio>();
        }
        //if (isPlayer)
        //{
        //    playerStats = GetComponent<PlayerStats>();

        //}
    }
    public void ApplyDamage(float damage)
    {
        // if we died dont execute rest of the Code
        if (isDead)
            return;

        health -= damage;

        Debug.LogError("CURRENT BOT'S HEALTH IS ==== " + health);

        //if (isPlayer)
        //{
        //    // show the state(display the health UI value
        //    playerStats.DisplayStaminaStats(health);

        //}

        if (isBoar)
        {
            // if enemy is patrolling far away from player and player shoot 

            Debug.LogWarning("PLAY HIT THE BOT");
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
            navAgent.velocity = Vector3.zero;
            navAgent.enabled = false;
            enemyController.enabled = false;
       
            enemyAnimator.Dead();
            // start Coroutine for dead sound
           // StartCoroutine(DeadSound());
            // Spawn more enemies
            EnemyManager.instance.EnemyDied(true);

            Invoke("TurnOffGameObject", 3f);
    }
   
    void TurnOffGameObject()
    {
        Destroy(gameObject);
    }
    IEnumerator DeadSound()
    {
        yield return new WaitForSeconds(0.3f);
        //enemyAudio.PlayDeadSound();
    }
}
