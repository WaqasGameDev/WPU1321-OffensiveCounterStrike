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
    public float waitBeforsSpawnEnemiesTime = 10f;


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
        SpawnEnemies();
        StartCoroutine("CheckToSpawnEnemies");
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
            Instantiate(botPrefab, botSpawnPoint[index].position, Quaternion.identity);
            index++;
        }
        botEnemyCount = 0;
    }

    public void EnemyDied(bool cannible)
    {
       
                botEnemyCount++;
                botEnemyCount = initialBotCount;
        
    }
    IEnumerator CheckToSpawnEnemies()
    {
        yield return new WaitForSeconds(waitBeforsSpawnEnemiesTime);
        SpawnBot();
        StartCoroutine("CheckToSpawnEnemies");
    }
    public void StopSpawningEnemies()
    {
        StopCoroutine("CheckToSpawnEnemies");
    }
}
