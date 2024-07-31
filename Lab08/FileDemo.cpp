#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

struct Breakfast {
	string name;
	double price;
};

int main(){
	fstream file("breakfasts.txt", ios::in);

	Breakfast breakfast[20];
	int itemCount = 0;
	int lineCount = 0;
	if (file.is_open()) {
		string line;
		while (getline(file, line)) {
			cout << line << endl;
			// 0, 2, 4, 6, 8, 10, 12, 14, 16, 18
			if (lineCount%2 == 0)
				breakfast[itemCount].name = line;
			else {
				breakfast[itemCount].price = stod(line);
				itemCount++;
			}
			lineCount++;
		}
		file.close();
	} else {
		cout << "Unable to open file" << endl;
	}

	cout << "Breakfast menu" << endl;
	cout << "Item\t\tPrice" << endl;
	for (int i = 0; i < itemCount; i++) {
		cout << setw(15) << breakfast[i].name << "\t" << breakfast[i].price << endl;
	}
}
