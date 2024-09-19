#include <iostream>

using namespace std;

// gloabl constant
const double RATE = 16.50;

int main(){
	// local variables; allocated on the stack instead of heap;
	// when we discuss the dynamic memory allocation, we will use the heap memory space
	int hrs;
	double payAmount;
	int bContinue = 1;

	while(bContinue){

		cout << "Please enter a value: ";
		cin >> hrs;

		if (hrs>40){
			payAmount = hrs*RATE + 1.5*RATE*(hrs-40);
			cout << "Your family thank you! you have earned: " <<  payAmount << endl;

		}
		else {
			if (hrs==40) {
			payAmount = hrs*RATE;
			cout << "It is ok to work just 40 hours" << endl;
			cout << "Perfect working hour, You have earned: " << payAmount << endl;
			}
			else
			{
				payAmount = hrs*(RATE*0.8);
				cout << "Try to put more effect into your work, You have earned with reduced rate: " << payAmount << endl;
			}
		}

		cout << "The end of conditional block" << endl;

		cout << "Do you want to continue? (1 for yes, 0 for no): ";
		cin >> bContinue;
	}

	cout << "The end of while loop" << endl;
}
