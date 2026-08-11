class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // brute force solution 
//         int n=nums.size();
//         vector <int> pos;
//         for (int i=0;i<n;i++){
//             int sum=nums[i];
//             for (int j=i+1;j<n;j++){
// if((sum+nums[j])==target){
//     pos.push_back(i);
//     pos.push_back(j);

// }
//             }
//         }
//         return pos;


// BETTER SOLUTION 
// int n=nums.size();
// vector<pair<int,int >>ans ;
// for (int i =0;i<n;i++){
//     ans.push_back({nums[i],i});
// }
// sort(ans.begin(),ans.end());
// int i=0;
// int j=n-1;
// int sum=0;
// while (i<j){
//     sum=ans[i].first+ans[j].first;
//     if (sum==target){
//         return {ans[i].second,ans[j].second};
//     }
//    else  if(sum>target){
// j--;
//     }
//     else if (sum<target) {
// i++;
//     }
// }
// return {};

////OPTIMAL SOLUTION

unordered_map<int,int> mp;
int n=nums.size();

for (int i=0;i<n;i++){
    int left=target-nums[i];
    if (mp.find(left)!=mp.end() && mp[left]!=i){
   return {i,mp[left]};
    }
    mp[nums[i]]=i;
}
return {};



    }
};