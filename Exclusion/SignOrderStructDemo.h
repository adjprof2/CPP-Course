#include <iostream>

using namespace std;

const double MINIMUM_CHARGE = 30;
const double OAK_CHARGE = 15;
const int FREE_LETTERS = 6;
const double LETTER_CHARGE = 3;
const double GOLD_LEAF_CHARGE = 12;

const int MAX_SIGN_ENTRIES_PER_ORDER = 3;

// definition of a struct for sign order contains the wood type, letters, and letter color
struct SignOrderEntry {
	string signWoodType;
	string signLetters;
	string signColor;
};

// function for calculating the pricing of each sign order
/*
start
	minimumCharge=30
	totalCharge=minimumCharge
	input signMaterial
	if signMaterial="oak" then
		totalCharge=totalCharge+15
	endif
	input signLetterLength
	if signLetterLength>6 then
		totalCharge=totalCharge+(signLetterLength-6)*3
	endif
	input signLetterColor
	if signLetterColor="gold-leaf" then
		totalCharge=totalCharge+12
	endif
	return totalCharge
end
 */
double calcSignOrderPricing(string signWoodType, string signLetters, string signColor){

	double totalCharge = MINIMUM_CHARGE;

	if (signWoodType == "oak") {
		totalCharge += OAK_CHARGE;
	}

	if (signLetters.length() > FREE_LETTERS) {
		totalCharge += (signLetters.length() - FREE_LETTERS) * LETTER_CHARGE;
	}

	if (signColor == "old-leaf") {
		totalCharge += GOLD_LEAF_CHARGE;
	}

	return totalCharge;
}

// print the order details
void printOrderEntry(SignOrderEntry signOrderEntries[MAX_SIGN_ENTRIES_PER_ORDER],
		double entryCharge[]) {
	double totalCharge = 0;
	for (int i = 0; i < MAX_SIGN_ENTRIES_PER_ORDER; i++) {
		cout << "Wood type: " << signOrderEntries[i].signWoodType << "\t";
		cout << "Number of letters: " << signOrderEntries[i].signLetters << "\t";
		cout << "Letter color: " << signOrderEntries[i].signColor << "\t";
		cout << "Charge for the order: $" << entryCharge[i] << endl;
		totalCharge += entryCharge[i];
	}
	cout << "Total charge for all sign orders: $" << totalCharge << endl;
}

int main(){

	// refactor the code to allow multiple sign orders storing in arrays
	// [MAX_SIGN_ENTRIES_PER_ORDER][0] - wood type
	// [MAX_SIGN_ENTRIES_PER_ORDER][1] - letters
	// [MAX_SIGN_ENTRIES_PER_ORDER][2] - letter color
	// TODO: refactor the code to store the multiple sign orders where each sign order has multiple entries where each entry has 3 fields, wood type, letters, and letter color
	//string signOrderEntries[MAX_SIGN_ENTRIES_PER_ORDER][3];
	SignOrderEntry signOrderEntries[MAX_SIGN_ENTRIES_PER_ORDER];

    double entryCharge[MAX_SIGN_ENTRIES_PER_ORDER];
	double totalCharge;
	string response;
	int indexEntry = 0;

	// allow user to enter the sign order details with multiple ordrs
	while (response != "no") {

		cout << "Enter the type of wood for the sign: ";
		cin >> signOrderEntries[indexEntry].signWoodType;
		cout << "Enter the of letters on the sign (avoid white space): ";
		cin >> signOrderEntries[indexEntry].signLetters;
		//getline(cin, signLetters);
		cout << "Enter the color of the letters on the sign: ";
		cin >> signOrderEntries[indexEntry].signColor;

		entryCharge[indexEntry] = calcSignOrderPricing(signOrderEntries[indexEntry].signWoodType, signOrderEntries[indexEntry].signLetters, signOrderEntries[indexEntry].signColor);
		totalCharge += entryCharge[indexEntry];

		cout << "Entry charge for the sign order: $" << entryCharge[indexEntry] << endl;
		indexEntry++;
		if (indexEntry >= MAX_SIGN_ENTRIES_PER_ORDER) {
			cout << "You have reached the maximum number of sign orders per order. \n";
			break;
		}
		cout << "Do you want to enter another sign order? (yes/no): ";
		cin >> response;
	}

	cout << "Thanks for your order; here is a summary of your sign orders: \n";
	printOrderEntry(signOrderEntries, entryCharge);

	return 0;
}
