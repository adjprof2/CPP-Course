/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <istream>
#include <cstring>
#include <cstdio>

using namespace std;

const int MAX_ASSIGNMENTS = 5;
const int MAX_STUDENTS = 10;
const int BONUS = 10;

// encapsulation is to hide the internal state of an object from user
// this allows us to change the internal state without affecting the user
class Assignment {
// default scope is private
private:
	int score=0;
	int point=0;
public:
	int getScore();
	void setScore(int score);
	int getPoint();
	void setPoint(int point);
	void getAssignmentData();
	double getGrade();
	void printAssignment();
};

class Student {
private:
	string name;
	Assignment assignments[MAX_ASSIGNMENTS];
	int recordedAssignments=0;
	double gpa=0.0;
public:
	// getter and setter for name
	string getName();
	void setName(string name);
	void addAssignment();
	void printStudent();
};

int main ()
{
	Student aStudent;
	string aName;
	cout << "Enter student name: ";
	cin >> aName;
	aStudent.setName(aName);

	bool isContinue = true;
	for (int i = 0; i < MAX_ASSIGNMENTS; i++) {
		aStudent.addAssignment();
		/*
		Assignment assignment;
		assignment.getAssignmentData();
		aStudent.assignments[i] = assignment;
		aStudent.recordedAssignments++;
		*/
		cout << "Do you want to continue? (1/0): ";
		cin >> isContinue;
		if (!isContinue) {
			break;
		}
	}

	aStudent.printStudent();

	return 0;
}

void Assignment::getAssignmentData() {
	cout << "Enter assignment score: ";
	cin >> score;
	cout << "Enter assignment point: ";
	cin >> point;
}

int Assignment::getScore(){
	return score;
}

void Assignment::setScore(int score){
	this->score = score;
}

int Assignment::getPoint() {
	return point;
}

void Assignment::setPoint(int point){
	this->point = point;
}

double Assignment::getGrade(){
	return (double)(score+BONUS)/point*100;
}

void Assignment::printAssignment(){
	cout << "Assignment score: " << getScore() << endl;
	cout << "Assignment point: " << getPoint() << endl;
	cout << "Assignment grade: " << getGrade() << endl;

}

string Student::getName(){
	return name;
}

void Student::setName(string name){
	this->name = name;
}

void Student::addAssignment(){
	Assignment assignment;
	assignment.getAssignmentData();
	assignments[recordedAssignments] = assignment;
	recordedAssignments++;
}

void Student::printStudent(){
	cout << "Student name: " << getName() << endl;
	for (int i = 0; i < recordedAssignments; i++) {
		assignments[i].printAssignment();
		gpa += assignments[i].getGrade();
	}
	cout << "Student GPA: " << gpa/recordedAssignments << endl;

}
