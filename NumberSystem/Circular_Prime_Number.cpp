#include <iostream>
#include <cmath>
using namespace std;

int countDigits(int x){
	int temp = x;
	int c=0;
	while(temp){
		temp/=10;
		c++;
	}
	return c;
}

bool IsPrime(int x){
	if (x<=1) return false ;
	for(int i=2;i<sqrt(x);i++){
		if (x%i==0){
			return false;
		}
	}
	return true;
}

bool IsCircularPrime(int x){
	int k = countDigits(x);
	
	for(int i=0;i<k;i++){
		if(!IsPrime(x)) return false;
		int lastdigit = x%10;
		x = (lastdigit * pow(10,k-1)) + x/10 ; 
	}
	return true;
}

int main(){
	int n;
	cin >> n;
	if (IsCircularPrime(n)){
		cout << n << " is a Circular Prime Number." ;
	} else {
		cout << n << " is not Circular Prime Number.";
	}
}