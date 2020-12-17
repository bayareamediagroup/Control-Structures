#include <iostream>
#include <cstring>

#include "sales.h"

using namespace std;

int calculateTotal(const division_t *c)
{
    int total = c->firstQuarter + c->secondQuarter + c->thirdQuarter + c->fourthQuarter;
    return total;
}

void salesFigures(division_t *s)
{
    cout << "First Quarter: ";
    cin >> s->firstQuarter;

    cout << "Second Quarter: ";
    cin >> s->secondQuarter;

    cout << "Third Quarter: ";
    cin >> s->thirdQuarter;

    cout << "Fourth Quarter: ";
    cin >> s->fourthQuarter;
}

int main()
{
    static int i = 0, sum = 0;
    division_t location[SIZE];

    const char *division[SIZE] = {"East", "West", "South", "North"};

    do
    {
        cout << "What are the sales figures for the " << division[i] << " division." << endl;
        salesFigures(&location[i]);
        sum = calculateTotal(&location[i]);
        cout << "Sum: " << sum << endl;
        i++;
    } while (i < SIZE);
}

/*
    Write a program that uses a structure to store the following data on a company division:
*/
