       
    class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int s = 0;
        int n= nums.size();
        int e =n - 1;
      
int mid=s+(e-s)/2;

while (s<e){
    mid=s+(e-s)/2;
    if (nums[mid]<nums[mid+1]){
        //search in right 
        s=mid+1;
    }
    //peak exist in left 
    else{
        e=mid;

    }
}
return s ;
    }
};
