#include <iostream>
#include <cstring>

#include "inventory.hpp"

using namespace std;

void getInventory(Inventory *in)
{
  cout << in[2].getItemNumber() << endl;
  cout << in[1].getItemNumber() << endl;
  cout << in[0].getItemNumber() << endl;
}

int main(void)
{
  const int SIZE = 4;

  Inventory inventory[] = {
      Inventory(32.41, 73, 25),
      Inventory(58.13, 83, 69),
      Inventory(32.54, 43, 85)};

  Inventory *inv = nullptr;

  inv = inventory;

  for (int i = 0; i <= 2; i++)
  {
    cout << "inv[i].getItemNumber(): " << inv[i].getItemNumber() << " - " << inv[i].getCost() << " - " << inv[i].getQuantity() << endl;
  }

  getInventory(inv);

  return 0;
}