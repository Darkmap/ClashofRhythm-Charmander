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
	public GameObject enermyPrefab;

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


//	public BattleManager() {
//	
//	}

//	public BattleManager(GameObject userPrefab, GameObject enermyPrefab) {
//		
//	}


	// Use this for initialization
	void Start () {
		
		GameObject userObj = (GameObject)Instantiate(userPrefab, new Vector3(-4f, -2.3f, 0f), Quaternion.Euler(new Vector3()));
//		GameObject enemyObj = (GameObject)Instantiate(enermyPrefab, new Vector3(i - Mathf.Floor(mapSize / 2), -0 + Mathf.Floor(mapSize / 2), -1) + mapPosition, Quaternion.Euler(new Vector3()));

	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
