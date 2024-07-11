#include <iostream>

using namespace std;

int swapThenAdd(int a, int b);
int swapThenAdd2(int& a, int& b);
void swapThenAdd(int a, int b, int &c);

int main(){

	int x = 5;
	int y = 10;
	int z = 0;

	//cout << "Enter x: ";
	cout << "Enter x: ";
	cin >> x;
    cout << "Enter y: ";
    cin >> y;

	z = swapThenAdd2(x, y);
    //swapThenAdd(x, y, z);

	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
	cout << "z: " << z << endl;

	return 0;

}

int swapThenAdd(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	int c = a + b;
	return c;
}

int swapThenAdd2(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
	int c = a + b;
	return c;
}

// c is a reference variable, so it is passed by reference; this avoid the need to return a value
void swapThenAdd(int a, int b, int &c) {
	int temp = a;
	a = b;
	b = temp;
	c = a + b;
}
