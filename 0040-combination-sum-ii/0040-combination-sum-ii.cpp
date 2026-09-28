class Solution {
public:
void combi(vector<int>& candidates,int target,int index,int n ,vector<int>&ds,vector<vector<int>>&ans){
   if (target == 0) {
            ans.push_back(ds);
            return;
        }
       
for(int i=index;i<n;i++){
    //for not selecting the same digit again and again 
if(i>index && candidates[i]==candidates[i-1] ){
continue;}
    if(target<candidates[i]){
     break;}
     ds.push_back(candidates[i]);
combi(candidates,target-candidates[i],i+1,n,ds,ans);
ds.pop_back();
        }
        
 }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
       int index=0;
       sort(candidates.begin(),candidates.end());
        int n=candidates.size();
    vector<int>ds;
        vector<vector<int>>ans;
        combi(candidates,target,index,n,ds,ans);
        return ans;

    }
};