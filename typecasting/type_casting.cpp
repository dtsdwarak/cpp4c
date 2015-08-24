#include <iostream>

using namespace std;

class Base {
	public:
	virtual ~Base(){}
};

class Derived1 : public Base {
	int value;
public:
	Derived1(){
		value=10;
	}
	void printval(){
		cout<<"\nInside Derived1 ; Value = "<<value;
	}
};

class Derived2 : public Base{};

int main(){
	cout<<"Type Casting\n";
	cout<<"C Type Casting";
	cout<<"\nA = "<<(char)65;
	cout<<"\nFunctional Casting\n";
	cout<<"A ="<<char(65);
	
	Base* b = new Derived1;
	Derived1* d1 = static_cast<Derived1*>(b);
	d1->printval();
	
	d1 = dynamic_cast<Derived1*>(b);
	d1->printval();
	
	
	return 0;

}
