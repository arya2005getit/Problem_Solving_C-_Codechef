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

void checkIfArmstrong(int x ){
	
	int sum = 0;
	int temp = x;
	int c=countDigits(x);
	
	while (temp){
		int d = temp%10;
		sum += pow(d,c);
		temp/=10;
	}
	
	if(sum==x){
		cout << "Armstrong number.\n";
	} else {
		cout << "Not a Armstrong Number.\n";
	}
}

int main(){
	int num;
	cin >> num;
	cout << "count : " << countDigits(num) << endl;
	checkIfArmstrong(num);
}
