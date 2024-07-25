#include "MyAbstractDataType.h"
#include "Student.h"

const int MAX_STUDENTS = 10;

class Course {
	public:
	string name;
	string id;
	Student students[MAX_STUDENTS];
	int nEnrolled;

	void enterCourseInfor();
	void printCourseInfor();
	Student getStudent(int index);
};


