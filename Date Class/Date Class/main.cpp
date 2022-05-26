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
	int d, m, y;
	cout << "Enter today's date: ";
	cin >> d >> m >> y;
	date.setday(d);
	date.setmonth(m);
	date.setyear(y);

	cout << "\n\nModified date: ";
	date.displayDate();

	return 0;
}