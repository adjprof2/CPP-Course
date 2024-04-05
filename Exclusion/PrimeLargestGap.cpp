#include <iostream>
#include <cstdlib>

using namespace std;
// function prototype; is not a good practice to place function definition before main()
// int n as argument to pass prime number to check if it is prime or not
bool isPrime(int n);
void printPrimeLargestGap(int largestGap, int count);

int findLargestPrime(){

	int lastPrime=0;	// long term memory that will be used in the next iteration
	int largestGap=0;	// long term memory that will be used in the next iteration
	int gap;	        // short term memory that will be used in the current iteration
	int prime;	        // short term memory that will be used in the current iteration
	int count=1;	    // long term memory that will be used in the next iteration
	for (prime = 3; prime < 20; prime++) {
		/*
		bool primeFlag = true;
		for (int i = 2; i < prime; i++) {
			if (prime % i == 0) {
				primeFlag=false;
			}
		}*/
		// pass prime to isPrime() function as parameter where prime is the local variable of main()
		bool primeFlag = isPrime(prime);
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
	//cout << "The largest gap is: " << largestGap << ", repeat count " << count << endl;
    printPrimeLargestGap(largestGap, count);

	return 0;
}

// function definition
// int n as the argument of isPrime() function is actually a local variable of isPrime() function
// the invocation of isPrime() function in main() function passes prime as argument to isPrime() function as call by value
// the implication of call by value is that the value of prime is copied to n
bool isPrime(int n)
{
	// check n is prime or not using loop
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

/*
 * pre-condition: largestGap and count are integer variables
 * post-condition: print the largest gap and repeat count
 * return: void
 */
void printPrimeLargestGap(int largestGap, int count){
	cout << "The largest gap is: " << largestGap << ", repeat count " << count << endl;
}
