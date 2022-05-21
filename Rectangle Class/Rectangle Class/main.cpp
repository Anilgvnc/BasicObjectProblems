#include <stdexcept>
#include <iostream>
#include <iomanip>
#include "Rectangle.h"
using namespace std;

int main() {
	Rectangle a;
	Rectangle b{ 2.0, 6.0 };
	cout << fixed;
	cout << setprecision(1);
	//print a obj;
	cout << "Rectangle a lenght & width: " << a.getlenght() << "\t" << a.getwidth() << " perimeter and area of rectangle a: " << a.perimeter() << "\t" << a.area() << endl;
	cout << "Rectangle b lenght & width: " << b.getlenght() << "\t" << b.getwidth() << " perimeter and area of rectangle b: " << b.perimeter() << "\t" << b.area() << endl;
	//try to create a rectangle with invalid arguments
	try
	{
		Rectangle c{ 59.6, 496.3 };
	}
	catch (invalid_argument& e)
	{
		cout << "\nException: " << e.what() << endl;
	}

	return 0;
}