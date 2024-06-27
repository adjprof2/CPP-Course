#include <iostream>

using namespace std;

int main(){
	cout << "Current Calculator" << endl;

	double current;
	int voltage, resistance;

	cout << "Enter the Voltage: ";
	cin >> voltage;
	cout << "Enter the resistance: ";
	cin >> resistance;

	cout << "The current is: " << (double)voltage / resistance << endl;

	// Ohm's Law, int divied by int will result in int
	current = (double)voltage / resistance;

	cout << "The current (double) is: " << current << endl;

	// left side of the equal needs to be an addressable memory location that can store the value that compatible with the right side of the equal sign
	// int type can accept the value of double but the decimal place will be trimmed (automatic type casting)
	//voltage = current * resistance;

	//cout << "The voltage (int) is: " << voltage << endl;

}
