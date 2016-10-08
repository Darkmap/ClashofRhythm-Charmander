using UnityEngine;
using System.Collections;
using System;

public class Player : MonoBehaviour {
	public GameObject itSelf;
    public Vector3 moveDestination;
	public int playerIndex;
	public int steps;
	public bool moved;
	public int unitClass= 0;
    void Awake() {
		moved = false;
        moveDestination = transform.position;
    }
	// Use this for initialization
	void Start () {
		steps = 10;
	}
	
	// Update is called once per frame
	void Update () {
	
	}
	public void setPlayerIndex(int index){
		playerIndex = index;
	}
    public virtual void TurnUpdate() {

    }

	public Type getOpponent(Type p){
		if (p == typeof(UserPlayer)) {
			return typeof(AIPlayer);
		} else {
			return typeof(UserPlayer);
		}

	}
	void OnMouseDown(){
		Player currentPlayer = GameManager.instance.getCurrentPlayer ();
		Debug.Log (this.GetType ());
		Debug.Log ("mouse down");
		if (GameManager.instance.currentPlayerTurn () == this.GetType ()) {
			if (moved) {
				Debug.Log ("This unit has been moved");
			} else {
				GameManager.instance.setCurrentPlayer (this);
			}
		} else {
			if (GameManager.mDistance (this.transform.position, currentPlayer.transform.position) == 1 && !currentPlayer.moved) {
				currentPlayer.moved = true;
				GameManager.instance.enterBattleScene (currentPlayer, this);
				return;
			}
			Debug.Log ("Not your turn.");
		}
	}
}
