#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

struct Address{
  string city;
};

int main() {

  int *x = new int(10);
  cout << *x << endl;
  cout << x << endl;

  Address addr;
  addr.city = "Pasadena";
  cout << &addr << endl;

  Address *addrPtr = new Address();
  addrPtr->city = "Pasadena";
  cout << addrPtr->city << endl;
  cout << addrPtr << endl;

  // at this time, the memory allocated for addrPtr will be copied to addrPtr2
  Address *addrPtr2 = addrPtr;

  delete addrPtr;
  addrPtr = nullptr;
  if (addrPtr == nullptr) {
		cout << "addrPtr is now a nullptr" << endl;
  }
  // TODO: you should also assign nullptr to addrPtr2
  addrPtr2->city = "Burbank";
  cout << addrPtr2->city << endl;
  cout << addrPtr2 << endl;
  cout << "AddrPtr2 is still holding the address to the deleted pointer,";
  cout << "you should not reference to a deleted pointer" << endl;

}
