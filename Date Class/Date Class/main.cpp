#include <iostream>
#include "date.h"
using namespace std;

int main() {
	date date(6, 01, 2002);

	cout << "Month: " << date.getmonth() << endl;
	cout << "Day: " << date.getday() << endl;
	cout << "Year: " << date.getyear() << endl;

	cout << "\n\nOriginal date : ";
	date.displayDate();

	//modify date
	date.setday(25);
	date.setmonth(01);
	date.setyear(1973);

	cout << "\n\nModified date: ";
	date.displayDate();

	return 0;
}