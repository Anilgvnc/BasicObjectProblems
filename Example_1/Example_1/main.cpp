#include <iostream>
#include <string>
using namespace std;

class myClass {
public:
	void setsalary(int s) {
		salary = s;//Access a private attribute
	}
	int getsalary();//Define a method Exp2
private:
	int salary;
};

int myClass::getsalary() {
	return salary;
}

int main() {
	myClass myObj;//create an object of myClass
	//Exp2 & 3 define a method and access a private attribute
	int x;
	cout << "Set salary: ";
	cin >> x;
	myObj.setsalary(x);
	cout << myObj.getsalary() << endl;
	return 0;
}