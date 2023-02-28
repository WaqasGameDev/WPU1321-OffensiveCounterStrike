//Poylgon Planet - Contact. https://polygonplanet.com/contact/
//Copyright © 2016-2018 Polygon Planet. All rights reserved. https://polygonplanet.com/privacy-policy/
//This source file is subject to Unity Technologies Asset Store Terms of Service. https://unity3d.com/legal/as_terms

#pragma warning disable 0168 //Variable declared, but not used.
#pragma warning disable 0219 //Variable assigned, but not used.
#pragma warning disable 0414 //Private field assigned, but not used.
#pragma warning disable 0649 //Variable asisgned to, and will always have default value.

using PolygonPlanet.ConditionalHide;
using PolygonPlanet.ReorderableList;
using System.Collections.Generic;
using UnityEngine;

public class ObjectPooler : MonoBehaviour
{
    [Header("Object Pool")]
    [Reorderable(elementNameOverride = "Pool Item")]
    public PoolItemList poolItems;

    //Variables
    private GameObject objectPoolerParent;
    [HideInInspector]
    public List<ParentPoolItem> spawnedPoolItems;

    private void Awake()
    {
        SpawnPooledItems();
    }

    private void SpawnPooledItems()
    {
        //Parent game object.
        objectPoolerParent = new GameObject("Object Pooler (" + poolItems.Count + " items)");

        spawnedPoolItems = new List<ParentPoolItem>();
        for (int i = 0; i < poolItems.Count; i++)
        {
            //Sub parent game object.
            GameObject poolItemGameObjectParent = null;
            if (poolItems[i].customParent == false)
            {
                poolItemGameObjectParent = new GameObject(poolItems[i].gameObjectToPool.name);
                poolItemGameObjectParent.transform.SetParent(objectPoolerParent.transform);
            }

            ParentPoolItem newParentPoolItem = new ParentPoolItem()
            {
                poolItemName = poolItems[i].gameObjectToPool.name,
                gameObjects = new List<GameObject>()
            };

            //Child game object.
            for (int j = 0; j < poolItems[i].startingPool; j++)
            {
                GameObject poolGameObject = Instantiate(poolItems[i].gameObjectToPool);
                poolGameObject.SetActive(false);
                if (poolItems[i].customParent == false)
                {
                    poolGameObject.transform.SetParent(objectPoolerParent.transform.Find(poolItems[i].gameObjectToPool.name), false);
                }
                else
                {
                    poolGameObject.transform.SetParent(poolItems[i].parentTransform, false);
                }
                newParentPoolItem.gameObjects.Add(poolGameObject);
            }
            spawnedPoolItems.Add(newParentPoolItem);
        }
    }

    public GameObject GetPooledObject(string search)
    {
        //If we have objects that are available. 
        for (int i = 0; i < spawnedPoolItems.Count; i++)
        {
            if (spawnedPoolItems[i].poolItemName == search)
            {
                foreach (GameObject poolItemGameObject in spawnedPoolItems[i].gameObjects)
                {
                    if (poolItemGameObject.activeSelf == false)
                    {
                        poolItemGameObject.SetActive(true);
                        return poolItemGameObject;
                    }
                }
            }
        }

        //If all objects are in use, instantiate a new one.
        return SpawnNewPoolObject(search);
    }

    private GameObject SpawnNewPoolObject(string search)
    {
        for (int i = 0; i < poolItems.Count; i++)
        {
            if (poolItems[i].gameObjectToPool.name == search)
            {
                GameObject poolGameObject = Instantiate(poolItems[i].gameObjectToPool);
                if (poolItems[i].customParent == false)
                {
                    poolGameObject.transform.SetParent(objectPoolerParent.transform.Find(poolItems[i].gameObjectToPool.name), false);
                }
                else
                {
                    poolGameObject.transform.SetParent(poolItems[i].parentTransform, false);
                }
                spawnedPoolItems[spawnedPoolItems.FindIndex(x => (x.poolItemName == search))].gameObjects.Add(poolGameObject);
                return poolGameObject;
            }
        }
        return null;
    }
}

[System.Serializable]
public class PoolItem
{
    [Header("Pool Object")]
    public GameObject gameObjectToPool;

    [Header("Custom Parent")]
    public bool customParent;
    [ConditionalHide(conditionalSourceField = "customParent")]
    public Transform parentTransform;

    [Header("Variables")]
    public int startingPool;
}

[System.Serializable]
public class PoolItemList : ReorderableArray<PoolItem>
{
}

[System.Serializable]
public class ParentPoolItem
{
    //Info
    public string poolItemName;

    //Variables
    public List<GameObject> gameObjects;
}