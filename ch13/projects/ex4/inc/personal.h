#ifndef PERSONAL_H
#define PERSONAL_H

class Personal
{
    private:
        string name;
        string address;
        int phone;

    public:
        void setName(string);
        void setAddress(string);
        int setPhone(int);

        string getName() const;
        string getAddress() const;
        int getPhone() const;
};

#endif
