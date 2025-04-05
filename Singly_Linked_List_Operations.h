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

	void Task() {

		Node* head = NULL;

		InsertAtBeginning(head, 1);
		InsertAtBeginning(head, 2);
		InsertAtBeginning(head, 3);
		InsertAtBeginning(head, 4);
		InsertAtBeginning(head, 5);

		PrintList(head);

	}

}
