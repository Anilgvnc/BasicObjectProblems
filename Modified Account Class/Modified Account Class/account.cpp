#include "account.h"

account::account(std::string accountName, int initialBalance)
:name(accountName) {
	if (initialBalance > 0)
	{
		balance = initialBalance;
	}
}

void account::deposit(int depositAmount){
	if (depositAmount > 0)
	{
		balance += depositAmount;
	}
}

void account::withdraw(int withdrawalAmount){
	if (withdrawalAmount > 0)
	{
		balance -= withdrawalAmount;
	}
}

void account::setName(std::string accountName){
	accountName = name;
}

std::string account::getName(){
	return name;
}

int account::getBalance(){
	return balance;
}
