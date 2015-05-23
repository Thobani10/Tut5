#include "Rectangle.h"


Rectangle::Rectangle(void)
{
}

Rectangle::Rectangle(int h, int l, string name)
{
	setHeight(h);
	setLength(l);
	setName(name);
}


Rectangle::~Rectangle(void)
{
}

void Rectangle::setHeight(int h)
{
	height = h;
}

int Rectangle::getHeight()const
{
	return height;
}

void Rectangle::setLength(int l)
{
	length = l;
}

int Rectangle::getLength()const
{
	return length;
}

double Rectangle::calcArea()
{
	return length * height;
}
