#include <iostream>
#include <string>

using namespace std;

void stringDemo(){

	string str1, str2;
	cout << "Enter string 1: ";
	// cin >> str;
	getline(cin, str1);


	cout << "You entered: " << str1 << endl;
	cout << "Length of the string: " << str1.length() << endl;
	for (int i = 0; i < str1.length(); i++) {
		cout << i << ", " << str1[i] << endl;
	}

	cout << "Enter string 2: ";
	// cin >> str;
	getline(cin, str2);

	cout << "You entered: " << str2 << endl;
	cout << "Length of the string: " << str2.length() << endl;
	for (int i = 0; i < str2.length(); i++) {
		cout << i << ", " << str2[i] << endl;
	}

    // compare if two strings are equal by comparing each character
	if (str1.length() != str2.length()) {
		cout << "Strings are not equal" << endl;
	} else {
		bool equal = true;
		for (int i = 0; i < str1.length(); i++) {
			if (str1[i] != str2[i]) {
				cout << "Strings are not equal" << endl;
				break;
			}
		}
		if (equal) {
			cout << "Strings are equal" << endl;
		}
	}
}
