#include <iostream>
#include <cstring>

#include "Car.h"

using namespace std;

void Car::setSpeed(int s)
{
    speed = s;
}

void Car::setYear(int y)
{
    year = y;
}

void Car::setMake(string m)
{
    make = m;
}

int Car::getSpeed() const
{
    return speed;
}

int Car::getYear() const
{
    return year;
}

string Car::getMake() const
{
    return make;
}

int Car::accelerate()
{
    speed += 5;
}

int Car::brake()
{
    speed -= 5;
}
