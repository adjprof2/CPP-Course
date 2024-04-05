#include <iostream>
#include <cstdlib>

using namespace std;
/*
bool isPrime(int n)
{
	// check n is prime or not using loop
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}*/

int findPrimeLargestGap(){

	int lastPrime=0;
	int largestGap=0;
	int gap;
	int prime;
	int count=1;
	for (prime = 3; prime < 20; prime++) {
		bool primeFlag = true;
		for (int i = 2; i < prime; i++) {
			if (prime % i == 0) {
				primeFlag=false;
			}
		}
		if (primeFlag) {
			cout << prime << " is a prime number." << endl;
			if (lastPrime == 0) {
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
	}
	cout << "The largest gap is: " << largestGap << ", repeat count " << count << endl;

	return 0;
}

