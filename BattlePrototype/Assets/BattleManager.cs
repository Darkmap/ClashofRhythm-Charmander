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


	public Vector3 playerLocation = new Vector3(-4f, 0f, 0f);
	public Vector3 enemyLocation = new Vector3(4f, 0f, 0f);

	GameObject userObj;
	GameObject enemyObj;

	Animator userAnimator;
	Animator enemyAnimator;

//	public BattleManager() {
//	
//	}

//	public BattleManager(GameObject userPrefab, GameObject enermyPrefab) {
//		
//	}

	public bool move_forward = false;
	bool reverse = false;
	bool move_back = false;




	// Use this for initialization
	void Start () {
		userObj = (GameObject)Instantiate(userPrefab, playerLocation, Quaternion.Euler(new Vector3()));
		userObj.transform.localScale += new Vector3(1f,1f,1f);
		Rigidbody userRb = userObj.GetComponent<Rigidbody>();
		userAnimator = userObj.GetComponent<Animator>();
		userRb.isKinematic = false;

		enemyObj = (GameObject)Instantiate(enemyPrefab, enemyLocation, Quaternion.Euler(new Vector3(0, 180, 0)));
		enemyObj.transform.localScale += new Vector3(1f,1f,1f);
		Rigidbody enemyRb = enemyObj.GetComponent<Rigidbody>();
		enemyAnimator = enemyObj.GetComponent<Animator>();
		enemyRb.isKinematic = false;
	}


	bool moveUserForward() {
		Vector3 moveDestination = new Vector3 (-1f, 0f, 0f);

		if (Math.Abs (moveDestination.x - userObj.transform.position.x) > 0.1f) {
			userObj.transform.Translate (new Vector3 (1f, 0f, 0f) * 2 * Time.deltaTime);
			if (!userAnimator.GetBool ("walk_down")) {
				userAnimator.SetBool ("walk_down", true);
			}
			return true;
		} else if (userAnimator.GetBool ("walk_down")) {
			userAnimator.SetBool ("walk_down", false);
			userAttack ();
			return false;
		} else {
			return false;
		}
	}

	bool moveUserBack() {
		Vector3 moveDestination = playerLocation;

		if (Math.Abs (moveDestination.x - userObj.transform.position.x) > 0.1f) {
			userObj.transform.Translate (new Vector3 (1f, 0f, 0f) * 2 * Time.deltaTime);
			if (!userAnimator.GetBool ("walk_down")) {
				userAnimator.SetBool ("walk_down", true);
			}
			return true;
		} else if (userAnimator.GetBool ("walk_down")) {
			userAnimator.SetBool ("walk_down", false);
			return false;
		} else {
			return false;
		}
	}

	void userAttack() {
		userAnimator.SetBool ("attack", true);
	}

	void userReverse() {
		userObj.transform.localRotation = Quaternion.Euler(0, 180, 0);
	}

	bool moveEnemyForward() {
		Vector3 moveDestination = new Vector3 (1f, 0f, 0f);
		if (Math.Abs (moveDestination.x - enemyObj.transform.position.x) > 0.1f) {
			enemyObj.transform.Translate (new Vector3 (1f, 0f, 0f) * 2 * Time.deltaTime);
			if (!enemyAnimator.GetBool ("walk_down")) {
				enemyAnimator.SetBool ("walk_down", true);
			}
			return true;
		} else if (enemyAnimator.GetBool ("walk_down")) {
			enemyAnimator.SetBool ("walk_down", false);
			enemyAttack ();
			return false;
		} else {
			return false;
		}
	}

	bool moveEnemyBack() {
		Vector3 moveDestination = enemyLocation;
		if (Math.Abs (moveDestination.x - enemyObj.transform.position.x) > 0.1f) {
			enemyObj.transform.Translate (new Vector3 (1f, 0f, 0f) * 2 * Time.deltaTime);
			if (!enemyAnimator.GetBool ("walk_down")) {
				enemyAnimator.SetBool ("walk_down", true);
			}
			return true;
		} else if (enemyAnimator.GetBool ("walk_down")) {
			enemyAnimator.SetBool ("walk_down", false);
			return false;
		} else {
			return false;
		}
	}

	void enemyAttack() {
		enemyAnimator.SetBool ("attack", true);
	}

	void enemyReverse() {
		enemyObj.transform.localRotation = Quaternion.Euler(0, 0, 0);
	}

	void setMoveBack() {
		userReverse ();
		enemyReverse ();
		move_back = true;
	}

	void hurt() {
		userAnimator.SetBool ("hurt", true);
		enemyAnimator.SetBool ("hurt", true);
	}

	void rotationRestore() {
		userObj.transform.localRotation = Quaternion.Euler(0, 0, 0);
		enemyObj.transform.localRotation = Quaternion.Euler(0, 180, 0);
	}

	void attack_round() {
		if (!move_forward && !reverse && !move_back) {
//			move_forward = true;
		} else {
			if (move_forward) {
				bool user = moveUserForward ();
				bool enemy = moveEnemyForward ();

				if (!user && !enemy) {
					move_forward = false;
					reverse = true;
				}
			} else if (reverse) {
				Invoke ("hurt", 0.5f);
				Invoke ("setMoveBack", 1);
				reverse = false;
			} else if(move_back){
				bool user = moveUserBack ();
				bool enemy = moveEnemyBack ();
				if (!user && !enemy) {
					Invoke ("rotationRestore", 0.5f);
					move_back = false;
				}
			}
		}
	}


	// Update is called once per frame
	void Update () {

		attack_round ();
	}
}
