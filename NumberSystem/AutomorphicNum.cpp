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
bool IsAutomorphicNum(int x){
	int c=countDigits(x);
	int sq;
	sq = x*x;
	int a= pow(10,c);
	int y = sq % a;
	return(x==y);
}

int main(){
	int num;
	cin >> num ;
	if (IsAutomorphicNum(num)){
		cout << "is a automorphic num" ;
	} else {
		cout << "not a automorphic num" ;
	}
}
	
	
	
	
//int main(){
//	
//	
//	int arr[100];
//	int k=0;
//	for(long long i=1;i<=10000;i++){
//		if (IsAutomorphicNum(i)){
//			arr[k]=i;
//			k++;
//		}
//	}
//	cout << "automorphic number under 1000" << endl;
//	for(int i=0;i<k;i++){
//		cout <<  "- "<< arr[i] << endl ;
//	}
//}