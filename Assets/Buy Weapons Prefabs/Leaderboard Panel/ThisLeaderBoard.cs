using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ThisLeaderBoard : MonoBehaviour
{
    [SerializeField] Button counterButton;
    [SerializeField] Button terroristButton;
    [SerializeField] Button spectatorButton;
    [SerializeField] Button optionsButton;
    [SerializeField] Button leaveRoomButton;
    [SerializeField] Button backButton;

    [SerializeField] Text counterScore;
    [SerializeField] Text terroristScore;

    [SerializeField] GameObject counterInfoPrefab;
    [SerializeField] GameObject terroristInfoPrefab;
    [SerializeField] Transform counterContent;
    [SerializeField] Transform terroritContent;
}
