#include "BallPointPen.h"

void BallPointPen::doSomething(){
    cout << "Do Something!" << endl;
}

void BallPointPen::setColor(string color){
    iCartridge.setColor(color);
}

// member function body for BallPointPen::write
// with the member function of the BallPointPen, it has access to member attributes of the BallPointPen
void BallPointPen::write(string msg){
    //iCartridge.setColor(color);
    if (iCartridge.getInkLevel()<=0){
        doSomething();  // although doSomething is private, it can be invoked by other member function of the same class.
        cout << "Out of ink!  Time to buy a new one. for color in " << iCartridge.getColor() << endl;
        return;
    } else {
        iCartridge.setInkLevel(iCartridge.getInkLevel()-10);   //inkLevel is the member attribue
        cout << "Writing Message: " << msg << " in " << iCartridge.getColor() << endl;  // color is the member attribute
    }
}
