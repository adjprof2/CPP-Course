#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

// call by reference
void callMe(int& phoneNumber);
// call by value
//void callMe(int phoneNumber);
// call by reference, using pointer
void callMe(int *phoneNumber);

int shortlived();
int* longlived();
void verifyLongLived(int *p);

int main() {

    int m_local = shortlived();
    cout << "Address of m_local: " << &m_local << endl;
    cout << "Value of m_local: " << m_local << endl;

    int *m = longlived();
    cout << "Address of m: " << m << endl;
    cout << "Value of *m: " << *m << endl;
    cout << "Modify *m to 11" << endl;
    *m = 11;
    verifyLongLived(m);

/*
  int x = 10;
  callMe(&x);
  cout << x << endl;
*/


}

void verifyLongLived(int *p) {
	cout << "verifyLongLived:" << endl;
	cout << "Address of p: " << p << endl;
	cout << "Value of *p: " << *p << endl;
}

int* longlived(){
	cout << "Long lived:" << endl;
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
  cout << "Call me using int& at, " << phoneNumber << endl;
  phoneNumber = 11;
}
/*
void callMe(int phoneNumber){
  cout << "Call me using int at, " << phoneNumber << endl;
}*/

void callMe(int *phoneNumber){
  cout << "Call me using int* at, " << *phoneNumber << endl;
  *phoneNumber = 11;
}
