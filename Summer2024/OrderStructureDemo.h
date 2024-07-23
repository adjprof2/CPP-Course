#include <iostream>
#include <string>

using namespace std;

const int ORDER_INFO = 5;
const int MAXENTRY = 5;
const int MAXORDER = 100;

struct Order {
	string orderNumber;
	string customerName;
	string woodType;
	string signCharacters;
	string colorOfCharacters;
};

void printOrderInfo(Order orderInfo);

/*
 * order number, customer name, wood type, sign characters (you can derive the number of characters), and color of characters.
 */
int main(){

	Order orderInfo[MAXENTRY];

	int i = 0;
	while (i < MAXENTRY) {
		cout << "Enter order number: ";
		cin >> orderInfo[i].orderNumber;
		cout << "Enter customer name: ";
		cin >> orderInfo[i].customerName;
		cout << "Enter wood type: ";
		cin >> orderInfo[i].woodType;
		cout << "Enter sign characters: ";
		getline(cin, orderInfo[i].signCharacters);
		cout << "Enter color of characters: ";
		cin >> orderInfo[i].colorOfCharacters;

		cout << "Do you want to enter another order? (y/n): ";
		char response;
		cin >> response;
		if (response == 'n') {
			break;
		}

		i++;
	}

	for (int j = 0; j<= i; j++) {
		printOrderInfo(orderInfo[j]);
	}


}

void printOrderInfo(Order orderInfo) {

	cout << "Order number: " << orderInfo.orderNumber << endl;
	cout << "Customer name: " << orderInfo.customerName << endl;
	cout << "Wood type: " << orderInfo.woodType << endl;
	cout << "Sign characters: " << orderInfo.signCharacters << endl;
	cout << "Color of characters: " << orderInfo.colorOfCharacters << endl;

}

