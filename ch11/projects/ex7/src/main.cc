#include <iostream>
#include <iomanip>
#include <cstring>

#include "customer.h"

#define SIZE 10

static void enter(customer_t *e)
{
  cout << "Name: ";

  cin.ignore();
  getline(cin, e->name);

  cout << "Address: ";
  cin >> e->address;

  cout << "Street: ";
  cin >> e->street;
}

static void update()
{
  cout << "Update..." << endl;
}

static void display(const customer_t *item, int count)
{
  int i;
  for(i = 0; i <= count; i++)
  {
    cout << "===>" << item[i].name << setw(10) << item[i].address << setw(10) << item[i].street << endl;
  }
}
/*
static void menu(customer_t *c)
{
  int choice = 0;

  cout << "Customer Service Menu"<< endl;
  cout << "1. Enter Information" << endl;
  cout << "2. Update Information" << endl;
  cout << "3. Display Information" << endl;

  cout << "Menu Option: ";

  cin >> choice;

  switch(choice) {
    case 1: enter(c);
            break;
    case 2: update();
            break;
    case 3: display(c);
            break;
    default:
            cout << "That's not an option" << endl;
  }
}
*/

int main(void)
{
  customer_t customer[SIZE];

  int i = 0;
  int choice = 0;

  do {

    cout << "Customer Service Menu"<< endl;
    cout << "1. Enter Information" << endl;
    cout << "2. Update Information" << endl;
    cout << "3. Display Information" << endl;

    cout << "Menu Option: ";

    cin >> choice;

    switch(choice) {
      case 1: enter(&customer[i]);
              break;
      case 2: update();
              break;
      case 3: display(customer, i);
              break;
      default:
              cout << "That's not an option" << endl;
    }
    i++;
  } while(i < 10);

  return 0;
}
