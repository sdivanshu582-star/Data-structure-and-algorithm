class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
      int n=nums.size();
      int e=n-1;
      int s=0;
      int  mid =s+(e-s)/2 ;
      while(e>s){
        if(nums[mid]==target){
return mid;
        }else if (nums[mid]<target){
            s=mid+1;
        }
        else {
            e=mid-1;
        }
         mid =s+(e-s)/2 ;
      }

     if(target>nums[mid]){
        return (mid+1);

     }else{
        return mid;
     }
    }
};