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
};

/*
void getAssignmentData(Assignment &assignment) {
	cout << "Enter assignment score: ";
	cin >> assignment.score;
	cout << "Enter assignment point: ";
	cin >> assignment.point;
}*/


int main ()
{
	Assignment assignment;

	assignment.getAssignmentData();
	// getAssignmentData(assignment);

	cout << "Assignment score: " << assignment.getScore() << endl;
	cout << "Assignment point: " << assignment.getPoint() << endl;
	cout << "Assignment grade: " << assignment.getGrade() << endl;

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
