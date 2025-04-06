#pragma once
#include <iostream>
using namespace std;

namespace Singly_Linked_List_Operations {

	class Node
	{
	public:
		int value;
		Node* next;
	};

	// Insert At Beginning
	void InsertAtBeginning(Node*& head, int value)
	{
		Node* new_node = new Node();

		new_node->value = value;
		new_node->next = head;

		head = new_node;
	}

	void PrintList(Node* head)
	{
		while (head != NULL) {
			cout << head->value << " ";
			head = head->next;
		}
	}

	// Find
	Node* Find(Node* head, int value) {

		while (head != NULL) {

			if (head->value == value) {
				return head;
			}

			head = head->next;
		}

		return NULL;

	}

	void Task() {

		Node* head = NULL;

		InsertAtBeginning(head, 1);
		InsertAtBeginning(head, 2);
		InsertAtBeginning(head, 3);
		InsertAtBeginning(head, 4);
		InsertAtBeginning(head, 5);

		PrintList(head);

		Node* N1 = Find(head, 2);

		if (N1 != NULL)
			cout << "\nNode Found :-)\n";
		else
			cout << "\nNode Is not found :-(\n";


	}

}
