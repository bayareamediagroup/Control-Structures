#include <iostream>
#include <cstring>

#include "sales.h"

using namespace std;

int calculateTotal(const east_t *t)
{
    int s = t->firstQuarter + t->secondQuarter + t->thirdQuarter + t->fourthQuarter;
    return s;
}

void salesFigures(east_t *east)
{
    cout << "First Quarter: ";
    cin >> east->firstQuarter;

    cout << "Second Quarter: ";
    cin >> east->secondQuarter;

    cout << "Third Quarter: ";
    cin >> east->thirdQuarter;

    cout << "Fourth Quarter: ";
    cin >> east->fourthQuarter;
}

int main()
{
    int sum = 0;
    east_t east;
    east_t west;
    /*
    east_t south;
    east_t north;
    */

    cout << "What are the sales figures for each division?" << endl;
    salesFigures(&east);
    sum = calculateTotal(&east);
    cout << "Sum: " << sum << endl;

    cout << "What are the sales figures for each division west?" << endl;

    salesFigures(&west);
    sum = calculateTotal(&west);
    cout << "Sum: " << sum << endl;
}

/*
    Write a program that uses a structure to store the following data on a company division:
*/
