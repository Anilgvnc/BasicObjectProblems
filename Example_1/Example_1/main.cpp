#include <iostream>
#include <string>
using namespace std;

class myClass {
public:
	int myInt;
	string myString;
};

int main() {
	myClass myObj;//create an object of myClass
	//Exp1: Create an object and access the attributes
	myObj.myInt = 50;
	myObj.myString = "Hello World.";
	cout << myObj.myInt << "\n" << myObj.myString << endl;
	return 0;
}