#include <iostream>
#include <stdexcept>
#include "SavingsAccount.h"
using namespace std;

SavingsAccount::SavingsAccount(double initialBalance, double rate) : Account(initialBalance), interestRate(0)
{
	if (rate < 0)
	{
		throw invalid_argument("interest rate must be positive.");
	}
	else
	{
		interestRate = rate;
	}
}

double SavingsAccount::calculateInterest()
{
	return getBalance() * interestRate;
}
