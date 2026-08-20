class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n =nums.size();
        int e=n-1;
        int s=0;
        int mid=s+(e-s)/2;
        while (s<=e){
            mid=s+(e-s)/2;
            if(nums[mid]==target){
                return mid;
            }
// LEFT SEARCH 
if (nums[s]<=nums[mid]){
    
             if(nums[mid]>=target && nums[s]<=target){
                e=mid-1;
            }else {
                s=mid+1;
            }
}
    //   RIGHT SEARCH
 else {

        if (nums[mid] <=target && target <= nums[e]) {
            s = mid + 1;
        }
        else {
            e = mid - 1;
 }



        }
       
    }
      return -1;
    }
};