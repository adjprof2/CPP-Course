#include <iostream>
#include <cstdlib>

using namespace std;

string addFunction(string numberA, string numberB, int m);

int demoAddFunction(){
	string numberA = "12";
	string numberB = "96";
	int m = 2;
	string strResult = addFunction(numberA, numberB, m);
	cout << "Result: " << strResult << endl;
	return 0;
}

// add function for adding two decimal numbers represented as strings
string addFunction(string numberA, string numberB, int m){
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
		if (sum >= 10) {
			carry = 1;
			sum -= 10;
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

	// perform add operation from right to left digit by digit
	/*
	int carry = 0;
	int i = m-1;
	while (i >= 0) {
		int sum = (numberA[i] - '0') + (numberB[i] - '0') + carry;
		if (sum >= 10) {
			carry = 1;
			sum -= 10;
		} else {
			carry = 0;
		}
		cResult = to_string(sum) + cResult;
		cout << "Intermediate result: " << cResult << endl;
		i--;
	}*/

	// Per addition algorithm, perform add operation from left to right digit by digit
	/*
	int carry = 0;
	int i = 0;
	while (i <= m-1) {
		int sum = (numberA[i] - '0') + (numberB[i] - '0') + carry;
		if (sum >= 10) {
			carry = 1;
			sum -= 10;
		} else {
			carry = 0;
		}
		cResult = to_string(sum) + cResult;
		cout << "Intermediate result: " << cResult << endl;
		i++;
	}*/

	return cResult;
}
