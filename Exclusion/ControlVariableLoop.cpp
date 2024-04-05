/*
 * Main.cpp
 *
 *  Created on: Feb 18, 2024
 *      Author: chang
 */

#include <iostream>

using namespace std;

/*

iControlVar	++iControlVar<=5
		1) iControlVar inc by 1
		2) then compare "<=" 5
0		1) 0+1=1
		2) 1<=5, true		print "Hello World, 1"
1		1) 1+1=2
		2) 2<=5, true		print "Hello World, 2"
...
4		1) 4+1=5
		2) 5<=5, true		print "Hello World, 5"
5		1) 5+1=6
		2) 6<=5, false		stop


iControlVar	iControlVar++<=5
		1) iControlVar<=5
		2) iControlVar inc by
0		1) 0<=5, true
		2) 0+1=1		print "Hello World, 1"
...
5		1) 5<=5, true
		2) 5+1=6		print "Hello World, 6"
6		1) 6<=5, false
		2) 6+1=7		stop

 */

static int controlVariableLoop() {

	// loop 5 times
	int iControlVar = 0;
	while(iControlVar++ <= 5){
		// body of the loop
		cout << "Hello World count " << iControlVar << endl;
		// iControlVar=iControlVar+1;
	}
	cout << "End of loop, " << iControlVar << endl;
	// return 0;
}



