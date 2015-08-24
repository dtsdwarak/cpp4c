#include <iostream>
using namespace std;

struct A{
	float a;
};

struct B : public A {
	int b,c;
};

int main(){
	B* b = new B;
	b->b=10;
	A* a = dynamic_cast<A*>(b);
	cout<<a->a;
}
