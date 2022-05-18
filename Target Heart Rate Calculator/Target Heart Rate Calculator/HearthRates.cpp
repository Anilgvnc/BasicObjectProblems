#include <iostream>
#include "HearthRates.h"
using namespace std;

HearthRates::HearthRates(std::string fN, std::string lN, int d, int m, int y)
	: firstName{fN}, lastName{lN}, birthDay{d}, birthMonth{m}, birthYear{y}
{
}

void HearthRates::setfirstName(std::string fN)
{
	firstName = fN;
}

std::string HearthRates::getfirstName()
{
	return firstName;
}

void HearthRates::setlastName(std::string lN)
{
	lastName = lN;
}

std::string HearthRates::getlastName()
{
	return lastName;
}

void HearthRates::setbirhtDay(int d)
{
	birthDay = d;
}

int HearthRates::getbirthDay()
{
	return birthDay;
}

void HearthRates::setbirthMonth(int m)
{
	birthMonth = m;
}

int HearthRates::getbirthMonth()
{
	return birthMonth;
}

void HearthRates::setbirthYear(int y)
{
	birthYear = y;
}

int HearthRates::getbirthYear()
{
	return birthYear;
}

void HearthRates::setDate()
{
	cout << "Please enter today's day, month, year: ";
	cin >> currentDay >> currentMonth >> currentYear;
}

int HearthRates::getAge()
{
	if (currentMonth < birthMonth)
	{
		return currentYear - birthYear - 1;
	}
	else if (currentMonth == birthMonth)
	{
		if (currentDay < birthDay)
		{
			return currentYear - birthYear - 1;
		}
	}
		return currentYear - birthYear;
}

int HearthRates::getMaximumHearthRate()
{
	return 220 - getAge();//this formula for calculating your maximum hearth rate.
}

int HearthRates::getMinimumTargetHearthRate()
{
	return 50 * getMaximumHearthRate() / 100;
}

int HearthRates::getMaximumTragetHearthRate()
{
	return 85 * getMaximumHearthRate() / 100;
}
