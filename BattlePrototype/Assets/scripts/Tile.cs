using UnityEngine;
using System.Collections;
using System.Text;
using System;

public enum Sides{
	Bottom ,
	Right,
	Left,
	Top
}
public enum Terrain{
	Plain = 0,
	Highland = 17,
	Forest = 16
}

public class Tile : MonoBehaviour {
	public int autotileID;
	public Tile[] neighbors = new Tile[4];
	public Vector2 gridPosition = Vector2.zero;
	public Player playerOnTile;
	public Terrain terrainType;
	public void addNeighbor(Sides side, Tile tile){
		neighbors [(int)side] = tile;
		CalculateAutotileID ();
	}
    
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
    void OnMouseEnter() {
        //Debug.Log("My position is(" + gridPosition.x + " ," + gridPosition.y + ").");
    }
    void OnMouseDown() {
		Debug.Log (this.gridPosition);
        GameManager.instance.moveCurrentPlayer(this);
    }
	private void CalculateAutotileID(){

		var sideValues = new StringBuilder ();
		foreach (Tile tile in neighbors) {
			sideValues.Append (tile == null ? "0" : "1");
		}
		autotileID = Convert.ToInt32 (sideValues.ToString (), 2);
	}
}

public class DummyTile{

}
