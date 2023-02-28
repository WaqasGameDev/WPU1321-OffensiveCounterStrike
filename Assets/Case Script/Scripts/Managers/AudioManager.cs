

#pragma warning disable 0168 //Variable declared, but not used.
#pragma warning disable 0219 //Variable assigned, but not used.
#pragma warning disable 0414 //Private field assigned, but not used.
#pragma warning disable 0649 //Variable asisgned to, and will always have default value.

using PolygonPlanet.ReorderableList;
using System;
using System.Collections;
using UnityEngine;

public class AudioManager : MonoBehaviour
{
    [Header("Sounds")]
    [Reorderable]
    public SoundList sounds;

    [Header("Music")]
    public AudioSource musicSource;
    [Reorderable]
    public AudioClipList soundTracks;

    //Singleton
    public static AudioManager instance;

    //Class Save Data
    [HideInInspector]
    public ClassSaveData classSaveData;

    //Variables
    [HideInInspector]
    public bool soundOn, musicOn;
    [HideInInspector]
    public float soundVolume, musicVolume;
    private int selectedSoundTrack;

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
    }

    private void Start()
    {
        GameObject soundsParentGameObject = new GameObject("Sounds");
        soundsParentGameObject.transform.SetParent(transform);

        foreach (Sound sound in sounds)
        {
            GameObject soundGameObject = new GameObject(sound.soundName);
            soundGameObject.transform.SetParent(soundsParentGameObject.transform);
            soundGameObject.AddComponent<AudioSource>();
            soundGameObject.GetComponent<AudioSource>().clip = sound.audioClip;
            soundGameObject.GetComponent<AudioSource>().volume = sound.volume;
            soundGameObject.GetComponent<AudioSource>().pitch = sound.pitch;
            soundGameObject.GetComponent<AudioSource>().playOnAwake = false;
            sound.audioSource = soundGameObject.GetComponent<AudioSource>();
        }

        StartCoroutine(PlayMusic());
    }

    private void Update()
    {
        musicSource.mute = !musicOn;
    }

    public void ToggleSound()
    {
        if (soundOn == false)
        {
            soundOn = true;
            PlaySound("UIClick");
        }
        else
        {
            PlaySound("UIClick");
            soundOn = false;
        }
        SaveLoadManager.instance.Save();
    }

    public void ToggleMusic()
    {
        PlaySound("UIClick");
        musicOn = !musicOn;
        SaveLoadManager.instance.Save();
    }

    public void PlaySound(string soundName)
    {
        if (soundOn == true)
        {
            foreach (Sound sound in sounds)
            {
                if (soundName == sound.soundName)
                {
                    sound.audioSource.Play();
                    break;
                }
            }
        }
    }

    public void UpdateSoundVolume(float value)
    {
        soundVolume = value;
        foreach (Sound sound in sounds)
        {
            sound.audioSource.volume = soundVolume;
        }
        SaveLoadManager.instance.Save();
    }

    private IEnumerator PlayMusic()
    {
        if (selectedSoundTrack >= soundTracks.Count)
        {
            selectedSoundTrack = 0;
        }
        musicSource.clip = soundTracks[selectedSoundTrack];
        musicSource.Play();
        selectedSoundTrack++;
        yield return new WaitUntil(() => musicSource.isPlaying == false);
        StartCoroutine(PlayMusic());
    }

    public void UpdateMusicVolume(float value)
    {
        musicVolume = value;
        musicSource.volume = musicVolume;
        SaveLoadManager.instance.Save();
    }

    #region Save Data
    [System.Serializable]
    public struct ClassSaveData
    {
        public bool soundOn;
        public bool musicOn;
        public float soundVolume;
        public float musicVolume;
    }

    public ClassSaveData DefaultSaveData()
    {
        ClassSaveData saveData = new ClassSaveData
        {
            soundOn = true,
            musicOn = true,
            soundVolume = 1,
            musicVolume = musicSource.volume
        };
        return saveData;
    }

    public ClassSaveData GetSaveData()
    {
        classSaveData.soundOn = soundOn;
        classSaveData.musicOn = musicOn;
        classSaveData.soundVolume = soundVolume;
        classSaveData.musicVolume = musicVolume;
        return classSaveData;
    }

    public void LoadSaveData(SaveData saveData)
    {
        classSaveData = saveData.audioManagerSaveData;
        soundOn = classSaveData.soundOn;
        musicOn = classSaveData.musicOn;
        soundVolume = classSaveData.soundVolume;
        musicVolume = classSaveData.musicVolume;
    }
    #endregion
}

[Serializable]
public class AudioClipList : ReorderableArray<AudioClip>
{
}

[Serializable]
public class Sound
{
    [Header("Info")]
    public string soundName;
    public AudioClip audioClip;

    [Header("Variables")]
    [Range(0, 1f)]
    public float volume;
    [Range(.1f, 3f)]
    public float pitch;

    //Variables
    [HideInInspector]
    public AudioSource audioSource;
}

[Serializable]
public class SoundList : ReorderableArray<Sound>
{
}