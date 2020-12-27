#include <cstring>
#include <iomanip>
#include <iostream>

#include "Employee.h"

/* How to pass by reference in C++ */
void doubleId(int &id)
{
  id *= 2;
}

int main(void)
{
  Employee employee("", 0, "", "");
  Employee emp1("Susan Meyers", 47899, "Accounting", "Vice President");
  /*
  Employee emp2("Mark Jones", 39119, "Accounting", "Programmer");
  Employee emp3("Joy Rogers", 81774, "Manufacturing", "Engineer");
  */

  cout << emp1.getName() << "\t" <<  emp1.getId() << "\t" <<  emp1.getDepartment() << "\t" << emp1.getPosition() << endl;

  /*
  employee.setId(2090);

  cout << employee.getId() << endl;

  int myVal = 444;
  cout << "myVal: "  << " " << myVal << endl;

  doubleId(myVal);

  cout << "myVal: "  << " " << myVal << endl;
  */

  return 0;
}

/* Once you have written the class, write a seperate program that creates three Employees objects
 * to hold the following data:
 *
 * Name     ID    Department Position
 * SOME NAME | SOME ID | SOME DEPT | SOME POSITIOn
 * */
