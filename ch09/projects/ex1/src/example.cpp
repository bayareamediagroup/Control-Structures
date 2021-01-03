#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(void)
{
    const int INDEX_SIZE = 3;

    int set[INDEX_SIZE] = {32, 54, 89};

    int *ptrSet = set;

    cout << *ptrSet << endl;

    return 0;
}
