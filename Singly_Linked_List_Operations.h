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
		cout << '\n';
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

	// Insert After
	void InsertAfter(Node* prev_node, int value) {

		if (prev_node == NULL) {
			cout << "the given previous node cannot be NULL";
			return;
		}

		Node* new_node = new Node();
		new_node->value = value;
		new_node->next = prev_node->next;
		prev_node->next = new_node;

	}

	// Insert At End
	void InsertAtEnd(Node* &head, int value) {

		Node* new_node = new Node();
		new_node->value = value;
		new_node->next = NULL;

		if (head == NULL) {
			head = new_node;
			return;
		}

		Node* LastNode = head;
		while (LastNode->next != NULL) {
			LastNode = LastNode->next;
		}

		LastNode->next = new_node;
		return;

	}

	// Delete A Node
	void DeleteNode(Node* &head, int value) {

		Node* Current = head, * Prev = head;

		if (head == NULL) return;

		if (Current->value == value) {
			head = Current->next;
			delete Current; //free from memory
			return;
		}

		while (Current != NULL && Current->value != value) {
			Prev = Current;
			Current = Current->next;
		}

		if (Current == NULL) return;

		Prev->next = Current->next;
		delete Current;

	}

	// Delete First Node
	void DeleteFirstNode(Node*& head) {

		if (head == NULL) return;

		Node* Current = head;
		head = Current->next;
		delete Current;

		return;

	}

	void Task() {

		Node* head = NULL;

		//InsertAtBeginning(head, 1);
		//InsertAtBeginning(head, 2);
		//InsertAtBeginning(head, 3);
		//InsertAtBeginning(head, 4);
		//InsertAtBeginning(head, 5);

		//PrintList(head);

		//Node* N1 = Find(head, 2);

		//if (N1 != NULL)
		//	cout << "\nNode Found :-)\n";
		//else
		//	cout << "\nNode Is not found :-(\n";

		//InsertAfter(N1, 500);

		//PrintList(head);

		//InsertAtEnd(head, 1);
		//InsertAtEnd(head, 2);
		//InsertAtEnd(head, 3);
		//InsertAtBeginning(head, 0);

		//PrintList(head);

		InsertAtEnd(head, 1);
		InsertAtEnd(head, 2);
		InsertAtEnd(head, 3);
		InsertAtEnd(head, 4);
		InsertAtEnd(head, 5);
		InsertAtEnd(head, 6);
		PrintList(head);


		DeleteFirstNode(head);
		PrintList(head);

		system("pause>0");

	}

}
