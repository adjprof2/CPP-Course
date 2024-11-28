#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

// call by reference
void callMe(int& phoneNumber);
// call by value
void callMe(int phoneNumber);
// call by reference, using pointer
void callMe(int *phoneNumber);

int shortlived();
int* longlived();

int main() {

	// pointer assignment example as illustrated in the lecture slide, 10-1 diagram
    int x = 8;
    int x2 = 9;
    cout << "The address of x: " << &x << endl;
    cout << "The address of x2: " << &x2 << endl;

	int *p1, *p2;
	p1 = &x;	// p1 points to x
	cout << "The value of p1: " << *p1 << endl;
	cout << "The address of p1 (aka x): " << p1 << endl;
	p2 = &x2;	// p2 points to x2
	cout << "The value of p2: " << *p2 << endl;
	cout << "The address of p2 (aka x2): " << p2 << endl;

	// assignment p1 to p2
	/*
	p2 = p1;
	cout << "The value of p2 after pointer assignment: " << *p2 << endl;
	cout << "The address of p2 (aka x1): " << p2 << endl;
	*/

	*p2=*p1;

	cout << "The value of p2 after dereferenced pointer assignment: " << *p2 << endl;
	cout << "The address of p2 (aka x2): " << p2 << endl;

}

int* longlived(){
    int *p = new int(10);
    cout << "Address of p: " << p << endl;
    return p;
}

int shortlived(){
    int local =10;
    cout << "Address of local: " << &local << endl;
    return local;
}

void callMe(int& phoneNumber){
  cout << "Call me at, " << phoneNumber << endl;
}

void callMe(int phoneNumber){
  cout << "Call me at, " << phoneNumber << endl;
}

void callMe(int *phoneNumber){
  cout << "Call me at, " << *phoneNumber << endl;
  *phoneNumber = 11;
}
