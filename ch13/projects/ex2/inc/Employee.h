#ifndef EMPLOYEE_H
#define EMPLOYEE_H

using namespace std;

/* class specification file */

class Employee
{
  private:
    int idNumber;
    string department;
    string name;
    string position;

  public:
    /* constructor */
    Employee();

    string getName() const
    {
      return name;
    }
};

#endif
