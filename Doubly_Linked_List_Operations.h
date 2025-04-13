#pragma once
#include <iostream>
using namespace std;

namespace Doubly_Linked_List_Operations {

	class Node
	{
	public:
		int value;
		Node* prev;
		Node* next;
	};

	void PrintList(Node* head) {

		cout << "NULL <--> ";
		while (head != NULL) {
			cout << head->value << " <--> ";
			head = head->next;
		}

		cout << "NULL";

	}

	void PrintNodeDetails(Node* head) {

		if (head->prev != NULL)
			cout << head->prev->value;
		else
			cout << "NULL";

		cout << " <--> " << head->value << " <--> ";

		if (head->next != NULL)
			cout << head->next->value << "\n";
		else
			cout << "NULL";

	}

	void PrintListDetails(Node* head) {

		while (head != NULL) {
			PrintNodeDetails(head);
			head = head->next;
		}

	}

	// Insert At Beginning
	void InsertAtBeginning(Node*& head, int value) {

		Node* new_node = new Node();

		new_node->value = value;
		new_node->prev = NULL;
		new_node->next = head;

		if (head != NULL) {
			head->prev = new_node;
		}

		head = new_node;
	}

	// Find Node
	Node* Find(Node* head, int value) {

		while (head != NULL && head->value != value) {
			head = head->next;
		}

		return head;

	}

	// Insert After
	void InsertAfter(Node* current, int value) {

		Node* new_node = new Node();

		new_node->value = value;		
		new_node->prev = current;
		new_node->next = current->next;

		if (current->next != NULL) {
			current->next->prev = new_node;
		}

		current->next = new_node;

	}

	// Insert at End
	void InsertAtEnd(Node* &head, int value) {

		Node* new_node = new Node();

		new_node->value = value;
		new_node->next = NULL;
		
		if (head == NULL) {
			new_node->prev = NULL;
			head = new_node;
			return;
		}

		Node* current = head;
		while (current->next != NULL) {
			current = current->next;
		}

		current->next = new_node;
		new_node->prev = current;

	}

	// Delete Node
	void DeleteNode(Node*& head, Node*& node_to_delete) {

		if (head == NULL || node_to_delete == NULL) return;

		if (head == node_to_delete)
			head = node_to_delete->next;

		if (node_to_delete->next != NULL)
			node_to_delete->next->prev = node_to_delete->prev;

		if (node_to_delete->prev != NULL)
			node_to_delete->prev->next = node_to_delete->next;

		delete node_to_delete;

	}

	// Delete First Node
	void DeleteFirstNode(Node*& head) {

		if (head == NULL) return;

		Node* temp = head;
		head = head->next;

		if (head != NULL) {
			head->prev = NULL;
		}

		delete temp;

	}

	void Task() {
		
		Node* head = NULL;

		InsertAtBeginning(head, 5);
		InsertAtBeginning(head, 4);
		InsertAtBeginning(head, 3);
		InsertAtBeginning(head, 2);
		InsertAtBeginning(head, 1);

		cout << "\nLinked List Contenet:\n";
		PrintList(head);
		cout << "\n\n";
		PrintListDetails(head);

		Node* N1 = Find(head, 4);

		//if (N1 != NULL)
		//	cout << "\n\n Node Found :-)\n";
		//else
		//	cout << "\n\n Node Is not found :-(\n";

		cout << "\n\n";
		//InsertAfter(N1, 500);

		//InsertAtEnd(head, 500);

		//DeleteNode(head, N1);

		DeleteFirstNode(head);

		cout << "\nLinked List Contenet:\n";
		PrintList(head);
		cout << "\n\n";
		PrintListDetails(head);

		system("pause>0");

	}

}