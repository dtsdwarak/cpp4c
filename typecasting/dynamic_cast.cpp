#include <iostream>
using namespace std;

struct A{
	float a;
	virtual ~A(){}
};

struct B : public A {
	int b;
};

int main(){
	A *a = new A; // Base pointer for Base object
	A *b = new B; // Base pointer for Derived object
	
	B *c;
	
	c = dynamic_cast<B*>(a);
	if(!c)
		cout<<"\nDyanmic Casting failed for Base object to Derived pointer";
	
	c = dynamic_cast<B*>(b);
	if(!c)
		cout<<"\nDynamic Casting failed for Derived object to Derived pointer";
}
