#include "Student.h"

Student::Student(){
	cout << "Student constructor called" << endl;
	assignments = new Assignment[MAX_ASSIGNMENTS];
}

/*
Student::~Student() {
	cout << "Student destructor called" << endl;
	delete[] assignments;
}*/


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

void Student::setnAssignments(int n){
	nAssignments = n;
}




