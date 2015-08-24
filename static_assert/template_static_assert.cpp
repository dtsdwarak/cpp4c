#include <iostream>
#include <type_traits>
#include <array>
using namespace std;

template<class T>
void int_display(T a){
	static_assert(is_integral<T>::value,"Not an integer value");
	cout<<a;
}

int main(){
	float a=2.33;
	int b=1;
	int_display(a);
	int_display(b);
}
