#include "MyAbstractDataType.h"
#include "Student.h"

const int MAX_STUDENTS = 10;

class Course {
private:
	string name;
	string id;
	Student* students;
	int nEnrolled;

public:
	// getter and setter of member variables
	int getNEnrolled();
	void setNEnrolled(int nEnrolled);

	void enterCourseInfor();
	void printCourseInfor();
	Student* getStudent(int index);

};


