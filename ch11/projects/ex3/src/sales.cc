#include <iostream>
#include <cstring>

#include "sales.h"

using namespace std;

int calculateTotal(const east_t *t)
{
    int sum = t->firstQuarter + t->secondQuarter + t->thirdQuarter + t->fourthQuarter;
    return sum;
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
    east_t east;

    cout << "What are the sales figures for each division?" << endl;
    salesFigures(&east);
    int sum = calculateTotal(&east);
    cout << "Sum: " << sum << endl;
}

/*
    Write a program that uses a structure to store the following data on a company division:
*/