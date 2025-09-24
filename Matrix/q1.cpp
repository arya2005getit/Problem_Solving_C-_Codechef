/*Given a matrix of size r*c. Traverse the matrix in spiral form.*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> & mat){
	vector<int> result ;
	
	int top = 0 , left = 0 ;
	int bottom = mat.size()-1 , right = mat[0].size()-1;
	
	while(left <= right && top<=bottom){
	
		for(int i=left;i<=right;i++){
			result.push_back(mat[top][i]);
		}
		top++;
		
		for(int j=top;j<=bottom;j++){
			result.push_back(mat[j][right]);
		}
		right--;
		if (top<=bottom){
		
			for(int j=right;j>=left;j--){
				result.push_back(mat[bottom][j]);
			}
		}
		
		bottom--;
		if (left <= right){
		
			for(int i=bottom;i>top;i--){
				result.push_back(mat[i][left]);
			}
		left++;
		}
	}
	return result;
}

int main (){
	int rows,cols;
	cout<<"Enter row and cols:\n";
	cin >> rows >> cols ;
	
	vector<vector<int>> mat(rows , vector<int> (cols));
	cout << "Enter matrix elements :\n";
	for(int i=0;i<rows;i++)
		for(int j=0; j<cols ; j++)
			cin >> mat[i][j];
			
			
	for(int i=0;i<rows;i++){
	
		for (int val : mat[i]){
			cout << val << " ";
		}
		cout << endl;
	}
		
	vector<int> spiral = spiralOrder(mat);
	
	
	cout << "\nSpiral Order: " ;
	for (int val : spiral){
		cout << val << " " ;
	}
	cout << endl ;
	
	
}
