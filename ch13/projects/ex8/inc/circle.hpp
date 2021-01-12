#ifndef CIRCLE_H
#define CIRCLE_H

using namespace std;

class Circle
{
  private:
    double pi;
    double radius;
    double calcCircumference(double r)
    {
      return ((getPi() * r) * 2);
    }

    double calcArea()
    {
      return (getPi() * (getRadius() * getRadius()));
    }

    double getPi()
    {
      pi = 3.14159;
      return pi;
    }

  public:
    Circle();
    Circle(double);
    void setRadius(double);
    double getArea();
    double getRadius() const;
    double getDiameter() const;
    double getCircumference();
    ~Circle();
};

#endif
