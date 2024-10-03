#include <iostream>
#include <string>
#include <cmath>

using namespace std;

/*
If n is less than 2, return false (0 and 1 are not prime).
Loop through numbers from 2 to n-1.
If n is divisible by any of these numbers, return false.
If no divisors are found, return true.
 */
int main(){

	// range of 3 to 200
	bool isPrime = true;
	int prevKnownPrime = 2;
	int gap = 0;
	int largestGap = 0, largestGapCount = 0;
	for (int i = 3; i <= 200; i++) {
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				//cout << i << " is not prime" << endl;
				isPrime = false;
				break;
			}
		}
		if (isPrime) {
			cout << i << " is prime";
			gap = i - prevKnownPrime;
			prevKnownPrime = i;
			cout << "\t Gap: " << gap << endl;
			if (gap > largestGap) {
				largestGap = gap;
				cout << "New largest gap: " << largestGap << endl;
				largestGapCount = 1;
			} else if (gap == largestGap) {
				largestGapCount++;
				cout << "largest gap, " << largestGap << " count increase by 1" << endl;
			}
		} else
			isPrime = true;
	}
	cout << "Largest gap: " << largestGap << ", count: " << largestGapCount << endl;

	return true;
}




