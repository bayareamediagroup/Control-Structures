#include <iostream>
#include <cstring>

#include "inventory.hpp"

Inventory::Inventory()
{
  cost = 10;
  totalCost = 20;
  itemNumber = 30;
  quantity = 40;
}

Inventory::Inventory(double c, int i, int q)
{
  cost = c;
  itemNumber = i;
  quantity = q;
}

void Inventory::setItemNumber(int i)
{
  itemNumber = i;
}

void Inventory::setQuantity(int q)
{
  quantity = q;
}

void Inventory::setCost(double c)
{
  cost = c;
}

void Inventory::setTotalCost(int q, int c)
{
  totalCost = (q * c);
}

int Inventory::getItemNumber() const
{
  return itemNumber;
}

int Inventory::getQuantity() const
{
  return quantity;
}

double Inventory::getCost() const
{
  return cost;
}

double Inventory::getTotalCost() const
{
  return totalCost;
}
