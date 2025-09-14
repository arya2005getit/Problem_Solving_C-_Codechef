/*
Given an array arr[] and an integer K where K is smaller than size of array, the task is to find the Kth smallest element in the given array. It is given that all array elements are distinct.
Note :-  l and r denotes the starting and ending index of the array.
*/

#include <iostream>
#include <algorithm>
using namespace std;


class Solution{
	public:
		int kthelement(int arr[],int n, int k){
			sort(arr,arr+n);
			return arr[k-1];
		}
};

int main(){
	Solution A1;
	int n;
	int k;
	int arr[20];
	
	cout << "enter no. of elements.\n";
	cin >> n ;
	cout << "Enter k.\n";
	cin >> k ;
	cout << "Insert Array: \n" ;
	for (int i=0;i<n;i++){
		cin >> arr[i];
	}
	cout << "{ " ;
	for (int i=0;i<n;i++){
		cout << arr[i] << " " ;
	}
	cout << "}\n" ;
	
	cout << "the " << k << "th smallest element = " << A1.kthelement(arr , n , k) << endl;
	
	
}