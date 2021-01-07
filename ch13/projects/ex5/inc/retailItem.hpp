#ifndef RETAIL_H
#define RETAIL_H

using namespace std;

class RetailItem
{
private:
  double price;
  int unitsOnHand;
  string description;

public:
  RetailItem();
  RetailItem(string, double, int);
  ~RetailItem();
  string setDescription(string);
  double setPrice(double);
  int setUnitsOnHand(int);

  string getDescription() const;
  double getPrice() const;
  int getUnitsOnHand() const;
};

#endif
