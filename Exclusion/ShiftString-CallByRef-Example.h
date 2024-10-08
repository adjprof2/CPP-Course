#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

void printString(string strMsg);
// yet another example of call by reference and function overloading
void shiftString(string& strMsg);
void shiftString(string& strMsg, int nShift);

int main() {

  string strBinary = "11100011";

  for(int i=0; i<strBinary.length(); i++){
    cout << strBinary[i]-'0';
  }
  cout << endl;

  int result=0;
  for(int i=0; i<strBinary.length(); i++){
    //result += rand()%2 * pow(2,i);
    //cout << rand()%2 * pow(2,i) << endl;
    result += (strBinary[i]-'0') * pow(2,strBinary.length()-(i+1));
    cout << (strBinary[i]-'0') * pow(2,strBinary.length()-(i+1)) << " ";
  }

  cout << " = " << result << endl;

  //strBinary.resize(11);
  cout << "strBinary: " << strBinary << ", length: " << strBinary.length() << endl;

  printString(strBinary);
  shiftString(strBinary, 3);
  cout << "strBinary: " << strBinary << ", length: " << strBinary.length() << endl;
  printString(strBinary);
}

void printString(string strMsg){
  cout << "printString ........ " << endl;
  for(int i=0; i<strMsg.length(); i++){
    cout << strMsg[i] << endl;
  }
}

void shiftString(string& strMsg){

  for(int i=strMsg.length()-1; i>0; i--){
    strMsg[i]=strMsg[i-1];
  }
  strMsg[0]='0';

}

void shiftString(string& strMsg, int nShift){
	for (int i = 0; i < nShift; i++) {
		shiftString(strMsg);
	}
}
