/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <istream>
#include <cstring>
#include <cstdio>

const int MAX_ASSIGNMENTS = 5;
const int MAX_STUDENTS = 10;

using namespace std;


struct Assignment {
	int score=0;
	int point=0;
};

/*
struct Assignment {
	int score[MAX_ASSIGNMENTS];
	int point[MAX_ASSIGNMENTS];
	int recordedAssignments=0;
	double average;
};*/

struct Student {
	string name;
	Assignment assignments[MAX_ASSIGNMENTS];
	int recordedAssignments=0;
	double gpa=0.0;
};

struct Course {
	string name;
	Student students[MAX_STUDENTS];
	int recordedStudents=0;
	double average=0.0;
};


void getAssignmentInfo(Assignment& assignment) {
	cout << "Enter the score: ";
	cin >> assignment.score;
	cout << "Enter the point: ";
	cin >> assignment.point;
}

void printAssignmentsInfo(Assignment assignments[], int recordedAssignments) {
	int totalScore = 0, totalPoint = 0;
	// output the score and point
	for (int i = 0; i < recordedAssignments; i++) {
		cout << "assignment: " << i << ", the score is: " << assignments[i].score << ", with total point : " << assignments[i].point << endl;
		totalScore += assignments[i].score;
		totalPoint += assignments[i].point;
	}
	// calculate the average score
	double average = ((double)totalScore / totalPoint)*100;
	cout << "The average score is: " << average << endl;
}

void printStudentInfo(Student student) {
	cout << ">>>>>>>> Student information: " << endl;
	cout << "Student name: " << student.name << endl;
	cout << "Recorded assignments: " << student.recordedAssignments << endl;

	printAssignmentsInfo(student.assignments, student.recordedAssignments);

	cout << "GPA: " << student.gpa << endl;
}

void printCourseInfo(Course course) {
	cout << ">>>>>>>> Course information: " << endl;
	cout << "Course name: " << course.name << endl;
	cout << "Recorded students: " << course.recordedStudents << endl;
	for (int i = 0; i < course.recordedStudents; i++) {
		printStudentInfo(course.students[i]);
	}
	cout << "Average score: " << course.average << endl;
}

void getCoursesInfo(Course& pCourse) {
	cout << "Enter the course name: ";
	cin >> pCourse.name;

	// we need to record multiple students for each course
	for (int i = 0; i < MAX_STUDENTS; i++) {
		// asking user to enter the student name
		cout << "Enter the student name: ";
		cin >> pCourse.students[i].name;
		pCourse.recordedStudents++;

		int isStudentContinue=0;
		// we need to record multiple scores and points for each student
		for (int j = 0; j < MAX_ASSIGNMENTS; j++) {
			// asking user to enter the score and point
			getAssignmentInfo(pCourse.students[i].assignments[j]);
			pCourse.students[i].recordedAssignments++;
			int isContinue;
			cout << "Do you want to continue for more assignments? (0/1): ";
			cin >> isContinue;
			if (isContinue == 0) {
				break;
			}
		}
		cout << "student name: " << pCourse.students[i].name << endl;
		printAssignmentsInfo(pCourse.students[i].assignments, pCourse.students[i].recordedAssignments);
		cout << "Do you want to continue for more students? (0/1): ";
		cin >> isStudentContinue;
		if (isStudentContinue == 0) {
			break;
		}
	}
}

int main ()
{
	// create a course
	Course cs02_course;
	getCoursesInfo(cs02_course);
	printCourseInfo(cs02_course);
	cout << "-----------------------------------------" << endl;
	// copy the course to another course
	Course cs03_course = cs02_course;
	cs03_course.name = "CS03";
	printCourseInfo(cs03_course);

/*
	// we need to record multiple scores and points for each student
	for (int i = 0; i < MAX_ASSIGNMENTS; i++) {
		// asking user to enter the score and point
		getAssignmentInfo(cs02_course.assignments[i]);

		cs02_course.recordedAssignments++;

		int isContinue;
		cout << "Do you want to continue? (0/1): ";
		cin >> isContinue;
		if (isContinue == 0) {
			break;
		}
	}

	printAssignmentsInfo(cs02_course.assignments, cs02_course.recordedAssignments);
*/
}
