
#include "Point.hpp"

float ft_abs(float x)
{
	if (x >= 0)
		return (x);
	else
		return (x * -1);
}

static Fixed area(Point const a, Point const b, Point const c)
{
    	float x1 = a.getX();
	float x2 = b.getX();
	float x3 = c.getX();

	float y1 = a.getY();
	float y2 = b.getY();
	float y3 = c.getY();
	
	float result = ft_abs(((x1 * (y2 - y3)) + (x2 * (y3 - y1)) + (x3 * (y1 - y2))) / 2);

	return(result);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed totalArea = area(a, b, c);  
    Fixed area1 = area(a, b, point);
    Fixed area2 = area(b, c, point);
    Fixed area3 = area(a, point, c);

    if (area1 == 0 || area2 == 0 || area3 == 0)
        return false;

    if (totalArea == (area1 + area2 + area3))
        return true;

    return false;
}

