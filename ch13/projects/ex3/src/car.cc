#include <iostream>
#include <cstring>

#include "Car.h"

using namespace std;

Car::Car()
{
    speed = 0;
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
