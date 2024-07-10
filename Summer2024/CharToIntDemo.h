#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// define the function to convert the char to integer
// call by value
int charToInt(char c);


int main(){

	int total=0;
	string strNumber;
	cout << "Enter a base 10 number in string: ";
	cin >> strNumber;
	for (unsigned int i = 0; i < strNumber.length(); i++) {
		cout << strNumber[i] << ", ascii value is " << (int) strNumber[i] << ", int value is " << charToInt(strNumber[i]) << endl;
		total = total + charToInt(strNumber[i]);
	}
	cout << "Total is: " << total << endl;
}

int charToInt(char c) {
	return c - 48;
}
