#include <iostream>
#include <cstring>

#include "retailItem.hpp"

void createItem(const RetailItem *item, string *d, double p, int u)
{
  RetailItem *retailItem1 = nullptr;
}

int main(void)
{
  RetailItem *retailItem1 = nullptr;

  RetailItem *retailItem2 = nullptr;
  RetailItem *retailItem3 = nullptr;

  retailItem1 = new RetailItem("Coat", 52.21, 4);

  retailItem1->setDescription("Shirt");
  retailItem1->setPrice(88.83);
  retailItem1->setUnitsOnHand(6);

  cout << "Description"
       << "Price"
       << "Units" << endl;
  cout << " " << retailItem1->getDescription() << " " << retailItem1->getPrice() << " " << retailItem1->getUnitsOnHand() << endl;

  string str("hello");
  return 0;
}
