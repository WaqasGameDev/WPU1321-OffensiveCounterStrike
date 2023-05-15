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
        StartCoroutine("CheckToSpawnEnemies");
    }

    public void NotifyBotsAboutPlayer()
    {

            foreach (var bot in spawnedBots)
            {
                bot.gameObject.SetActive(true);
            }
    }
    public void SpawnEnemies()
    {
        SpawnBot();
    }
  
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
            spawnedBots.Add(bot);

            index++;
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
}
