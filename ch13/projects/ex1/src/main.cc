#include <iostream>
#include <iomanip>
#include <cstring>

#include "date.h"

using namespace std;

int main(void)
{
  CDate cdate;

  dte.setDay(26);
  dte.setMonth(12);
  dte.setYear(2021);

  cout << cdate.getDay() << "/"  << cdate.getMonth() << "/" << cdate.getYear() << endl;

  return 0;
}
