#include <iostream>
#include <cstdlib>

using namespace std;

const int ROW_SIZE = 9;
const int COL_SIZE = 9;
const int DEPTH_SIZE = 5;

void printArray(int pArray[COL_SIZE]){
	for(int i=0; i<COL_SIZE; i++)
		cout << pArray[i] << "\t";
}

void initArray(int pArray[][COL_SIZE]){
  for(int i=0; i<ROW_SIZE; i++)
    for(int j=0; j<COL_SIZE; j++)
      pArray[i][j] = rand()%100+1;
}

void printArray(int pArray[][COL_SIZE]){
  for(int i=0; i<ROW_SIZE; i++) {
    for(int j=0; j<COL_SIZE; j++)
      cout << pArray[i][j] << "\t";
    cout << endl;
  }
}

void printArray2(int pArray[][COL_SIZE]){
  for(int i=0; i<ROW_SIZE; i++) {
	  cout << "ROW index: " << i << "\t";
	  printArray(pArray[i]);
	  cout << endl;
  }
}


void initArray(int pArray[DEPTH_SIZE][ROW_SIZE][COL_SIZE]){
    int count = 1;
    for(int i=0; i<DEPTH_SIZE; i++)
        for(int j=0; j<ROW_SIZE; j++)
        	for(int k=0; k<COL_SIZE; k++)
        		pArray[i][j][k] = count++;
}

void printArray(int pArray[DEPTH_SIZE][ROW_SIZE][COL_SIZE]){
	for (int i = 0; i < DEPTH_SIZE; i++) {
		cout << "Depth " << i << endl;
		for (int j = 0; j < ROW_SIZE; j++) {
			for (int k = 0; k < COL_SIZE; k++)
				cout << pArray[i][j][k] << "\t";
			cout << endl;
		}
	}
}

int multiDimensionDemo() {

/*
  int twoDArray[ROW_SIZE][COL_SIZE];

  initArray(twoDArray);
  printArray(twoDArray);
*/

  cout << "=============" << endl;

  int threeDArray[DEPTH_SIZE][ROW_SIZE][COL_SIZE];

  initArray(threeDArray);
  //printArray(threeDArray);

  for (int i = 0; i < DEPTH_SIZE; i++) {
	cout << "Depth: " << i << endl;
	printArray2(threeDArray[i]);
	cout << "=============" << endl;
  }

}


