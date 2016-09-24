using UnityEngine;
using System.Collections;

public class Player : MonoBehaviour {
    public Vector3 moveDestination;
	public int playerIndex;
	public int steps;
    void Awake() {
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
			Debug.Log (GameManager.mDistance (this.transform.position, currentPlayer.transform.position));
			if (GameManager.mDistance (this.transform.position, currentPlayer.transform.position) == 1) {
				GameManager.instance.enterBattleScene ();
				return;
			}
		} else {
			GameManager.instance.setCurrentPlayer (this);
			//Debug.Log ("I'm player " + playerIndex + ".");
		}
	}
}
