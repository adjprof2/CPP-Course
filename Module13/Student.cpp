#include "Student.h"

void Student::enterStudentInfo() {
    cout << "Enter student name: " << endl;
    cin >> name;
    cout << "Enter student ID: " << endl;
    cin >> id;
    // pending assignments
}

void Student::printStudentInfo(){
	cout << "Student name: " << name << endl;
	cout << "Student ID: " << id << endl;
	for (int i = 0; i < nAssignments; i++) {
		assignments[i].printAssignmentInfo();
	}
}




