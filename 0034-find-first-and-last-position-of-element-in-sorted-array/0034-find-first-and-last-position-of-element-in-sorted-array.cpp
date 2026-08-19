class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
           int n=nums.size();
         
      int e=n-1;
      int s=0;
      int last=-1;
      int first=-1;
      int  mid =s+(e-s)/2 ;
      //search in left part 
      while(s<=e){
        if(nums[mid]==target){
        first=mid;
    e=mid-1;
        }else if (nums[mid]<target){
            s=mid+1;
        }
        else {
            e=mid-1;
        }
         mid =s+(e-s)/2 ;
      }
    //   search in right part 
    e=n-1;
     s=0;
              mid =s+(e-s)/2 ;

      while(s<=e){
        if(nums[mid]==target){
        last=mid;
        s=mid+1;
        }else if (nums[mid]<target){
            s=mid+1;
        }
        else {
            e=mid-1;
        }
         mid =s+(e-s)/2 ;
      }
return {first,last};

    }
};