#include <iostream>
#include <iomanip>
#include <cstring>

#include "date.h"

using namespace std;

int main(void)
{
  CDate cdate;
  CDate *dte = nullptr;

  dte = &cdate;

  cdate.setDay(26);
  cdate.setMonth(12);
  cdate.setYear(2021);

  cout << cdate.getDay() << "/"  << cdate.getMonth() << "/" << cdate.getYear() << endl;

  dte->setDay(9);

  cout << "Your Birthday is: " << dte->getDay() << endl;

  return 0;
}
