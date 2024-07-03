#include <iostream>
#include <string>

using namespace std;

// watch out the yellow enum value which is the same as green
// enum Color { red=4, green=3, blue=2, yellow };
enum Color { red, green, blue, yellow };
enum Day { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

int main()
{


    int rNum;
    // Color r = yellow;
    cout << "Please enter color number {0,1,2,3} :";
    cin >> rNum;
    Color r = static_cast<Color>(rNum);
    /*
    if (r==red)
        cout << "red: " << r << "\n";
    else if (r==green)
        cout << "green: " << r << "\n";
    else if (r==blue)
        cout << "blue: " << r << "\n";
	else if (r==yellow)
		cout << "yellow: " << r << "\n";
    else
        cout << "No my favorite color: " << r << "\n";
*/
/*
    string strDay;
    cout << "Please enter days {Mon, Tue, Wed}:";
    cin >> strDay;

    if(strDay=="Mon")
        cout << "Today is Monday!\n";

    if(strDay=="Tue")
        cout << "Today is Tuesday!\n";

    if(strDay=="Wed")
        cout << "Today is Wednesday!\n";
*/
	Day myDay = Monday;
    cout << Sunday << endl;
    cout << Monday << endl;
    cout << myDay << endl;
/*
    int iDay;
    cout << "Please enter days {Sun=0, Mon=1, Tue=2, Wed=3, Thu=4, Fri=6, Sat=7}:";
    cin >> iDay;

    myDay = static_cast<Day>(iDay);

    if(myDay==Monday)
        cout << "Today is Monday!\n";

    if(myDay==Tuesday)
        cout << "Today is Tuesday!\n";

    if(myDay==Wednesday)
        cout << "Today is Wednesday!\n";

    if (myDay==Sunday)
        cout << "Take a break!" << endl;
    else
        cout << "Work Hard!";
 */

    switch(r)
    {
        case red  : std::cout << "red: " << r << "\n";	break;
        case green: std::cout << "green: " << r << "\n"; break;
        case blue : std::cout << "blue: " << r << "\n";  break;
        default: cout << "No my favorite color: " << r << "\n";
    }


    return 0;
}




