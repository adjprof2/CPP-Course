#include "MyAbstractDataType.h"

struct Assignment {
	int grade;
	int id;
	string name;
	string dueDate;
};

void enterAssignmentInfo(Assignment& assignment);
void printAssignmentInfo(Assignment asssignment);
