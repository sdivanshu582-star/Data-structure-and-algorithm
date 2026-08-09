class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //BRUTE FORCE APPROACH

        // int n =nums.size();
        // int a;
        // for (int i=0;i<=n-1;i++){
        //     int count=0;
        //     for (int j=0;j<=n-1;j++){
        //         if (nums[i]==nums[j]){
        //             count ++;
        //         }
        //     }
        //     if(count==1){
        //         a=nums[i];
        //         break;
        //     }
        // }
        // return a;

        // OPTIMAL APPROACH
        
    int ans=0;
    for (int i=0;i<=nums.size()-1;i++){
        ans =ans ^ nums[i];
    }
    return ans;

    }
};