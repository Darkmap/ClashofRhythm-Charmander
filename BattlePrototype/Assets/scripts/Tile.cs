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

public class Tile : MonoBehaviour {
	public int autotileID;
	public Tile[] neighbors = new Tile[4];
	public void addNeighbor(Sides side, Tile tile){
		neighbors [(int)side] = tile;
		CalculateAutotileID ();
	}
    public Vector2 gridPosition = Vector2.zero;
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
        GameManager.instance.moveCurrentPlayer(this);
    }
	private void CalculateAutotileID(){

		var sideValues = new StringBuilder ();
		foreach (Tile tile in neighbors) {
			sideValues.Append (tile == null ? "0" : "1");
		}
		Debug.Log (sideValues.ToString ());
		autotileID = Convert.ToInt32 (sideValues.ToString (), 2);
		Debug.Log (autotileID);
	}
}

public class DummyTile{

}
