/*Given a row wise sorted matrix of size R*C where R and C are always odd, find the median of the matrix.*/

class Solution {
  public:
    int median(vector<vector<int>> &mat) {
        // code here
        int rows=mat.size(),cols=mat[0].size();
        int n=rows*cols;
        int m=(n)/2;
        vector<int> arr ;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                arr.push_back(mat[i][j]);
            }
        }
        
        sort(arr.begin(), arr.end());
        return arr[m];
    }
};




