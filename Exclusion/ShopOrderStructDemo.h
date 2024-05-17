#include <iostream>

using namespace std;

const double MINIMUM_CHARGE = 30;
const double OAK_CHARGE = 15;
const int FREE_LETTERS = 6;
const double LETTER_CHARGE = 3;
const double GOLD_LEAF_CHARGE = 12;

const int MAX_ORDERS = 100;
const int MAX_SIGN_ENTRIES_PER_ORDER = 5;

// definition of a struct for sign order contains the wood type, letters, and letter color
struct SignOrderEntry {
	string signWoodType;
	string signLetters;
	string signColor;
};

struct Order {
	string orderNumber;
	string customerName;
	SignOrderEntry signOrderEntries[MAX_SIGN_ENTRIES_PER_ORDER];
	double entryCharge[MAX_SIGN_ENTRIES_PER_ORDER];
	int filledEntryCount;
};

struct Shop{
	string shopName;
	Order orders[MAX_ORDERS];
	int filledOrderCount;
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
		double entryCharge[], int filledEntryCount) {
	double totalCharge = 0;
	cout << "Entries count: " << filledEntryCount << endl;
	for (int i = 0; i < filledEntryCount; i++) {
		cout << "Wood type: " << signOrderEntries[i].signWoodType << "\t";
		cout << "letters: " << signOrderEntries[i].signLetters << "\t";
		cout << "Letter color: " << signOrderEntries[i].signColor << "\t";
		cout << "Charge for the order: $" << entryCharge[i] << endl;
		totalCharge += entryCharge[i];
	}
	cout << "Total charge for all sign orders: $" << totalCharge << endl;
}

void getEntryData(SignOrderEntry& entry){
	cout << "Enter the type of wood for the sign: ";
	cin >> entry.signWoodType;
	cout << "Enter the of letters on the sign (avoid white space): ";
	cin >> entry.signLetters;
	//getline(cin, signLetters);
	cout << "Enter the color of the letters on the sign: ";
	cin >> entry.signColor;
}

void getEntryData(SignOrderEntry signOrderEntries[MAX_SIGN_ENTRIES_PER_ORDER],
		double entryCharge[], int indexEntry) {

	getEntryData(signOrderEntries[indexEntry]);

	entryCharge[indexEntry] = calcSignOrderPricing(signOrderEntries[indexEntry].signWoodType, signOrderEntries[indexEntry].signLetters, signOrderEntries[indexEntry].signColor);

	cout << "Entry charge for the sign order: $" << entryCharge[indexEntry] << endl;

}


void printShopOrders(Shop myShop) {
	cout << "Shop name: " << myShop.shopName << endl;
	cout << "Number of orders: " << myShop.filledOrderCount << endl;
	for (int i = 0; i < myShop.filledOrderCount; i++) {
		cout << "Order number: " << myShop.orders[i].orderNumber << endl;
		cout << "Customer name: " << myShop.orders[i].customerName << endl;
		printOrderEntry(myShop.orders[i].signOrderEntries,
				myShop.orders[i].entryCharge,
				myShop.orders[i].filledEntryCount);
	}
}

int main(){

	// refactor the code to allow multiple sign orders storing in arrays
	// [MAX_SIGN_ENTRIES_PER_ORDER][0] - wood type
	// [MAX_SIGN_ENTRIES_PER_ORDER][1] - letters
	// [MAX_SIGN_ENTRIES_PER_ORDER][2] - letter color
	// TODO: refactor the code to store the multiple sign orders where each sign order has multiple entries where each entry has 3 fields, wood type, letters, and letter color
	//string signOrderEntries[MAX_SIGN_ENTRIES_PER_ORDER][3];
	SignOrderEntry signOrderEntries[MAX_SIGN_ENTRIES_PER_ORDER];
	// Option 1: using 2D array with SingleOrderEntry struct
	//string orders[MAX_ORDERS][MAX_SIGN_ENTRIES_PER_ORDER][3];
	//SignOrderEntry allOrderEntries[MAX_ORDERS][MAX_SIGN_ENTRIES_PER_ORDER];
	// Option 2: using 1D array with SingleOrder struct that contains multiple entries
	// Order orders[MAX_ORDERS];
	Shop myShop;

	string response;
	int indexOrder = 0;

	cout << "Enter the name of the shop: ";
	cin >> myShop.shopName;

	// allow user to enter the sign order details with multiple ordrs
	while (response != "no") {

		cout << "Enter the name of the customer: ";
		cin >> myShop.orders[indexOrder].customerName;
        cout << "Enter the order number: ";
        cin >> myShop.orders[indexOrder].orderNumber;

		//int indexEntry = 0;
		// cout << "You have two entries per order. \n";
		for (int i = 0; i < MAX_SIGN_ENTRIES_PER_ORDER; i++) {
			string entryResponse;
			getEntryData(myShop.orders[indexOrder].signOrderEntries, myShop.orders[indexOrder].entryCharge, i);
			cout << "Do you want to enter another entry? (yes/no): ";
			cin >> entryResponse;
			if (entryResponse == "no") {
				myShop.orders[indexOrder].filledEntryCount = i + 1;
				break;
			}
		}
		indexOrder++;
		if (indexOrder >= MAX_ORDERS) {
			cout << "You have reached the maximum number of sign orders. \n";
			break;
		}

		cout << "Do you want to enter another sign order? (yes/no): ";
		cin >> response;
	}
	myShop.filledOrderCount = indexOrder;

	printShopOrders(myShop);

	return 0;
}
