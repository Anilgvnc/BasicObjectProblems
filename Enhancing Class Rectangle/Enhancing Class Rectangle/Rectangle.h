#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Point.h"

class Rectangle {
public:
	explicit Rectangle(Point = Point(0, 1.0), Point = Point(1, 1), Point = Point(1.0, 0), Point = Point(0, 0));
	void setCoord(Point, Point, Point, Point);
	double getLength() const;
	double getWidth() const;
	double perimeter() const;
	double area() const;
	bool square() const;
private:
	Point point1;
	Point point2;
	Point point3;
	Point point4;
};
#endif