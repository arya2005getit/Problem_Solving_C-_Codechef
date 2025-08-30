//Buzz Number

#include <iostream>
using namespace std;

bool IsBuzzNum(int x){
	if (x%7==0 || x%10==7){
		return true;
	} else {
		return false;
	}
}

int main(){
	int n;
	cin >> n;
	if (IsBuzzNum(n)){
		cout << n << "is buzz no.";
	} else {
		cout << n << "is not a buzz no.";
	}
}

//int main(){
//	
//	
//	int arr[1000];
//	int k=0;
//	for(int i=1;i<=1000;i++){
//		if (IsBuzzNum(i)){
//			arr[k]=i;
//			k++;
//		}
//	}
//	cout << "buzz numbers under 1000" << endl;
//	for(int i=0;i<k;i++){
//		cout <<  "- "<< arr[i] << endl ;
//	}
//}