/*
 * Main.cpp
 *
 *  Created on: Feb 18, 2024
 *      Author: chang
 */

#include <iostream>

using namespace std;

// global variable
int iSizeOfRow = 9;
const int SIZE_COL = 12;

void printTable() {

	// nested loop for multiplication table
	for (int i = 1; i <= iSizeOfRow; i++) {
		for (int j = 1; j <= SIZE_COL; j++) {
			cout << i << " * " << j << " = " << i * j << "\t";
		}
		cout << endl;
	}

}

void printTable2(){

	// nested loop for multiplication table using while loop
	int i = 1;
	while (i <= iSizeOfRow) {
		int j = 1;
		while (j <= SIZE_COL) {
			cout << i << " * " << j << " = " << i * j << "\t";
			j++;
		}
		cout << endl;
		i++;
	}
}

void printTable3(){

	// SIZE_COL = 9;
	// nested loop for multiplication table using do-while loop
	int i = 1;	// local variable only in the scope of this function
	int j = 100;
	// int i = 100; // you cannot define i again, it is already defined in the scope of this function
	do {
		int j = 1;	// local variable only in the scope of this function and the loop
		do {
			cout << i << " * " << j << " = " << i * j << "\t";
			j++;
		} while (j <= SIZE_COL);
		cout << "\t -----> j: " << j << endl;
		i++;
	} while (i <= iSizeOfRow);
	// j is not defined here, if you are trying to access j variable within the loop; it is out of scope outside of the inner do-while loop
	cout << "printTable3 function j: " << j << endl;
	cout << "printTable3 function i: " << i << endl;
}

/*
int main() {

	int i=10000;
	cout << "main function i: " << i << endl;
	cout << "row = " << iSizeOfRow << endl;
	cout << "col = " << SIZE_COL << endl;

	printTable3();

	return 0;
}*/





