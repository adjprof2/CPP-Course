#include "MyAbstractDataType.h"
#include "Student.h"

const int MAX_STUDENTS = 10;

struct Course {
	string name;
	string id;
	Student students[MAX_STUDENTS];
	int nEnrolled;
};


void enterCourseInfor(Course &c);
void printCourseInfor(Course c);