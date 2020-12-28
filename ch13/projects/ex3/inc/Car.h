#ifndef CAR_H
#define CAR_H

using namespace std;

class Car
{
    private:
      int speed;
      int year;
      string make;

    public:
      Car();

      int getSpeed() const;
      int getYear() const;
      string getMake() const;
      int accelerate();
      int brake();
};

#endif
