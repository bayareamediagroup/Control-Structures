#ifndef DATE_H
#define DATE_H

class CDate
{
  /* member variables */
  private:
    int day;
    int month;
    int year;

    /* member functions */
  public:
    void setDay(int);
    void setMonth(int);
    void setYear(int);
    int getDay() const;
    int getMonth() const;
    int getYear() const;
};

/* mutators(setter) */
void
CDate::setDay(int d)
{
  day = d;
}

void
CDate::setMonth(int m)
{
  month = m;
}

void
CDate::setYear(int y)
{
  year = y;
}

/* accessors(getter) */
int
CDate::getDay() const
{
  return day;
}

int
CDate::getMonth() const
{
  return month;
}

int
CDate::getYear() const
{
  return year;
}

#endif

/* Design a class called Date.
 *
 * The class should store a date in three integers: month, day, and year.
 *
 * There should be member functions to print the date in the following forms:
 * 12/25/2014
 * December 25, 2014
 * 25 December 2014
 * */
