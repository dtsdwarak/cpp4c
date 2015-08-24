#include <iostream>
using namespace std;

struct A{
	float a;
};

struct B{
	int b;
};

int main(){
	B b;
	b.b=1;
	A* a = reinterpret_cast<A*>(&b);
	cout<<a->a;
}
