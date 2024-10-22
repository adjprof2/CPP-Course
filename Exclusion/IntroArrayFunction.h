#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <cstring>

using namespace std;

const int SIZE = 5;

void printElement(int value);
//void printArray(double values[], int size);
void printArray(int values[], int size);
void copyArray(int source[], double destination[], int size);
void getData(int values[], int size);
/// call by reference on setting the element of the array
void setElement(int& value);


int main() {

	int arraySize;
	cout << "Enter the size  of the array: ";
	cin >> arraySize;

	double dest[arraySize];
	int src[arraySize];

	// initialize the src array
	getData(src, arraySize);

    // the number of elements in the array needs to be known by the programmer
	// loop through the array
	printArray(src, arraySize);

	cout << endl;
	// copy array a to array b
	copyArray(src, dest, arraySize);

	//print array b
	//printArray(dest, arraySize);
	for(double value : dest) {
		cout << value << ",";
	}

	return 0;

}

void setElement(int& value){
	cout << "Enter the value of the element: ";
	cin >> value;
}

void getData(int values[], int size){
	for (int i = 0; i < size; i++) {
		setElement(values[i]);
	}
}

/*
void printArray(double values[], int size){
	for(double value : values) {
		cout << value << ",";
	}
}*/
// copy by value if you pass the individual element of the array
void printElement(int value){
	cout << value << ",";
}

void printArray(int values[], int size){
	for (int i = 0; i < size; i++) {
		printElement(values[i]);
	}
}

// pass in the array is call by reference as default;
// so the change on destination will affect the original array passed from main
void copyArray(int source[], double destination[], int size){
	for (int i = 0; i < size; i++) {
		destination[i] = source[i];	// cast double to int, will lose the decimal part
	}
}
