#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
public:
	explicit Rectangle(double = 1.0, double = 1.0);
	void setlenght(double l);
	void setwidth(double w);
	double getlenght() const;
	double getwidth() const;
	double perimeter() const;
	double area() const;
private:
	double lenght;
	double width;
};
#endif