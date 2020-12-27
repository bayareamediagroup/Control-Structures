#include <iostream>

#include "Employee.h"

using namespace std;

Employee::Employee(string name, int id, string dept)
{
  name = name;
  id = id;
  department = dept;
  cout << "Employee Constructor Called" << endl;
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
