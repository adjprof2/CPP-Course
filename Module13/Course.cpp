
#include "Course.h"

void Course::enterCourseInfor() {
	cout << "Enter the course name: " << endl;
	cin >> name;
	cout << "Enter the course id: " << endl;
	cin >> id;
	// initial student array
	students = new Student[10];
}

void Course::printCourseInfor(){
	cout << "Course name: " << name << endl;
	cout << "Course id: " << id << endl;
	for (int i = 0; i < nEnrolled; i++) {
		students[i].printStudentInfo();
	}
}

Student* Course::getStudent(int index){
	cout << "Student " << index << " of the course, " << name << endl;
	cout << students+index << endl;
	return (students + index);
}

int Course::getNEnrolled(){
	return nEnrolled;
}

void Course::setNEnrolled(int nEnrolled){
	this->nEnrolled = nEnrolled;
}

