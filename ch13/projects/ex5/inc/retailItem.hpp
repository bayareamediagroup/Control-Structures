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
    RetailItem(string, double, int);
    string setDescription(string);
    double setPrice(double);
    int setUnitsOnHand(int);

    string getDescription() const;
    double getPrice() const;
    int getUnitsOnHand() const;
};

#endif
