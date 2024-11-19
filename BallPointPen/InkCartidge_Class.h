#include "InkCartidge.h"

int InkCartridge::getInkLevel(){
    return inkLevel;
}

void InkCartridge::setInkLevel(int pLevel){
    if (pLevel < 0){
        cout << "setInkLevel can't less than zero!" << endl;
        return;
    }
    inkLevel = pLevel;
}

string InkCartridge::getColor(){
    return color;
}

void InkCartridge::setColor(string pColor){
    if (pColor == "Yellow"){
        cout << "I don't like the color of your choice!" << endl;
        return;
    }
    color = pColor;
}
