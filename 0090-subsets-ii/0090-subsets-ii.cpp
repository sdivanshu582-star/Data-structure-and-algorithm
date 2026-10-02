class Solution {
public:
void subset(int index,int n,vector<int>& nums,vector<vector<int>>&a, vector<int>&ds){
   
    a.push_back(ds);
    for(int i=index;i<n;i++){
        if(i!=index&&nums[i]==nums[i-1]){
            continue;
        }
        ds.push_back(nums[i]);
    subset(i+1,n,nums,a,ds);
ds.pop_back();
    }
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
         vector<vector<int>>a;
         sort(nums.begin(),nums.end());
         int n =nums.size();
         vector<int>ds;
         int index=0;
subset(index,n,nums,a,ds);
return a;
    }
};