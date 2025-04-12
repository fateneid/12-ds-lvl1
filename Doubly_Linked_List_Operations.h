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

		system("pause>0");

	}

}