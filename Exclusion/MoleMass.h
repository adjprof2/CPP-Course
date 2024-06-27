#include <iostream>

using namespace std;

int calcMoleMass(){
	// write a program to calculate mole unit of a substance
	// mole = mass / molar mass
	// molar mass of water = 18.01528 g/mol
	// molar mass of carbon dioxide = 44.0095 g/mol
	// molar mass of glucose = 180.156 g/mol
	// molar mass of methane = 16.0425 g/mol
    // molar mass of sulfuric acid = 98.079 g/mol
	    // molar mass of sodium chloride = 58.443 g/mol
	// molar mass of ammonia = 17.031 g/mol

	// declare variables
	float mass, mole;
	int choice;	// to store user choice
	// display menu
	cout << "1. Water\n";
	cout << "2. Carbon Dioxide\n";
	cout << "3. Glucose\n";
	cout << "4. Methane\n";
	cout << "5. Sulfuric Acid\n";
	cout << "6. Sodium Chloride\n";
	cout << "7. Ammonia\n";
	while (true) {
		cout << "Enter your choice: ";
		cin >> choice;
		if (choice > 1 && choice < 7) {
			break;
		}

		// get mass from user
		cout << "Enter mass of substance in grams: ";
		cin >> mass;
		// calculate mole
		switch (choice) {
		case 1:
			mole = mass / 18.01528;
			break;
		case 2:
			mole = mass / 44.0095;
			break;
		case 3:
			mole = mass / 180.156;
			break;
		case 4:
			mole = mass / 16.0425;
			break;
		case 5:
			mole = mass / 98.079;
			break;
		case 6:
			mole = mass / 58.443;
			break;
		case 7:
			mole = mass / 17.031;
			break;
		default:
			cout << "Invalid choice\n";
			return 1;
		}
		// display mole
		cout << "Number of moles: " << mole << endl;
	}
	return 0;
}
