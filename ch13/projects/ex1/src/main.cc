#include <iostream>
#include <iomanip>
#include <cstring>

#include "date.h"

using namespace std;

void display(const CDate *d)
{
    cout << "Your Birthday is: " << d->getDay() << endl;
}

int main(void)
{
  CDate cdate;
  CDate *dte = nullptr;

  dte = &cdate;

  cdate.setDay(26);
  cdate.setMonth(12);
  cdate.setYear(2021);

  cout << cdate.getDay() << "/"  << cdate.getMonth() << "/" << cdate.getYear() << endl;

  display(dte);

  int i = 0;
  int bday = 0;

  while(i < 3)
  {
    cout << "What day is your birthday? ";

    cin >> bday;

    dte->setDay(bday);

    cout << "Your Birthday is: " << dte->getDay() << endl;

    i += 1;
  }

  return 0;
}
