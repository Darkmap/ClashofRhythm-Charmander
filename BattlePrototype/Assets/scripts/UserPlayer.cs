using UnityEngine;
using System.Collections;

public class UserPlayer : Player {
    public float moveSpeed = 10.0f;
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

    void onMouseEnter() {
        Debug.Log("this player");
    }
    public override void TurnUpdate() {
        if (Vector3.Distance(moveDestination, transform.position) > 0.1f) { 
            transform.position += (moveDestination - transform.position).normalized * Time.deltaTime * moveSpeed;
            if (Vector3.Distance(moveDestination, transform.position) <= 0.1f) {
                transform.position = moveDestination;
            }

        }
    }
}
