#include <iostream>
#include <string>
#include <cmath>

//#include "Exclusion/StringDemo.h"

using namespace std;

// custom function to convert a char to lower case
char myToLower(char c) {
	cout << "myToLower(char) function" << endl;
	if (c >= 'A' && c <= 'Z') {
		return c + 32;
	}
	return c;
}

// function overloading
int myToLower(int c) {
	cout << "myToLower(int) function" << endl;
	if (c >= 65 && c <= 90) {
		return c + 32;
	}
	return c;
}

void checkPalindrome(){

	//stringDemo();

	string message;

	cout << "Pleae enter a message to check for palindrome: ";
    getline(cin, message);
    bool isPalindrome = true;
    cout << "message length: " << message.length() << endl;
    // eliminate the spaces in the message
	for (int i = 0; i < message.length(); i++) {
		message[i] = myToLower((int) message[i]);
		if (message[i] == ' ') {
			message.erase(i, 1);
		}
	}

    // determine the length of the message
	for (int i = 0; i < message.length()/2; i++) {
		cout << i << ", " << message[i] << endl;
		cout << (message.length()-1-i) << "," << message[message.length()-1-i] << endl;
		if (message[i] != message[message.length() - 1 - i]) {
			cout << "The message is not a palindrome" << endl;
			isPalindrome = false;
			break;
		}
	}

	if (isPalindrome) {
		cout << "The message is a palindrome" << endl;
	}

}
