#include <iostream>
#include "HeartRates.h"
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
	HeartRates HeartRates(firstName, lastName, day, month, year);
	HeartRates.setDate();
	cout << "\n****************************************************************" << endl;
	cout << "First Name: " << HeartRates.getfirstName() << endl;
	cout << "Last Name: " << HeartRates.getlastName() << endl;
	cout << "Date of Birth: " << HeartRates.getbirthDay() << "/" << HeartRates.getbirthMonth() << "/" << HeartRates.getbirthYear() << endl;
	cout << "Age: " << HeartRates.getAge() << endl;
	cout << "Maximum Hearth rate: " << HeartRates.getMaximumHearthRate() << endl;
	cout << "Target Hearth Rate: " << HeartRates.getMinimumTargetHearthRate() << "-" << HeartRates.getMaximumTragetHearthRate() << endl;

	return 0;
}