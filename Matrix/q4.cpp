/*Given a boolean 2D array of n x m dimensions where each row is sorted. 
Find the 0-based index of the first row that has the maximum number of 1's.*/

class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        int n = arr.size();
        int m = arr[0].size();
        int maxRow = -1;    
        int j = m - 1;      

        for (int i = 0; i < n; i++) {
            
            while (j >= 0 && arr[i][j] == 1) {
                j--;
                maxRow = i; 
            }
        }
        return maxRow;
    }
};
