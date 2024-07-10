#include <iostream>

using namespace std;

// function prototypes
// we declared multiple add function with different function signature to overload the add function
//int add(int a, int b);
double add(int a, double b);
double add(double a, int b);
//double add(double a, double b);
void print(string message);

int main(){


	int a = 1;
	double b = 2;
	cout << "add result: " << add(a, b) << endl;

	// nested scope within the main function
	{
		a = 3;
		b = 4;
		int c = 5;
		cout << "add result: " << add(a, b) << endl;
	}

	c=10;
	cout << "add result: " << add(a, b) << endl;

	// nested scope within the main function
	{
		double a = 5;
		int b = 6;
		cout << "add result: " << add(a, b) << endl;
	}
}

void print(string message){
	cout << message << endl;
}
/*
int add(int a, int b) {
	cout << "int add(int a, int b)" << endl;
	return a + b;
}*/

double add(int a, double b){
	cout << "double add(int a, double b)" << endl;
	return a + b;
}

double add(double a, int b) {
	cout << "double add(double a, int b)" << endl;
	return a + b;
}
/*
double add(double a, double b){
	cout << "double add(double a, double b)" << endl;
	return a + b;
}*/
