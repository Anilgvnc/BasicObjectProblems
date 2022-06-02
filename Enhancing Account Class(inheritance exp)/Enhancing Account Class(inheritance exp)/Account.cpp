#include <stdexcept>
#include <iostream>
#include "Account.h"
using namespace std;

Account::Account(double initialBalance) : balance(0) {
	if (initialBalance >= 0.0) {
		balance = initialBalance;
	}
	else
	{
		throw invalid_argument("Initial balance cannot be negative.");
	}
}

void Account::credit(double amount) {
	balance += amount;
}

bool Account::debit(double amount)
{
	if (amount > balance)
	{
		cout << "Debit amount exceed account balance." << endl;
		return false;
	}
	else
	{
		balance -= amount;
		return true;
	}

}

void Account::setBalance(double newBalance)
{
	newBalance = balance;
}

double Account::getBalance()
{
	return balance;
}
