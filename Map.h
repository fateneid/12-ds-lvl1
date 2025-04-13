#pragma once
#include <iostream>
#include <map>
using namespace std;

namespace Map {

	void Task() {

		// Declare a map with string keys and int values

		map<string, int> studentGrades;

		studentGrades["Ali"] = 77;
		studentGrades["Ahmed"] = 85;
		studentGrades["Fadi"] = 95;

		// Iterating over the map

		cout << "\nPrinting all map values..\n\n";
		for (const auto& pair : studentGrades) {
			cout << "Student: " << pair.first << ", Grade: " << pair.second << endl;
		}

		// Finding the grade for a specific student

		cout << "\nFinding Fadi's Grad in the Map..\n";
		string studentName = "Fadi";
		if (studentGrades.find(studentName) != studentGrades.end()) {
			cout << studentName << "'s grade: " << studentGrades[studentName] << endl;
		}
		else {
			cout << "Grade not found for " << studentName << endl;
		}

		cout << "\nFinding Omar's Grad in the Map..\n";
		studentName = "Omar";
		if (studentGrades.find(studentName) != studentGrades.end()) {
			cout << studentName << "'s grade: " << studentGrades[studentName] << endl;
		}
		else {
			cout << "Grade not found for " << studentName << endl;
		}


	}

}
