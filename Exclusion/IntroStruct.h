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

struct Course {
	string name;
	//Student students[10];
	Assignment assignments[MAX_ASSIGNMENTS];
	int recordedAssignments=0;
	double average;
};

struct Student {
	string name;
	Course courses[10];
	double gpa;
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


int main ()
{
	// score and point are part of the record for each assignment that the student has completed
	/*
	int score[MAX_ASSIGNMENTS];
	int point[MAX_ASSIGNMENTS];
	*/
	Assignment assignments[MAX_ASSIGNMENTS];

	int recordedAssignments=0;
	// we need to record multiple scores and points for each student
	for (int i = 0; i < MAX_ASSIGNMENTS; i++) {
		// asking user to enter the score and point
		getAssignmentInfo(assignments[i]);

		recordedAssignments++;

		int isContinue;
		cout << "Do you want to continue? (0/1): ";
		cin >> isContinue;
		if (isContinue == 0) {
			break;
		}
	}

	printAssignmentsInfo(assignments, recordedAssignments);

}
