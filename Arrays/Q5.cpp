/*
Move all negative numbers to beginning and positive to end with constant extra space
*/

#include <iostream>
using namespace std;


int main(){
	int arr[]={89,45,-68,45,-36,78,65,-14};
	int n=8;
	int sorted_arr[8];
	
	int t=0;
	
	for (int i=0;i<n;i++){
		if (arr[i]<0){
			int a = arr[i];
			arr[i]=arr[t];
			arr[t]=a;
			t++;
		}
	}
	cout << "Sorted Array: \n{ ";
	for (int i=0;i<n;i++){
		cout << arr[i] <<" " ;
	}
	cout << "}\n";
}