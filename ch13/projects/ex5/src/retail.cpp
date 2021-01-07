#include <iostream>
#include <cstring>

#include "retailItem.hpp"

using namespace std;

RetailItem::RetailItem(string d, double p, int u)
{
  description = d;
  price = p;
  unitsOnHand = u;
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