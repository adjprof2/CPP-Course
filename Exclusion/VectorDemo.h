#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

using namespace std;

class Address {
  public:
  string city;
  string state;
  string zipcode;

  void printAddress();
  void printAddress(Address pAddr);
  void getAddressInput();
};

class Birthday{
  private:
    int day;
    int month;
    int year;
  public:
    Address addr;
    void getBirthdayInput();
    void printBirthday();
    // Accessor
    int getYear();
    // Modifier
    void setYear(int pYear);
};

int main() {

  //vector<int> myVector;
  //vector<Address*> myAddrVector;
  vector<Address> list;
  for(int i=0; i<3; i++) {
    Address *addrPtr = new Address();
    cout << "What is your city?" << endl;
    cin >> addrPtr->city;
    list.push_back(*addrPtr);
    //myAddrVector.push_back(addrPtr);
    cout << list[i].city << endl;;
  }

  cout << "Iterate from the begin ---------------" << endl;

  vector<Address>::iterator p;
  for(p=list.begin();p!=list.end();p++){
    cout << p->city << endl;
  }

  cout << "Iterate from the end ---------------" << endl;
  vector<Address>::reverse_iterator r;
  for (r = list.rbegin(); r != list.rend(); r++) {
	cout << r->city << endl;
  }


  /*
  Birthday myBithday;
  myBithday.getBirthdayInput();
  myBithday.printBirthday();

  myBithday.addr.getAddressInput();

  int newYear;
  cout << "I would like request a new age!" << endl;
  cout << "What is your new birth year? ";
  cin >> newYear;
  myBithday.setYear(newYear);
  myBithday.printBirthday();
  */
}

void Birthday::setYear(int pYear){
  year = pYear;
}

void Birthday::printBirthday(){
  cout << "Birth Year: " << year << ", Month: " << month << endl;
}

void Birthday::getBirthdayInput(){
  cout << "What is your birth year? ";
  cin >> year;
  cout << "What is your birth month? ";
  cin >> month;
  cout << "What is your birth day? ";
  cin >> day;
}

void Address::printAddress(Address pAddr){
  cout << "City: " << pAddr.city << endl;
  cout << "State: " << pAddr.state << endl;
  cout << "Zipcode: " << pAddr.zipcode << endl;
}

void Address::printAddress(){
  cout << "City: " << city << endl;
  cout << "State: " << state << endl;
  cout << "Zipcode: " << zipcode << endl;
}

void Address::getAddressInput(){
    cout << "What is the city?";
    cin >> city;
    cout << "What is the state?";
    cin >> state;
    cout << "What is the zipcode?";
    cin >> zipcode;
}
