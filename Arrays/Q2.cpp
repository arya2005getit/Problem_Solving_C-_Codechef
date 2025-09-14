/*
Given an array of size N. The task is to find the maximum and the minimum element of the array using the minimum number of comparisons.
*/

#include <iostream>
using namespace std;

class Array{
	int arr[10];
	int size;
public:	
	void insert_arr(){
		cout << "No. of elements to insert :";
		cin >> size;
		cout << "Enter elemnts.\n" ;
		for (int i=0;i<size;i++){
			cin >> arr[i];
		}
	}
	
	void display_array(){
		cout << "{ " ;
		for (int i=0;i<size;i++){
			cout << arr[i] << " ";
		}
		cout << "}\n";
	}
	
	int max(){
		int Max=arr[0];
		for (int i=1;i<size;i++){
			if(arr[i]>Max){
				Max=arr[i];
			}
		}
		return Max ;
	}
	
	int min(){
		int Min=arr[0];
		for (int i=1;i<size;i++){
			if(arr[i]<Min){
				Min=arr[i];
			}
		}
		return Min ;
	}
	
};

int main(){
	Array A1;
	A1.insert_arr();
	A1.display_array();
	cout << "Max = " << A1.max()<<endl;
	cout << "Min = " << A1.min()<<endl;
}