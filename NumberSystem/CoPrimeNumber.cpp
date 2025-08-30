#include <iostream>
using namespace std;

int gcd(int a, int b){
	while(b!=0){
		int temp = b;
		b = a % b ;
		a = temp ;
	}
	return a;
}

void IsCoPrime(int a, int b){
	if (gcd(a,b)==1) {
		cout << a << ","<< b << " are Co Prime.";
	} else {
		cout << a << ","<< b <<  " are not Co Prime.";
	}
}

int main (){
	int a,b;
	cin >> a >> b ;
	IsCoPrime(a,b);
}