
#include "Course.h"

Course::Course(){
	cout << "Course constructor called" << endl;
	// initial student array
	students = new Student[10];
}

Course::~Course(){
	cout << "Course destructor called" << endl;
	delete[] students;
}


void Course::enterCourseInfor() {
	cout << "Enter the course name: " << endl;
	cin >> name;
	cout << "Enter the course id: " << endl;
	cin >> id;

}

void Course::printCourseInfor(){
	cout << "Course name: " << name << endl;
	cout << "Course id: " << id << endl;
	for (int i = 0; i < nEnrolled; i++) {
		students[i].printStudentInfo();
	}
}

Student* Course::getStudent(int index){
	cout << "Student " << index << " at address, " << (students+index) << endl;
	return (students+index);
}

int Course::getNEnrolled(){
	return nEnrolled;
}

void Course::setNEnrolled(int nEnrolled){
	this->nEnrolled = nEnrolled;
}

