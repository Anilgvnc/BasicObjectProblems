#include <iostream>

class date {
public:
	date(int d, int m, int y);
	void setyear(int y);
	int getyear();
	void setmonth(int m);
	int getmonth();
	void setday(int d);
	int getday();
	void displayDate();
private:
	int year;
	int month;
	int day;
};