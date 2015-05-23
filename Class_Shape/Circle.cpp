#include "Circle.h"


Circle::Circle(void)
{
}

Circle::Circle(int r, string name)
{
	setRadius(r);
	setName(name);
}

Circle::~Circle(void)
{
}

void Circle::setRadius(int r)
{
	radius = r;
}

int Circle::getRadius() const
{
	return radius;
}

/*overrides*/
double Circle::calcArea()
{
	return 3.14 * radius * radius; /*pi(r^2)*/
}
