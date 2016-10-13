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

	/***
	 * Attack control
	***/ 

	// States
	public static bool move_forward = false;
	public static bool reverse = false;
	public static bool move_back = false;
	public static bool end = false;

	// Performance
	float performance = 0f;
	string performanceText = "";
	int performanceType = 0;

	// UI control
	public Text performResult;

	public GameObject leftRing;
	public GameObject rightRing;

	public void setRingsActive(bool flag) {
		if (leftRing.activeSelf != flag) {
			leftRing.SetActive (flag);
		}
		if (rightRing.activeSelf != flag) {
			rightRing.SetActive (flag);
		}
	}


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
		doingAttack ();
	}

	void rotationRestore() {
		userObj.transform.localRotation = Quaternion.Euler(0, 0, 0);
		enemyObj.transform.localRotation = Quaternion.Euler(0, 180, 0);
	}

	void calculateScore() {
		if (performance <= 0) {
			performanceType = 1;
			performanceText = "Terrible :(";
		} else if(performance <= 0.2) {
			performanceType = 2;
			performanceText = "It's OK.";
		} else if(performance <= 0.4) {
			performanceType = 3;
			performanceText = "Good!";
		} else{
			performanceType = 4;
			performanceText = "Epic!!!";
		}
		setMonitorText (performanceText);
	}

	void setMonitorText(string text) {
		performResult.text = text;
		Invoke ("cleanResult", 1.5f);
	}
	void cleanResult() {
		performResult.text = "";
	}

	public static bool isAttacking() {
		return move_forward || reverse || move_back;
	}

	void doingAttack() {
		switch (performanceType) {
		case 1:
			playerHealthBar.fillAmount -= 0.2f;
			break;
		case 2:
			playerHealthBar.fillAmount -= 0.1f;
			enemyHealthBar.fillAmount -= 0.1f;
			break;
		case 3:
			enemyHealthBar.fillAmount -= 0.2f;
			break;
		case 4:
			enemyHealthBar.fillAmount -= 0.4f;
			break;
		default:
			break;
		}
		if (playerHealthBar.fillAmount <= 0.01f) {
			end = true;
			userObj.SetActive (false);
			// TODO remove player unit
		} 
		if (enemyHealthBar.fillAmount <= 0.01f) {
			end = true;
			enemyObj.SetActive (false);
			// TODO remove enemy unit
		}
		if (end) {
			move_forward = false;
			reverse = false;
			move_back = false;
		}
	}

	void attack_round() {
		if (!move_forward && !reverse && !move_back) {
//			Debug.Log (MusicParameters.count);
			if (MusicParameters.count >= 10) {
				performance = MusicParameters.getPortion ();
				move_forward = true;
				MainMusic.play = false;
				setRingsActive (false);
				MusicParameters.clean ();
				calculateScore ();
			}
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
					MainMusic.play = true;
					setRingsActive (true);
				}
			}
		}
	}


	// Update is called once per frame
	void Update () {
		if (end) {
			// TODO call something to end this game
		} else {
			attack_round ();
		}
	}
}
