#include <stdexcept>
#include <iostream>
#include "SavingsAccount.h"
using namespace std;

SavingsAccount::SavingsAccount(double initialBalance, double rate) : Account(initialBalance), interestRate(0.0)
{
	if (rate >= 0)
	{
		interestRate = rate;
	}
	else
	{
		throw invalid_argument("Rate cannot be negative.");
	}
}

double SavingsAccount::calculateInterest()
{
	return getBalance() * interestRate;
}
