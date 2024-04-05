#include <iostream>
#include <string>
#include <cmath>


using namespace std;

int binaryToInt(string binary) {
	int decimal = 0;
	for (int i = binary.length() - 1; i >= 0; i--) {
		if (binary[i] == '1') {
			decimal += pow(2, binary.length() - 1 - i);
		}
	}
	return decimal;
}

int decimalToInt(string decimal) {
	int decimalNum1 = 0;
	for (int i = decimal.length() - 1; i >= 0; i--) {
		int realDecNumer = decimal[i] - '0';
		if (realDecNumer >0) {
			decimalNum1 += realDecNumer*pow(10, decimal.length() - 1 - i);
		}
	}
	return decimalNum1;
}


string DecimalAdd(string pDecNum1, string pDecNum2){
	// convert the pDecNum1 and pDecNum2 to integer
	int decNum1 = stoi(pDecNum1);
	int decNum2 = stoi(pDecNum2);

	int result = decNum1 + decNum2;

	// convert the result to string
	return to_string(result);

}

int DecimalAdd(int pDecNum1, int pDecNum2) {

	int result = pDecNum1 + pDecNum2;

	// convert the result to string
	return result;

}


string BinaryAdd(string pBinNum1, string  pBinNum2){

	// convert the pBinNum1 and pBinNum2 to decimal
	int decNum1 = 0;
	int decNum2 = 0;

	int result = decNum1 + decNum2;

	// calling the binary string to decimal function for pBinNum1 and pBinNum2

	// add the two decimal numbers and convert the result to binary string

}

int convertDemo(){

	string decNum1, decNum2;
	int decimalNum1 = 0, decimalNum2 = 0;
	string binNum1, binNum2;
/*
	cout << "Please enter the first decimal number: ";
	cin >> decNum1;

	cout << "Please enter the second decimal number: ";
	cin >> decNum2;

	if (decNum1.length()>0) {
		decimalNum1 = decimalToInt(decNum1);	// invoke the decimalToInt function as transfer of control; passing the decNum1 as argument and receive the return as integer
	}
	if (decNum2.length()>0) {
		decimalNum2 = decimalToInt(decNum2);
	}
	cout << "The sum of the two decimal numbers " << decimalNum1 << ", " << decimalNum2 << " is: "
			<< decimalNum1+decimalNum2 << endl;
*/

	cout << "Please enter the first binary number: ";
	cin >> binNum1;

	cout << "Please enter the second binary number: ";
	cin >> binNum2;

	if (binNum1.length()>0) {
		decimalNum1 = binaryToInt(binNum1);
	}
	if (binNum2.length()>0) {
		decimalNum2 = binaryToInt(binNum2);
	}

	int sum = decimalNum1 + decimalNum2;
	cout << "The sum of the two binary numbers converted as decimal " << decimalNum1 << ", " << decimalNum2 << " is: "
			<< sum << endl;

	// convert the decimal sum to binary string
	// use the divide by 2 method to convert the decimal sum to binary
	string binarySum = "";
	while (sum > 0) {
		//cout << sum % 2;
		//binarySum = ((sum % 2)+'0') + binarySum;
		binarySum.push_back((sum % 2)+'0');
		sum /= 2;
	}
	cout << "The sum of the two binary numbers " << binNum1 << ", " << binNum2
			<< " is: " << binarySum << endl;

	return 0;


}
