#include <iostream>
#include <cstring>

#include "Car.h"

using namespace std;

int main(int argc, char **argv)
{
    Car car;
    Car *c = nullptr;
    c = &car;

    cout << "Speed: " << c->getSpeed() << endl;
    cout << "Year: " << c->getYear() << endl;
    cout << "Accelerate 5 miles per hour 1: " << endl;
    c->accelerate();
    cout << "Speed: " << c->getSpeed() << endl;

    cout << "Accelerate 5 miles per hour 2: " << endl;
    c->accelerate();
    cout << "Speed: " << c->getSpeed() << endl;

    return 0;
}
