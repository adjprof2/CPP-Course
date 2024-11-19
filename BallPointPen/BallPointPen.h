#include "InkCartidge.h"

class BallPointPen{
public:
    void setColor(string color);
    void write(string msg);
private:
    InkCartridge iCartridge;
    void doSomething();
};
