/*
 * BranchLogic.h
 *
 *  Created on: Feb 18, 2024
 *      Author: chang
 */


#include <iostream>
using namespace std;


static void testBranch(){
	int i = 0;
	//while(i < 16) {
	do {
		// branch((i & 8) >> 3, (i & 4) >> 2, (i & 2) >> 1, i & 1);
		cout << "i=" << i << endl;
		i++;
	} while(i < 16);
}

static bool branch(bool bP1, bool bP2, bool bP3, bool bP4) {
	// output the inputs of boolean variables
	cout << "bP1: " << bP1 << " bP2: " << bP2 << " bP3: " << bP3 << " bP4: " << bP4;

	// return the compound boolean expression, (!(p1 || p2) && p3) && p4
	bool bReturn = (!(bP1 || bP2) && bP3) && bP4;

	cout << ", bReturn: " << bReturn << endl;
	return bReturn;
}
