#include <iostream>
#include <string>

using namespace std;

// function prototype
bool compare(string name1, string name2);
bool compare(string name1, string name2, int pLength);
int maxLength(string name1, string name2);
int myLower(int c);

int main(){

	string name1, name2;
	cout << "Enter your student 1: ";
	//cin >> name;
	getline(cin, name1);
	cout << "Hello, " << name1 << endl;
	cout << "Enter your student 2: ";
	//cin >> name;
	getline(cin, name2);
	cout << "Hello, " << name2 << endl;


	// same length, there might still be chance that they are different
	if (compare(name1, name2) == false) {
		return 0;
	}

	// TODO: find out what is wrong with below logic (line34 to 48) on comparing two strings
	// max length of name1 and name2
	int max_length = maxLength(name1, name2);

	if (compare(name1, name2, max_length)) {
		cout << "They are the same" << endl;
	}
}

// function definition/implementation
bool compare(string name1, string name2) {
	// same length, there might still be chance that they are different
	if (name1.length() != name2.length()) {
		cout << "They are different" << endl;
		return false;
	}
	return true;
}

int maxLength(string name1, string name2) {
	return name1.length() > name2.length() ? name1.length() : name2.length();
}

bool compare(string name1, string name2, int pLength){
	bool is_same=true;
	for (int i = 0; i < pLength; i++) {
		// compare as case insensitive
		if (myLower(name1[i]) != myLower(name2[i])) {
			cout << "They are different at pos " << i << endl;
			is_same=false;
			break;
		}
	}
	return is_same;
}

int myLower(int c){
	if (c >= 'A' && c <= 'Z') {
		return c + 32;
	} else {
		return c;
	}
}
