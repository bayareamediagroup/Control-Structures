#include <iostream>
#include <cstring>

#include "Car.h"

using namespace std;

static void control_speed(Car &c)
{
  int i = 0;
  while (i < 5)
  {
    c.accelerate();
    cout << "Accelerating..." << c.getSpeed() << endl;
    i += 1;
  }
  cout << "After accelerating, the Tesla is now crusing at " << c.getSpeed() << " mph." << endl;
}

int main(void)
{
  Car car;
  Car *c = nullptr;
  c = &car;

  int j = 0;

  cout << "The Tesla is sitting idle at " << c->getSpeed() << " mph." << endl;

  control_speed(car);

  while(j < 5)
  {
    cout << "Braking..." << c->getSpeed() << endl;
    c->brake();
    j += 1;
  }

  cout << "The Tesla is now sitting idle at " << c->getSpeed() << " mph." << endl;

  return 0;
}
