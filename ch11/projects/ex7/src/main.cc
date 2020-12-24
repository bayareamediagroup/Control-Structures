#include <iostream>
#include <iomanip>
#include <cstring>
#include <cctype>

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

static void display(const customer_t *item, int *count)
{
  int i;
  //count--;
  for(i = 0; i < *count; i++)
  {
    cout << "===>" << item[i].name << setw(10) << item[i].address << setw(10) << item[i].street << endl;
  }
}

int main(void)
{
  int i = 0, choice = 0;
  int *ptr = 0;

  ptr = &i;

  customer_t customer[SIZE];

  do {
    cout << "Customer Service Menu"<< endl;
    cout << "1. Enter Information" << endl;
    cout << "2. Update Information" << endl;
    cout << "3. Display Information" << endl;

    cout << "Menu Option: ";

    cin >> choice;
    /*
    if(!isdigit(choice)) {
      cout << "That's not an integer!" << endl;
      return 1;
    }
    */

    if(choice == 1) {
      enter(&customer[i]);
      i++;
    } else if(choice == 2) {
      update();
      i++;
    } else if(choice == 3)  {
      display(customer, ptr);
    }
  } while(i < SIZE);

  return 0;
}
