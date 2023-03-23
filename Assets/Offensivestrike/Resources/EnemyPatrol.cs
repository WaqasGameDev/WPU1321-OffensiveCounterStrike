using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(PathFinder))]
//[RequireComponent(typeof(EnemyPlayer))]
public class EnemyPatrol : MonoBehaviour {

	[SerializeField] WaypointController waypointController;
	[SerializeField] float waitTimeMin;
	[SerializeField] float waitTimeMax;

	PathFinder pathFinder;

	void Start () {
		waypointController.SetNextWaypoint ();
	}

	void Awake () {
		pathFinder = GetComponent<PathFinder> ();
		pathFinder.OnDestinationReached += PathFinder_OnDestinationReached;
		waypointController.OnWaypointChanged += WaypointController_OnWaypointChanged;
	}

	/*private void EnemyPlayer_OnTargetSelected (Player obj)
	{
		pathFinder.Agent.Stop ();
	}

	private void EnemyPlayer_EnemyHealth_OnDeath ()
	{
		pathFinder.Agent.Stop ();
	}*/

	void WaypointController_OnWaypointChanged (Waypoint waypoint)
	{
		pathFinder.SetTarget (waypoint.transform.position);
	}

	private void PathFinder_OnDestinationReached ()
	{
		// assume we are patrolling
		GetComponent<Timer>().Add(waypointController.SetNextWaypoint, Random.Range(waitTimeMin, waitTimeMax));
	}
}
