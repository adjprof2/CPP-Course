#include <iostream>

using namespace std;

const int PI= 3.14159; // a constant integer value;

int main(){

	// the maximum and minimum values of a signed short integer should be 2^15-1 and 2^15
	short int iSignedValue; // a signed short integer
	iSignedValue= 32767;
	cout << "The maximum value of a signed short integer is: \t" << iSignedValue << "\n";
	iSignedValue=-32768;
	cout << "The minimum value of a signed short integer is: " << iSignedValue << endl;

	// the maximum and minimum values of an unsigned short integer should be 2^16-1 and 0
	unsigned short int uiUnsignedValue; // an unsigned short integer
	uiUnsignedValue=65535;
	cout << "The maximum value of an unsigned short integer is: " << uiUnsignedValue << endl;
	uiUnsignedValue=0;
	cout << "The minimum value of an unsigned short integer is: \"" << uiUnsignedValue << "\"\n";

	//PI=3.14; // this will generate an error
	cout << "The value of constant PI is: " << PI << endl;

}
