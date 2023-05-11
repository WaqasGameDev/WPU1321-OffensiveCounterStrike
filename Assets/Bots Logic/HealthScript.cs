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
        //if (isCannible)
        //{
        //    // cannible does not have dead animation
        //    GetComponent<Animator>().enabled = false;
        //    GetComponent<BoxCollider>().isTrigger = false;
        //    // AddTurque() applys angular force to gameObject
        //    GetComponent<Rigidbody>().AddTorque(-transform.forward * 50f);
        //    enemyController.enabled = false;
        //    navAgent.enabled = false;
        //    enemyAnimator.enabled = false;
        //    // start coroutine
        //    StartCoroutine(DeadSound());
        //    // EnemyManager spawn more enemies
        //    EnemyManager.instance.EnemyDied(true);
        //}

        if (isBoar)
        {
            // Boar has a dead animation
            navAgent.velocity = Vector3.zero;
            navAgent.isStopped = true;
            // enemyController.enabled = false;
            enemyAnimator.Dead();
            // start Coroutine
            StartCoroutine(DeadSound());
            // Spawn more enemies
            EnemyManager.instance.EnemyDied(false);

        }

        //if (isPlayer)
        //{
        //    // when player is died all enemies will be called inside enemies[]
        //    GameObject[] enemies = GameObject.FindGameObjectsWithTag("Bot");

        //    for (int i = 0; i < enemies.Length; i++)
        //    {
        //        //every kind of action of the enemies will be disabled
        //        enemies[i].GetComponent<EnemyController>().enabled = false;
        //        // call Enemy Manager to stop spawning enemies
        //        EnemyManager.instance.StopSpawningEnemies();
        //    }

        //    //GetComponent<PlayerMovement>().enabled = false;
        //    //GetComponent<PlayerAttack>().enabled = false;
        //    //GetComponent<WeaponManager>().GetCurrentSelectedWeapon().gameObject.SetActive(false);
        //}

        // when player is died, Restart the game
        //if (tag == Tags.PLAYER_TAG)
        //{
        //    Invoke("RestartGame", 3f);
        //}
        //else
        //{
            // when the any enemy will die, it will deactivate 
            Invoke("TurnOffGameObject", 3f);
       // }
    }
    //void RestartGame()
    //{
    //    UnityEngine.SceneManagement.SceneManager.LoadScene("FPS Level1");

    //}
    void TurnOffGameObject()
    {
        gameObject.SetActive(false);
    }
    IEnumerator DeadSound()
    {
        yield return new WaitForSeconds(0.3f);
        enemyAudio.PlayDeadSound();
    }
}
