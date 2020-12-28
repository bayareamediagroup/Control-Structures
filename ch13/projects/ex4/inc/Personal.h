#ifndef PERSONAL_H
#define PERSONAL_H

#include <cstring>

/* Name: class specification file */

using namespace std;

class Personal
{
    private:
        string name;
        string address;
        int phone;

    public:
        void setName(string);
        void setAddress(string);
        void setPhone(int);

        string getName() const;
        string getAddress() const;
        int getPhone() const;
};

#endif
