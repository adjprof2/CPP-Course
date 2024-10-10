#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

// demonstrate the use of reference parameters different from the call by value without &
// void getData(int pA, int pB); // call by value
void getData(int& pA, int& pB);	// call by reference
void swap(int& pA, int& pB);	// call by reference

//void defaultValues(int a, int b=20);
void defaultValues(int a, int b = 20, int c = 30) {
	cout << "a = " << a << " b = " << b << " c = " << c << endl;
}

int main() {
	int a, b;
	getData(a, b);
	// print out the value of a and b
	cout << "main scope of a = " << a << " b = " << b << endl;
	swap(a, b);
	cout << "After swap, a = " << a << " b = " << b << endl;
	defaultValues(a, 30);
	return 0;

}

void getData(int& pA, int& pB){
	cout << "Enter value for a: ";
	cin >> pA;
	cout << "Enter value for b: ";
	cin >> pB;
	cout << "a = " << pA << " b = " << pB << endl;
}

void swap(int& pA, int& pB){
	int temp=0;
	temp = pA;
	pA = pB;
	pB = temp;
}
