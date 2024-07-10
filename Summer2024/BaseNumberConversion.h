#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// define the function to convert the char to integer
// call by value
int charToInt(char c);
// this is also call by value
int baseNumberConversion(string strNumber, int base);

// global variable declared as constant means it is read only
const double PI = 3.14159;

int main(){

	int intNumber=0;		// local variable in the main function
	string strNumber;		// local variable in the main function
	int base=10;			// local variable in the main function
	// ask the user to enter a base 10 number in string
	cout << "Enter base number (either 2 or 10): ";
	cin >> base;
	cout << "Enter a base " << base << " number in string: ";
	cin >> strNumber;

	intNumber = baseNumberConversion(strNumber, base);

	cout << "intNumber is: " << intNumber << endl;
}

int charToInt(char c) {
	return c - 48;
}

// input parameters will have a copy of value passed to the function
// input parameters shall considered as local variable in the function
// decNumber is a local variable in the function
// upon return, the local variable is returned as copy where original memory locatin will be released.
int baseNumberConversion(string strNumber, int base){
	cout << "baseNumberConversion is called accessing PI, " << PI << endl;
	int decNumber=0;
	for (int i = strNumber.length()-1; i >=0 ; i--) {
		cout << strNumber[i] << ", ascii value is " << (int) strNumber[i] << ", int value is " << charToInt(strNumber[i]) << endl;
		decNumber += charToInt(strNumber[i])*pow(base, strNumber.length()-1-i);
	}
	return decNumber;
}
