#include <iostream>
#include <cstring>
#include <cstdlib>

#include "circle.hpp"

Circle::Circle()
{
  cout << "Circle Constructor" << endl;
}

Circle::Circle(double r)
{
  radius = r;
}

void Circle::setRadius(double r)
{
  radius = r;
}

double Circle::getArea()
{
  return calcArea();
}

double Circle::getRadius() const
{
  return radius;
}

double Circle::getDiameter() const
{
  return (radius * 2);
}

double Circle::getCircumference()
{
  return calcCircumference(43.3);
}

Circle::~Circle()
{
  cout << "Circle Destructor" << endl;
}
