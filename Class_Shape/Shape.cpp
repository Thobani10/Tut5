#include "Shape.h"


Shape::Shape(void)
{
}


Shape::~Shape(void)
{
}

void Shape::setName(string n)
{
	m_name = n;
}

string Shape::getName() const
{
	return m_name;
}
