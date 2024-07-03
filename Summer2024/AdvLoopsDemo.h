#include <iostream>

using namespace std;

int main(){

	double gallon=0;
	int miles=0;
	double mpg=0;

	while(true){
		cout << "Enter the number of gallons used: ";
		cin >> gallon;
		if (gallon == 0) {
			cout << "Invalid input. Please enter a number greater than 0."
					<< endl;
			continue;
		}
		cout << "Enter the number of miles driven: ";
		cin >> miles;
		mpg = miles / gallon;
		cout << "Miles per gallon: " << mpg << endl;
		cout << "Do you want to calculate another MPG? (y/n): ";
		char response;
		cin >> response;
		if (response == 'n') {
			break;
		}
	}
}
