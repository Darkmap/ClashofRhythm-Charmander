using UnityEngine;
using System.Collections;

public class Tile : MonoBehaviour {
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
}
