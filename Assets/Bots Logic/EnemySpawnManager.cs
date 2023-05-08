using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemySpawnManager : MonoBehaviour
{
    [SerializeField] GameObject enemySpawner ;
    void Awake()
    {
        enemySpawner.SetActive(false);
        if (ConnectMenu.Instance.canPlayWithBots)
        {
            enemySpawner.SetActive(true);
        }
    }

  
}
