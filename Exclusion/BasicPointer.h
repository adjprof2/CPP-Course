#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

// call by reference
void callMe(int& phoneNumber);
// call by value
void callMe(int phoneNumber);
// call by reference, using pointer
void callMe(int *phoneNumber);

int shortlived();
int* longlived();

int main() {

  int x = 10;
  int x2 = 11;
  cout << "The value of x: " << x << endl;
  cout << "The address of x: " << &x << endl;
  cout << "The address of x2: " << &x2 << endl;

  int *y = &x;
  int *z = &x2;

  cout << "The address of where y points to: " << y << endl;
  cout << "The dereferenced value of where y points to: " << *y << endl;
  cout << "The address of where z points to: " << z << endl;
  cout << "The dereferenced value of where z points to: " << *z << endl;

  // modify the value of x2 using z
  *z = 12;
  cout << "The address of where z points to (no change): " << z << endl;
  cout << "The dereferenced value of where z points to after modification: " << *z << endl;

  // pointer arithmetic
  cout << z-1 << endl;
  cout << *(z-1) << endl;

}

int* longlived(){
    int *p = new int(10);
    cout << "Address of p: " << p << endl;
    return p;
}

int shortlived(){
    int local =10;
    cout << "Address of local: " << &local << endl;
    return local;
}

void callMe(int& phoneNumber){
  cout << "Call me at, " << phoneNumber << endl;
}

void callMe(int phoneNumber){
  cout << "Call me at, " << phoneNumber << endl;
}

void callMe(int *phoneNumber){
  cout << "Call me at, " << *phoneNumber << endl;
  *phoneNumber = 11;
}
