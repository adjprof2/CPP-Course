#include <iostream>

using namespace std;

const int MAX = 5;

int simpleArrayDemo(){

	int iNumberElement = 0;
	do {
		cout << "How many numbers you want to enter (< MAX, " << MAX << "): ";
		cin >> iNumberElement;
	} while (iNumberElement > MAX);

	int iValues[MAX];

	for (int i = 0; i < iNumberElement; i++) {
		cout << "Enter value " << i << ": ";
		cin >> iValues[i];
	}

	int iMax = iValues[0];
	for (int i = 1; i < iNumberElement; i++) {
		if (iValues[i] > iMax) {
			iMax = iValues[i];
		}
	}

	cout << "Max value: " << iMax << endl;
	cout << "Print user input values: " << endl;

	for (int i = 0; i < iNumberElement; i++) {
		cout << iValues[i] << ", ";
	}

	cout << "\nPrint use input values in revsesed order: " << endl;
	for (int i = iNumberElement - 1; i >= 0; i--) {
		cout << iValues[i] << ", ";
	}
}
