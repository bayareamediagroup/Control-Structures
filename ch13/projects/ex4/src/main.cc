#include <iostream>
#include <cstring>

#include "Personal.h"

using namespace std;

int main(void)
{
    Personal personal;
    Personal *p = nullptr;
    p = &personal;

    p->setName("Patrick");

    cout << "Government Name: " << p->getName() << endl;

    return 0;
}
