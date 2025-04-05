#include "Point.hpp"


Point::Point():x(0),y(0){}

Point::Point(const Point&point):x(point.x),y(point.y){}

Point& Point::operator=(const Point &point)
{
   return (*this);
}

Point::~Point(){}

Point::Point(float x, float y): x(x), y(y) {}

float Point::getX() const { return this->x.toFloat(); }
float Point::getY() const { return this->y.toFloat(); }
