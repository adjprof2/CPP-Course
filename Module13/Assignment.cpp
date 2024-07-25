#include "Assignment.h"

void Assignment::enterAssignmentInfo() {
	cout << "Enter assignment name: " << endl;
	cin >> name;
	cout << "Enter assignment ID: " << endl;
	cin >> id;
	cout << "Enter assignment grade: " << endl;
	cin >> grade;
}

void Assignment::printAssignmentInfo() {
	cout << "Assignment name: " << name << endl;
	cout << "Assignment ID: " << id << endl;
	cout << "Assignment grade: " << grade << endl;
}
