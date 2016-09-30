using UnityEngine;
using System.Collections;

public class Player : MonoBehaviour {
	public GameObject itSelf;
    public Vector3 moveDestination;
	public int playerIndex;
	public int steps;
	public bool moved;
    void Awake() {
		moved = false;
        moveDestination = transform.position;
    }
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
	public void setPlayerIndex(int index){
		playerIndex = index;
	}
    public virtual void TurnUpdate() {

    }
	void OnMouseDown(){
		Player currentPlayer = GameManager.instance.getCurrentPlayer ();
		Debug.Log (this.GetType ());
		if (this.GetType () != currentPlayer.GetType ()) {
			if (GameManager.mDistance (this.transform.position, currentPlayer.transform.position) == 1 && !moved) {
				this.moved = true;
				GameManager.instance.enterBattleScene (currentPlayer, this);
				return;
			}
			if (moved) {
				Debug.Log ("This unit has been moved");
			}
		}
		GameManager.instance.setCurrentPlayer (this);
		//Debug.Log ("I'm player " + playerIndex + ".");
	}
}
