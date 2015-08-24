#include <iostream>
using namespace std;

int main(){
	int a=2;
	float b=10.78;
	a = dynamic_cast<int>(b);
	b = dynamic_cast<float>(a);
	cout<<a;
}
