#include <iostream>
#include <string>

using namespace std;

int main(){

	string strInput;
	cout << "Enter your message: ";
	//cin >> strInput;	// will read only the first word
	getline(cin, strInput);	// will read the whole line including spaces
	cout << "Your message is: " << strInput << endl;

	// output the string character by character
	for (unsigned int i = 0; i < strInput.length(); i++) {
		cout << strInput[i] << endl;
	}

	// output char a-z and A-Z with their ASCII values
	for (int i = 97; i <= 122; i++) {
		cout << (char) i << " = " << i << "\t";
		cout << (char) (i-32) << " = " << i-32 << "\n";
	}
}
