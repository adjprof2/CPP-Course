/*
 * Main.cpp
 *
 *  Created on: Feb 18, 2024
 *      Author: chang
 */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/*

 */

void filedemo() {

	fstream file;
	//file.open("roster.txt", ios::in);
	file.open("Number.txt", ios::out | ios::in);

    if (!file) {
		cout << "File not found" << endl;
	}

    // Read the roster file
    /*
    string rosterLine;

	while (getline(file, rosterLine)) {
		cout << rosterLine << endl;
	}*/

    // Write to the file, Number.txt
    /*
    for (int i = 1000; i <= 1100; i++) {
		file << i << endl;
    }*/
    while (!file.eof()) {
    	string line;
    	file >> line;
    	cout << line << endl;
    }

    cout << "End of File" << endl;
    file.close();

}



