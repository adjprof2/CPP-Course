#include <iostream>
#include <string>

using namespace std;

const int MAX_SIZE=5;

// by passing the array into the function, it is call by reference
void printArrayInOrder(int a[], int numbUsed);
void fillArrayInOrder(int a[], int size, int&numbUsed);
double computeAverage(int a[], int numbUsed);
void showDistanceFromAverage(int a[], int numbUsed, double avg);
int calculateDistanceFromAverage(int score, double avg);
void printGrade(int a[], int numbUsed, double avg);
string assignGrade(int score);

int main() {

  int nUsed = 0;	// storing how many element being filled in the array
  int myArray[MAX_SIZE];

  fillArrayInOrder(myArray, MAX_SIZE, nUsed);

  cout << "Number of elements used: " << nUsed << endl;
  printArrayInOrder(myArray, nUsed);

  double avg = computeAverage(myArray, nUsed);
  cout << "Average: " << avg << endl;
  // showDistanceFromAverage(myArray, nUsed, avg);

  printGrade(myArray, nUsed, avg);
  cout << endl;
}

void printArrayInOrder(int a[], int numbUsed){
	for (int i = 0; i < numbUsed; i++) {
		cout << a[i] << endl;
	}
}

void fillArrayInOrder(int a[], int size, int&numbUsed){
	cout << "Mark the end of the list with -1" << endl;
	int next = 0, index = 0;
	cin >> next;
	while ((next >= 0) && (index < MAX_SIZE)) {
		a[index] = next;
		index++;
		numbUsed++;
		cin >> next;
	}
	// numbUsed = index;
}

double computeAverage(int a[], int numbUsed){
	int sum = 0;
	for (int i = 0; i < numbUsed; i++) {
		sum += a[i];
	}
	return sum / numbUsed;
}

int calculateDistanceFromAverage(int score, double avg){
	return score - avg;
}

void showDistanceFromAverage(int a[], int numbUsed, double avg){
	for (int i = 0; i < numbUsed; i++) {
		cout << "Distance from average: " << calculateDistanceFromAverage(a[i], avg) << endl;
	}
}

void printGrade(int a[], int numbUsed, double avg){
	for (int i = 0; i < numbUsed; i++) {
		if (a[i] >= 90) {
			cout << a[i] << " is A" << " with Distance from average: " << calculateDistanceFromAverage(a[i], avg) << endl;
		} else if (a[i] >= 80) {
			cout << a[i] << " is B" << " with Distance from average: " << calculateDistanceFromAverage(a[i], avg) << endl;
		} else if (a[i] >= 70) {
			cout << a[i] << " is C" << " with Distance from average: " << calculateDistanceFromAverage(a[i], avg) << endl;
		} else if (a[i] >= 60) {
			cout << a[i] << " is D" << " with Distance from average: " << calculateDistanceFromAverage(a[i], avg) << endl;
		} else {
			cout << a[i] << " is F" << " with Distance from average: " << calculateDistanceFromAverage(a[i], avg) << endl;
		}
	}
}

string assignGrade(int score){
	string grade;
	if (score >= 90) {
		grade = "A";
	} else if (score >= 80) {
		grade = "B";
	} else if (score >= 70) {
		grade = "C";
	} else if (score >= 60) {
		grade = "D";
	} else {
		grade = "F";
	}

}
