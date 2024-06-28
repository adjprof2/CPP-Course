#include <iostream>

using namespace std;

// convert Fahrenheit to Celsius and vice versa
int main(){

   cout << "65 = char " << (char)65 << endl;

   char cB = 66;
   cout << "66 = char " << cB << endl;

   char cC = 'C';
   cout << "67 = char " << cC << endl;

   cout << "char \'C\' " << (int)cC << endl;


   bool bBoolean = 1;
   cout << "bBoolean " << (bool) bBoolean << endl;
   cout << "not bBoolean " << (bool) !bBoolean << endl;

   int x = 10;
   cout << "about shorthand operator " << x++ << ", "<< --x << endl;

   cin >> x;
   cout << "about shorthand operator " << x++ << ", "<< --x << endl;

   string name = "NoBody";
   cout << "What is your name?";
   cin >> name;

   cout << "\nWelcome " << name << endl;

   return 0;
}
