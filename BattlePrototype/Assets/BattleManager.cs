using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;
using System;
using Random = UnityEngine.Random;

public class BattleManager : MonoBehaviour {

	public static BattleManager instance;
	public static BattleManager getInstance() {
		if (instance == null) {
			instance = new BattleManager ();
		}
		return instance;
	}

	public GameObject userPrefab;
	public GameObject enemyPrefab;

	// Time progress
	public Image progressBar;
	public bool inTimeWindow;
	public float waitTime = 5f;
	public float endTime = 5f;

	// Unit
	public Animator unit0Animator;
	public Animator unit1Animator;

	// Health
	public bool updatedHealth = false;
	public Image playerHealthBar;
	public Image enemyHealthBar;

	// Text
	public Text playerNextMove;
	public Text enemyNextMove;
	string enemyNextMoveStr = "";


	public Vector3 playerLocation = new Vector3(-4f, -2.3f, 0f);
	public Vector3 enemyLocation = new Vector3(4f, -2.3f, 0f);

//	public BattleManager() {
//	
//	}

//	public BattleManager(GameObject userPrefab, GameObject enermyPrefab) {
//		
//	}


	// Use this for initialization
	void Start () {
		GameObject userObj = (GameObject)Instantiate(userPrefab, playerLocation, Quaternion.Euler(new Vector3()));
		Rigidbody userRb = userObj.GetComponent<Rigidbody>();
		userRb.isKinematic = false;

		GameObject enemyObj = (GameObject)Instantiate(enemyPrefab, enemyLocation, Quaternion.Euler(new Vector3(0, 180, 0)));
		Rigidbody enemyRb = enemyObj.GetComponent<Rigidbody>();
		enemyRb.isKinematic = false;
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
