class Solution {
public:
    int hammingWeight(uint32_t n) {
      int count=0;
      while(n>1){
        //n&1 will check if the number is odd
         if((n&1)==1){
            count++;
        }
        n=n/2;
      }
      if(n==1){count++;}
      return count;
    }
};