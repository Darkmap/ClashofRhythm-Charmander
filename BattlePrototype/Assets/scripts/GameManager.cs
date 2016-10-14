using UnityEngine;
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

	//Camera
	public GameObject battleCamera; 
	public GameObject boardCamera;
	public GameObject battleUI;

	//Prefabs
	public GameObject TilePrefab;
	public GameObject UserPlayerPrefab;
	public GameObject AIPlayerPrefab;

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
		} else if (turn == 1) {
			foreach (UserPlayer unit in userPlayers) {
				unit.moved = false;
			}
			turn = 0;
			currentPlayer = userPlayers [0];
			Debug.Log ("User's turn start.");
		}
	}

	public void moveCurrentPlayer(Tile destTile) {
		Player p = currentPlayer;
		if (!p.moved) {
			if (mDistance (p.moveDestination, destTile.transform.position) <= p.steps) {
				p.moveDestination = destTile.transform.position + new Vector3 (0, 0, 1);
				p.moved = true;
				if (isTurnOver ()) {
					nextTurn ();
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

//	void generateMap() {
//		map = new Tile[rows, columns];
//		for (int i = 0; i < rows; i ++) {
//			for (int j = 0; j < columns; j++) {
//				GameObject gobj = (GameObject)Instantiate(TilePrefab, new Vector3(2 * (-j) + rows, 2*(i) - columns, 0) + mapPosition, Quaternion.Euler(new Vector3()));
//				Tile tile = gobj.GetComponent<Tile>();
//				tile.gridPosition = new Vector2(i, j);
//				map [i, j] = tile;
//			}
//		}
//	}
	void generateMap(){
		
		map = new Tile[rows, columns];
		generateGrid ();
	}
	void generateGrid() {
		Sprite[] terrain_sprites = Resources.LoadAll<Sprite> (islandTexture.name);
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < columns; j++) {
				if (Random.Range (0f, 1f) > 0.15) {
					var go = Instantiate (TilePrefab);
					go.name = "Tile (" + i + ", " + j + ")";
					go.transform.position = new Vector3 (2 * (j) - rows, 2 * (-i) + columns, 0) + mapPosition;
					map [i, j] = go.GetComponent<Tile> ();
				}
			}
		}

		FindNeighbors ();
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < columns; j++) {
				var tile = map [i, j];
				if (tile == null)
					continue;
				var spriteID = tile.autotileID;
				if (spriteID >= 0) {
					var sr = tile.gameObject.GetComponent<SpriteRenderer> ();
					sr.sprite = terrain_sprites [spriteID];
				}
			}
		}
	}

	void generatePlayer() {
		userPlayers = new List<UserPlayer>();
		aiPlayers = new List<AIPlayer> ();
		for (int i = 0; i < 3; i++) {
			UserPlayer player;
			GameObject gobj = (GameObject)Instantiate(UserPlayerPrefab, new Vector3(2*(i) - rows, 0 + columns, 2) + mapPosition, Quaternion.Euler(new Vector3()));
			player = gobj.GetComponent<UserPlayer>();
			player.setPlayerIndex (i);
			userPlayers.Add (player);
		}
		currentPlayer = userPlayers [0];
		for (int i = 0; i < 3; i++) {
			AIPlayer aiplayer;
			GameObject gobj2 = (GameObject)Instantiate(AIPlayerPrefab, new Vector3(- 2 * i + rows - 2, -columns + 2, 2) + mapPosition, Quaternion.Euler(new Vector3()));
			aiplayer = gobj2.GetComponent<AIPlayer> ();
			aiplayer.setPlayerIndex (i);
			aiPlayers.Add(aiplayer);
		}

	}

	public void enterBattleScene(Player playerUnit, Player enemyUnit){
		Debug.Log ("Battle Start!");
		battleUI.gameObject.SetActive(true);
		battleCamera.SetActive (true);
		boardCamera.SetActive (false);
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
	
	// Update is called once per frame
	void Update () {
		foreach(Player p in userPlayers){
			p.TurnUpdate ();
		}
		foreach(Player p in aiPlayers){
			p.TurnUpdate ();
		}
	}
}
