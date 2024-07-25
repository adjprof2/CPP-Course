
#include "Course.h"

void enterCourseInfor(Course &c) {
	cout << "Enter the course name: " << endl;
	cin >> c.name;
	cout << "Enter the course id: " << endl;
	cin >> c.id;
}

void printCourseInfor(Course c){
	cout << "Course name: " << c.name << endl;
	cout << "Course id: " << c.id << endl;
	for (int i = 0; i < c.nEnrolled; i++) {
		printStudentInfo(c.students[i]);
	}
}

Student getStudent(Course c, int index){
	cout << "Student " << index << " of the course, " << c.name << endl;
	cout << &c.students[index];
	return c.students[index];
}

