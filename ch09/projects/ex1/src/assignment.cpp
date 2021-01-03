#include <iostream>

#include "all.h"

using namespace std;

void createDynamicMemory(int &size)
{
    int average = 0, *ptr = nullptr, total = 0;

    /* create an array of dynamic arrays */
    ptr = new int[size];

    if (ptr == nullptr)
    {
        fprintf(stderr, "there has been an error accessing memory");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < size; i++)
    {
        cout << "Day " << i << " ";
        cin >> ptr[i];
    }

    for (int k = 0; k < size; k++)
    {
        total += ptr[k];
        cout << "Total: " << total << endl;
    }

    average = (total / size);

    cout << "The average size: " << average << endl;
    /* free the array of memory & assign the pointer to nullptr */
    delete[] ptr;
    ptr = nullptr;
}

int main(void)
{
    int elements = 0;

    cout << "How many Dynamic integers would you like to create? ";

    cin >> elements;

    createDynamicMemory(elements);

    return 0;
}