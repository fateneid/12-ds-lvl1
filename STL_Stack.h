#pragma once
#include <iostream>
#include <stack>
using namespace std;

namespace STL_Stack {

	void Task() {

		stack <int> stkNumbers;

		stkNumbers.push(10);
		stkNumbers.push(20);
		stkNumbers.push(30);
		stkNumbers.push(40);
		stkNumbers.push(50);

		cout << "Count = " << stkNumbers.size() << endl;

		cout << "Numbers are:\n";
		while (!stkNumbers.empty()) {

			cout << stkNumbers.top() << '\n';

			stkNumbers.pop();

		}

	}

}
