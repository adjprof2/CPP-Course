#include <iostream>

using namespace std;

const double MINIMUM_CHARGE = 30;
const double OAK_CHARGE = 15;
const int FREE_LETTERS = 6;
const double LETTER_CHARGE = 3;
const double GOLD_LEAF_CHARGE = 12;

const int MAX_ORDERS = 2;
const int MAX_SIGN_ENTRIES_PER_ORDER = 2;

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
void printOrderEntry(string entries[MAX_SIGN_ENTRIES_PER_ORDER][3], double entryCharge[]) {
	double totalCharge = 0;
	for (int i = 0; i < MAX_SIGN_ENTRIES_PER_ORDER; i++) {
		cout << "Wood type: " << entries[i][0] << "\t";
		cout << "Number of letters: " << entries[i][1] << "\t";
		cout << "Letter color: " << entries[i][2] << "\t";
		cout << "Charge for the order: $" << entryCharge[i] << endl;
		totalCharge += entryCharge[i];
	}
	cout << "Total charge for a sign order: $" << totalCharge << endl;
}

void getEntryData(string entries[MAX_SIGN_ENTRIES_PER_ORDER][3],
		double entryCharge[], int indexEntry) {

	cout << "indexEntry: " << indexEntry << endl;
	cout << "Enter the type of wood for the sign: ";
	cin >> entries[indexEntry][0];
	cout << "Enter the of letters on the sign (avoid white space): ";
	cin >> entries[indexEntry][1];
	//getline(cin, signLetters);
	cout << "Enter the color of the letters on the sign: ";
	cin >> entries[indexEntry][2];

	entryCharge[indexEntry] = calcSignOrderPricing(entries[indexEntry][0], entries[indexEntry][1], entries[indexEntry][2]);

	cout << "Entry charge for the sign order: $" << entryCharge[indexEntry] << endl;

}

int main(){

	// refactor the code to allow multiple sign orders storing in arrays
	// TODO: combine the sign order details into 2 dimensional array and refactor the code
	/*
	string signWoodType[MAX_SIGN_ENTRIES_PER_ORDER];
	string signLetters[MAX_SIGN_ENTRIES_PER_ORDER];
	string signColor[MAX_SIGN_ENTRIES_PER_ORDER];
	*/

	// string entries[MAX_SIGN_ENTRIES_PER_ORDER][3];
	string orders[MAX_ORDERS][MAX_SIGN_ENTRIES_PER_ORDER][3];

    double orderCharge[MAX_ORDERS][MAX_SIGN_ENTRIES_PER_ORDER];

	double totalCharge;
	string response;
	int indexOrder = 0;

	// allow user to enter the sign order details with multiple ordrs
	while (response != "no") {

		//int indexEntry = 0;
		cout << "You have two entries per order. \n";
		for (int i = 0; i < MAX_SIGN_ENTRIES_PER_ORDER; i++) {
			getEntryData(orders[indexOrder], orderCharge[indexOrder], i);
		}

		indexOrder++;
		if (indexOrder >= MAX_ORDERS) {
			cout << "You have reached the maximum number of sign orders. \n";
			break;
		}

		cout << "Do you want to enter another sign order? (yes/no): ";
		cin >> response;
	}

	cout << "Thanks for your order; here is a summary of your sign orders: \n";
	for (int i = 0; i < MAX_ORDERS; i++) {
		printOrderEntry(orders[i], orderCharge[i]);
	}

	return 0;
}
