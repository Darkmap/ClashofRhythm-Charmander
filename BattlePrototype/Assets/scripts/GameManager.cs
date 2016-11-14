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

	public GameObject plain;
	public GameObject hill;
	public GameObject forest;
	public GameObject castle;

	public Image palyerHealth;
	public Image enemyHealth;

	public Button endRoundBtn;

	public Image palyerStrength;
	public Image enemyStrength;

	public GameObject currentPlayerHeadshot;
	public GameObject currentAIHeadshot;

	public GameObject white_triangle;
	public GameObject red_triangle;
	public GameObject green_triangle;

	public GameObject currentTri;

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

		if (this.currentTri != null) {
			Debug.Log ("currentTri != null");
			Destroy (this.currentTri.gameObject);
		} else {
			Debug.Log ("currentTri == null");
		}
		currentPlayer = p;
		this.currentTri = (GameObject)Instantiate(white_triangle);
		this.currentTri.transform.parent = currentPlayer.gameObject.transform;
		float xScale = this.currentTri.transform.localScale.x / 0.13f;
		float yScale = this.currentTri.transform.localScale.y / 0.13f;
		this.currentTri.transform.localPosition = new Vector3 (-0.06f * xScale, 0.27f * yScale, 0);


		if (turn == 0) {
			if (currentPlayerHeadshot != null) {
				Destroy (currentPlayerHeadshot);
				currentPlayerHeadshot = null;
			}
			currentPlayerHeadshot = (GameObject)Instantiate (currentPlayer.gameObject, new Vector3(-491, -495, 0), Quaternion.Euler (new Vector3 ()));
			BattleManager.destryAllChildren (currentPlayerHeadshot.gameObject.transform);
			undisplayMoveableGrids ();
			displayMoveableGrids (p);
		} else {
			if (currentAIHeadshot != null) {
				Destroy (currentAIHeadshot);
				currentAIHeadshot = null;
			}
			currentAIHeadshot = (GameObject)Instantiate (currentPlayer.gameObject, new Vector3(-491, -502, 0), Quaternion.Euler (new Vector3 ()));
			BattleManager.destryAllChildren (currentAIHeadshot.gameObject.transform);
		}
	}

	public void putTriangle(GameObject unit, GameObject triangle) {
		GameObject triObj = (GameObject)Instantiate(triangle);
		triObj.transform.parent = unit.gameObject.transform;
		float xScale = triObj.transform.localScale.x / 0.13f;
		float yScale = triObj.transform.localScale.y / 0.13f;
		triObj.transform.localPosition = new Vector3 (-0.06f * xScale, 0.27f * yScale, 0);
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
//			currentPlayer = aiPlayers [0];
			setCurrentPlayer(aiPlayers [0]);

			Debug.Log ("AI's turn start.");
			aiMove ();
		} else if (turn == 1) {
			foreach (UserPlayer unit in userPlayers) {
				unit.moved = false;
			}
			turn = 0;
//			currentPlayer = userPlayers [0];
			setCurrentPlayer(userPlayers [0]);
			Debug.Log ("User's turn start.");
		}
		endRoundBtn.interactable = (turn == 0);
	}

	public void nextPlayer(){

		if (turn == 1) {
			foreach (AIPlayer unit in aiPlayers) {
				if (!unit.moved) {
//					currentPlayer = unit;
					setCurrentPlayer(unit);
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
				undisplayMoveableGrids ();
				p.moved = true;
				map [(int)p.gridPosition.x, (int)p.gridPosition.y].playerOnTile = null;
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
					endRoundBtn.interactable = false;
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

				if (spriteID == 15 && r > 0.9f) {
					spriteID = 16;
					tile.terrainType = Terrain.Forest;
				} else if (spriteID == 15 && r > 0.8f) {
					spriteID = 17;
					tile.terrainType = Terrain.Highland;
				} else {
					tile.terrainType = Terrain.Plain;
				}
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
		tile0.terrainType = Terrain.Castle;
		tilen.terrainType = Terrain.Castle;
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
			player.leftright = 1;
			userPlayers.Add (player);
			player.gridPosition = new Vector2 (0, i);
			map [(int)player.gridPosition.x, (int)player.gridPosition.y].playerOnTile = player;

			putTriangle (gobj, green_triangle);

		}
		for (int i = 0; i < 3; i++) {
			AIPlayer aiplayer;
			GameObject gobj2 = (GameObject)Instantiate(aiUnitPrefabs[i], new Vector3(- 2 * i + columns - 2 , 2-rows, -1) + mapPosition, Quaternion.Euler(new Vector3(0, 180, 0)));

			Vector3 enemyScale = gobj2.transform.localScale;
			gobj2.transform.localScale = new Vector3(enemyScale.x*1.5f , enemyScale.y*1.5f, enemyScale.z*1.5f);

			aiplayer = gobj2.GetComponent<AIPlayer> ();
			aiplayer.setPlayerIndex (i);
			aiplayer.leftright = -1;
			aiPlayers.Add(aiplayer);
			aiplayer.gridPosition = new Vector2 (rows - 1, columns - 1 - i);

			map [(int)aiplayer.gridPosition.x, (int)aiplayer.gridPosition.y].playerOnTile = aiplayer;

			putTriangle (gobj2, red_triangle);
		}
		setCurrentPlayer (userPlayers [0]);

	}

	public void aiMove(){
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
			int[,] visited = new int[rows, columns];
			Tile destTile = null;
			int min = 1000;
			Queue<int[]> q = new Queue<int[]> ();
			q.Enqueue (new int[2]{(int)p.gridPosition.x, (int)p.gridPosition.y});
			for (int i = 0; i <= p.steps / 2; i++) {
				int length = q.Count;
				for (int j = 0; j < length; j++) {
					int[] pair = q.Dequeue();
					int xx = pair [0];
					int yy = pair [1];
					if (xx < 0 || yy < 0 || xx >= rows || yy >= columns || visited [xx, yy] > 0) {
						continue;
					}
					if (map [xx, yy].playerOnTile == null) {
						Tile curTile = map [xx, yy];
						visited [xx, yy] = 1;
						int minDis = 1000;
						foreach (Player userUnit in userPlayers) {
							minDis = Math.Min (minDis, mDistance (userUnit.gridPosition, curTile.gridPosition));
						}
						if (minDis < min) {
							destTile = curTile;
							min = minDis;
						}
					}
					q.Enqueue(new int[2]{xx + 1, yy});
					q.Enqueue(new int[2]{xx - 1, yy});
					q.Enqueue(new int[2]{xx, yy + 1});
					q.Enqueue(new int[2]{xx, yy - 1});
				}
			}

			moveCurrentPlayer (destTile);
			p.moved = true;
		}
		if (!battleCamera.activeSelf) {
			Invoke ("nextPlayer", 4f);
		}
	}

	public void displayMoveableGrids(Player p){
		colorChangeBFS ((int)p.gridPosition.x, (int)p.gridPosition.y, p.steps / 2);
	}

	public void colorChangeBFS(int x, int y, int n){
		int[,] visited = new int[rows, columns];
		Queue<int[]> queue = new Queue<int[]> ();
		queue.Enqueue(new int[2]{x, y});
		for (int i = 0; i <= n; i++) {
			int length = queue.Count;
			for (int j = 0; j < length; j++) {
				int[] pair = queue.Dequeue();
				int xx = pair [0];
				int yy = pair [1];
				if (xx < 0 || yy < 0 || xx >= rows || yy >= columns || visited [xx, yy] > 0) {
					continue;
				}
				Tile curTile = map[xx, yy];
				if (curTile.playerOnTile != null) {
					if (curTile.playerOnTile == currentPlayer) {
						curTile.gameObject.GetComponent<SpriteRenderer> ().material.SetColor ("_Color", Color.yellow);
					} else {
						curTile.gameObject.GetComponent<SpriteRenderer> ().material.SetColor ("_Color", Color.red);
					}
				} else {
					curTile.gameObject.GetComponent<SpriteRenderer> ().material.SetColor ("_Color", Color.green);
				}
				visited[xx, yy] = 1;
				queue.Enqueue(new int[2]{xx + 1, yy});
				queue.Enqueue(new int[2]{xx - 1, yy});
				queue.Enqueue(new int[2]{xx, yy + 1});
				queue.Enqueue(new int[2]{xx, yy - 1});
			}

		}

	}

	public void undisplayMoveableGrids(){
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < columns; j++) {
				map [i, j].gameObject.GetComponent<SpriteRenderer> ().material.SetColor ("_Color", Color.white);
			}
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

	public bool isBattleEnd (){
		return userPlayers.Count == 0 || aiPlayers.Count == 0;
	}

	public void toEndScene(){
		if (isBattleEnd ()) {
			Invoke ("changeScene", 3f);
		}
	}
	public void changeScene(){
		Application.LoadLevel ("EndScene");
	}

	public void enterBattleScene(Player self, Player enemy){
		Debug.Log ("Battle Start!");
		Terrain terrainType = tileUnderPlayer (enemy).terrainType;
		BattleManager.instance.currentTerrain = terrainType;
		Debug.Log ("terrainType: "+ terrainType);

		if (terrainType == Terrain.Castle) {
			castle.SetActive (true);
			plain.SetActive (false);
			hill.SetActive (false);
			forest.SetActive (false);
		} else if (terrainType == Terrain.Highland) {
			castle.SetActive (false);
			plain.SetActive (false);
			hill.SetActive (true);
			forest.SetActive (false);
		} else if (terrainType == Terrain.Forest) {
			castle.SetActive (false);
			plain.SetActive (false);
			hill.SetActive (false);
			forest.SetActive (true);
		} else {
			castle.SetActive (false);
			plain.SetActive (true);
			hill.SetActive (false);
			forest.SetActive (false);
		}


		if (self.GetType () == typeof(UserPlayer)) {
			activePlayer = self.gameObject;
			activeEnemy = enemy.gameObject;
			BattleManager.instance.setHealth (self.health, enemy.health);
		} else {
			activePlayer = enemy.gameObject;
			activeEnemy = self.gameObject;
			BattleManager.instance.setHealth (enemy.health, self.health);
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

		if (currentPlayerHeadshot != null) {
			Destroy (currentPlayerHeadshot);
			currentPlayerHeadshot = null;
		}
		currentPlayerHeadshot = (GameObject)Instantiate (activePlayer, new Vector3(-491, -495, 0), Quaternion.Euler (new Vector3 ()));
		BattleManager.destryAllChildren (currentPlayerHeadshot.gameObject.transform);
		if (currentAIHeadshot != null) {
			Destroy (currentAIHeadshot);
			currentAIHeadshot = null;
		}
		currentAIHeadshot = (GameObject)Instantiate (activeEnemy, new Vector3(-491, -502, 0), Quaternion.Euler (new Vector3 ()));
		BattleManager.destryAllChildren (currentAIHeadshot.gameObject.transform);
	}

	// Use this for initialization
	void Awake () {
		currentTri = null;
		instance = this;
		initTurn ();
		generateMap();
		generatePlayer();

		endRoundBtn.onClick.AddListener (() => {
			if(turn==0) {
				nextTurn();
			}
		});
	}

	void Start () {
	
	}

	public void destroyCurrentPlayer() {
		tileUnderPlayer (activePlayer.GetComponent<UserPlayer> ()).playerOnTile = null;
		removeFromPlayerList (activePlayer);
		activePlayer.SetActive (false);
	}

	public void destroyCurrentEnermy() {
		tileUnderPlayer (activeEnemy.GetComponent<AIPlayer> ()).playerOnTile = null;
		removeFromPlayerList (activeEnemy);
		activeEnemy.SetActive (false);
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
			endRoundBtn.interactable = false;
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
//		playerUnit.text = "Player\n" + userPlayers.Count;
//
//		enemyUnit.text = "Enemy\n" + aiPlayers.Count;

		if (turn == 0) {
			palyerHealth.fillAmount = currentPlayer.health;
			palyerStrength.fillAmount = currentPlayer.strength;
		} else {
			enemyHealth.fillAmount = currentPlayer.health;
			enemyStrength.fillAmount = currentPlayer.strength;
		}

		if (userPlayers.Count == 0) {
			boardText.text = "Defeated :(";
		} else if (aiPlayers.Count == 0) {
			boardText.text = "Victory :)";
		} else {boardText.text = ((turn == 0)
			? "Player's Turn"
			: "Enemy's Turn");
//				+ "Moving " + currentPlayer.gameObject.name.Substring(0, currentPlayer.gameObject.name.IndexOf('(')).ToUpperInvariant();
		}
	}
}
