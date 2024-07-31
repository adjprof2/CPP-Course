
#include "Module13\Course.h"


int main(){

	Course *cs02 = new Course();
    cs02->enterCourseInfor();
    int i=0;
	for (i = 0; i < MAX_STUDENTS; i++) {
		cs02->getStudent(i)->enterStudentInfo();
		cout << "Do you want to enter another student? (y/n)" << endl;
		char response;
		cin >> response;
		if (response != 'y') {
			break;
		}
	}
	cs02->setNEnrolled(i+1);

	// enter student assignments
	for (int i = 0; i < cs02->getNEnrolled(); i++) {
		cout << "Enter assignments for student " << cs02->getStudent(i)->name << endl;
		int j=0;
		for (j = 0; j < MAX_ASSIGNMENTS; j++) {
			cs02->getStudent(i)->assignments[j].enterAssignmentInfo();
			cout << "Do you want to enter another assignment? (y/n)" << endl;
			char response;
			cin >> response;
			if (response != 'y') {
				break;
			}
		}
		cs02->getStudent(i)->setnAssignments(j+1);
	}

	cs02->printCourseInfor();

	delete cs02;


/*
	Course cs03a;
	enterCourseInfor(cs03a);
*/

}
