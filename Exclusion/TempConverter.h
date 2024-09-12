#include <iostream>
#include <string>

using namespace std;

/*
 * 1a
 * step1 : get user input on fahrenheit
 * step2 : convert fahrenheit to celsius apply the formula (fahrenheit - 32) * 5/9
 * step3 : output the celsius temperature
 *
 */
/*
 * 1b
 * step1 : get user input on celcius
 * step2 : convert celcius to fahrenheit apply the formula (celsius * 9/5) + 32
 * step3 : output the fahrenheit temperature
 *
 */

int main() {

	double fahrenheit;
	double celsius;
	cout << "Please enter temperature in Fahrenheit: ";
	cin >> fahrenheit;

	celsius = (fahrenheit - 32) * 5/9;

	cout << "Temperature in Celsius: " << celsius << endl;

	fahrenheit = celsius * 9/5 + 32;

	cout << "Temperature in Fahrenheit: " << fahrenheit << endl;

    return 0;
}
