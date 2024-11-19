#include <iostream>
#include <string>

using namespace std;

class InkCartridge {
public:
    int getInkLevel();
    void setInkLevel(int pLevel);
    string getColor();
    void setColor(string pColor);
private:
    int inkLevel=100;
    string color = "Blue";
};
