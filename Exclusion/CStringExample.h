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

const int MAX_SIZE1 = 10;
const int MAX_SIZE2 = 20;

void initCString(char pstrMsg[], int pSize);
void printCString(char pstrMsg[]);
void printCString(char pstrMsg[], int pSize);
void fillCString(char pstrMsg[], int& pSize);

int main (int argc, char *argv[])
//int main ()
{

    char strName1[MAX_SIZE1];
    char strName2[MAX_SIZE1];
    // int strSize1, strSize2;

    cout << "Please enter 1st student name (first, last): \n";
    cin.getline(strName1, MAX_SIZE1);
    printCString(strName1, MAX_SIZE1);

    //initCString(strName2, MAX_SIZE2); // initialize the string with '-' character to avoid garbage value
    cout << "\nPlease enter 2nd student name (first, last): \n";
    cin.getline(strName2, MAX_SIZE1);
    //strName2[strlen(strName2)] = '.'; // reset the null terminator
    printCString(strName2);


    int iResult = strcmp(strName1, strName2);
    if ( iResult == 0)
        cout << "you have entered the same name. " << endl;
    else if (iResult > 0)
        cout << strName1 << " > " << strName2 << endl;
    else
        cout << strName1 << " < " << strName2 << endl;

    char cstrMsg[MAX_SIZE2];
    strcpy(cstrMsg, strName1);
    //strncat(cstrMsg, " is cool and rich.", 20);
    strcat(cstrMsg, " is cool and rich.");
    //initCString(cstrMsg, MAX_SIZE);
    printCString(cstrMsg);
/*
    int ifSize=0;
    fillCString(cstrMsg, ifSize);
    cout << ifSize << endl;

    // printCString(cstrMsg, ifSize);
    cout << cstrMsg << endl;

    char cstrMsg[MAX_SIZE] = "012345678";
    // cstrMsg[MAX_SIZE-1] = '9';
    char cstrMsg2[] = "You are not supporse to see this!";

    int ifSize=0;
    fillCString(cstrMsg, ifSize);
    cout << ifSize << endl;

    printCString(cstrMsg, MAX_SIZE2);

    char cstrLargerMsg[MAX_SIZE2];
    initCString(cstrLargerMsg, MAX_SIZE2);

    strcpy (cstrLargerMsg, cstrMsg);

    printCString(cstrMsg, MAX_SIZE2);
    printCString(cstrLargerMsg, MAX_SIZE2);

    cout << "\n" << cstrLargerMsg;
    */

    return 0;
}

void initCString(char pstrMsg[], int pSize){
    for (int i = 0; i <= pSize; i++)
    {
      pstrMsg[i] = '-';
    }
}

void printCString(char pstrMsg[]){
    cout << "\nprintCString with strlen : " << strlen(pstrMsg) << endl;
    for (int i = 0; i < strlen(pstrMsg); i++)
    {
      cout.put(pstrMsg[i]);
    }
    cout << endl;
}

void printCString(char pstrMsg[], int pSize){
    cout << "printCString with pSize: " << pSize << endl;
    for (int i = 0; i < pSize; i++)
    {
      cout << pstrMsg[i];
    }
    cout << endl;
}

void fillCString(char pstrMsg[], int& pSize){
    cout << "Please enter your message" << endl;
    for(int i=0; i<MAX_SIZE1; i++){
        cin.get(pstrMsg[i]);
        // pstrMsg[i] = getchar();
        if (cin.peek() == 46) {
        //if (pstrMsg[i] == '.'){
            pstrMsg[i++] = '\0';    // null terminator char
            pSize=i+1;
            break;
        }
    }
}
