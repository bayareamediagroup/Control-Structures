#include <iostream>
#include <cstring>
#include <cstdlib>

#include "circle.hpp"

using namespace std;

int main(void)
{
  double choice;
    Circle circle;
    Circle *c = nullptr;
    c = &circle;

    cout << "Enter the circle's radius " << endl;
    cin >> choice;

    c->setRadius(choice);

    cout << "Diameter: " << c->getDiameter() << endl;
    cout << "Area: " << c->getArea() << endl;
    cout << "Circumference: " << c->getCircumference() << endl;
    cout << "Radius: " << c->getRadius() << endl;

  return 0;
}
