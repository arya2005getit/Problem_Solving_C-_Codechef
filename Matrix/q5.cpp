/*Given an NxN matrix Mat. Sort all elements of the matrix.*/

class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        vector<int> elements;
        
        
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                elements.push_back(Mat[i][j]);
            }
        }
        
        sort(elements.begin(), elements.end());
        
        int idx = 0;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                Mat[i][j] = elements[idx++];
            }
        }
        
        return Mat;
    }
};
