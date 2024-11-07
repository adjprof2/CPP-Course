/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <istream>
#include <cstring>
#include <cstdio>

using namespace std;

const int MAX_ASSIGNMENTS = 5;
const int MAX_STUDENTS = 10;

using namespace std;

namespace NS1 {
	namespace NS1_1 {
		void myFunction1(string str) {
			cout << "NS1_1 myFunction1: " << str << endl;
		}
	}
	void myFunction1(string str) {
		cout << "NS1 myFunction1: " << str << endl;
	}
}

namespace NS2 {
	void myFunction1(string str) {
		cout << "NS2 myFunction1: " << str << endl;
	}
}

int main ()
{
	NS1::myFunction1("Hello");
	NS1::NS1_1::myFunction1("Hello");
	NS2::myFunction1("Hello");

	return 0;
}
