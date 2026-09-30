class Solution {
public:
void modiji(int index,int n, vector<int>&ds,vector<vector<int>>&ans,vector<int>& nums){
    if(n==index){
        ans.push_back(ds);
        return ;
    }
    //pick the element
    ds.push_back(nums[index]);
    modiji(index+1,n,ds,ans,nums);
    ds.pop_back();
    modiji(index+1,n,ds,ans,nums);
}
    vector<vector<int>> subsets(vector<int>& nums) {
      int n=nums.size();
      vector<int>ds;
      vector<vector<int>>ans;
      int index=0;
      modiji(index,n,ds,ans,nums);
        return ans;
    }
};