#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <list>

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
    // Address addr;
    vector<Address> addrList;
    void getBirthdayInput();
    void printBirthday();
    // Accessor
    int getYear();
    // Modifier
    void setYear(int pYear);
    void initAddress();
    void printAddress();
    void printAddressInRevserse();
};

int main() {

/*
    vector<int> vec;
	for (int i = 0; i < 100; i++) {
		int userInput;
		cout << "Please enter a double number: ";
		cin >> userInput;
		vec.push_back(userInput);
		cout << "do you want to continue? (y/n) ";
		char cont;
		cin >> cont;
		if (cont == 'n') {
			break;
		}
	}
    cout << "The size of the vector is: " << vec.size() << endl;

    vector<int>::iterator intIter;
    for (intIter= vec.begin(); intIter != vec.end(); intIter++) {
    	cout << *intIter << endl;
    }
    cout << "The size of the vector is: " << vec.size() << endl;
*/
/*
  vector<Address> list;
  for(int i=0; i<3; i++) {
    Address *addrPtr = new Address();
    cout << "What is your city?" << endl;
    cin >> addrPtr->city;
    list.push_back(*addrPtr);
    cout << list[i].city << endl;;
  }

  cout << "---------------" << endl;

  vector<Address>::iterator p;
  for(p=list.begin();p!=list.end();p++){
    cout << p->city << endl;
  }
*/


  Birthday myBithday;
  myBithday.getBirthdayInput();
  myBithday.printBirthday();

  //myBithday.addr.getAddressInput();
  myBithday.initAddress();
  cout << "-----------------------------" << endl;

  myBithday.printAddressInRevserse();

  int newYear;
  cout << "I would like request a new age!" << endl;
  cout << "What is your new birth year? ";
  cin >> newYear;
  myBithday.setYear(newYear);
  myBithday.printBirthday();

}

void Birthday::printAddressInRevserse(){
	vector<Address>::reverse_iterator p;
	for(p=addrList.rbegin();p!=addrList.rend();p++){
		p->printAddress();
	}
}

void Birthday::printAddress(){
	vector<Address>::iterator p;
	for(p=addrList.begin();p!=addrList.end();p++){
		p->printAddress();
	}
}

void Birthday::initAddress(){

	for(int i=0; i<3; i++) {
		Address *addrPtr = new Address();
		addrPtr->getAddressInput();
		addrList.push_back(*addrPtr);
		cout << addrList[i].city << endl;;
	}
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
