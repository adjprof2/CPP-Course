/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void shiftString(string& strMsg);
void shiftString2(string& strMsg);
void shiftString2(string& strMsg, int numberOfBits);

// Convert shiftString* function to shiftCString*
void shiftString2(char cstrMsg[]);
void shiftString2(char cstrMsg[], int numberOfBits);

void initCString(char pstrMsg[], int pSize);

int main()
{

    char cstrBin1[] = "10011111";   // lenth of cstrBin1 shall be 8 + 1 null-terminated char
    //char cstrBin1[] = "12345678";   // lenth of cstrBin1 shall be 8 + 1 null-terminated char
    cout << cstrBin1 << ", with length of " << strlen(cstrBin1) << endl;

    shiftString2(cstrBin1);

    cout << cstrBin1 << ", after shiftString2 with length of " << strlen(cstrBin1) << endl;

    shiftString2(cstrBin1, 3);

    cout << cstrBin1 << ", after shiftString2 on 3 bits with length of " << strlen(cstrBin1) << endl;

    /*
    char cstrBin2[17];
    initCString(cstrBin2, 17);
    cout << cstrBin2 << ", with length of " << strlen(cstrBin2) << endl;

    strcpy(cstrBin2, cstrBin1);
    cout << "After strcpy, show the result of destination CString\n";
    cout << cstrBin2 << ", with length of " << strlen(cstrBin2) << endl;




    string strBinary = "10011111";

    strBinary.resize(9);    // instead of resize member function of the string class; you will need to use strcpy function for CString char array with null-terminated
    strBinary[8] = '.';
    cout << "binary before shiftString: " << strBinary << endl;

    shiftString(strBinary);
    cout << "binary after 1st shiftString : " << strBinary << endl;
    shiftString2(strBinary);
    cout << "binary after 2nd shiftString2: " << strBinary << endl;
    shiftString2(strBinary, 3);
    cout << "binary after shiftString2(3) : " << strBinary << endl;
*/
    return 0;
}

void initCString(char pstrMsg[], int pSize){
    for (int i = 0; i < pSize; i++)
    {
      pstrMsg[i] = '-';
    }
    pstrMsg[pSize] = '\0'; // assuming the pstrMsg will have one extra space allocated for null-terminated char
}

// void shiftCString(char cstrMsg[])
void shiftString(string& strMsg){
    for(int i=strMsg.length()-1; i>0; i--){
        strMsg[i]=strMsg[i-1];
    }
    strMsg[0]='0';
}

void shiftString2(string& strMsg){
    char tmp = strMsg[strMsg.length()-1];
    for(int i=strMsg.length()-1; i>0; i--){
        strMsg[i]=strMsg[i-1];
    }
    strMsg[0]=tmp;
}

void shiftString2(string& strMsg, int numberOfBits){
    while(numberOfBits>0){
        shiftString2(strMsg);
        numberOfBits--;
    }
}

void shiftString2(char cstrMsg[]){
    char tmp = cstrMsg[strlen(cstrMsg)-1];
    for(int i=strlen(cstrMsg)-1; i>0; i--){
    	cstrMsg[i]=cstrMsg[i-1];
    }
    cstrMsg[0]=tmp;
}

void shiftString2(char cstrMsg[], int numberOfBits){
    while(numberOfBits>0){
        shiftString2(cstrMsg);
        numberOfBits--;
    }
}
