#include <iostream>
#include <stdexcept>
#include "Point.h"
#include "Rectangle.h"
using namespace std;

int main() {
	Point a{ 1.0, 1.0 };
	Point b{ 5.0, 1.0 };
	Point c{ 5.0, 3.0 };
	Point d{ 1.0, 3.0 };
	Point e{ 0.0, 0.0 };
	Point f{ 1.0, 0.0 };
	Point g{ 1.0, 1.0 };
	Point h{ 0.0, 1.0 };

	Rectangle r1{ d, c, b, a};
	cout << "Rectangle 1 : " << endl;
	cout << "Lenght= " << r1.getLength() << endl;
	cout << "Width= " << r1.getWidth() << endl;
	cout << "Perimeter= " << r1.perimeter() << endl;
	cout << "Area= " << r1.area() << endl;
	cout << "The rectangle " << (r1.square() ? "is" : "is not") << " a square." << endl;

	Rectangle r2{ e, f, g, h };
	cout << "\nRectangle 2 : " << endl;
	cout << "Lenght= " << r2.getLength() << endl;
	cout << "Width= " << r2.getWidth() << endl;
	cout << "Perimeter= " << r2.perimeter() << endl;
	cout << "Area= " << r2.area() << endl;
	cout << "The rectangle " << (r2.square() ? "is" : "is not") << " a square." << endl;


	return 0;
}