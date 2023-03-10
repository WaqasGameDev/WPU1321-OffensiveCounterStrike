

#pragma warning disable 0168 //Variable declared, but not used.
#pragma warning disable 0219 //Variable assigned, but not used.
#pragma warning disable 0414 //Private field assigned, but not used.
#pragma warning disable 0649 //Variable asisgned to, and will always have default value.

using MFPS.ULogin;
using System;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;
using UnityEngine;
using UnityEngine.UI;

public class SaveLoadManager : MonoBehaviour
{
    [Header("Variables")]
    public float currentVersion;



    public string savedusernametexttest;



    public int ID = bl_DataBase.Instance.LocalUser.ID;
    [SerializeField] string LoginName;
    [SerializeField] public string PlayerNameLogin;


    //Singleton
    public static SaveLoadManager instance;

    //Variables
    private string savePath;

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }


    }



    public void Start()
    {




    LoginName = bl_DataBase.Instance.LocalUser.LoginName;
        //string saveusernametest = PlayerName;

        savedusernametexttest = LoginName.ToString();

        if (bl_DataBase.IsUserLogged)
        {
            savePath = Application.persistentDataPath + "/" + savedusernametexttest + ".dat";
        }
        else
        {
            savePath = Application.persistentDataPath + "/save.dat";

        }
        CheckForSave();


        Debug.Log(savedusernametexttest);



        //Debug.Log(PlayerNameLogin);
    }

    private void CheckForSave()
    {
        Debug.Log("Checking for save.");

        if (File.Exists(savePath) == false)
        {
            CreateSave();
        }
        else
        {
            CheckVersion();
        }
    }

    private void CreateSave()
    {
        Debug.Log("Creating save.");

        //Create save file.
        BinaryFormatter binaryFormatter = new BinaryFormatter();
        FileStream fileStream = File.Open(savePath, FileMode.Create);
        SaveData newSaveData = new SaveData
        {
            savedVersion = currentVersion,
            savedId = ID,

            LoginNamesaved = LoginName,

            //PlayerNameLogin = PlayerNameLogin,


            adManagerSaveData = ADManager.instance.DefaultSaveData(),
            audioManagerSaveData = AudioManager.instance.DefaultSaveData(),
            caseManagerSaveData = CaseManager.instance.DefaultSaveData(),
            currencyManagerSaveData = CurrencyManager.instance.DefaultSaveData()
        };

        binaryFormatter.Serialize(fileStream, newSaveData);
        fileStream.Close();

        //Load save data.
        ADManager.instance.LoadSaveData(newSaveData);
        AudioManager.instance.LoadSaveData(newSaveData);
        CaseManager.instance.LoadSaveData(newSaveData);
        CurrencyManager.instance.LoadSaveData(newSaveData);
    }

    private void CheckVersion()
    {
        Debug.Log("Checking version.");

        try
        {
            //Get save data from file.
            BinaryFormatter binaryFormatter = new BinaryFormatter();
            FileStream fileStream = File.Open(savePath, FileMode.Open);
            SaveData saveData = (SaveData)binaryFormatter.Deserialize(fileStream);
            fileStream.Close();

            //Execute the correct state based on the current version and saved version.
            float savedVersion = saveData.savedVersion;
            string LoginNamesaved = saveData.LoginNamesaved;
            int savedId = saveData.savedId;

            Debug.Log(LoginNamesaved);

            Debug.Log(savedId);

            if (currentVersion == savedVersion && LoginName == LoginNamesaved && bl_DataBase.IsUserLogged && ID == savedId)
            {
                LoadSave();
            }
            else if (currentVersion > savedVersion)
            {
                ParseOldData();
            }

            else if (!bl_DataBase.IsUserLogged)
            {
                ParseOldData();
            }

            else //No support for backwards compatibility.
            {
                Debug.Log("Backwards compatibility is not supported.");
                File.Delete(savePath);
                CreateSave();
            }
        }
        catch (Exception exception)
        {
            Debug.Log(exception);
            File.Delete(savePath);
            CreateSave();
        }
    }

    public void LoadSave()
    {
        Debug.Log("Loading save.");

        try
        {
            //Get save data.
            BinaryFormatter binaryFormatter = new BinaryFormatter();
            FileStream fileStream = File.Open(savePath, FileMode.Open);
            SaveData saveData = (SaveData)binaryFormatter.Deserialize(fileStream);
            fileStream.Close();

            //Load save data.
            ADManager.instance.LoadSaveData(saveData);
            AudioManager.instance.LoadSaveData(saveData);
            CaseManager.instance.LoadSaveData(saveData);
            CurrencyManager.instance.LoadSaveData(saveData);
        }
        catch (Exception exception)
        {
            Debug.Log(exception);
            File.Delete(savePath);
            CreateSave();
        }
    }

    private void ParseOldData()
    {
        Debug.Log("Parsing old data.");

        try
        {
            //Get save data from file.
            BinaryFormatter binaryFormatter = new BinaryFormatter();
            FileStream fileStream = File.Open(savePath, FileMode.Open);
            SaveData oldSaveData = (SaveData)binaryFormatter.Deserialize(fileStream);
            fileStream.Close();
            File.Delete(savePath);

            //Parse old save data.
            SaveData newSaveData = new SaveData();
            newSaveData = UpgradeSave.VersionCheck(oldSaveData);

            //Create new save.
            binaryFormatter = new BinaryFormatter();
            fileStream = File.Open(savePath, FileMode.Create);
            binaryFormatter.Serialize(fileStream, newSaveData);
            fileStream.Close();

            //Load save data.
            ADManager.instance.LoadSaveData(newSaveData);
            AudioManager.instance.LoadSaveData(newSaveData);
            CaseManager.instance.LoadSaveData(newSaveData);
            CurrencyManager.instance.LoadSaveData(newSaveData);
        }
        catch (Exception exception)
        {
            Debug.Log(exception);
            File.Delete(savePath);
            CreateSave();
        }
    }

    // create new save for Ads manager separated

    public void Save()
    {
        Debug.LogError("===== CurrencyManager ID "+CurrencyManager.instance.GetInstanceID());
        try
        {
            BinaryFormatter binaryFormatter = new BinaryFormatter();
            FileStream fileStream = File.Open(savePath, FileMode.Open);
            SaveData saveData = new SaveData()
            {
                LoginNamesaved = LoginName,
                savedVersion = currentVersion,
                savedId = ID,

                adManagerSaveData = ADManager.instance.GetSaveData(),
                audioManagerSaveData = AudioManager.instance.GetSaveData(),
                caseManagerSaveData = CaseManager.instance.GetSaveData(),
                currencyManagerSaveData = CurrencyManager.instance.GetSaveData()
            };
            binaryFormatter.Serialize(fileStream, saveData);
            fileStream.Close();
        }
        catch (Exception exception)
        {
            Debug.Log(exception);
            File.Delete(savePath);
            CreateSave();
        }
    }
}

[Serializable]
public class SaveData
{
    public float savedVersion;
    public int savedId;
    public string LoginNamesaved;
    public ADManager.ClassSaveData adManagerSaveData;
    public AudioManager.ClassSaveData audioManagerSaveData;
    public CaseManager.ClassSaveData caseManagerSaveData;
    public CurrencyManager.ClassSaveData currencyManagerSaveData;
}