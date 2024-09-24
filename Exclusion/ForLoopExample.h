#include <iostream>

using namespace std;

// custom enum class
enum class Color {RED=3, GREEN=6, BLUE=9};
enum class Decision {YES, NO};

const int CHOICE_LOOP = 5;

int main(){

	int bContinue = 1;
	//cout << "Do you want to proceed with choice loop?";
	//cin >> bContinue;

	for(int i=0; i<CHOICE_LOOP && bContinue; i++) {

		int iChoice;
		cout << "Enter your choice: ";
		cin >> iChoice;
		Color eColor = static_cast<Color>(iChoice);

		cout << "eColor = " << static_cast<int>(eColor) << endl;

		if (eColor == Color::RED) {
			cout << "You are breaking out of loop with choice of color: " << static_cast<int>(Color::RED) << endl;
			//break;
			continue;
		}

		switch(eColor) {
		case Color::RED:
			cout << "You entered " << static_cast<int>(Color::RED) << endl;
			break;
		case Color::GREEN:
			cout << "You entered " << static_cast<int>(Color::GREEN) << endl;
			break;
		case Color::BLUE:
			cout << "You entered " << static_cast<int>(Color::BLUE) << endl;
			break;
		default:
			cout << "default output: You entered a wrong choice" << endl;
			break;
		}
		cout << "Do you want to continue? (1/0): ";
		cin >> bContinue;
	}

	cout << "End of the loop" << endl;

	/*
	if (iChoioce == 1) {
		cout << "You entered 1" << endl;
	} else if (iChoioce == 2) {
		cout << "You entered 2" << endl;
	} else if (iChoioce == 3) {
		cout << "You entered 3" << endl;
	} else {
		cout << "default output: You entered a wrong choice" << endl;
	}*/
}
