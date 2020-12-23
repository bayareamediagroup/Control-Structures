#include <iostream>
#include <iomanip>
#include <cstring>

#include "customer.h"

#define SIZE 10

void enter()
{
  cout << "Enter..." << endl;
}

void update()
{
  cout << "Update..." << endl;
}

void display()
{
  cout << "Display..." << endl;
}

void menu()
{
  int choice = 0;

  cout << "Customer Service Menu"<< endl;
  cout << "1. Enter Information" << endl;
  cout << "2. Update Information" << endl;
  cout << "3. Display Information" << endl;

  cout << "Menu Option: ";

  cin >> choice;

  switch(choice) {
    case 1: enter();
            break;
    case 2: update();
            break;
    case 3: display();
            break;
    default:
            cout << "That's not an option" << endl;
  }
}

int main(void)
{
  customer_t customer[SIZE];

  int i = 0;

  while(i < 3) {
    menu();
    i += 1;
  }

  return 0;
}
