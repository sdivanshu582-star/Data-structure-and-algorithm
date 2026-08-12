class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
             // Brute force approach 
    //     int n=nums.size();
    //   vector<int> pos;
    //   vector<int> neg;
    //   for(int i=0;i<n;i++){
    //     if (nums[i]>0){
    //         pos.push_back(nums[i]);

    //     }
    //     else {
    //         neg.push_back(nums[i]);
    //     }
    //   } 
    //    for (int i=0;i<n/2;i++){
    //     nums[2*i]=pos[i];
    //     nums[2*i+1]=neg[i];
    //   }
    //       return nums;
// OPTIMAL APPROACH 
int n =nums.size();
vector<int> ans(n,0);
int i=0;
int j=1;
int k=0;
while (k<n){
    if(nums[k]>0){
ans[i]=nums[k];
i=i+2;
    }
else {
        ans[j]=nums[k];
        j=j+2;
    }
   k++; 
}
return ans;  
    }
};