#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int binaryStringToInt(string binaryString);
string intToBinaryString(int number);

// Group Discussion - Binary Conversion Function
int main(){

	string binaryString="10000";	// 1001 is binary representation of 9

	int result = binaryStringToInt(binaryString);
	cout<<"The integer value of the binary string is: "<<result<<endl;

	// now we will convert the integer value to binary string and then move to second function, string intToBinaryString(int number)
	// figure out how many bits are needed to represent the integer value
	int iSize = log2(result)+1;
	cout<<"The number of bits needed to represent the integer value is: "<<iSize<<endl;
	string convertedBinaryString;
	convertedBinaryString.resize(iSize);
	// you can divide by 2 and get the remainder to get the binary string in the loop

	return true;
}

int binaryStringToInt(string binaryString){

	int length = binaryString.length();
	int pos = 1;
	int result = 0;
	while(pos<=length){
		// base don the pos of the binarystring, we will get the integer value and multiply it with 2^pos
		int iValue =(binaryString[pos-1]-'0')*pow(2,length-pos);
		result += iValue;
		pos++;
	}
	return result;
}



