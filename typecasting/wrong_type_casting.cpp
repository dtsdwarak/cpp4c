//wrong_type_casting.cpp
#include <iostream>

using namespace std;

struct A{
	float a;
};

struct B{
	int b;
};

int main(){
	A a;
	a.a=1;
	B* b = (B*) &a;
	cout<<b->b;
}
