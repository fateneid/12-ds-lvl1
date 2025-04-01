#pragma once
#include <iostream>
#include <queue>
using namespace std;

namespace STL_Queue {

	void Task() {

		//FIFO: First In First Out
		queue<int> MyQueue;

		MyQueue.push(10);
		MyQueue.push(20);
		MyQueue.push(30);
		MyQueue.push(40);

		cout << "Count: " << MyQueue.size();
		cout << "\nFront: " << MyQueue.front();
		cout << "\nBack: " << MyQueue.back();

		cout << "\n\nMyQueue: ";
		while (!MyQueue.empty()) {
			cout << MyQueue.front() << " ";
			MyQueue.pop();
		}

		cout << "\n";

	}

}