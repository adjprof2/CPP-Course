#include <iostream>

using namespace std;

int cstringDemo(){
	string msg = "Hello World";
	for (int i = 0; i < msg.length(); i++) {
		cout << msg[i];
	}
	cout << endl;

	const char* cmsg = msg.c_str();
	for (int i = 0; i < msg.length()+1; i++) {
		cout << cmsg[i];
	}
	cout << endl;

	cout << msg.length() << endl;

	// make a copy of cmsg into a new char array
	char cmsg2[msg.length()+1];
	// declare char array with 1-10
	char cmsg3[]={'H','i','\0'};
	for (int i = 0; i < msg.length(); i++) {
		cmsg2[i] = cmsg[i];
	}
	cmsg2[msg.length()]='.';

	for (int i = 0; i < msg.length() + 3; i++) {
		cout << cmsg2[i];
	}
	//cout << cmsg2 << endl;
	cout << endl;
	return 0;
}
