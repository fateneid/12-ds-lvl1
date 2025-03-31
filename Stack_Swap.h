#pragma once
#include <iostream>
#include <stack>
using namespace std;

namespace Stack_Swap {

	void Task() {

		stack<int> MyStack1;
		stack<int> MyStack2;

		MyStack1.push(10);
		MyStack1.push(20);
		MyStack1.push(30);
		MyStack1.push(40);

		MyStack2.push(50);
		MyStack2.push(60);
		MyStack2.push(70);
		MyStack2.push(80);

		MyStack1.swap(MyStack2);

		cout << "MyStack1: ";
		while (!MyStack1.empty()) {
			cout << MyStack1.top() << " ";
			MyStack1.pop();
		}

		cout << "\nMyStack2: ";
		while (!MyStack2.empty()) {
			cout << MyStack2.top() << " ";
			MyStack2.pop();
		}

		cout << endl;

	}

}