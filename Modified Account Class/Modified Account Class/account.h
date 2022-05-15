#include <string>

class account {
public:
	account(std::string accountName, int initialBalance);
	void deposit(int depositAmount);
	void withdraw(int withdrawalAmount);
	void setName(std::string accountName);
	std::string getName();
	int getBalance();
private:
	int balance = 0;
	std::string name;
};
