#include <iostream>
#include <cstdlib>

using namespace std;

/*
string numberA = "12";
string numberB = "56";
m=2

Assert result with 12+56=68

numberA[0]='1'
numberA[1]='2'
numberB[0]='5'
numberB[1]='6'

// Per addition algorithm, perform add operation from left to right digit by digit
carry	i	i<=m-1	sum=(A[i]-'0')		cResult=to_S(sum)+cResult
			+(B[i]-'0')+carry;
0	0	0<=1,T	sum=1+5+0=6		cResult="6"+""="6"
0	1	1<=1,T	sum=2+6+0=8		cResult="8"+"6"="86"
0	2	2<=1, F
return "86"  ----> Wrong result

// perform add operation from right to left digit by digit
carry	i	i>=0	sum=(A[i]-'0')		cResult=to_S(sum)+cResult
			+(B[i]-'0')+carry;
0	1	1>=0,T	sum=2+6+0=8		cResult="8"+""="8"
0	0	0>=0,T	sum=1+5+0=6		cResult="6"+8"="68"
return "68   -----> Correct Result


string numberA = "12";
string numberB = "96";
m=2

Assert result with 12+96=108

 */


string addFunction(string numberA, string numberB, int m);

// convert to main function
int demoAdd(){
	int m = 2;
	string numberA;
	string numberB;

	cout << "Enter numberA: ";
	cin >> numberA;
	cout << "Enter numberB: ";
	cin >> numberB;
	cout << "Enter m: ";
	cin >> m;

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
