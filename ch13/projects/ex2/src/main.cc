#include <cstring>
#include <iomanip>
#include <iostream>

#include "Employee.h"

int main(void)
{
  Employee employee("patrick", 3323, "engineering");

  cout << "Welcome to the employee portal" << endl;

  cout << "Your Name: " << employee.getName() << endl;

  return 0;
}
