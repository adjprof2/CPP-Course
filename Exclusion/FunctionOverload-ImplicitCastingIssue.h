#include <iostream>
#include <string>

using namespace std;

// function prototype, considered as overloading
int add(int a, int b);
double add(double a, double b);
/*
double add(int a, double b);
int add(double a, int b);
*/

int main(){

	int a = 10.10;
	double b = 20;
	cout << "result of a+b, " << add(a, b) << endl;

	return true;
}

int add(int a, int b){
	cout << "int add(int a, int b)" << endl;
	return a + b;
}

double add(double a, double b){
	cout << "double add(double a, double b)" << endl;
	return a + b;
}

/*
double add(int a, double b){
	cout << "double add(int a, double b)" << endl;
	return a + b;
}

int add(double a, int b){
	cout << "int add(double a, int b)" << endl;
	return a + b;
}*/


