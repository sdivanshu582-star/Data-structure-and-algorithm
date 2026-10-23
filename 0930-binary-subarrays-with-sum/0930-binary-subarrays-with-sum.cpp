class Solution {
public:
int goalsumsubarray(vector<int>&nums,int goal){
    int count=0;
    int n=nums.size();
    int sum=0;
if(goal<0){
    return 0;
}
int r=0;
int l=0;
while(r<n){
    sum+=nums[r];
    while(sum>goal){
        sum=sum-nums[l];
        l++;
    }
    count=count+(r-l+1);
    r++;
}
return count;
}
    int numSubarraysWithSum(vector<int>& nums, int goal) {
          //brute force
        // int n=nums.size();
        // int count=0;
        // for(int i=0;i<n;i++){
        //     int sum=0;
        //     for(int j=i;j<n;j++){
        //         sum=sum+nums[j];
        //         if(sum==goal){
        //             count++;
        //         }
        //         if(sum>goal){
        //             break;
        //         }
        //     }
        // }
        // return count;

        //optimal approach
       int a=goalsumsubarray(nums,goal);
        int b=goalsumsubarray(nums,goal-1);
       return a-b;
    }
};