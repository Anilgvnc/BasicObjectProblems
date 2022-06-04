#include <stdexcept>
#include "Account.h"
#include <iostream>
using namespace std;

Account::Account(double initialBalance) : balance(0)
{
	if (initialBalance >= 0)
	{
		initialBalance = balance;
	}
	else
	{
		throw invalid_argument("Balance must be positive.");
	}
}

void Account::credit(double amount)
{
	balance += amount;
}

bool Account::debit(double amount)
{
	if (amount <= balance)
	{
		balance -= amount;
		return true;
	}
	else
	{
		cout << "Debit amount exceeded account balance." << endl;
		return false;
	}
}

void Account::setBalance(double newBalance)
{
	balance = newBalance;
}

double Account::getBalance()
{
	return balance;
}
