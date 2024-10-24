#include <iostream>
#include <string>

using namespace std;

const int MAX_SIZE=5;

// by passing the array into the function, it is call by reference
void searchArray(int a[], int numbUsed, int target);
void printArray(int a[], int numbUsed);
void fillArray(int a[], int size, int&numbUsed);

void testSearchArray();

int main() {

  testSearchArray();

  return 0;
}
/*
int main() {

  int nUsed = 0;	// storing how many element being filled in the array
  int myArray[MAX_SIZE];

  fillArray(myArray, MAX_SIZE, nUsed);

  cout << "Number of elements used: " << nUsed << endl;
  printArray(myArray, nUsed);

  cout << endl;

  int target;
  cout << "Enter the target value to search: ";
  cin >> target;

  searchArray(myArray, nUsed, target);
}*/

/* alternative scenario given condition search condition, target%i==3
 MAX=5
list: 15, 1, 6
list[4]=15,
list[3]=1,
list[2]=6,	numbUsed=3
list[1]=?,
list[0]=?,

target = 15
i=4
target==list[i] ==> 15==list[4], 15==15, true
target%i==3 ==> 15%4==3, 3==3, true
true && true
 */
void testSearchArray() {
  int a[] = {1, 2, 3, 4, 5};
  int numbUsed = 5;
  int target = 3;

  // TODO 1: run the program, observe the output, draw the variable table.
  // Test Case 1: Target value found in array
  cout << "Test Case 1: Target value \"not found\" in array" << endl;
  cout << "Searching for target value: " << target << endl;
  searchArray(a, numbUsed, target);
  cout << endl;

  // TODO 2: what could be the values in the a[] and target to produce the output
  // with match given condition search condition, target%i==6

}


void searchArray(int a[], int numbUsed, int target){
  bool bFound = false;
  for(int i=MAX_SIZE-1; !bFound && (numbUsed>0); i--) {
    cout << a[i] << endl;
    numbUsed--;
    cout << "target = " << target << ", i = " << i << ", a[i] = " << a[i] << endl;
    //if(target == a[i]){
    if((target==a[i]) && (target%i==3)){
      bFound=true;
      cout << "Target Value: " << target << " Found!" << endl;
    } else
      cout << "No Match on a[i], " << a[i] << endl;
  }
}

void printArray(int a[], int numbUsed){
  for(int i=MAX_SIZE-1; numbUsed>0; i--) {
    cout << a[i] << endl;
    numbUsed--;
  }
}

void fillArray(int a[], int size, int&numbUsed) {
  cout << "Mark the end of the list with -1"<< endl;
  int next=0, index = MAX_SIZE-1;
  cin >> next;
  while((next>=0) && (index>=0)){
    a[index] = next;
    index--;
    numbUsed++;
    cin >> next;
  }
  // numbUsed = index;
}

