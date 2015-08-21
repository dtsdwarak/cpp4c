#include <iostream>
#include <vector>

using namespace std;

template <typename T>

T maxval(T a, T b){
	return (a>b?a:b);
}


int main(){
	int a=1,b=2;
	float c=1.99,d=2.99;
	printval(maxval(a,b));
	printval(maxval(c,d));
}
