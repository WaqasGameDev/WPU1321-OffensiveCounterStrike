using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class BotAiScript : MonoBehaviour
{
    private EnemyAnimator enemyAnimator;
    private NavMeshAgent agent;
    private Transform target;
    private float health = 100f;
    private float attackRange = 30f;
    private float detectionRange = 20f;
    private float reloadTime = 2f;
    private float fireRate = 0.1f;
    private float nextFireTime = 0f;

    public static BotAiScript instance;

    private void Awake()
    {
        if(instance == null)
        {
            instance = this;
        }
    }
    void Start()
    {
        agent = GetComponent<NavMeshAgent>();
        enemyAnimator = GetComponent<EnemyAnimator>();
        target = GameObject.FindGameObjectWithTag("Player").transform;
    }

    // Update is called once per frame
    void Update()
    {
        if (health <= 0)
        {
            agent.enabled = false;
            enemyAnimator.Dead();
            StartCoroutine(DestroyDeadBot());
            // Bot is dead
            return;
        }

        float distanceToPlayer = Vector3.Distance(transform.position, target.position);
        if (distanceToPlayer <= attackRange)
        {
            // Player is within attack range, shoot at them
           
            Shoot();
        }
        else if (distanceToPlayer <= detectionRange)
        {
            // Player is within detection range, move towards them
            agent.SetDestination(target.position);
            enemyAnimator.Run(true);
        }
        else
        {
            // Player is out of range, stop moving
            agent.SetDestination(transform.position);
            enemyAnimator.Walk(false);
        }
    }

    private void Shoot()
    {
        if (Time.time > nextFireTime)
        {
            nextFireTime = Time.time + fireRate;
            RaycastHit hit;
            if (Physics.Raycast(transform.position, transform.forward, out hit, attackRange))
            {
                if (hit.transform.tag == "Player")
                {
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

    private IEnumerator Reload()
    {
        yield return new WaitForSeconds(reloadTime);
        // Reload the bot's weapon
    }

    public void TakeDamage(float damage)
    {
        health -= damage;
        Debug.LogWarning("PLAYER SHOOTS THE BOT AND ITS HEALTH IS " + health);
        if (health <= 0)
        {
           
        }
    }

    IEnumerator DestroyDeadBot()
    {
        yield return new WaitForSeconds(5f);
        Destroy(gameObject);
    }
}
