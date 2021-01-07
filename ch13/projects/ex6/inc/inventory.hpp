#ifndef INVENTORY_H
#define INVENTORY_H

class Inventory
{
    private:
        double cost;
        double totalCost;
        int itemNumber;
        int quantity;

    public:
        Inventory();
        Inventory(double, int, int);

        void setItemNumber(int);
        void setQuantity(int);
        void setCost(double);
        void setTotalCost(int, int);

        int getItemNumber() const;
        int getQuantity() const;
        double getCost() const;
        double getTotalCost() const;
};

#endif
