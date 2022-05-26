#include <iostream>
#include "HeartRates.h"
using namespace std;

HeartRates::HeartRates(std::string fN, std::string lN, int d, int m, int y)
	: firstName{fN}, lastName{lN}, birthDay{d}, birthMonth{m}, birthYear{y}
{
}

void HeartRates::setfirstName(std::string fN)
{
	firstName = fN;
}

std::string HeartRates::getfirstName()
{
	return firstName;
}

void HeartRates::setlastName(std::string lN)
{
	lastName = lN;
}

std::string HeartRates::getlastName()
{
	return lastName;
}

void HeartRates::setbirhtDay(int d)
{
	birthDay = d;
}

int HeartRates::getbirthDay()
{
	return birthDay;
}

void HeartRates::setbirthMonth(int m)
{
	birthMonth = m;
}

int HeartRates::getbirthMonth()
{
	return birthMonth;
}

void HeartRates::setbirthYear(int y)
{
	birthYear = y;
}

int HeartRates::getbirthYear()
{
	return birthYear;
}

void HeartRates::setDate()
{
	cout << "Please enter today's day, month, year: ";
	cin >> currentDay >> currentMonth >> currentYear;
}

int HeartRates::getAge()
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

int HeartRates::getMaximumHearthRate()
{
	return 220 - getAge();//this formula for calculating your maximum hearth rate.
}

int HeartRates::getMinimumTargetHearthRate()
{
	return 50 * getMaximumHearthRate() / 100;
}

int HeartRates::getMaximumTragetHearthRate()
{
	return 85 * getMaximumHearthRate() / 100;
}
