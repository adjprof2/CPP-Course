
#include "Module12\Course.h"


int main(){

	Course cs02;
    enterCourseInfor(cs02);
    int i=0;
	for (i = 0; i < MAX_STUDENTS; i++) {
		enterStudentInfo(cs02.students[i]);
		cout << "Do you want to enter another student? (y/n)" << endl;
		char response;
		cin >> response;
		if (response != 'y') {
			break;
		}
	}
	cs02.nEnrolled = i+1;

	// enter student assignments
	for (int i = 0; i < cs02.nEnrolled; i++) {
		cout << "Enter assignments for student " << cs02.students[i].name
				<< endl;
		int j=0;
		for (j = 0; j < MAX_ASSIGNMENTS; j++) {
			enterAssignmentInfo(cs02.students[i].assignments[j]);
			cout << "Do you want to enter another assignment? (y/n)" << endl;
			char response;
			cin >> response;
			if (response != 'y') {
				break;
			}
		}
		cs02.students[i].nAssignments = j+1;
	}

	printCourseInfor(cs02);


/*
	Course cs03a;
	enterCourseInfor(cs03a);
*/

}
