#include <iostream>
#include <string>

using namespace std;

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

	// compare name1 and name2
	/*
	if (name1.compare(name2) == 0) {
		cout << "They are the same" << endl;
	} else {
		cout << "They are different" << endl;
	}*/

	// same length, there might still be chance that they are different
	if (name1.length() != name2.length()) {
		cout << "They are different" << endl;
		return 0;
	}

	// TODO: find out what is wrong with below logic (line34 to 48) on comparing two strings
	// max length of name1 and name2
	int max_length = name1.length()>name2.length()?name1.length():name2.length();

	bool is_same=false;
	for (int i = 0; i < max_length; i++) {
		// compare name1[i] and name2[i]
		// if very first char encounter difference, then break
		if (name1[i] != name2[i]) {
			cout << "They are different at pos " << i << endl;
			is_same=true;
			break;
		}
	}
	if (is_same) {
		cout << "They are the same" << endl;
	}
}
