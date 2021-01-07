#include <iostream>
#include <cstring>

#include "retailItem.hpp"

using namespace std;

/* Default Constructor */
RetailItem::RetailItem()
{
  description = "";
  price = 0.0;
  unitsOnHand = 0;
}

RetailItem::RetailItem(string d, double p, int u)
{
  description = d;
  price = p;
  unitsOnHand = u;
}

RetailItem::~RetailItem()
{
  cout << "Destructor Called" << endl;
}

string RetailItem::setDescription(string d)
{
  description = d;
}

double RetailItem::setPrice(double p)
{
  price = p;
}

int RetailItem::setUnitsOnHand(int u)
{
  unitsOnHand = u;
}

string RetailItem::getDescription() const
{
  return description;
}

double RetailItem::getPrice() const
{
  return price;
}

int RetailItem::getUnitsOnHand() const
{
  return unitsOnHand;
}