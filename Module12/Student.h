#include "MyAbstractDataType.h"
#include "Assignment.h"

const int MAX_ASSIGNMENTS = 10;

struct Student {
	string name = "John Doe";
	int id;
	string major;
	Assignment assignments[MAX_ASSIGNMENTS];
	int nAssignments = 0;
};

void enterStudentInfo(Student& student);
void printStudentInfo(Student student);