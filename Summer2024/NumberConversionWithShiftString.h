#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void printString(string strMsg);
void shiftString(string& strMsg);

// define the function to convert the char to integer
// call by value
int charToInt(char c);
// this is also call by value
int baseNumberConversion(string strNumber, int base);

int main(){

	int intNumber=0;		// local variable in the main function
	string strNumber;		// local variable in the main function
	int base=10;			// local variable in the main function
	// ask the user to enter a base 10 number in string
	cout << "Enter base number (either 2 or 10): ";
	cin >> base;
	cout << "Enter a base " << base << " number in string: ";
	cin >> strNumber;

	printString(strNumber);
	strNumber.resize(strNumber.length()+1);
	shiftString(strNumber);
	printString(strNumber);

	intNumber = baseNumberConversion(strNumber, base);

	cout << "intNumber is: " << intNumber << endl;
}

void printString(string strMsg){
  cout << "printString ........ " << endl;
  for(int i=0; i<strMsg.length(); i++){
    cout << strMsg[i] << endl;
  }
}

void shiftString(string& strMsg){

  for(int i=strMsg.length()-1; i>0; i--){
    strMsg[i]=strMsg[i-1];
  }
  strMsg[0]='0';

}

int charToInt(char c) {
	return c - 48;
}

// input parameters will have a copy of value passed to the function
// input parameters shall considered as local variable in the function
// decNumber is a local variable in the function
// upon return, the local variable is returned as copy where original memory locatin will be released.
int baseNumberConversion(string strNumber, int base){
	int decNumber=0;
	for (int i = strNumber.length()-1; i >=0 ; i--) {
		cout << strNumber[i] << ", ascii value is " << (int) strNumber[i] << ", int value is " << charToInt(strNumber[i]) << endl;
		decNumber += charToInt(strNumber[i])*pow(base, strNumber.length()-1-i);
	}
	return decNumber;
}
