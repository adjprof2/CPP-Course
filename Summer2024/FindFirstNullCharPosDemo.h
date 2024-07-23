#include <iostream>
#include <cstring>

using namespace std;

void printString(char strMsg[], int nElements);
int findFirstNullCharPos(char strMsg[], int nElements);

int main(){
	char cString[12] = "Hello\0World";

	cout << cString << " has length: " << strlen(cString) << endl;

	printString(cString, 12);
	// copy one array to another array starting from the given index
	char cString2[20];
	//strcpy(cString2, cString);
	int nPosNull = findFirstNullCharPos(cString, 11);
	if (nPosNull != -1){
		int nTargetIndex = 0;
		for (int i = nPosNull+1; i < 12; i++) {
			cString2[nTargetIndex++] = cString[i];
		}
	} else
		cout << "No null character found" << endl;

	cout << cString2 << endl;

	// let's remove the null character and print the string
	cString[nPosNull] = ' ';

	cout << cString << endl;

	strcpy(cString2, cString);

	cout << cString2 << endl;

	char cString3[30];
	cout << "Enter a student name: ";
	cin.getline(cString3,30);
	//strcpy(cString3, cString2);	// this is wrong as the destination array is smaller than the source array

    strcat(cString3, cString2);
    cout << cString3 << " has length: " << strlen(cString3) << endl;
}

void printString(char strMsg[], int nElements){
	for (int i = 0; i < nElements; i++) {
		if (strMsg[i] == 0)
			cout << "NULL" << endl;
		else
			cout << strMsg[i] << endl;
	}
}

int findFirstNullCharPos(char strMsg[], int nElements){
	for (int i = 0; i < nElements; i++) {
		if (strMsg[i] == 0)
			return i;
	}
	return -1;
}
