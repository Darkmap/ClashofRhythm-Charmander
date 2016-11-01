using UnityEngine;
using System.Collections;

public class UserPlayer : Player {

	public Animator animator;
	public float moveSpeed = 2f;
	// Use this for initialization
	void Start () {
		animator = this.gameObject.GetComponent<Animator>();
		leftright = 1;
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
			animator.SetBool ("walk_down", true);
		} else if (animator.GetBool("walk_down")) {
			animator.SetBool ("walk_down", false);
		}
    }
}
