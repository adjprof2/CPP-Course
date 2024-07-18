#include <iostream>

using namespace std;

const int COL_SIZE = 12;
const int ROW_SIZE = 12;

void printArray(int arr[], int size);
void printArray(int arr[ROW_SIZE][COL_SIZE]);
void init2DArray(int arr[ROW_SIZE][COL_SIZE], int row, int col);

int main(){

	int arr[COL_SIZE] = {1,2,3,4,5};
	printArray(arr, COL_SIZE);
	cout << endl << endl;

	int arr2d[ROW_SIZE][COL_SIZE];
	init2DArray(arr2d, ROW_SIZE, COL_SIZE);
	printArray(arr2d);

}

void printArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << "\t";
	}
}

void printArray(int arr[ROW_SIZE][COL_SIZE]){
	for (int i = 0; i < ROW_SIZE; i++) {
		printArray(arr[i], COL_SIZE);
		cout << endl;
	}
}

void init2DArray(int arr[ROW_SIZE][COL_SIZE], int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			arr[i][j] = (i+1) * (j+1);
		}
	}
}
