#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int ROW_SIZE = 9;
const int COL_SIZE = 9;
const int DEPTH_SIZE = 5;

void intArray(int pArray[]);
void printArray(int pArray[]);

void initArray(int pArray[][COL_SIZE]);
void printArray(int pArray[][COL_SIZE]);

void initArray(int pArray[][ROW_SIZE][COL_SIZE]);
void printArray(int pArray[][ROW_SIZE][COL_SIZE]);

int main() {

  // seed the random number generator
  srand(time(0));
/*
  int singleArray[COL_SIZE];

  intArray(singleArray);
  printArray(singleArray);

  int twoDArray[ROW_SIZE][COL_SIZE];

  // initialize the twoDArray with the multiplication table
  for(int i=0; i<ROW_SIZE; i++) {
    for(int j=0; j<COL_SIZE; j++)
      twoDArray[i][j] = (i+1)*(j+1);
  }

  printArray(twoDArray);
*/

/*
  int twoDArray[ROW_SIZE][COL_SIZE];

  initArray(twoDArray);
  printArray(twoDArray);
*/


  cout << "=============" << endl;

  int threeDArray[DEPTH_SIZE][ROW_SIZE][COL_SIZE];

  initArray(threeDArray);
  printArray(threeDArray);

}

void intArray(int pArray[]){
	for (int i = 0; i < COL_SIZE; i++)
		pArray[i] = rand() % 100 + 1;
}

void printArray(int pArray[]){
	for (int i = 0; i < COL_SIZE; i++)
		cout << pArray[i] << "\t";
	cout << endl;
}

void initArray(int pArray[][ROW_SIZE][COL_SIZE]){
  int count = 1;
  for(int i=0; i<DEPTH_SIZE; i++)
    for(int j=0; j<ROW_SIZE; j++)
      for(int k=0; k<COL_SIZE; k++)
        pArray[i][j][k] = count++;
}

void printArray(int pArray[][ROW_SIZE][COL_SIZE]){
  for(int i=0; i<DEPTH_SIZE; i++) {
    for(int j=0; j<ROW_SIZE; j++){
      for(int k=0; k<COL_SIZE; k++)
        cout << pArray[i][j][k] << "\t";
      cout << endl;
    }
    cout << "-------------------" << endl;
  }
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
