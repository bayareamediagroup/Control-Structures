#include <iostream>
#include <cstring>

#include "inventory.hpp"

Inventory::Inventory()
{
  cost = 0.0;
  totalCost = 0.0;
  itemNumber = 0;
  quantity = 0;
}

Inventory::Inventory(double cost, int item, int qty)
{
  itemNumber = item;
  cost = cost;
  quantity = qty;
}

void Inventory::setItemNumber(int itemNumber)
{
  itemNumber = itemNumber;
}

void Inventory::setQuantity(int quantity)
{
  quantity = quantity;
}

void Inventory::setCost(double cost)
{
  cost = cost;
}

void Inventory::setTotalCost(int quantity, int cost)
{
    totalCost = (quantity * cost);
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
