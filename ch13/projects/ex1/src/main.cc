#include <iostream>
#include <iomanip>
#include <cstring>

#include "date.h"

using namespace std;

int main(void)
{
  CDate cdate;

  cdate.setDay(26);
  cdate.setMonth(12);
  cdate.setYear(2021);

  cout << cdate.getDay() << "/"  << cdate.getMonth() << "/" << cdate.getYear() << endl;

  return 0;
}
