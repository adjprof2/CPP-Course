#include "MyAbstractDataType.h"
#include "Assignment.h"

const int MAX_ASSIGNMENTS = 10;

class Student {
public:
	// member variables of Student
	string name = "John Doe";
	int id;
	string major;
	Assignment assignments[MAX_ASSIGNMENTS];
	int nAssignments = 0;
	// memeber functions of Student
	void enterStudentInfo();
	void printStudentInfo();
	void setnAssignments(int n);
};

