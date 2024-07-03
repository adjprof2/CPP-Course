#include <iostream>

using namespace std;

int main(){

	int pushups = 0;
	while (pushups < 10) {
		cout << "Do a pushup #" << pushups  << endl;
		pushups++;
	}

	cout << "Now do 1 more pushups" << endl;

	pushups = 21;
	do {
		cout << "Do a pushup #" << pushups << endl;
		pushups++;
	} while (pushups < 20);

	cout << "Now do 10 more pushups" << endl;

	for (int i = 0; i < 10; i++) {
		cout << "Do a pushup #" << i << endl;
	}

}
