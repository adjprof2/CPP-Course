#include <iostream>

using namespace std;

const int MAX = 5;

// Function prototype for getUserData that taking int array
void getUserData(int iValues[], int iNumberElement);
int getMax(int iValues[], int iNumberElement);
void printValues(int iValues[], int iNumberElement);
void printReverseValues(int iValues[], int iNumberElement);
void printSingleValue(int iValue);
void setSingleValue(int& iValue, int iNewValue);

int simpleArrayFunctionDemo(){

	int iNumberElement = 0;		// local variable allocated on stack
	do {
		cout << "How many numbers you want to enter (< MAX, " << MAX << "): ";
		cin >> iNumberElement;
	} while (iNumberElement > MAX);

	int iValues[MAX];			// local variable as array allocated on stack

	getUserData(iValues, iNumberElement);
	int iMax = getMax(iValues, iNumberElement);

	cout << "Max value: " << iMax << endl;
	printValues(iValues, iNumberElement);
	printReverseValues(iValues, iNumberElement);

}

void getUserData(int iValues[], int iNumberElement){
	for (int i = 0; i < iNumberElement; i++) {
		cout << "Enter value " << i << ": ";
		int tempValue;
		cin >> tempValue;
		setSingleValue(iValues[i], tempValue);
	}
}

int getMax(int iValues[], int iNumberElement){
	int iMax = iValues[0];
	for (int i = 1; i < iNumberElement; i++) {
		if (iValues[i] > iMax) {
			iMax = iValues[i];
		}
	}
	return iMax;
}

void printValues(int iValues[], int iNumberElement){
	cout << "Print user input values: " << endl;

	for (int i = 0; i < iNumberElement; i++) {
		cout << iValues[i] << ", ";
	}
	/*
	for (int iValue : iValues) {
		cout << iValue << ", ";
	}*/
}

// iValues is pass by reference
void printReverseValues(int iValues[], int iNumberElement){
	cout << "\nPrint use input values in revsesed order: " << endl;
	for (int i = iNumberElement - 1; i >= 0; i--) {
		printSingleValue(iValues[i]);
		cout << ", ";
	}
}

// pass by value
void printSingleValue(int iValue){
	cout << iValue;
}

void setSingleValue(int& iValue, int iNewValue){
	iValue = iNewValue;
}

