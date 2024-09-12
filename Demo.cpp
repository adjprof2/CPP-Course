#include <iostream>

using namespace std;
/*
 * step1: get user input for startingMiles, endingMiles, gallons
 * step2: calculate distanceDriven = endingMiles - startingMiles
 * step3: calculate mpg = distanceDriven / gallons
 * step4: output mpg
 */
int main(){
	// mpg calculation
	double startingMiles, endingMiles, gallons, mpg;

	cout << "Enter starting mileage: ";
	cin >> startingMiles;
	cout << "Enter ending mileage: ";
	cin >> endingMiles;
	cout << "Enter gallons: ";
	cin >> gallons;

	double distanceDriven = endingMiles - startingMiles;
	mpg = distanceDriven / gallons;

	cout << "Miles per gallon: " << mpg << endl;

}
