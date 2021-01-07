#include <iostream>
#include <cstring>

#include "retailItem.hpp"

int main(void)
{
  RetailItem *retailItem = nullptr;
  retailItem = new RetailItem("Coat", 32.00, 4);

  cout << "Description: " << retailItem->getDescription() << endl;
  cout << "Price: " << retailItem->getPrice() << endl;
  cout << "Units On Hand: " << retailItem->getUnitsOnHand() << endl;

  return 0;
}
