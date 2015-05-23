//THOBANI MABASO(212535063)



#include <iostream>
using namespace std;

//create abstract base class Shape
class Shape
{
public:
	//Shape(int b; int h; int r);//constructor
	void setDimensions(int, int, int);
	virtual void printShape() = 0;
	virtual float area() = 0;
protected:
	int base;
	int height;
	int radius;
	const float pi = 3.14159;
};//end class Shape



class Rectangle :public Shape
{
	void printShape();//virtual function
	float area();//virtual function
};//end class Rectangle



void Rectangle::printShape()
{
	cout << "RECTANGLE" << endl;
}//end function printShape()


float Rectangle::area()
{
	return base*height;
}//end function area()


class Circle :public Shape
{
	void printShape(); //virtual function
	float area(); //virtual function
};

//displays the name of the shape
void Circle::printShape()
{
	cout << "CIRCLE" << endl;
}

//calculates the area of the circle
float Circle::area()
{
	return pi*radius*radius;
}

//derived class Triangle
class Triangle :public Shape //inherits Shape
{
	void printShape();
	float area();
};

//class Triangle implementaions
void Triangle::printShape()
{
	cout << "TRIANGLE" << endl;
}

//calculates the area for the Triangle
float Triangle::area()
{
	return base*height / 2;
}


//source code or test code
int main()
{
	const int numShape = 3;
	//Shape myShape(2,5,6);
	Shape *myShapePtr[numShape];
	Rectangle myRectanglePtr;
	Circle myCirclePtr;
	Triangle myTrianglePtr;

	myShapePtr[0] = &myRectanglePtr;
	myShapePtr[1] = &myCirclePtr;
	myShapePtr[2] = &myTrianglePtr;

	myShapePtr[0]->setDimensions(2, 5, 6);
	myShapePtr[0]->printShape();
	cout << "The area of the rectangle is:" << myShapePtr[0]->area();

	myShapePtr[1]->setDimensions(4, 5, 6);
	myShapePtr[1]->printShape();
	cout << "The area of he circle is:" << myShapePtr[1]->area();

	myShapePtr[2]->printShape();
	cout << "The area of the triangle is:" << myShapePtr[2]->area();

}//end main
