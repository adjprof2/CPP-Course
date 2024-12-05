#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int power(int x, int n);
int powerLoop(int x, int n);
void writeVertical(int n);

int g_n=0;

int main() {

//  writeVertical(4321);


  for (int n = 0; n < 4; n++) {
    cout << "3 to the powerLoop " << n << " is " << powerLoop(3, n) << endl;
  }
 /*
  cout << endl;

  for (int n = 0; n < 4; n++) {
    cout << "3 to the power " << n << " is " << power(3, n) << endl;
  }
*/
	return 0;

}

void writeVertical(int n){

    if (n<10){
        cout << "writeVertical base case: g_n= " << ++g_n << "\t, n= ";
        cout << n << endl;
        // after this, we will return of this function
    } else {
        writeVertical(n/10);
        cout << "writeVertical recursive case: g_n= " << ++g_n << "\t, n= ";
        cout << (n%10) << endl;
    }
}

/*
 * Given x=3, n=0 to powerLoop(x,n)
x, n	i	i<n	product
3, 0	0	0<0	1

x, n	i	i<n	product		product*=x
3, 1	0	0<1	1		=1*3=3
3, 1 	1	1<1	end loop

x, n	i	i<n	product		product*=x
3, 2	0	0<2	1		=1*3=3
3, 2	1	1<2	3		=3*3=9
3, 2	2	2<2 	end loop

x, n	i	i<n	product		product*=x
3, 3	0	0<3	1		=1*3=3
3, 3	1	1>3	3		=3*3=9
3, 3	2	2>3	9		=9*3=27
3, 3	3	3>3	end loop
 */
int powerLoop(int x, int n){

  int product = 1;	// base case for n=0
  for (int i = 0; i < n; ++i) {
    product *= x;       // product = product * x;
  }
  return product;

}

/*
Given x=3, n=0 to power(x,n)
power(3,0) will hit the base case and return 1
power(3,1)
	power(3,0) will return 1
	power(3,0)*3=>1*3 will return 3
power(3,2)
	power(3,1) will return 3
	power(3,1)*3=>3*3 will return 9
power(3,3)
	power(3,2) will return 9
	power(3,2)*3=>9*3 will return 27
 *
 */
int power(int x, int n){
  if (n < 0) {	// base case for exception handling
    cout << "Error !" << endl;
    exit(1);
  }
  if (n > 0)	// recursive case with reduction of scope, n; then return value will be used for computation
    return (power(x, n - 1)*x);
  else		    // base case when n=0
    return 1;
}




