#include "Point.h"
#include <stdexcept>
using namespace std;

Point::Point(double xCoord, double yCoord) 
	: x{ xCoord }, y{ yCoord } {
}

void Point::setX(double xCoord) {
	if (xCoord < 0 || xCoord > 20)
	{
		throw invalid_argument("x must be >= 0 and < 20.");
	}
	xCoord = x;
}

void Point::setY(double yCoord) {
	if (yCoord < 0 || yCoord > 20)
	{
		throw invalid_argument("y must be >= 0 and < 20.");
	}
	yCoord = y;
}

double Point::getX() const
{
	return x;
}

double Point::getY() const
{
	return y;
}

