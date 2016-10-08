﻿using UnityEngine;
using System.Collections;

public class AIPlayer : Player {

	public Animator animator;
	public float moveSpeed = 2f;
	// Use this for initialization
	void Start () {
		animator = this.gameObject.GetComponent<Animator>();
	}
	
	// Update is called once per frame
	void Update () {

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