class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum ;   int lsum=0; int rsum=0; int n=cardPoints.size();
        for(int i=0;i<k;i++){
            lsum=lsum+cardPoints[i];
        }
       
        int maxisum=lsum;
        int rind=n-1;
        for(int i=k-1;i>=0;i--){
         sum=0;   
lsum=lsum-cardPoints[i];
rsum=rsum+cardPoints[rind];
sum=lsum+rsum;
maxisum=max(maxisum,sum);
rind--;
        }
        
        return maxisum;
    }
};