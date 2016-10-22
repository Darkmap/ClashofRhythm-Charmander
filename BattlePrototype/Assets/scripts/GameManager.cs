using UnityEngine;
using UnityEngine.UI;
using Random = UnityEngine.Random;
using System.Collections;
using System.Collections.Generic;
using System;

public class GameManager : MonoBehaviour {
	public Vector3 mapPosition = new Vector3 (-500, -500, 0);

	public enum TileType{
		Empty = -1,
		Grass = 15,
		Tree = 16,
		Hills = 17,
		Mountains = 18,
		Towns = 19,
		Castle = 20,
		Monster = 21
	}

	[Header("Map Sprites")]
	public Texture2D islandTexture;

	public GameObject activePlayer;
	public GameObject activeEnemy;

	//UI
	public Text boardText;
	public Text playerUnit;
	public Text enemyUnit;

	//BGM
	public AudioSource bgm1;
	public AudioSource bgm2;

	//Camera
	public GameObject battleCamera; 
	public GameObject boardCamera;
	public GameObject battleUI;

	public GameObject boardUI;

	//Prefabs
	public GameObject TilePrefab;
	//public GameObject UserPlayerPrefab;
	//public GameObject AIPlayerPrefab;
	GameObject[] playerUnitPrefabs;
	GameObject[] aiUnitPrefabs;
	public GameObject archer;
	public GameObject gunman;
	public GameObject knight;

	public GameObject ninja;
	public GameObject samurai;
	public GameObject zombie;

	// Use these for initialization
	Tile[,] map;

	List<UserPlayer> userPlayers;
	List<AIPlayer> aiPlayers;
	Player currentPlayer;
	public int rows = 6;
	public int columns = 8;
	public int turn;

	// Use this for initialization
	public static GameManager instance;
	public static GameManager getInstance() {
		if (instance == null) {
			instance = new GameManager ();
		}
		return instance;
	}

	public int unitCount;
	public int enemyCount;

	public void setCurrentPlayer(Player p){
		currentPlayer = p;
	}

	public Player getCurrentPlayer(){
		return currentPlayer;
	}

	public static int mDistance(Vector3 v1, Vector3 v2){
		return (int)Math.Round(Math.Abs (v1 [0] - v2 [0]) + Math.Abs (v1 [1] - v2 [1]));
	}
	public void initTurn(){
		turn = 0;
	}
	public Type currentPlayerTurn(){
		if (turn == 0) {
			return typeof(UserPlayer);
		} else
			return typeof(AIPlayer);
	}
	public bool isTurnOver(){

		if (currentPlayerTurn() == typeof(UserPlayer)) {
			Debug.Log("User Player has " + userPlayers.Count+ "units");
			foreach (UserPlayer unit in userPlayers) {
				if (!unit.moved)
					return false;
			}
			return true;
		} else if (currentPlayerTurn() == typeof(AIPlayer)) {
			Debug.Log ("AI Player has " + aiPlayers.Count + "units");
			foreach (AIPlayer unit in aiPlayers){
				if (!unit.moved)
					return false;
			}
			return true;
		}
		return true;
	}

	private void FindNeighbors(){
		
		for (var r = 0; r < rows; r++) {

			for (var c = 0; c < columns; c++) {
				if (map [r, c] == null)
					continue;
				if (r < rows - 1) {
					map [r, c].addNeighbor (Sides.Bottom, map [(r + 1) , c]);
				}
				if (c < columns - 1) {
					map [r, c].addNeighbor (Sides.Right, map [ r , c + 1]);
				}

				if (c > 0) {
					map [r, c].addNeighbor (Sides.Left, map [r , c - 1]);
				}

				if (r > 0) {
					map [r, c].addNeighbor (Sides.Top, map [r-1 , c]);
				}

			}

		}

	}

	public void nextTurn(){
		if (turn == 0) {
			foreach (AIPlayer unit in aiPlayers) {
				unit.moved = false;
			}
			turn = 1;
			currentPlayer = aiPlayers [0];
			Debug.Log ("AI's turn start.");
			aiMove ();
		} else if (turn == 1) {
			foreach (UserPlayer unit in userPlayers) {
				unit.moved = false;
			}
			turn = 0;
			currentPlayer = userPlayers [0];
			Debug.Log ("User's turn start.");
		}
	}

	public void nextPlayer(){

		if (turn == 1) {
			foreach (AIPlayer unit in aiPlayers) {
				if (!unit.moved) {
					currentPlayer = unit;
					aiMove ();
					return;
				}
			}
			Invoke("nextTurn",  4);
//			nextTurn();
		}
	}

	public void moveCurrentPlayer(Tile destTile) {
		Player p = currentPlayer;
		Debug.Log (p.gameObject.name + "moved");
		if (destTile.playerOnTile != null && destTile.playerOnTile.gameObject.activeSelf)
			return;
		if (!p.moved) {
			if (mDistance (p.moveDestination, destTile.transform.position) <= p.steps) {
				p.moveDestination = destTile.transform.position + new Vector3 (0, 0, -1);

				p.moved = true;
				map [(int)p.gridPosition.x, (int)p.gridPosition.y].playerOnTile = null;
				Debug.Log (p.transform.localRotation.y);
				if ((destTile.gridPosition.y - p.gridPosition.y) * p.leftright < 0) {
					p.leftright *= -1;

					if (p.transform.localRotation.y == 1) {
						p.transform.localRotation = Quaternion.Euler (0, 0, 0);
					} else {
						p.transform.localRotation = Quaternion.Euler (0, 180, 0);
					}
				}
				p.gridPosition = destTile.gridPosition;
				destTile.playerOnTile = p;
				if (isTurnOver ()) {
					Debug.Log ("moveCurrentPlayer");
					Invoke("nextTurn",  4);
				}
			}
		} else {
			Debug.Log ("This player has been moved.");
		}
	}

	public bool removeFromPlayerList(GameObject obj){
		Player p;
		if (obj.GetComponent<UserPlayer> () != null) {
			p = obj.GetComponent<UserPlayer> ();
		} else {
			p = obj.GetComponent<AIPlayer> ();
		}
		if (p.GetType () == typeof(UserPlayer)) {
			if (userPlayers.Remove ((UserPlayer)p)) {
				return true;
			} else {
				return false;
			}
		} else if (p.GetType () == typeof(AIPlayer)) {
			if (aiPlayers.Remove ((AIPlayer)p)) {
				return true;
			} else
				return false;
		}
		return true;
	}
		
	void generateMap(){
		
		map = new Tile[rows, columns];
		generateGrid ();
	}
	void generateGrid() {
		Sprite[] terrain_sprites = Resources.LoadAll<Sprite> (islandTexture.name);
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < columns; j++) {
				var go = Instantiate (TilePrefab);
				go.name = "Tile (" + i + ", " + j + ")";
				go.transform.position = new Vector3 (2 * (j) - columns, 2 * (-i) + rows, 0) + mapPosition;
				map [i, j] = go.GetComponent<Tile> ();
				map [i, j].gridPosition = new Vector2 (i, j);
			}
		}

		FindNeighbors ();
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < columns; j++) {
				float r = Random.Range (0f, 1f);
				var tile = map [i, j];
				if (tile == null)
					continue;
				var spriteID = tile.autotileID;
				if (spriteID == 15 && r > 0.9f)
					spriteID = 16;
				else if (spriteID == 15 && r > 0.8f)
					spriteID = 17;
				if (spriteID >= 0) {
					var sr = tile.gameObject.GetComponent<SpriteRenderer> ();
					sr.sprite = terrain_sprites [spriteID];
				}
			}
		}
		Tile tile0 = map[0,0];
		Tile tilen = map [rows - 1, columns - 1];
		tile0.gameObject.GetComponent<SpriteRenderer> ().sprite = terrain_sprites[20];
		tilen.gameObject.GetComponent<SpriteRenderer> ().sprite = terrain_sprites[20];
	}

	void generatePlayer() {
		userPlayers = new List<UserPlayer>();
		aiPlayers = new List<AIPlayer> ();
		playerUnitPrefabs = new GameObject[3];
		aiUnitPrefabs = new GameObject[3];
		playerUnitPrefabs [0] = gunman;
		playerUnitPrefabs [1] = knight;
		playerUnitPrefabs [2] = archer;
		aiUnitPrefabs [0] = ninja;
		aiUnitPrefabs [1] = samurai;
		aiUnitPrefabs [2] = zombie;

		for (int i = 0; i < 3; i++) {
			UserPlayer player;
			GameObject gobj = (GameObject)Instantiate(playerUnitPrefabs[i], new Vector3(2*(i) - columns, 0 + rows, -1) + mapPosition, Quaternion.Euler(new Vector3()));
			Vector3 userScale = gobj.transform.localScale;
			gobj.transform.localScale = new Vector3(userScale.x*1.5f , userScale.y*1.5f, userScale.z*1.5f);

			player = gobj.GetComponent<UserPlayer>();
			player.setPlayerIndex (i);
			userPlayers.Add (player);
			player.gridPosition = new Vector2 (0, i);
			map [(int)player.gridPosition.x, (int)player.gridPosition.y].playerOnTile = player;
		}
		currentPlayer = userPlayers [0];
		for (int i = 0; i < 3; i++) {
			AIPlayer aiplayer;
			GameObject gobj2 = (GameObject)Instantiate(aiUnitPrefabs[i], new Vector3(- 2 * i + columns - 2 , 2-rows, -1) + mapPosition, Quaternion.Euler(new Vector3(0, 180, 0)));

			Vector3 enemyScale = gobj2.transform.localScale;
			gobj2.transform.localScale = new Vector3(enemyScale.x*1.5f , enemyScale.y*1.5f, enemyScale.z*1.5f);

			aiplayer = gobj2.GetComponent<AIPlayer> ();
			aiplayer.setPlayerIndex (i);
			aiPlayers.Add(aiplayer);
			aiplayer.gridPosition = new Vector2 (rows - 1, columns - 1 - i);

			map [(int)aiplayer.gridPosition.x, (int)aiplayer.gridPosition.y].playerOnTile = aiplayer;
		}

	}

	public void aiMove(){

		Debug.Log (currentPlayer.gameObject.name);
		if (turn == 0)
			return;

		Player p = currentPlayer;
		if (p.GetType () == typeof(UserPlayer)) {
			return;
		}
		Player target = attackableTarget (p);
		if (target != null) {
			p.attack (target);
		} else {
			Tile currentTile = tileUnderPlayer (p);
			bool flag = false;
			for (int i = 2; i >= 0; i--) {
				if (flag)
					break;
				for (int j = 2; j >= 0; j--) {
					
					if ((int)currentTile.gridPosition.x - i >= 0 && (int)currentTile.gridPosition.y - j >= 0) {
						Tile tile = map [(int)currentTile.gridPosition.x - i, (int)currentTile.gridPosition.y - j];
						if (tile != null && tile.playerOnTile == null){
							moveCurrentPlayer (tile);
							flag = true;
							break;
						}
					}
				}
			}
			p.moved = true;
		}
		if (!battleCamera.activeSelf) {
			Invoke ("nextPlayer", 4f);
		}
	}

	public Tile tileUnderPlayer(Player p){
		return map [(int)p.gridPosition.x, (int)p.gridPosition.y];
	}
	public Player attackableTarget(Player p){
		Tile[] neighbours = tileUnderPlayer(p).neighbors;
		foreach (Tile tile in neighbours) {
			if (tile != null && tile.playerOnTile != null && tile.playerOnTile.gameObject.activeSelf && tile.playerOnTile.GetType() != p.GetType ()) {
				return tile.playerOnTile;
			}
		}
		return null;
	}

	public void enterBattleScene(Player self, Player enemy){
		Debug.Log ("Battle Start!");

		if (self.GetType () == typeof(UserPlayer)) {
			activePlayer = self.gameObject;
			activeEnemy = enemy.gameObject;
		} else {
			activePlayer = enemy.gameObject;
			activeEnemy = self.gameObject;
		}
		BattleManager.instance.setObjs (activePlayer, activeEnemy);

		BattleManager.start = true;
		BattleManager.hasSet = false;
		BattleManager.end = false;
		BattleManager.ended = false;

		boardUI.gameObject.SetActive(false);
		battleUI.gameObject.SetActive(true);
		battleCamera.SetActive (true);
		boardCamera.SetActive (false);

		bgm1.Stop ();
		bgm2.Play ();
		MainMusic.play = true;
	}

	// Use this for initialization
	void Awake () {
		instance = this;
		initTurn ();
		generateMap();
		generatePlayer();
	}

	void Start () {
	
	}

	public void destoryCurrentPlayer() {
		activePlayer.SetActive (false);
		removeFromPlayerList (activePlayer);
	}
	public void destoryCurrentEnermy() {
		activeEnemy.SetActive (false);
		removeFromPlayerList (activeEnemy);
	}

	public void backToBoard() {
		bgm1.Play ();
		bgm2.Stop ();

		boardUI.gameObject.SetActive(true);
		battleUI.gameObject.SetActive(false);
		battleCamera.SetActive (false);
		boardCamera.SetActive (true);

		Debug.Log ("backToBoard");

		if (isTurnOver ()) {
			Invoke ("nextTurn", 4f);
		} else {
			Invoke ("nextPlayer", 4f);
		}
	}

	// Update is called once per frame
	void Update () {
		foreach(Player p in userPlayers){
			p.TurnUpdate ();
		}
		foreach(Player p in aiPlayers){
			p.TurnUpdate ();
		}
		playerUnit.text = "Player Unit\n" + userPlayers.Count;
		enemyUnit.text = "Enemy Unit\n" + aiPlayers.Count;

		if (userPlayers.Count == 0) {
			boardText.text = "Defeated :(";
		} else if (aiPlayers.Count == 0) {
			boardText.text = "Victory :)";
		} else {boardText.text = ((turn == 0)
			? "Player's Turn: "
			: "Enemy's Turn:")
				+ "Moving " + currentPlayer.gameObject.name.Substring(0, currentPlayer.gameObject.name.IndexOf('(')).ToUpperInvariant();
		}
	}
}
