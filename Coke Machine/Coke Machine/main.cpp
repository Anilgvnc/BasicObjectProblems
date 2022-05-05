#include<iostream>
using namespace std;

class Cokemachine {
	double pay;
public:
	void firstload(double x, int y);
	void givecoke();
	void show();
private:
	double value;
	int coke;
};

void Cokemachine::firstload(double x, int y) {
	value = x;
	coke = y;
}

void Cokemachine::givecoke() {
	cout << "The price of coke: " << value << "\n" << "Payment: ";
	cin >> pay;
	if (pay > value)
	{
		coke -= 1;
		cout << "Coke is given..." << "\n" << "Change is: " << (pay - value) << endl;
	}
	else
	{
		cout << "Not enough money." << endl;
	}
}

void Cokemachine::show() {
	cout << "Latest status: " << "\n\t" << "The price of coke: " << value << "\n\t" << "Remaining coke count: " << coke << endl;
}

int main() {
	Cokemachine obj;
	obj.firstload(2.5, 100);
	obj.givecoke();
	obj.show();
	return 0;
}