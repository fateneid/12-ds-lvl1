#pragma once
#include <iostream>
using namespace std;

namespace Singly_Linked_List {

	class Node
	{
	public:
		int value;
		Node* next;

	};

	void Task() {

		Node* head;

		Node* Node1 = NULL;
		Node* Node2 = NULL;
		Node* Node3 = NULL;

		// allocate 3 nodes in the heap
		Node1 = new Node();
		Node2 = new Node();
		Node3 = new Node();

		// Assign value values
		Node1->value = 1;
		Node2->value = 2;
		Node3->value = 3;

		// Connect nodes
		Node1->next = Node2;
		Node2->next = Node3;
		Node3->next = NULL;

		// print the linked list value
		head = Node1;
		while (head != NULL) {
			cout << head->value << " ";
			head = head->next;
		}

	}

}

