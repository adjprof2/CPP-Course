#include <iostream>
#include <cstdlib>

using namespace std;


int primeGapCount(){

	int lastPrime;
	int largestGap=0;
	int gap;
	int prime;
	int count=1;
	// loop 10 times
	for (int i = 0; i < 10; i++) {
		cout << "input the prime number: ";
		cin >> prime;
		if (prime <= 1) {
			cout << "The number is not a prime number." << endl;
			break;
		}
		if (i == 0) {
			lastPrime = prime;
		} else {
			gap = prime - lastPrime;
			if (gap > largestGap) {
				largestGap = gap;
				count = 1;
			} else if (gap == largestGap)
				count++;
			lastPrime = prime;
		}
	}
	cout << "The largest gap is: " << largestGap << ", repeat count " << count << endl;

	return 0;
}

