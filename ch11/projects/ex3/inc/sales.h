#ifndef SALES_H
#define SALES_H

#define SIZE 4

typedef struct
{
    int firstQuarter;
    int secondQuarter;
    int thirdQuarter;
    int fourthQuarter;
} division_t;

int calculateAverage(const division_t *);
int calculateTotal(const division_t *);
void salesFigures(division_t *);
void displaySales();

#endif