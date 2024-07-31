#include "MyAbstractDataType.h"
#include "Assignment.h"

const int MAX_ASSIGNMENTS = 10;

class Student {
public:
	// member variables of Student
	string name = "John Doe";
	int id;
	string major;
	Assignment* assignments;
	int nAssignments = 0;
	// memeber functions of Student

	// constructor
	Student();
	// destructor
	//~Student();

	void enterStudentInfo();
	void printStudentInfo();
	void setnAssignments(int n);

};

