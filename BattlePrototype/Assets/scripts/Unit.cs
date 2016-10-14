using UnityEngine;
using System.Collections;

public class Unit : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}

	void OnCollisionEnter (Collision col)
	{
		if (!col.gameObject.name.Equals ("ground")) {
			Animator unitAnimator = gameObject.GetComponent<Animator>();
			unitAnimator.SetBool ("walk_down", false);
			unitAnimator.SetBool ("attack", true);
			BattleManager.move_forward = false;
			BattleManager.reverse = true;
		}

	}

	// Update is called once per frame
	void Update () {
	
	}
}
