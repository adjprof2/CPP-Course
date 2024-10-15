#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <cstring>

using namespace std;

const int SIZE = 5;

int main() {

	//int a[] = {1, 2, 3, 4, 5};
	double a[SIZE];
	int b[SIZE];
	a[0] = 1.1;
	a[1] = 2.2;
	a[2] = 3.3;
	a[3] = 4.4;
	a[4] = 5.5;

    // the number of elements in the array needs to be known by the programmer
	// loop through the array
	for (int i = 0; i < SIZE; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	// copy array a to array b
	for (int i = 0; i < SIZE; i++) {
		b[i] = a[i];
	}

	//print array b
	for (int i = 0; i < SIZE; i++) {
		cout << b[i] << " ";
	}

	return 0;

}

