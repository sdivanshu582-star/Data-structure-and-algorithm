class Solution {
public:
void combi(vector<int>& candidates,int target,int index,int n ,vector<int>&ds,vector<vector<int>>&ans){
   if (target == 0) {
            ans.push_back(ds);
            return;
        }

        if (index == candidates.size() || target < 0) {
            return;
        }

    //pick up the element
        ds.push_back(candidates[index]);
     combi(candidates,target-candidates[index],index,n,ds,ans);
     
     ds.pop_back();

//not pick the element so index ++ and target does not reduces
 combi(candidates,target,index+1,n,ds,ans);

}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int index=0;
        int n=candidates.size();
        vector<int>ds;
        vector<vector<int>>ans;
        combi(candidates,target,index,n,ds,ans);
        return ans;
    }
};