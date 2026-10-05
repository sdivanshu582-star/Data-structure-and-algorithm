class Solution {
public:
    int singleNumber(vector<int>& nums) {
    int n=nums.size();
    int ans=0;
  for(int bitindex=0;bitindex<32;bitindex++){
    int count=0;
    for(int j=0;j<n;j++){
        if((nums[j]&(1<<bitindex))!=0){
count++;
        }
       
        }
         if(count%3!=0){
            ans=(ans|(1<<bitindex));
           
    }
  }
    return ans ;
    }
};