#ifndef SALES_H
#define SALES_H

typedef struct East_t
{
    int firstQuarter;
    int secondQuarter;
    int thirdQuarter;
    int fourthQuarter;
} east_t;

int calculateAverage(const east_t *);
int calculateTotal(const east_t *);
void salesFigures(east_t *);
void displaySales();

#endif