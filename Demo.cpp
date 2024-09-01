#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int power(int x, int n);
int powerLoop(int x, int n);

void verticalNumbers(int n);

int main() {

	int n;
	cout << "Enter a number: ";
	cin >> n;
	verticalNumbers(n);

/*
  for (int n = 0; n < 4; n++) {
    cout << "3 to the powerLoop " << n << " is " << powerLoop(3, n) << endl;
  }

  for (int n = 0; n < 4; n++) {
    cout << "3 to the power " << n << " is " << power(3, n) << endl;
  }
*/
}

void verticalNumbers(int n) {
	if (n < 10) {				// base case
		cout << n << endl;
	} else {
	    cout << n % 10 << endl;
		verticalNumbers(n / 10);	//smaller subtasks
	}
}


int powerLoop(int x, int n){

  int product = 1;
  for (int i = 0; i < n; ++i) {
    product *= x;
  }
  return product;

}

int power(int x, int n){
  if (n < 0) {
    cout << "Error !" << endl;
    exit(1);
  }
  if (n > 0)
    return (power(x, n - 1)*x);
  else
    return 1;
}
