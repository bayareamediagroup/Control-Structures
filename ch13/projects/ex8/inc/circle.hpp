#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
  private:
    double pi;
    double radius;

  public:
    Circle();
    Circle(double);
    void setRadius(double);
    double getArea() const;
    double getRadius() const;
    double getDiameter() const;
    double getCircumference() const;
};

#endif
