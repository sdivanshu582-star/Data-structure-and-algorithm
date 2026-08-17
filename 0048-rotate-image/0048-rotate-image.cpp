class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
    // BRUTE FORCE APPROACH 
    
    int n =matrix.size();
    int ans[n][n];
    for (int i =0;i<n;i++){
        for (int j=0;j<n;j++){
            ans[j][(n-i)-1]=matrix[i][j];
        }
    }
    
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           matrix[i][j]=ans[i][j];
        }
    }
    }
};