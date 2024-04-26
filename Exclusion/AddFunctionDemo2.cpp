#include <iostream>
#include <cstdlib>

using namespace std;

string addFunction(string numberA, string numberB, int m, int base);

// convert to main function
int demoAdd2(){
	int m, base;
	string numberA;
	string numberB;

	cout << "Enter base: ";
	cin >> base;
	cout << "Enter m: ";
	cin >> m;
	cout << "Enter numberA: ";
	cin >> numberA;
	cout << "Enter numberB: ";
	cin >> numberB;

	string strResult = addFunction(numberA, numberB, m, base);
	cout << "Result: " << strResult << endl;
	//return 0;
}

// add function for adding two decimal numbers represented as strings
string addFunction(string numberA, string numberB, int m, int base){
	string cResult = "";

	// validate input to ensure numberA and numberB are meeting the m length requirement
	if (numberA.length() != m || numberB.length() != m) {
		cout << "Input numbers are not of length m" << endl;
		return "";
	}
	cResult.resize(m+1);

	// perform add operation from right to left digit by digit without using to_string
	int carry = 0;
	int i = m-1;
	while (i >= 0) {
		int sum = (numberA[i] - '0') + (numberB[i] - '0') + carry;
		if (sum >= base) {
			carry = 1;
			sum -= base;
		} else {
			carry = 0;
		}
		//cResult = (char) (sum + '0') + cResult;
		cResult[i+1] = (char) (sum + '0');
		cout << "Intermediate result: " << cResult << endl;
		i--;
	}
	if (carry == 1) {
		cResult[0] = '1';
	} else {
		cResult[0] = '0';
	}

	return cResult;
}

