#include "Student.h"

void enterStudentInfo(Student& student) {
    cout << "Enter student name: " << endl;
    cin >> student.name;
    cout << "Enter student ID: " << endl;
    cin >> student.id;
    // pending assignments
}

void printStudentInfo(Student student){
	cout << "Student name: " << student.name << endl;
	cout << "Student ID: " << student.id << endl;
	for (int i = 0; i < student.nAssignments; i++) {
		printAssignmentInfo(student.assignments[i]);
	}
}




