class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        //BRUTE FORCE
        int a=0;
        int n =nums.size();
        for(int i=0;i<n;i++){
            a=a^nums[i];
        }
        return a;
    }
};