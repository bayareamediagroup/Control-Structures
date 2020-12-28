#include <iostream>
#include <cstring>

#include "Car.h"

using namespace std;

void control_speed(Car &c)
{
    cout << "car speed: " <<  c.getSpeed() << endl;
}

int main(int argc, char **argv)
{
    Car car;
    Car *c = nullptr;
    c = &car;

    int i = 0, j = 0;

    cout << "The Car is idle at: " << c->getSpeed() << endl;

    while (i < 5)
    {
      c->accelerate();
      cout << "Accelerating..." << c->getSpeed() << endl;
      i += 1;
    }

    cout << "The Car is crusing at: " << c->getSpeed() << endl;

    while(j < 5)
    {
      cout << "Braking..." << c->getSpeed() << endl;
      c->brake();
      j += 1;
    }

    cout << "The Car is now at: " << c->getSpeed() << endl;

    control_speed(car);

    return 0;
}
