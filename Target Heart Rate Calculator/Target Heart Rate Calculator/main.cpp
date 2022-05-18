#include <iostream>
#include "HearthRates.h"
using namespace std;

int main() {
	string firstName;
	string lastName;
	int day;
	int month;
	int year;

	cout << "Please enter your first and last name here: ";
	cin >> firstName >> lastName;

	cout << "Please enter day, month, year of your birth: ";
	cin >> day >> month >> year;

	//Create HearthRates object
	HearthRates HearthRates(firstName, lastName, day, month, year);
	HearthRates.setDate();
	cout << "\n****************************************************************" << endl;
	cout << "First Name: " << HearthRates.getfirstName() << endl;
	cout << "Last Name: " << HearthRates.getlastName() << endl;
	cout << "Date of Birth: " << HearthRates.getbirthDay() << "/" << HearthRates.getbirthMonth() << "/" << HearthRates.getbirthYear() << endl;
	cout << "Age: " << HearthRates.getAge() << endl;
	cout << "Maximum Hearth rate: " << HearthRates.getMaximumHearthRate() << endl;
	cout << "Target Hearth Rate: " << HearthRates.getMinimumTargetHearthRate() << "-" << HearthRates.getMaximumTragetHearthRate() << endl;

	return 0;
}