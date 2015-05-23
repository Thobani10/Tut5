#include <iostream>
#include <cstdlib>
#include "Circle.h"
#include "Rectangle.h"
#include "Shape.h"

using namespace std;

int main()
{
	Circle c(2, "circle");
	Rectangle r(10, 5, "rectagle");

	Shape *shapes[2] = { &r, &c };

	for (int i = 0; i < 2; i++)
	{
		cout << shapes[i]->getName() << "     Area     " << shapes[i]->calcArea() << endl;
	}

	system("pause");
	return 0;
}