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
		steps = 20;
	}
	
	// Update is called once per frame
	void Update () {
	
	}
	public void setPlayerIndex(int index){
		playerIndex = index;
	}
    public virtual void TurnUpdate() {

    }

	void OnCollisionEnter (Collision col)
	{
		if (!col.gameObject.name.Equals ("ground")) {
			Animator unitAnimator = gameObject.GetComponent<Animator>();
			unitAnimator.SetBool ("walk_down", false);
			unitAnimator.SetBool ("attack", true);
			BattleManager.move_forward = false;
			BattleManager.reverse = true;
		}

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
		if (GameManager.instance.currentPlayerTurn () == this.GetType ()) {
			if (moved) {
				Debug.Log ("This unit has been moved");
			} else {
				GameManager.instance.setCurrentPlayer (this);
			}
		} else {
			if (GameManager.mDistance (this.transform.position, currentPlayer.transform.position) == 2 && !currentPlayer.moved) {
				currentPlayer.moved = true;
				GameManager.instance.enterBattleScene (currentPlayer, this);
				return;
			}
			Debug.Log ("Not your turn.");
		}
	}
}
