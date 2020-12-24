#ifndef CUSTOMER_H
#define CUSTOMER_H

using namespace std;

typedef struct {
    double account_balance;
    int address;
    int last_payment;
    int zip;
    string city;
    string name;
    string state;
    string street;
} customer_t;

#endif
