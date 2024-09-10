#include <iostream>
#include <string>

using namespace std;

// global constant variable
const double PI = 3.14159;

/*
 * Reference:
 * https://www.asciitable.com/
 * https://cplusplus.com/reference/string/string/
 */

int main() {

//	cout << 1 / (2 / 3.0) / 4 << endl;

	int aValue=65;
	cout << (char) aValue << ", has Dec value, " << aValue << endl;
	aValue=aValue+32;
	cout << (char) aValue << ", has Dec value, " << aValue << endl;

	bool isTrue = true;
	cout << isTrue << endl;
	cout << !isTrue << endl;
	int iTrue = true;
	cout << iTrue << endl;
	if (!iTrue) {
		cout << "iTrue is true" << endl;
	} else
		cout << "iTrue is false" << endl;

	int iValue=10;
	cout << iValue++ << ",\t" << iValue << endl;
	cout << iValue-- << ",\t" << iValue << endl;
	cout << ++iValue << ",\t" << iValue << endl;
	cout << --iValue << ",\t" << iValue << endl;

	string sMessage = "Hello World!";
	cout << "Type in a name: ";
	cin >> sMessage;
	cout << "Hello " << sMessage << endl;
	cout << sMessage.length() << endl;
    cout << sMessage[0] << endl;
    cout << sMessage[sMessage.length()-1] << endl;


	// local variable within the main function
    int millivolts;
    cout << "Enter the voltage in millivolts: ";
    cin >> millivolts;

    double volts = millivolts / static_cast<double>(1000);
    cout << "The entered millivolts \"" << millivolts << "\" voltage \\ in volts is: " << volts << "\n";


    return 0;
}
