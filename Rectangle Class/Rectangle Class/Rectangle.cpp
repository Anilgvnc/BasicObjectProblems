#include <stdexcept>
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle(double l, double w) {
	setlenght(l);
	setwidth(w);
}

void Rectangle::setlenght(double l) {
	if (l <= 0 || l > 20.0) {
		throw invalid_argument("Lenght must be l > 0 and l < 20");
	}
	lenght = l;
}

void Rectangle::setwidth(double w) {
	if (w <= 0 || w > 20.0)
	{
		throw invalid_argument("Width must be w > 0 and w < 20");
	}
	width = w;
}

double Rectangle::getlenght() const {
	return lenght;
}

double Rectangle::getwidth() const {
	return width;
}

double Rectangle::perimeter() const {
	return (lenght + width) * 2;
}

double Rectangle::area() const {
	return lenght * width;
}