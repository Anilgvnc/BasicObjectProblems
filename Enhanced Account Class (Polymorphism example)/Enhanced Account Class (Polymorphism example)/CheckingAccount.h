#ifndef CHECKING_H
#define CHECKING_H
#include "Account.h"

class CheckingAccount : public Account {
public:
	CheckingAccount(double, double);
	virtual void credit(double);
	virtual bool debit(double);
private:
	double transactionFee;
	void chargeFee();
};
#endif
