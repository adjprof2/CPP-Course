#include <iostream>
#include <cstdlib>

using namespace std;


// call by value
void swap(int a, int b) {
	//int b = 10;		// this is not allowed because b is already declared as a parameter
	int temp = a;
	{
		int b = 30;		// this is allowed because b is declared within a block
		a = b;
		b = temp;
	}

	cout << "Within Swap: a = " << a << ", b = " << b << endl;
}
/*
// call by reference
void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}*/

// call by reference; passing the adddress of the variable from main function into swap function.
void swapNames(string &a, string &b) {
	string temp = a;
	a = b;
	b = temp;
}

// a really simple add
/*
int add(const int &a, int &b) {
	int c = a + b;
	//a++;
	b--;
	return c;
}*/

// function signature does not include the return type
// function signature is the function name and the parameters
// function signature is used to determine which function to call
// function signature includes the function name and the parameters but not the return type
/*
void add(int a, int b) {
	int c = a + b;
}*/

// overloading the add function with different parameters that has different signatures
/*
int add(int a, int b) {
	cout << "int add(int a, int b)" << endl;
	int c = a + b;
	return c;
}

double add(double a, double b) {
	cout << "double add(double a, double b)" << endl;
	double c = a + b;
	return c;
}*/

double add(int a, double b) {
	cout << "double add(int a, double b)" << endl;
	double c = a + b;
	return c;
}

double add(double a, int b) {
	cout << "double add(double a, int b)" << endl;
	double c = a + b;
	return c;
}

int demoFunction(){

	int x = 10;
	double y = 20;
	int result = add(x, y);
    cout << "x = " << x << ", y = " << y << ", result = " << result << endl;

/*
	string name1 = "John";
	string name2 = "Doe";
	swapNames(name1, name2);
	cout << "after swap: ";
	cout << "name1 = " << name1 << ", name2 = " << name2 << endl;
*/
	return 0;
}

