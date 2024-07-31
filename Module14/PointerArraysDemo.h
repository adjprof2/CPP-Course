#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

const int SIZE = 9;

void initArray(int **pList);
void passMe(int **pList);
void passMe(int *pList);

int main() {

  int **list = new int*[SIZE];
  for(int i=0; i<SIZE; i++)
    list[i] = new int[SIZE];

  initArray(list);
  passMe(list);
  cout << endl;
  passMe(*list);		// this will show *list[0]
  passMe(*(list+1));	// this will show *list[1]
  passMe(list[2]);		// this will show *list[2]
  //passMe(*(list+(SIZE+3)*2));
}

void initArray(int **pList){
  for(int i=0; i<SIZE; i++){
    for(int j=0; j<SIZE; j++)
      pList[i][j] = (i+1)*(j+1);
  }
}

void passMe(int **pList){
  cout << "passMe(int **pList)" << endl;
  for(int i=0; i<SIZE; i++){
	cout << "address of pList[" << i << "] = " << pList[i] << endl;
    for(int j=0; j<SIZE; j++)
      cout << pList[i][j] << " ";
    cout << endl;
  }
}

void passMe(int *pList){
  cout << "passMe(int *pList)" << endl;
  for(int j=0; j<SIZE; j++)
    cout << pList[j] << " ";
  cout << endl;
}
