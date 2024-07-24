#include "Assignment.h"

void enterAssignmentInfo(Assignment &assignment) {
	cout << "Enter assignment name: " << endl;
	cin >> assignment.name;
	cout << "Enter assignment ID: " << endl;
	cin >> assignment.id;
	cout << "Enter assignment grade: " << endl;
	cin >> assignment.grade;
}

void printAssignmentInfo(Assignment asssignment) {
	cout << "Assignment name: " << asssignment.name << endl;
	cout << "Assignment ID: " << asssignment.id << endl;
	cout << "Assignment grade: " << asssignment.grade << endl;
}
