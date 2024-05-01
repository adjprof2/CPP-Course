#include <iostream>

using namespace std;

const int ROW_SIZE = 9;
const int COL_SIZE = 12;

void seedTable(int iTable[][COL_SIZE]) {
	for (int i = 1; i <= ROW_SIZE; i++) {
		for (int j = 1; j <= COL_SIZE; j++) {
			iTable[i - 1][j - 1] = i * j;
		}
	}
}

void printTable(int iTable[ROW_SIZE][COL_SIZE]) {
	for (int i = 1; i <= ROW_SIZE; i++) {
		for (int j = 1; j <= COL_SIZE; j++) {
			cout << i << " * " << j << " = " << iTable[i - 1][j - 1] << "\t";
		}
		cout << endl;
	}
}

int multiplicationArrays(){

	int iTable[ROW_SIZE][COL_SIZE]; // [row][column]

	// seeding multiplication table array
    seedTable(iTable);

	// printing multiplication table array
    printTable(iTable);

}
