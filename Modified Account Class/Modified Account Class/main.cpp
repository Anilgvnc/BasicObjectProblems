#include <iostream>
#include "account.h"
using namespace std;

int main() {
	account account1("Anil Guvenc", 410);
	account account2("Can Akguzel", 1453);
    //Display part
	cout << "Account name: " << account1.getName() << "\t" << "Account balance is : " << account1.getBalance() << "$" << endl;
	cout << "Account name: " << account2.getName() << "\t" << "Account balance is : " << account2.getBalance() << "$" << endl;
	//Deposit part
	int depositAmount;
	cout << "Enter deposit amount for first account: ";
	cin >> depositAmount;
	cout << "Adding " << depositAmount << "$ to first account balance." << endl;
	account1.deposit(depositAmount);//add to account1's balance.
	//second account deposit part
	cout << "\nEnter deposit amount for second account: ";
	cin >> depositAmount;
	cout << "Adding " << depositAmount << "$ to second account balance." << endl;
	account2.deposit(depositAmount);//add to account2's balance.
	//Display part
	cout << "Account name: " << account1.getName() << "\t" << "Account balance is : " << account1.getBalance() << "$" << endl;
	cout << "Account name: " << account2.getName() << "\t" << "Account balance is : " << account2.getBalance() << "$" << endl;
	//Withdraw part
	int withdrawalAmount;
	cout << "\nEnter withdrawal amount for first account: ";
	cin >> withdrawalAmount;
	cout << "Subtracting " << withdrawalAmount << "$ from first account balance." << endl;
	account1.withdraw(withdrawalAmount);
	//Second withdraw part
	cout << "\nEnter withdrawal amount from second account: ";
	cin >> withdrawalAmount;
	cout << "Subtracting " << withdrawalAmount << "$ from second account balance." << endl;
	account2.withdraw(withdrawalAmount);
	//Display part
	cout << "Account name: " << account1.getName() << "\t" << "Account balance is : " << account1.getBalance() << "$" << endl;
	cout << "Account name: " << account2.getName() << "\t" << "Account balance is : " << account2.getBalance() << "$" << endl;

	return 0;
}