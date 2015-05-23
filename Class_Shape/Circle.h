#pragma once
#include "Shape.h"

class Circle : public Shape
{
private:
	int radius;
public:
	Circle(void);
	Circle(int r, string m_name);
	~Circle(void);

	void setRadius(int r);
	int getRadius() const;

	/*overrides*/
	virtual double calcArea();
};

