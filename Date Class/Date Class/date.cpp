#include <iostream>
#include "date.h"
using namespace std;

date::date(int d, int m, int y) 
: day(d), month(m), year(y) {
	if (month < 0 && month > 12)
	{
		month = 1;
	}
}
void date::setyear(int y) {
	year = y;
}
int date::getyear() {
	return year;
}
void date::setmonth(int m) {
	month = m;
}
int date::getmonth() {
	return month;
}
void date::setday(int d) {
	day = d;
}
int date::getday() {
	return day;
}
void date::displayDate() {
	cout << day << "/" << month << "/" << year << endl;
}