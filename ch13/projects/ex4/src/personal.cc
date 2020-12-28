#include <iostream>
#include <cstring>

#include "Personal.h"

using namespace std;

/* Name: class implementation file */

void Personal::setName(string n)
{
    name = n;
}

void Personal::setAddress(string a)
{
    address = a;
}

void Personal::setPhone(int p)
{
    phone = p;
}

string Personal::getName() const
{
    return name;
}

string Personal::getAddress() const
{
    return address;
}

int Personal::getPhone() const
{
    return phone;
}
