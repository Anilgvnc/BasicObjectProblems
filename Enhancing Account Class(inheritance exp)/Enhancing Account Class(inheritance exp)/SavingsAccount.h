#ifndef SAVINGS_H
#define SAVÝNGS_H
#include "Account.h"

class SavingsAccount: public Account {
public:
	SavingsAccount(double, double);
	double calculateInterest();
private:
	double interestRate;
};
#endif
