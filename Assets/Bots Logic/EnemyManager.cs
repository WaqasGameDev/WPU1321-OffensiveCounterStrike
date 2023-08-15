using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyManager : MonoBehaviour
{
    public static EnemyManager instance;
    [SerializeField]
    private GameObject botPrefab;
    public Transform[] botSpawnPoint;
    [SerializeField]
    private int botEnemyCount;
    public int initialBotCount;
    public bool allow = true;
    public float waitBeforsSpawnEnemiesTime = 10f;
    private List<GameObject> spawnedBots = new List<GameObject>();
    public bool isPlayerSpawned = false;

    List<GameObject> enemies = new List<GameObject>();
    int randomSpawningPoint;
    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
    }
    private void Start()
    {
       
        initialBotCount = botEnemyCount;
        //  StartCoroutine("CheckToSpawnEnemies");
        SpawnNewEnemies();
    }

    public void NotifyBotsAboutPlayer()
    {
            foreach (var bot in spawnedBots)
            {
                bot.gameObject.GetComponent<EnemyController>().ResetEnemyController();
            }
    }
    public void SpawnEnemies()
    {
        SpawnBot();
    }

    int totalBotsSpawnedSoFar = 0;
    void SpawnBot()
    {
        int index = 0;
        for (int i = 0; i < botEnemyCount; i++)
        {
            if (index >= botSpawnPoint.Length)
            {
                index = 0;
            }
           var bot = Instantiate(botPrefab, botSpawnPoint[index].position, Quaternion.identity);
            bot.name += totalBotsSpawnedSoFar;
            spawnedBots.Add(bot);

            index++;
            totalBotsSpawnedSoFar++;
        }
        botEnemyCount = 0;
    }

    public void EnemyDied(GameObject bot)
    {
        if (spawnedBots.Contains(bot))
        {
            spawnedBots.Remove(bot);
            Destroy(bot);
        }
                botEnemyCount++;
                botEnemyCount = initialBotCount;
        
    }
    IEnumerator CheckToSpawnEnemies()
    {
        while (true)
        {
            if (allow)
                SpawnBot();
            yield return new WaitForSeconds(waitBeforsSpawnEnemiesTime);
        }

    }
    public void StopSpawningEnemies()
    {
        Debug.LogWarning("STOPPING ENEMY SPAWNING");
        StopCoroutine("CheckToSpawnEnemies");
    }

    // UMair Work

    public void SpawnNewEnemies()
    {
        randomSpawningPoint = Random.Range(0, botSpawnPoint.Length);
        if(enemies.Count <= 0)
        {
            for(int i = 0; i < botEnemyCount; i++)
            {
                var bot = Instantiate(botPrefab, botSpawnPoint[i].position, Quaternion.identity);
                bot.name += totalBotsSpawnedSoFar;
                enemies.Add(bot);
            }
        }
        else if (enemies.Count > 0)
        {
            for (int i = enemies.Count; i < botEnemyCount; i++)
            {
                var bot = Instantiate(botPrefab, botSpawnPoint[randomSpawningPoint].position, Quaternion.identity);
                bot.name += totalBotsSpawnedSoFar;
                enemies.Add(bot);
            }

        }
        totalBotsSpawnedSoFar++;

    }

    public void RemoveNewEnemies(GameObject bot)
    {
        enemies.Remove(bot);
        SpawnNewEnemies();
    }


}
