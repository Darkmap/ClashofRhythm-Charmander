using UnityEngine;
using System.Collections;
using System;

public class Player : MonoBehaviour {
	public GameObject itSelf;
    public Vector3 moveDestination;
	public int playerIndex;
	public int steps;
	public float health;
	public float strength;

	public float plainFactor;
	public float hillFactor;
	public float forrestFactor;
	public float cityFactor;

	public bool moved;
	// 1 for right, -1 for left
	public int leftright;
	public int unitClass= 0;
	public Vector2 gridPosition = Vector2.zero;
    void Awake() {
//		health = 1.0f;
		if(health <= 0.01f){
			health = 1f;
		}
		if(strength <= 0.01f){
			strength = 0.5f;
		}
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
		move ();
	}
	void move(){
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
				currentPlayer.attack(this);
				return;
			}
			Debug.Log ("Not your turn.");
		}
	}

	public void attack(Player p){
		this.moved = true;
		GameManager.instance.enterBattleScene (this, p);
	}
}
