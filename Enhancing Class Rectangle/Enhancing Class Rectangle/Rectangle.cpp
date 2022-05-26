#include "Point.h"
#include <cmath>
#include <iomanip>
#include "Rectangle.h"
#include <stdexcept>
using namespace std;

Rectangle::Rectangle(Point a, Point b, Point c, Point d)
{
	setCoord(a, b, c, d);
}

void Rectangle::setCoord(Point p1, Point p2, Point p3, Point p4)
{
	if (!(p1.getY() == p2.getY() && p1.getX() == p4.getX() && p2.getX() == p3.getX() && p3.getY() == p4.getY()))
	{
		throw invalid_argument("Coordinates do not form a rectangle!\n");
	}
	point1 = p1;
	point2 = p2;
	point3 = p3;
	point4 = p4;
}

double Rectangle::getLength() const
{
	double side1{ fabs(point4.getY() - point1.getY())};
	double side2{ fabs(point2.getX() - point1.getX()) };
	double length{side1 > side2 ? side1 : side2};
	return length;
}

double Rectangle::getWidth() const
{
	double side1{ fabs(point4.getY() - point1.getY()) };
	double side2{ fabs(point2.getX() - point1.getX()) };
	double width{ side1 < side2 ? side1 : side2 };
	return width;
}

double Rectangle::perimeter() const
{
	return (getLength() + getWidth()) * 2;
}

double Rectangle::area() const
{
	return getLength() * getWidth();
}

bool Rectangle::square() const
{
	return getLength() == getWidth();
}
