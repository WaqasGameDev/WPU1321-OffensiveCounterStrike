//#pragma warning disable 0168 //Variable declared, but not used.
//#pragma warning disable 0219 //Variable assigned, but not used.
//#pragma warning disable 0414 //Private field assigned, but not used.
//#pragma warning disable 0649 //Variable asisgned to, and will always have default value.
//using System.Collections;
//using System.Collections.Generic;
//using UnityEngine;
//using UnityEngine.AI;

//public class BotAi : Photon.MonoBehaviour
//{
//    public Animation animationController;
//    public AnimationClip idle;
//    public AnimationClip Walk;
//    public AnimationClip crounc;
//    public AnimationClip[] die;
//    public bool isMine = false;
//    public NavMeshAgent nma;
//    public List <GameObject> targets = new List<GameObject>();
//    public GameObject targetC4;
//    public int health = 100;
//    public RoomController rc;
//    public int team = 0;
//    public float diffuse = 0.0f;
//    float distance = 0f;
//    public AudioSource walkingAudio;
//    public AudioClip walkingSounds;
//    public AudioSource ShootAudio;
//    public AudioClip ShootSounds;
//    public GameObject CameraFollow;
//    public AudioClip DieAi;
//    float timeVayne = 0;
//    float timeVayneTeam = 0;
//    float stepLength;
//    public int KillAll = 0;
//    public int DieAll = 0;
//    public bool walkOn = false;
//    bool walkOnThis = false;
//    public float rotationSpeed = 10f;
//    public MeshRenderer muzzleFlash;
//    Transform muzzleFlashTransform;
//    public bool shootOn = true;
//    string WeaponName = "";
//    public string MapName;

//    public string killedPlayerName = "";
//    public int killedPlayerTeam = 0;

//    public int howWay = 0;
//    public float acceleration = 2f;
//    public float deceleration = 60f;
//    public float playerDistance = 20;

//    public bool ShotSuccessful = false;

//    public GameObject BotWayGameObject;
//    [Header("[ Bot Way ]")]
//    public List<GameObject> WayObjects;

//    [System.Obsolete]
//    private void Awake()
//    {
//        photonView.name = "Bot" + Random.Range(0,999);
//        rc = GameObject.Find("_RoomController(Clone)").GetComponent<RoomController>();
//        BotWayGameObject = GameObject.Find("AiBotWaY");

//        for (int i = 0; i < BotWayGameObject.transform.childCount; i++)
//        {
//            WayObjects.Add(BotWayGameObject.transform.GetChild(i).gameObject);
//        }
//    }
//     void Start()
//    {
//        muzzleFlash.enabled = false;
//        shootOn = true;
//        if (muzzleFlash != null)
//        {
//            muzzleFlashTransform = muzzleFlash.transform;
//        }
//        ShotSuccessful = false;
//        walkOn = true;
//        walkOnThis = false;
//        stepLength = 3.5f;
//        walkingAudio.clip = walkingSounds;
//        ShootAudio.clip = ShootSounds;
//        GetComponent<CapsuleCollider>().isTrigger = false;
//        GetComponent<CapsuleCollider>().enabled = true;
//        idle.wrapMode = WrapMode.Once;
//        Walk.wrapMode = WrapMode.Loop;
//        animationController[Walk.name].speed = 1.25f;
//        crounc.wrapMode = WrapMode.Once;
//        for (int i = 0; i < die.Length; i++)
//        {
//            die[i].wrapMode = WrapMode.Once;
//        }
//            string joinedTeam = "";
//            joinedTeam = team == 1 ? GameSettings.teamAName : GameSettings.teamBName;
//            rc.PostActivityRemote("", " " + photonView.name + rc.xml.button65, "", 0, 0);
//            rc.PostActivityRemote("", " " + photonView.name + rc.xml.button73, joinedTeam, 0, team);

//        howWay = Random.Range(0, WayObjects.Count);
//        if (team == 1) { WeaponName = "[M4A1]"; }
//        if (team == 2) { WeaponName = "[AK47]"; }

//        MapName = (string)PhotonNetwork.room.CustomProperties["MapName"];

//        if(MapName == "Dust2") { playerDistance = 70f; }
//        if (MapName == "Sonic") { playerDistance = 20f; }
//        if (MapName == "MorningStar") { playerDistance = 70f; }
//        if (MapName == "Polo") { playerDistance = 70f; }
//        if (MapName == "PoolDay") { playerDistance = 70f; }
//        if (MapName == "SnowPool") { playerDistance = 30f; }

//    }

//    public void RestartBot()
//    {
//        ShootAudio.clip = ShootSounds;
//        nma.isStopped = true;
//        targets.Clear();
//        ShotSuccessful = false;
//        shootOn = true;
//        timeVayne = 0;
//        animationController.Play(idle.name);
//        walkingAudio.Stop();
//        walkOnThis = false;
//        GetComponent<CapsuleCollider>().enabled = true;
//        health = 100;
//        howWay = Random.Range(0, WayObjects.Count);
//        Debug.Log(rc.otherPlayers.Count);
//    }
//    private void FixedUpdate()
//    {
//        if (rc.teamBPlayers.Count + rc.teamAPlayers.Count > 1 || rc.otherPlayers.Count > 0)
//        {
//            StopAllCoroutines();
//            PhotonNetwork.Destroy(gameObject);
//            Destroy(gameObject);
//            rc.FollowCamAll.Clear();
//            rc.teamABots.Clear();
//            rc.teamBBots.Clear();
//        }

//        if (nma.hasPath)
//        {
//            nma.acceleration = (nma.remainingDistance < nma.stoppingDistance) ? deceleration : acceleration;
//        }
//    }
//    void Update()
//    {

//        if (timeVayne < 6)
//        {
//            timeVayne += Time.deltaTime;
//        }

//        if (isMine && timeVayne > 5 && nma != null && rc.teamBPlayers.Count + rc.teamAPlayers.Count < 2)
//        {
//            nma.isStopped = false;
//            if (team == 1 && health > 0)
//            {
//                targetC4 = GameObject.FindGameObjectWithTag("C4");

//                if (rc.teamBPlayers.Count > 0 && targets.Count < 1)
//                {
//                    for (int i = 0; i < rc.teamBPlayers.Count; i++)
//                    {
//                        if (GameObject.Find(rc.teamBPlayers[i].NickName) != null)
//                        {
//                            distance = Vector3.Distance(GameObject.Find(rc.teamBPlayers[i].NickName).gameObject.transform.position, transform.position);
//                            if (distance <= playerDistance && targets.Count < 1 && (int)GameObject.Find(rc.teamBPlayers[i].NickName).gameObject.GetComponent<PlayerNetwork>().photonView.owner.CustomProperties["PlayerHP"] > 0)
//                            {
//                                targets.Add(GameObject.Find(rc.teamBPlayers[i].NickName).gameObject);
//                            }
//                        }
//                    }
//                }

//                if (rc.teamBBots.Count > 0 && targets.Count < 1)
//                {
//                    for (int i = 0; i < rc.teamBBots.Count; i++)
//                    {
//                        if (GameObject.Find(rc.teamBBots[i].name) != null)
//                        {
//                            distance = Vector3.Distance(GameObject.Find(rc.teamBBots[i].name).gameObject.transform.position, transform.position);
//                            if (distance <= playerDistance && targets.Count < 1 && GameObject.Find(rc.teamBBots[i].name).gameObject.GetComponent<BotAi>().health > 0)
//                            {
//                                targets.Add(GameObject.Find(rc.teamBBots[i].name).gameObject);
//                            }
//                        }
//                    }
//                }

//                if (targets.Count > 0 && targets[0].gameObject.GetComponent<PlayerNetwork>() != null)
//                {
//                    if ((int)targets[0].gameObject.GetComponent<PlayerNetwork>().photonView.owner.CustomProperties["PlayerHP"] <= 0)
//                    {
//                        shootOn = true;
//                        targets.RemoveAt(0);
//                    }
//                }

//                if (targets.Count > 0 && targets[0].gameObject.GetComponent<BotAi>() != null)
//                {
//                    if (targets[0].gameObject.GetComponent<BotAi>().health <= 0)
//                    {
//                        shootOn = true;
//                        targets.RemoveAt(0);
//                    }
//                }

//                if (targetC4 != null && targets.Count == 0)
//                {
//                    GetComponent<PhotonView>().RPC("setTargetC4", PhotonTargets.AllBuffered, null);
//                    animationController.Play(Walk.name);
//                    walkOnThis = true;
//                    distance = Vector3.Distance(targetC4.transform.position, transform.position);
//                    if (distance <= 2.5f)
//                    {
//                        animationController.Play(crounc.name);
//                        walkingAudio.Stop();
//                        walkOnThis = false;
//                        diffuse += Time.deltaTime;
//                        if (diffuse > 7)
//                        {
//                            targetC4.GetComponent<C4>().Difuse2();
//                            animationController.Play(idle.name);
//                            walkingAudio.Stop();
//                            walkOnThis = false;
//                            diffuse = 0;    
//                        }
//                    }
//                }
//                else 
//                {

//                    if (targets.Count == 0)
//                    {
//                        nma.stoppingDistance = 2f;
//                        distance = Vector3.Distance(WayObjects[howWay].transform.position, transform.position);
//                        if (distance <= 3f)
//                        {
//                            animationController.Play(idle.name);
//                            howWay = Random.Range(0, WayObjects.Count);
//                            walkingAudio.Stop();
//                            walkOnThis = false;
//                        }
//                        else
//                        {
//                            animationController.Play(Walk.name);
//                            walkOnThis = true;
//                            GetComponent<PhotonView>().RPC("setTarget", PhotonTargets.AllBuffered, howWay);
//                        }

//                        ShotSuccessful = false;
//                    }
//                    else
//                    {
//                        distance = Vector3.Distance(targets[0].transform.position, transform.position);
//                        if (ShotSuccessful)
//                        {
//                            nma.stoppingDistance = 75;
//                            animationController.Play(idle.name);
//                            walkingAudio.Stop();
//                            walkOnThis = false;
//                        }
//                        else
//                        {
//                            nma.stoppingDistance = 3f;
//                            animationController.Play(Walk.name);
//                            walkOnThis = true;
//                            GetComponent<PhotonView>().RPC("setTargetPlayers", PhotonTargets.AllBuffered, null);
//                        }
//                        RotateTowards(targets[0].transform);
//                    }

//                }

//            }

//            if (team == 2 && health > 0)
//            {
//                if (rc.teamAPlayers.Count > 0 && targets.Count < 1)
//                {
//                    for (int i = 0; i < rc.teamAPlayers.Count; i++)
//                    {
//                        if (GameObject.Find(rc.teamAPlayers[i].NickName) != null)
//                        {
//                            distance = Vector3.Distance(GameObject.Find(rc.teamAPlayers[i].NickName).gameObject.transform.position, transform.position);
//                            if (distance <= playerDistance && targets.Count < 1 && (int)GameObject.Find(rc.teamAPlayers[i].NickName).gameObject.GetComponent<PlayerNetwork>().photonView.owner.CustomProperties["PlayerHP"] > 0)
//                            {
//                                targets.Add(GameObject.Find(rc.teamAPlayers[i].NickName).gameObject);
//                            }
//                        }
//                    }
//                }

//                if (rc.teamABots.Count > 0 && targets.Count < 1)
//                {
//                    for (int i = 0; i < rc.teamABots.Count; i++)
//                    {
//                        if (GameObject.Find(rc.teamABots[i].name) != null)
//                        {
//                            distance = Vector3.Distance(GameObject.Find(rc.teamABots[i].name).gameObject.transform.position, transform.position);
//                            if (distance <= playerDistance && targets.Count < 1 && GameObject.Find(rc.teamABots[i].name).gameObject.GetComponent<BotAi>().health > 0)
//                            {
//                                targets.Add(GameObject.Find(rc.teamABots[i].name).gameObject);
//                            }
//                        }
//                    }
//                }

//                if (targets.Count > 0 && targets[0].gameObject.GetComponent<PlayerNetwork>() != null)
//                {
//                    if ((int)targets[0].gameObject.GetComponent<PlayerNetwork>().photonView.owner.CustomProperties["PlayerHP"] <= 0)
//                    {
//                        shootOn = true;
//                        targets.RemoveAt(0);
//                    }
//                }

//                if (targets.Count > 0 && targets[0].gameObject.GetComponent<BotAi>() != null)
//                {
//                    if (targets[0].gameObject.GetComponent<BotAi>().health <= 0)
//                    {
//                        shootOn = true;
//                        targets.RemoveAt(0);
//                    }
//                }

//                if (targets.Count == 0)
//                {
//                    nma.stoppingDistance = 2f;
//                    distance = Vector3.Distance(WayObjects[howWay].transform.position, transform.position);
//                    if (distance <= 3f)
//                    {
//                        animationController.Play(idle.name);
//                        howWay = Random.Range(0, WayObjects.Count);
//                        walkingAudio.Stop();
//                        walkOnThis = false;
//                    }
//                    else
//                    {
//                        animationController.Play(Walk.name);
//                        walkOnThis = true;
//                        GetComponent<PhotonView>().RPC("setTarget", PhotonTargets.AllBuffered, howWay);
//                    }
//                    ShotSuccessful = false;
//                }
//                else
//                {
//                    distance = Vector3.Distance(targets[0].transform.position, transform.position);
//                    if (ShotSuccessful)
//                    {
//                        nma.stoppingDistance = 75;
//                        animationController.Play(idle.name);
//                        walkingAudio.Stop();
//                        walkOnThis = false;
//                    }
//                    else
//                    {
//                        nma.stoppingDistance = 3f;
//                        animationController.Play(Walk.name);
//                        walkOnThis = true;
//                        GetComponent<PhotonView>().RPC("setTargetPlayers", PhotonTargets.AllBuffered, null);
//                    }
//                    RotateTowards(targets[0].transform);
//                }

//            }


//            if (walkOn && walkOnThis && health > 0)
//            {
//                walkOn = false;
//                StartCoroutine(PlayWalkingSound());
//            }

//            if (ShotSuccessful && shootOn && health > 0)
//            {
//                shootOn = false;
//                StartCoroutine(DoMuzzleFlash());
//            }



//            if(health <= 0) { nma.isStopped = true; }

//            if(rc.currentGameMode == "TDM" && health <= 0)
//            {
//                timeVayneTeam += Time.deltaTime;
//                if (timeVayneTeam > Random.Range(5,10))
//                {
//                    RestartBot();
//                    timeVayne = 6;
//                    timeVayneTeam = 0;
//                }

//            }

//        }

//    }

//    private void RotateTowards(Transform target)
//    {
//        RaycastHit hit;
//        Vector3 direction = (target.position - transform.position).normalized;
//        Quaternion lookRotation = Quaternion.LookRotation(direction);
//        transform.rotation = Quaternion.Slerp(transform.rotation, lookRotation, Time.deltaTime * rotationSpeed);

//        if (Physics.Raycast(transform.position, direction, out hit, 20))
//        {
//            Debug.DrawLine(transform.position, hit.point, Color.cyan);
//            if (hit.transform.CompareTag("PlayerAI"))
//            {
//                ShotSuccessful = true;
//            }
//            else if (team == 1 && hit.transform.CompareTag("AiTr"))
//            {
//                ShotSuccessful = true;
//            }
//            else if (team == 2 && hit.transform.CompareTag("Ai"))
//            {
//                ShotSuccessful = true;
//            }
//            else 
//            { 
//                ShotSuccessful = false; 
//            }
//        }
//    }

//    IEnumerator DoMuzzleFlash()
//    {
//        if (targets.Count > 0)
//        {
//            if (targets.Count > 0 && targets[0].gameObject.GetComponent<PlayerNetwork>() != null)
//            {
//                muzzleFlash.enabled = true;
//                muzzleFlashTransform.Rotate(0, Random.Range(-360, 360), 0, Space.Self);
//                ShootAudio.Stop();
//                yield return new WaitForSeconds(0.1f);
//                int[] values = new int[3];
//                values[0] = - Random.Range(20,60);
//                values[1] = - Random.Range(20,60);
//                values[2] = -1;
//                muzzleFlash.enabled = false;
//                if (targets.Count > 0)
//                {
//                    targets[0].gameObject.GetComponent<PlayerNetwork>().DamageRemoteBot(values, photonView.name, team, WeaponName);
//                    ShootAudio.Play();
//                }
//                yield return new WaitForSeconds(Random.Range(1, 3));
//                shootOn = true;
//            }

//            if (targets.Count > 0 && targets[0].gameObject.GetComponent<BotAi>() != null)
//            {
//                muzzleFlash.enabled = true;
//                muzzleFlashTransform.Rotate(0, Random.Range(-360, 360), 0, Space.Self);
//                ShootAudio.Stop();
//                yield return new WaitForSeconds(0.1f);
//                int[] values = new int[3];
//                values[0] = -30;
//                values[1] = -35;
//                values[2] = -1;
//                muzzleFlash.enabled = false;
//                if (targets.Count > 0)
//                {
//                    targets[0].gameObject.GetComponent<BotAi>().AiBotDamage(Random.Range(20, 60), this.photonView.name, this.WeaponName, this.team);
//                    targets[0].gameObject.GetComponent<BotAi>().PlayerAITargetRadarAI(this.photonView.name);
//                    ShootAudio.Play();
//                }
//                yield return new WaitForSeconds(Random.Range(1, 3));
//                shootOn = true;
//            }

//        }
//        else { shootOn = true; }
        
//    }

//    public void PlayerAITargetRadar()
//    {
//        if (targets.Count == 0)
//        {
//            targets.Add(GameObject.Find(killedPlayerName.ToString()));
//        }

//        if (targets.Count > 0 && ShotSuccessful == false)
//        {
//            targets.Remove(targets[0]);
//            targets.Add(GameObject.Find(killedPlayerName.ToString()));
//        }
//    }
//    public void PlayerAITargetRadarAI(string name)
//    {
//        if (targets.Count == 0)
//        {
//            targets.Add(GameObject.Find(name.ToString()));
//        }

//        if (targets.Count > 0 && ShotSuccessful == false)
//        {
//            targets.Remove(targets[0]);
//            targets.Add(GameObject.Find(name.ToString()));
//        }
//    }

//    IEnumerator PlayWalkingSound()
//    {
//        walkingAudio.Stop();
//        yield return new WaitForSeconds(0.2f);
//        walkingAudio.Play();
//        yield return new WaitForSeconds(0.5f);
//        walkOn = true;
//    }

//    [PunRPC]
//    public void setTarget(int i)
//    {
//        if (targets != null)
//        {
//            nma.SetDestination(WayObjects[i].transform.position);
//        }


//    }

//    [PunRPC]
//    public void setTargetPlayers()
//    {
//        if (targets != null)
//        {
//            nma.SetDestination(targets[0].transform.position);
//        }

//    }

//    [PunRPC]
//    public void setTargetC4()
//    {
//        if (targetC4 != null)
//        {
//            nma.stoppingDistance = 2f;
//            nma.SetDestination(targetC4.transform.position);
//        }

//    }

//    [PunRPC]
//    public void AiDamage(int theDamage,string selectedWeapon)
//    {
//        health = health - theDamage;
//        Debug.Log(health);
//        if(health <= 0)
//        {
//            targets.Clear();
//            ShootAudio.clip = DieAi;
//            ShootAudio.Play();
//            DieAll++;
//            GetComponent<CapsuleCollider>().isTrigger = true;
//            GetComponent<CapsuleCollider>().enabled = false;
//            int rnd = Random.Range(0, die.Length - 1);
//            animationController.Play(die[rnd].name);
//            rc.PostActivityRemoteWeapons(" " + killedPlayerName, "             [" + selectedWeapon + "]", photonView.name, killedPlayerTeam, team);
//            GameObject.Find(killedPlayerName).gameObject.GetComponent<PlayerNetwork>().AddKill();
//            GameSettings.rc.AddKillCash(1);
//        }
//    }

//    [PunRPC]
//    public void AiBotDamage(int theDamage,string killedname,string weapon,int Killedteam)
//    {
//        health = health - theDamage;
//        Debug.Log(health);
//        if (health <= 0)
//        {
//            targets.Clear();
//            ShootAudio.clip = DieAi;
//            ShootAudio.Play();
//            GameObject.Find(killedname).GetComponent<BotAi>().KillAll++;
//            GameObject.Find(killedname).GetComponent<BotAi>().shootOn = true;
//            DieAll++;
//            GetComponent<CapsuleCollider>().isTrigger = true;
//            GetComponent<CapsuleCollider>().enabled = false;
//            int rnd = Random.Range(0, die.Length - 1);
//            animationController.Play(die[rnd].name);
//            rc.PostActivityRemoteWeapons(" "+killedname, "          "+weapon, name, Killedteam, team);
//        }
//    }

//}
