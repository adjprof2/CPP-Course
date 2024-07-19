#include <iostream>

using namespace std;

const int COL_SIZE = 12;
const int ROW_SIZE = 12;
const int DEPTH_SIZE = 5;

void printArray(int arr[], int size);
void printArray(int arr[ROW_SIZE][COL_SIZE]);
void printArray(int arr[DEPTH_SIZE][ROW_SIZE][COL_SIZE]);
void init2DArray(int arr[ROW_SIZE][COL_SIZE], int row, int col);
void init3DArray(int arr[DEPTH_SIZE][ROW_SIZE][COL_SIZE], int row, int col, int depth);

int main(){

	/*
	int arr[COL_SIZE] = {1,2,3,4,5};
	printArray(arr, COL_SIZE);
	cout << endl << endl;

	int arr2d[ROW_SIZE][COL_SIZE];
	init2DArray(arr2d, ROW_SIZE, COL_SIZE);
	printArray(arr2d);
	*/
	int arr3d[DEPTH_SIZE][ROW_SIZE][COL_SIZE];
	init3DArray(arr3d, ROW_SIZE, COL_SIZE, DEPTH_SIZE);
	printArray(arr3d);

}

void printArray(int arr[], int size) {
	cout << "Printing one dimensional array" << endl;
	for (int i = 0; i < size; i++) {
		cout << arr[i] << "\t";
	}
}

void printArray(int arr[ROW_SIZE][COL_SIZE]){
	cout << "Printing two dimensional array" << endl;
	for (int i = 0; i < ROW_SIZE; i++) {
		printArray(arr[i], COL_SIZE);
		cout << endl;
	}
}

void printArray(int arr[DEPTH_SIZE][ROW_SIZE][COL_SIZE]){
	for (int i = 0; i < DEPTH_SIZE; i++) {
		cout << "Printing 3D array at depth " << i << endl;
		printArray(arr[i]);
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

void init3DArray(int arr[DEPTH_SIZE][ROW_SIZE][COL_SIZE], int row, int col, int depth){
	for (int i = 0; i < depth; i++) {
		init2DArray(arr[i], row, col);
	}
}
