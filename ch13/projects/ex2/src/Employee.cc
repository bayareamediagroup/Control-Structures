#include <iostream>

#include "Employee.h"

using namespace std;

Employee::Employee(string n, int i, string d)
{
  name = n;
  id = i;
  department = d;
}

int Employee::setId(int id)
{
    id = id;
}

string Employee::setName(string n)
{
    name = n;
}

string Employee::setDepartment(string dept)
{
    department = dept;
}

string Employee::setPosition(string p)
{
    position = p;
}

int Employee::getId() const
{
  return id;
}

string Employee::getName() const
{
  return name;
}

string Employee::getDepartment() const
{
  return department;
}

string Employee::getPosition() const
{
  return position;
}
