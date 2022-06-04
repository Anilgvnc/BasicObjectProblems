#include <iostream>
#include <stdexcept>
#include "CheckingAccount.h"
using namespace std;

CheckingAccount::CheckingAccount(double initialBalance, double fee) : Account(initialBalance), transactionFee(0.0)
{
	if (fee < 0)
	{
		throw invalid_argument("Fee must be positive.");
	}
	else
	{
		transactionFee = fee;
	}
}

void CheckingAccount::credit(double amount)
{
	Account::credit(amount);
	chargeFee();
}

bool CheckingAccount::debit(double amount)
{
	bool success{ Account::debit(amount) };
	if (success)
	{
		chargeFee();
		return true;
	}
	else
	{
		return false;
	}
}

void CheckingAccount::chargeFee()
{
	Account::setBalance(getBalance() - transactionFee);
	cout << "$" << transactionFee << " transaction fee charged." << endl;
}
