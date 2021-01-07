#include <iostream>
#include <cstring>

#include "inventory.hpp"

using namespace std;

void getInventory(Inventory *in)
{
  cout << in->getCost() << endl;
}

int main(void)
{
  const int SIZE = 4;

  Inventory inventory[] = {
      Inventory(32.41, 73, 25),
      Inventory(58.13, 83, 69),
      Inventory(32.54, 43, 85)};

  cout << inventory[0].getItemNumber() << endl;
  cout << inventory[1].getItemNumber() << endl;
  cout << inventory[2].getItemNumber() << endl;

  Inventory *inv = inventory;
  cout << "inv->getItemNumber(): " << inv->getItemNumber() << endl;

  /*
  inv->getCost();

  getInventory(inv);
  */

  /*
  cout << inv->getCost() << endl;
  cout << inv->getItemNumber() << endl;
  cout << inv->getQuantity() << endl;
  */

  return 0;
}
