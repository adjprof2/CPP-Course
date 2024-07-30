/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void swap(int a, int b);
// void print(int iValue, int *pValue);
// *pValue = address of a variable; &variable
void print(int *pValue);
void print(int& iValue, int *pValue);
void print(double& dValue, double *pdValue);

int main()
{

    short int *pValues = new short int[10];

    cout << "pValues: " << pValues << endl;
    cout << "pValues+1: " << pValues+1 << endl;

	for (int i = 0; i < 10; i++) {
		pValues[i] = (i+1)*10;
	}

    cout << "&pValues[0]: " << &pValues[0] << endl;

    short int * tValue = pValues+8;

    cout << "tValue: " << tValue << endl;
    cout << "*tValue: " << *tValue << endl;

    cout << "tValue+2: " << tValue+2 << endl;
    cout << "*tValue+2: " << *(tValue+2) << endl;

/*
    cout << "tValue-1: " << tValue-2 << endl;
    cout << "*tValue-1: " << *(tValue-2) << endl;
*/
/*
	// int iValue = 10;
    int *pValue = new int(10);

    // pValue = &iValue;
    // iValue is call by value; pValue is call by reference becasue we passed in the pointer
    // print(iValue, &iValue);
    print(pValue);

    *pValue = *pValue + 10;

    int *pValue2;
    pValue2 = pValue;

    print(pValue2);

    double dValue = 10.10;
    double *pdValue;

    //dValue = iValue;    // this is ok
    //pdValue = &iValue;  // this is wrong with compiler error1

    pdValue = &dValue;
    // print(dValue, &dValue);
    print(dValue, pdValue);

    *pValue = 10;
    cout << "pValue: " << *pValue << endl;

    //*pValue = *pdValue; // the old rule of implicit type conversion is still valid from double to int
    *pdValue = *pValue; // the old rule of implicit type conversion is still valid from int to double

    cout << "pdValue: " << *pdValue << endl;
*/
    return 0;
}

void print(int *pValue){
	cout << "print(int *pValue) ...." << endl;

	cout << "pValue : " << pValue << endl;
	cout << "*pValue: " << *pValue << endl;
}

// iValue parameter of print function is call by value where iValue is the local variable of print function
//void print(int iValue, int *pValue){
void print(int& iValue, int *pValue){

    cout << "print(int iValue, int *pValue) ...." << endl;

    //iValue +=10;	// change the value of iValue which represents the same address of pValue
    *pValue = *pValue + 10;  // change the value pointed by pValue which is the same address of iValue

    cout << "&iValue : " << &iValue << endl;
    cout << "iValue : " << iValue << endl;
    cout << "pValue : " << pValue << endl;
    cout << "*pValue: " << *pValue << endl;

    cout << "-----------------------------------\n";

}

void print(double& dValue, double *pdValue){

    cout << "print(double& dValue, double *pdValue) ...." << endl;

    dValue +=10.01;
    //pValue = &iValue;

    cout << "&dValue : " << &dValue << endl;
    cout << "dValue : " << dValue << endl;
    cout << "pdValue : " << pdValue << endl;
    cout << "*pdValue: " << *pdValue << endl;

    cout << "-----------------------------------\n";

}

// call by refere so the swap will fail
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;

}
