#include <iostream>
using namespace std;

main(){
	const int a=10;
	static_assert(a>10,"Value has to be greater than 10");
}
