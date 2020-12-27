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
    /* constructor */
    Employee(string n, int i, string d);
    /* A constructor that accepts the following values as arguments and assigns them to
     * the appropriate member variables: employee's name, employee's ID number, department
     * and position.
     * */

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
