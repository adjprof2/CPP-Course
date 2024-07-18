#include <iostream>

using namespace std;

const int MAX_SIZE = 10;

void printInt(int x);
void printInt(int x[], int nSize);
void printIntReverseOrder(int x[], int nMaxSize, int nSize);
void fillArray(int x[], int nSize, int &nFilledSize);
void fillArrayInReverseOrder(int a[], int size, int&numbUsed);

bool searchArray(int x[], int nFlledSize, int nSearch, int&indexFound);

void swap(int& a, int& b);

void bubbleSort(int x[], int nSize);

int main(){
	int nArray[MAX_SIZE];
	int nFilledSize = 0;
	//fillArrayInReverseOrder(nArray, MAX_SIZE, nFilledSize);
	//cout << "Printing the array in reverse, nFilledSize = " << nFilledSize << endl;
	//printIntReverseOrder(nArray, MAX_SIZE, nFilledSize);
	fillArray(nArray, MAX_SIZE, nFilledSize);
	cout << "Printing the array, nFilledSize = " << nFilledSize << endl;
	printInt(nArray, nFilledSize);
	// search array for a number
	int nSearch, indexFound;
	cout << "Enter a number to search for: ";
	cin >> nSearch;
	if (!searchArray(nArray, nFilledSize, nSearch, indexFound))
		cout << "Number " << nSearch << " not found" << endl;
	else
		nArray[indexFound] += 100;

	printInt(nArray, nFilledSize);

	// sort the array
	bubbleSort(nArray, nFilledSize);
	cout << "Printing the sorted array" << endl;
	printInt(nArray, nFilledSize);

	return 0;
}

void printInt(int x) {
	cout << x << endl;
}

void printInt(int x[], int nSize){
	for (int i = 0; i < nSize; i++) {
		printInt(x[i]);
	}
}

void printIntReverseOrder(int x[], int nMaxSize, int nSize){
	for (int i = nMaxSize - 1; i >= 0 && nSize>0; i--) {
		printInt(x[i]);
		nSize--;
	}
}

// partially filled array where the filled size is passed by reference as nFilledSize
void fillArray(int x[], int nSize, int &nFilledSize) {
	for (int i = 0; i < nSize; i++) {
		cout << "Enter a number (-1 to stop): ";
		cin >> x[i];
		if (x[i] < 0) {
			nFilledSize = i;
			break;
		}
	}
}

void fillArrayInReverseOrder(int a[], int size, int&numbUsed) {
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

bool searchArray(int x[], int nFlledSize, int nSearch, int& indexFound){
	for (int i = 0; i < nFlledSize; i++) {
		if (x[i] == nSearch) {
			cout << "Found " << nSearch << " at index " << i << endl;
			indexFound = i;
		    return true;
		}
	}
	return false;
}

void swap(int& a, int& b){
	int temp = a;
	a = b;
	b = temp;
}

void bubbleSort(int x[], int nSize){
	for (int i = 0; i < nSize; i++) {
		//for (int j = 0; j < nSize - 1; j++) {
		for (int j = 0; j < nSize-i-1; j++) {
			if (x[j] > x[j + 1]) {
				swap(x[j], x[j+1]);
			}
		}
	}
}
