#include <iostream>
#include <string>
#include "BallPointPen.h"

using namespace std;

int main(){

    BallPointPen RedPen;
    RedPen.setColor("RED");
    RedPen.write("Anyone still there?");

    BallPointPen BluePen;
    BluePen.setColor("BLUE");
    BluePen.write("Say something if you are still following this example!");

    for(int i=0; i<10; i++) {
        //if (BluePen.getInkLevel()>0)
            BluePen.write("Let's try to use up all the ink!");
        //else
        //    RedPen.write("I detected the pen is out of ink, I will switch to another pen");
    }

    RedPen.write("I should be able to write!");
}

