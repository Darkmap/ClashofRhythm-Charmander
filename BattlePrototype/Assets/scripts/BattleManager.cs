using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;
using System;
using Random = UnityEngine.Random;

public class BattleManager : MonoBehaviour {

	public static BattleManager instance;

	public GameObject userPrefab;
	public GameObject enemyPrefab;

	public void setObjs(GameObject userPrefab, GameObject enemyPrefab) {
		this.userPrefab = userPrefab;
		this.enemyPrefab = enemyPrefab;
	}

	public void resetBattle() {
		start = false;
		hasSet = false;
		end = false;
		ended = true;
		MainMusic.play = false;

		playerHealthBar.fillAmount = 1f;
		enemyHealthBar.fillAmount = 1f;
		Destroy (userObj);
		Destroy (enemyObj);
	}

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
//	string enemyNextMoveStr = "";


	public Vector3 playerLocation = new Vector3(-4f, 5f, 0f);
	public Vector3 enemyLocation = new Vector3(4f, 5f, 0f);

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
	public static bool start = false;
	public static bool hasSet = false;
	public static bool move_forward = false;
	public static bool reverse = false;
	public static bool move_back = false;
	public static bool end = false;
	public static bool ended = true;

	// Performance
	float performance = 0f;
	string performanceText = "";
	int performanceType = 0;

	// UI control
	public Text performResult;

	public GameObject leftRing;
	public GameObject rightRing;

	// Sounds
	public AudioSource fightSound;
	public AudioSource magicSound;
	public AudioSource gunSound;
	public AudioSource arrowSound;


	public void setHealth (float playerHealth, float enemyHealth) {
		playerHealthBar.fillAmount = playerHealth;
		enemyHealthBar.fillAmount = enemyHealth;
	}

	public void playFightSound() {
		fightSound.Play ();
		Invoke ("stopPlayFightSound", 1f);
	}
	public void stopPlayFightSound() {
		fightSound.Pause ();
	}

	public void playMagicSound() {
		magicSound.Play ();
		Invoke ("stopPlayMagicSound", 1f);
	}
	public void stopPlayMagicSound() {
		magicSound.Pause ();
	}

	public void playGunSound() {
		gunSound.Play ();
		Invoke ("stopPlayGunSound", 1f);
	}
	public void stopPlayGunSound() {
		gunSound.Pause ();
	}

	public void playArrowSound() {
		arrowSound.Play ();
		Invoke ("stopPlayArrowSound", 1f);
	}
	public void stopPlayArrowSound() {
		arrowSound.Pause ();
	}

	public void playRelatedSound(GameObject obj) {
		if (obj.name.Contains ("mage")) {
			playMagicSound ();
		} else if (obj.name.Contains ("gunman")) {
			playGunSound ();
		} else if (obj.name.Contains ("archer")) {
			playArrowSound ();
		} else {
			playFightSound ();
		}
	}


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

		instance = this;

//		userObj = (GameObject)Instantiate(userPrefab, playerLocation, Quaternion.Euler(new Vector3()));
//		Vector3 userScale = userObj.transform.localScale;
//		userObj.transform.localScale = new Vector3(userScale.x*2 , userScale.y*2, userScale.z*2);
//		Rigidbody userRb = userObj.GetComponent<Rigidbody>();
//		userAnimator = userObj.GetComponent<Animator>();
//		userRb.isKinematic = false;
//
//		enemyObj = (GameObject)Instantiate(enemyPrefab, enemyLocation, Quaternion.Euler(new Vector3(0, 180, 0)));
//		Vector3 enemyScale = enemyObj.transform.localScale;
//		enemyObj.transform.localScale = new Vector3(enemyScale.x*2 , enemyScale.y*2, enemyScale.z * 2);
//		Rigidbody enemyRb = enemyObj.GetComponent<Rigidbody>();
//		enemyAnimator = enemyObj.GetComponent<Animator>();
//		enemyRb.isKinematic = false;
	}


	bool moveUserForward() {
		Vector3 moveDestination = new Vector3 (0f, 0f, 0f);
//		Vector3 moveDestination = new Vector3 (-1f, 0f, 0f);

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
		Vector3 moveDestination = new Vector3 (0f, 0f, 0f);
//		Vector3 moveDestination = new Vector3 (1f, 0f, 0f);

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
		if (!end) {
			userReverse ();
			enemyReverse ();
			move_back = true;
		}
	}

	void hurt() {
		if (performanceType <= 2)
			userAnimator.SetBool ("hurt", true);
		if (performanceType >= 2)
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
			playerHealthBar.fillAmount -= 0.4f;
			break;
		case 2:
			playerHealthBar.fillAmount -= 0.2f;
			enemyHealthBar.fillAmount -= 0.2f;
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

		Player userPlayer = GameManager.instance.activePlayer.GetComponent<Player> ();
		userPlayer.health = playerHealthBar.fillAmount;
		GameManager.instance.palyerHealth.fillAmount = userPlayer.health;

		Player aiPlayer = GameManager.instance.activeEnemy.GetComponent<Player> ();
		aiPlayer.health = enemyHealthBar.fillAmount;
		GameManager.instance.enemyHealth.fillAmount = aiPlayer.health;

		if (playerHealthBar.fillAmount <= 0.01f) {
			end = true;
			userObj.SetActive (false);
			GameManager.instance.destoryCurrentPlayer();
		} 
		if (enemyHealthBar.fillAmount <= 0.01f) {
			end = true;
			enemyObj.SetActive (false);
			GameManager.instance.destoryCurrentEnermy();
		}
		if (end) {
			move_forward = false;
			reverse = false;
			move_back = false;
		} else {
			Invoke ("setMoveBack", 1f);
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
				playRelatedSound(userObj);
				playRelatedSound(enemyObj);
				Invoke ("hurt", 0.5f);
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


	static public void destryAllChildren(Transform transform) {
		var children = new List<GameObject>();
		foreach (Transform child in transform) children.Add(child.gameObject);
		children.ForEach(child => Destroy(child));
	}

	// Update is called once per frame
	void Update () {
		if (start && !hasSet) {
			userObj = (GameObject)Instantiate(userPrefab, playerLocation, Quaternion.Euler(new Vector3()));
			Vector3 userScale = userObj.transform.localScale;
			userObj.transform.localScale = new Vector3(userScale.x*2 , userScale.y*2, userScale.z*2);
			Rigidbody userRb = userObj.GetComponent<Rigidbody>();
			userAnimator = userObj.GetComponent<Animator>();
			userRb.isKinematic = false;

			enemyObj = (GameObject)Instantiate(enemyPrefab, enemyLocation, Quaternion.Euler(new Vector3(0, 180, 0)));
			Vector3 enemyScale = enemyObj.transform.localScale;
			enemyObj.transform.localScale = new Vector3(enemyScale.x*2 , enemyScale.y*2, enemyScale.z * 2);
			Rigidbody enemyRb = enemyObj.GetComponent<Rigidbody>();
			enemyAnimator = enemyObj.GetComponent<Animator>();
			enemyRb.isKinematic = false;

			// Destroy triangles
			destryAllChildren (userObj.gameObject.transform);
			destryAllChildren (enemyObj.gameObject.transform);

			start = false;
			hasSet = true;
		} else {
			if (ended) {
				// Empty
			} else if (end) {
				end = false;
				ended = true;
				Invoke ("endBattle", 3);
			} else {
				attack_round ();
			}
		}
	}

	void endBattle() {
		GameManager.instance.backToBoard();
		resetBattle ();
	}
}
