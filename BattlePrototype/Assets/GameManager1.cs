//
//using UnityEngine;
//using UnityEngine.UI;
//using System.Collections;
//using System.Collections.Generic;
//using System;
//using Random = UnityEngine.Random;
//
//public class GameManager : MonoBehaviour {
//	public Vector3 mapPosition = new Vector3 (-500, -500, 0);
//
//
//	public static GameManager instance;
//	public static GameManager getInstance() {
//		if (instance == null) {
//			instance = new GameManager ();
//		}
//		return instance;
//	}
//
//	public int unitCount;
//	public int enemyCount;
//
//	/************************************** For Battle Stage Start **************************************/
//	/************************************** For Battle Stage Start **************************************/
//	/************************************** For Battle Stage Start **************************************/
//	/************************************** For Battle Stage Start **************************************/
//	/************************************** For Battle Stage Start **************************************/
//
//	// Active units
//	public GameObject activePlayer;
//	public GameObject activeEnemy;
//
//	// Buttons
////	public Button leftButton;
////	public Button rightButton;
//
//	// Time progress
//	public Image progressBar;
//	public bool inTimeWindow;
//	public float waitTime = 5f;
//	public float endTime = 5f;
//
//	// Unit
//	public Animator unit0Animator;
//	public Animator unit1Animator;
//
//	// Health
//	public bool updatedHealth = false;
//	public Image playerHealthBar;
//	public Image enemyHealthBar;
//
//	// Text
//	public Text playerNextMove;
//	public Text enemyNextMove;
//	string enemyNextMoveStr = "";
//
//	// Process control
//	public ArrayList inputKeySequence = new ArrayList();
//	public bool casting = false;
//	public bool end = false;
//	public float castingTime = 5f;
//
//	/**
//	 * 
//	 * 
//	 * */
//	public GameObject blue;
//	public GameObject green;
//	public GameObject red;
//	public GameObject yellow;
//
//	public AudioSource audio;
//	public int count = 30;
//
//	// Init everything when game start / restart
//	void initBattle() {
//		updateHealth (playerHealthBar, 1f);
////		leftButton.onClick.AddListener (delegate{
////			print("left");
////			inputKeySequence.Add(1);
////		});
////		rightButton.onClick.AddListener (delegate{
////			print("right");
////			inputKeySequence.Add(2);
////		});
//	}
//
//	void updateHealth(Image bar, float newValue) {
//		bar.fillAmount = newValue;
//	}
//
//	void resetBattle () {
//		resetRound ();
//		playerHealthBar.fillAmount = 1;
//		enemyHealthBar.fillAmount = 1;
//	}
//
//	void resetRound (){
////		leftButton.gameObject.SetActive (true);
////		rightButton.gameObject.SetActive (true);
//		setPlayerNext("idle");
//		setEnemyNext("idle");
//		playerNextMove.text = "";
//		enemyNextMove.text = "";
//		enemyNextMoveStr = "";
//		casting = false;
//		inTimeWindow = true;
//		updatedHealth = false;
//		end = false;
//		progressBar.fillAmount = 1;
//		endTime = 5f;
//		castingTime = 5f;
//		inputKeySequence.Clear ();
//
//		//
//		audio.Play ();
//		/**
//		 * debug*/
//		Debug.Log ("reset");
//		Main.score = 0;
//		this.count = 30;
//		this.InvokeRepeating("createBlue", 2.0f, 2.0f);
//		this.InvokeRepeating ("createGreen", 1.0f, 1.25f);
//		this.InvokeRepeating ("createRed", 1.25f,0.75f);
//		this.InvokeRepeating ("createYellow", 0.75f, 1.0f);
//
//	}
//
//
//
//	public void createBlue(){
//		if (count > 0) {
//			Instantiate (blue, transform.position + new Vector3 (-1.5f, -1.16f, -10), Quaternion.Euler (0, 0, 0));
//			count -= 1;
//
//		}
//		if (count <= 0) {
//			this.CancelInvoke ();
//			Invoke ("stop", 1.0f);
//		}
//	}
//
//	public void createGreen(){
//		if (count > 0) {
//			Instantiate (green, transform.position + new Vector3 (-1.5f, -3.2f, -10), Quaternion.Euler (0, 0, 0));
//		}
//		count -= 1;
//		if (count <= 0) {
//			this.CancelInvoke ();
//			Invoke ("stop", 1.0f);
//		}
//
//	}
//	public void createRed(){
//		if (count > 0) {
//			Instantiate (red, transform.position + new Vector3 (1.5f, -1.16f, -10), Quaternion.Euler (0, 0, 0));
//			count -= 1;
//		}
//		if (count <= 0) {
//			this.CancelInvoke ();
//			Invoke ("stop", 1.0f);
//		}
//	}
//
//	public void createYellow(){
//		if (count > 0) {
//			Instantiate (yellow, transform.position + new Vector3 (1.5f, -3.2f, 0), Quaternion.Euler (0, 0, 0));
//			count -= 1;
//		}
//		if (count <= 0) {
//			this.CancelInvoke ();
//			Invoke ("stop", 1.0f);
//		}
//	}
//
//	public void stop(){
//		audio.Stop();
//	}
//
//
//	void setPlayerNext(string name) {
//		if (name.Equals ("attack")) {
//			unit0Animator.SetBool ("attack", true);
//			unit0Animator.SetBool ("dodge", false);
//			unit0Animator.SetBool ("dead", false);
//		} else if (name.Equals ("dodge")) {
//			unit0Animator.SetBool ("attack", false);
//			unit0Animator.SetBool ("dodge", true);
//			unit0Animator.SetBool ("dead", false);
//		} else {
//			unit0Animator.SetBool ("attack", false);
//			unit0Animator.SetBool ("dodge", false);
//			unit0Animator.SetBool ("dead", false);
//		}
//		playerNextMove.text = name;
//	}
//
//	void setEnemyNext(string name) {
//		if (name.Equals ("attack")) {
//			unit1Animator.SetBool ("attack", true);
//			unit1Animator.SetBool ("dodge", false);
//			unit1Animator.SetBool ("dead", false);
//		} else if (name.Equals ("dodge")) {
//			unit1Animator.SetBool ("attack", false);
//			unit1Animator.SetBool ("dodge", true);
//			unit1Animator.SetBool ("dead", false);
//		} else {
//			unit1Animator.SetBool ("attack", false);
//			unit1Animator.SetBool ("dodge", false);
//			unit1Animator.SetBool ("dead", false);
//		}
//		enemyNextMove.text = name;
//	}
//	/*************************************** For Battle Stage End ***************************************/
//	/*************************************** For Battle Stage End ***************************************/
//	/*************************************** For Battle Stage End ***************************************/
//	/*************************************** For Battle Stage End ***************************************/
//	/*************************************** For Battle Stage End ***************************************/
//
//
//
//	/*************************************** For Board Stage Start ***************************************/
//	/*************************************** For Board Stage Start ***************************************/
//	/*************************************** For Board Stage Start ***************************************/
//	/*************************************** For Board Stage Start ***************************************/
//	/*************************************** For Board Stage Start ***************************************/
//	// Two stages:
//	public bool battle; // Board vs Battle
//	public int turn;
//	// Swiching between Stages
//	public GameObject battleCamera; 
//	public GameObject outCamera;
//	public GameObject battleUI;
//
//	// Player's turn:
//	public bool playerTurn; // Player's turn vs Enemy's turn
//	public bool playerUnitIsChosen; // If Unit is chosen
//	public GameObject[] playerUnits; // Collection of player units
//	public int playerChosenUnitIdx; // idx of Unit is chosen
//
//	// TODO in PROTOTYPE, leave it to-do
//	// Enemy's turn:
//	public bool enemyUnitIsChosen; // If Unit is chosen
//	public GameObject[] enemyUnits; // Collection of player units
//	public int enemyChosenUnitIdx; // idx of Unit is chosen
//
//	/******************** Mengshen's ************************/
//	public GameObject TilePrefab;
//	public GameObject UserPlayerPrefab;
//	public GameObject AIPlayerPrefab;
//	// Use this for initialization
//	List<List<Tile>> map;
//	List<UserPlayer> userPlayers;
//	List<AIPlayer> aiPlayers;
//	Player currentPlayer;
//	public int mapSize = 12;
//
////	void Start () {
////		generateMap();
////		generatePlayer();
////	}
//	public void setCurrentPlayer(Player p){
//		currentPlayer = p;
//	}
//	public Player getCurrentPlayer(){
//		return currentPlayer;
//	}
//	public static int mDistance(Vector3 v1, Vector3 v2){
//		return (int)Math.Round(Math.Abs (v1 [0] - v2 [0]) + Math.Abs (v1 [1] - v2 [1]));
//	}
//	public void initTurn(){
//		turn = 0;
//	}
//	public Type currentPlayerTurn(){
//		if (turn == 0) {
//			return typeof(UserPlayer);
//		} else
//			return typeof(AIPlayer);
//	}
//	public bool isTurnOver(){
//		
//		if (currentPlayerTurn() == typeof(UserPlayer)) {
//			Debug.Log("User Player has " + userPlayers.Count+ "units");
//			foreach (UserPlayer unit in userPlayers) {
//				if (!unit.moved)
//					return false;
//			}
//			return true;
//		} else if (currentPlayerTurn() == typeof(AIPlayer)) {
//			Debug.Log ("AI Player has " + aiPlayers.Count + "units");
//			foreach (AIPlayer unit in aiPlayers){
//				if (!unit.moved)
//					return false;
//			}
//			return true;
//		}
//		return true;
//	}
//	public void nextTurn(){
//		if (turn == 0) {
//			foreach (AIPlayer unit in aiPlayers) {
//				unit.moved = false;
//			}
//			turn = 1;
//			currentPlayer = aiPlayers [0];
//			Debug.Log ("AI's turn start.");
//		} else if (turn == 1) {
//			foreach (UserPlayer unit in userPlayers) {
//				unit.moved = false;
//			}
//			turn = 0;
//			currentPlayer = userPlayers [0];
//			Debug.Log ("User's turn start.");
//		}
//	}
//	public void moveCurrentPlayer(Tile destTile) {
//		Player p = currentPlayer;
//		if (!p.moved) {
//			if (mDistance (p.moveDestination, destTile.transform.position) <= p.steps) {
//				p.moveDestination = destTile.transform.position + new Vector3 (0, 0, -1);
//				p.moved = true;
//				if (isTurnOver ()) {
//					nextTurn ();
//				}
//			}
//		} else {
//			Debug.Log ("This player has been moved.");
//		}
//	}
//
//	void generateMap() {
//		map = new List<List<Tile>>();
//		for (int i = 0; i < mapSize; i ++) {
//			List<Tile> row = new List<Tile>();
//			for (int j = 0; j < mapSize; j++) {
//				//Tile tile = ((GameObject)Instantiate(TilePrefab, new Vector3(i - Mathf.Floor(mapSize/2),0, -j + Mathf.Floor(mapSize / 2)), Quaternion.Euler(new Vector3()))).GetComponent<Tile>();
//				//tile.gridPosition = new Vector2(i, j);
//				//row.Add(tile);
//				GameObject gobj = (GameObject)Instantiate(TilePrefab, new Vector3(i - Mathf.Floor(mapSize / 2), -j + Mathf.Floor(mapSize / 2), 0) + mapPosition, Quaternion.Euler(new Vector3()));
//				Tile tile = gobj.GetComponent<Tile>();
//				tile.gridPosition = new Vector2(i, j);
//				row.Add(tile);
//			}
//			map.Add(row);
//		}
//	}
//	void generatePlayer() {
//		userPlayers = new List<UserPlayer>();
//		aiPlayers = new List<AIPlayer> ();
//
////		AIPlayer aiplayer;
//		for (int i = 0; i < 3; i++) {
//			UserPlayer player;
//			GameObject gobj = (GameObject)Instantiate(UserPlayerPrefab, new Vector3(i - Mathf.Floor(mapSize / 2), -0 + Mathf.Floor(mapSize / 2), -1) + mapPosition, Quaternion.Euler(new Vector3()));
//			player = gobj.GetComponent<UserPlayer>();
//			player.setPlayerIndex (i);
//			userPlayers.Add (player);
//		}
//		currentPlayer = userPlayers [0];
//		for (int i = 0; i < 3; i++) {
//			AIPlayer aiplayer;
//			GameObject gobj2 = (GameObject)Instantiate(AIPlayerPrefab, new Vector3(i, 0, -1) + mapPosition, Quaternion.Euler(new Vector3()));
//			aiplayer = gobj2.GetComponent<AIPlayer> ();
//			aiplayer.setPlayerIndex (i);
//			aiPlayers.Add(aiplayer);
//		}
//
//	}
//	public bool removeFromPlayerList(GameObject obj){
//		Player p;
//		if (obj.GetComponent<UserPlayer> () != null) {
//			p = obj.GetComponent<UserPlayer> ();
//		} else {
//			p = obj.GetComponent<AIPlayer> ();
//		}
//		if (p.GetType () == typeof(UserPlayer)) {
//			if (userPlayers.Remove ((UserPlayer)p)) {
//				return true;
//			} else {
//				return false;
//			}
//		} else if (p.GetType () == typeof(AIPlayer)) {
//			if (aiPlayers.Remove ((AIPlayer)p)) {
//				return true;
//			} else
//				return false;
//		}
//		return true;
//	}
//	public void enterBattleScene(Player self, Player enemy){
//		Debug.Log ("Battle Start.");
//		battle = true;
//		if (self.GetType() == typeof(UserPlayer)){
//			activePlayer = self.gameObject;
//			activeEnemy = enemy.gameObject;
//		} else {
//			activePlayer = enemy.gameObject;
//			activeEnemy = self.gameObject;
//		}
//
//		audio.Play ();
//
//
//		resetBattle ();
//
//		/**
//		 * debug*/
//		Debug.Log ("initial");
//		count = 30;
//
//		Main.score = 0;
//
//		this.InvokeRepeating("createBlue", 2.0f, 2.0f);
//		this.InvokeRepeating ("createGreen", 1.0f, 1.25f);
//		this.InvokeRepeating ("createRed", 1.25f,0.75f);
//		this.InvokeRepeating ("createYellow", 0.75f, 1.0f);
//	}
//	/******************************************************/
//
//
//
//	/*************************************** For Board Stage End ***************************************/
//	/*************************************** For Board Stage End ***************************************/
//	/*************************************** For Board Stage End ***************************************/
//	/*************************************** For Board Stage End ***************************************/
//	/*************************************** For Board Stage End ***************************************/
//
//	// Use this for initialization
//	void Awake () {
//		instance = this;
//		initBattle ();
//		initTurn ();
//		generateMap();
//		generatePlayer();
//	}
//	
//	// Update is called once per frame
//	void Update () {
//
//		if (battle) {
//			// BATTLE LOGIC:
//			/********************************** Battle Logic Start ************************************/
//			/********************************** Battle Logic Start ************************************/
//			/********************************** Battle Logic Start ************************************/
//			/********************************** Battle Logic Start ************************************/
//			/********************************** Battle Logic Start ************************************/
//
//			// Camera and UI switching
//			battleUI.gameObject.SetActive(true);
//			battleCamera.SetActive (true);
//			outCamera.SetActive (false);
//
//
//
//			// States Logic
//			if (inTimeWindow) {
//
//				if (enemyNextMoveStr.Length == 0) {
//					int gen = Random.Range (1, 10);
//					if (gen < 5) {
//						enemyNextMoveStr = "attack";
//					} else if (gen < 7) {
//						enemyNextMoveStr = "dodge";
//					} else {
//						enemyNextMoveStr = "idle";
//					}
////					enemyNextMove.text = enemyNextMoveStr;
//				}
//
//				//Reduce fill amount over 30 seconds
//				if (progressBar.fillAmount > 0) {
////					progressBar.fillAmount -= 1.0f / waitTime * Time.deltaTime;
//					progressBar.fillAmount = 1.0f / 30 * count;
//				} else {
//					inTimeWindow = false;
//				}
//			} else if (!casting) {
////				leftButton.gameObject.SetActive (false);
////				rightButton.gameObject.SetActive (false);
//
//				Debug.Log ("Score: " + Main.score);
//
//				if (Main.score >= 500) {
//					enemyNextMoveStr = "idle";
//					setEnemyNext (enemyNextMoveStr);
//					setPlayerNext ("attack");
//				} else if (Main.score >= 300) {
//					if (enemyNextMoveStr.Equals ("attack")) {
//						setPlayerNext ("dodge");
//					} else {
//						setPlayerNext ("attack");
//					}
//					setEnemyNext (enemyNextMoveStr);
//				} else {
//					enemyNextMoveStr = "attack";
//					setEnemyNext (enemyNextMoveStr);
//					setPlayerNext ("idle");
//				}
//				casting = true;
//			} else if (!end && casting) {
//				if (castingTime > 0) {
//					castingTime -= Time.deltaTime;
//				} else {
//					if (!updatedHealth) {
//						if (playerNextMove.text.Equals ("attack") && enemyNextMove.text.Equals ("attack")) {
//							updateHealth (playerHealthBar, System.Math.Max (0, playerHealthBar.fillAmount - 0.5f));
//							updateHealth (enemyHealthBar, System.Math.Max (0, enemyHealthBar.fillAmount - 0.5f));
//						} else if (playerNextMove.text.Equals ("attack") && enemyNextMove.text.Equals ("dodge")) {
//							updateHealth (enemyHealthBar, System.Math.Max (0, enemyHealthBar.fillAmount - 0.25f));
//						} else if (playerNextMove.text.Equals ("attack") && enemyNextMove.text.Equals ("idle")) {
//							updateHealth (enemyHealthBar, System.Math.Max (0, enemyHealthBar.fillAmount - 0.5f));
//						} else if (playerNextMove.text.Equals ("dodge") && enemyNextMove.text.Equals ("attack")) {
//							updateHealth (playerHealthBar, System.Math.Max (0, playerHealthBar.fillAmount - 0.25f));
//						} else if (playerNextMove.text.Equals ("idle") && enemyNextMove.text.Equals ("attack")) {
//							updateHealth (playerHealthBar, System.Math.Max (0, playerHealthBar.fillAmount - 0.5f));
//						}
//						updatedHealth = true;
//					}
//
//					if (playerHealthBar.fillAmount == 0) {
//						unit0Animator.SetBool ("dead", true);
//						playerNextMove.text = "dead";
//						end = true;
//					}
//					if (enemyHealthBar.fillAmount == 0) {
//						unit1Animator.SetBool ("dead", true);
//						enemyNextMove.text = "dead";
//						end = true;
//					}
//					if (end) {
//						if (!playerNextMove.text.Equals ("dead")) {
//							setPlayerNext ("idle");
//							playerNextMove.text = "Winner!";
//						} else {
//							if (removeFromPlayerList (activePlayer)) {
//								Debug.Log ("Successfully removed");
//							}
//							activePlayer.SetActive (false);
//						}
//						if (!enemyNextMove.text.Equals ("dead")) {
//							setEnemyNext ("idle");
//							enemyNextMove.text = "Winner!";
//						} else {
//							removeFromPlayerList (activeEnemy);
//							activeEnemy.SetActive (false);
//						}
//					} else {
//						resetRound ();
//					}
//				}
//			} else if (end) {
//				if (endTime > 0) {
//					endTime -= Time.deltaTime;
//				} else {
//					if (isTurnOver ()) {
//						nextTurn ();
//					}
//					battle = false;
//				}
//			}
//			/********************************** Battle Logic End ************************************/
//			/********************************** Battle Logic End ************************************/
//			/********************************** Battle Logic End ************************************/
//			/********************************** Battle Logic End ************************************/
//			/********************************** Battle Logic End ************************************/
//		} else {
//			// BOARD LOGIC:
//			battleUI.gameObject.SetActive(false);
//			battleCamera.SetActive (false);
//			outCamera.SetActive (true);
//
//			foreach(Player p in userPlayers){
//				p.TurnUpdate ();
//			}
//			foreach(Player p in aiPlayers){
//				p.TurnUpdate ();
//			}
//		}
//
//	}
//
//
//}
//	