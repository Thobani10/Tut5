#pragma once
#include "Shape.h"

class Rectangle : public Shape
{
private:
	int height;
	int length;

public:
	Rectangle(void);
	Rectangle(int h, int b, string name);
	~Rectangle(void);

	void setHeight(int h);
	int getHeight()const;
	void setLength(int b);
	int getLength()const;

	virtual double calcArea();
};

