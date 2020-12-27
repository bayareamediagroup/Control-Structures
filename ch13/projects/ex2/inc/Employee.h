#ifndef EMPLOYEE_H
#define EMPLOYEE_H

using namespace std;

/* class specification file */

class Employee
{
  private:
    int id;
    string department;
    string name;
    string position;

  public:
    Employee(string n, int i, string d, string p);

    int setId(int id);
    string setName(string n);
    string setDepartment(string d);
    string setPosition(string p);

    int getId() const;
    string getName() const;
    string getDepartment() const;
    string getPosition() const;
};

#endif

/* A default constructor that assigns empty strings ("") to the name, department, and position member variables,
 * and 0 to the idNumber member variable. */
