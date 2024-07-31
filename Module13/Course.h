#include "MyAbstractDataType.h"
#include "Student.h"

const int MAX_STUDENTS = 10;

class Course {
private:
	string name;
	string id;
	Student* students;	// student pointers should points to the array of Student dynamically allocated
	int nEnrolled;

public:
	Course();	// default constructor
	~Course();	// destructor
	// getter and setter of member variables
	int getNEnrolled();
	void setNEnrolled(int nEnrolled);

	void enterCourseInfor();
	void printCourseInfor();
	Student* getStudent(int index);

};


