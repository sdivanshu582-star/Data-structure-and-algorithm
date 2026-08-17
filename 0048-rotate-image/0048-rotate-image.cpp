class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
    // BRUTE FORCE APPROACH 
    
    // int n =matrix.size();
    // int ans[n][n];
    // for (int i =0;i<n;i++){
    //     for (int j=0;j<n;j++){
    //         ans[j][(n-i)-1]=matrix[i][j];
    //     }
    // }
    
    // for (int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //        matrix[i][j]=ans[i][j];
    //     }
    // }
//    Better SOLUTION 
// TRANSPOSE STEP 1
int n=matrix.size();

for (int i =0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if (i!=j){ 
         swap(matrix[i][j],matrix[j][i]);
      }
    }
}
// REVERSE EACH ROW STEP 2
for (int i=0;i<n;i++){
    reverse(matrix[i].begin(),matrix[i].end());
}

    }
};