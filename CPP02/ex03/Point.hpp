#ifndef POINT_HPP
#define POINT_HPP
#include "Fixed.hpp"

class Point
{
private:
     Fixed const x;
     Fixed const y;
public:
    Point();
    ~Point();
    Point(const Point&point);
    Point &operator=(const Point&point);
    Point(float const x, float const y);
    float getX() const;
    float getY() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
