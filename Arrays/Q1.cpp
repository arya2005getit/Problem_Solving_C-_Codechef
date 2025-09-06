/*
Reverse the given array or string.     
*/

#include <iostream>
using namespace std;

class Array{
	int size;
	int arr[10];
	int r_arr[10];
public:
	void insert_arr(){
		cout << "No. of elements to insert :";
		cin >> size;
		cout << "Enter elemnts.\n" ;
		for (int i=0;i<size;i++){
			cin >> arr[i];
		}
	}
	void reverse_arr(){
		for(int i=0;i<size;i++){
			r_arr[size-i-1]=arr[i];
		}
	}
	void display_array(){
		cout << "{ " ;
		for (int i=0;i<size;i++){
			cout << arr[i] << " ";
		}
		cout << "}\n";
	}
	void display_rev_arr(){
		cout << "{ " ;
		for (int i=0;i<size;i++){
			cout << r_arr[i] << " ";
		}
		cout << "}\n";
	}
};

int main(){
	Array A1;
	A1.insert_arr();
	cout << "The Array:\n";
	A1.display_array();
	A1.reverse_arr();
	cout << "\nThe reversed Array.\n";
	A1.display_rev_arr();
}
