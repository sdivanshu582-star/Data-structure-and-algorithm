class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //BRUTE FORCE APPROACH 
//         int n=prices.size();
// int maxi=0;

//         for(int i=0;i<n;i++){
//           for (int j=i+1;j<n;j++){

//      if (prices[i]<prices[j]){
//       int  profit =prices[j]-prices[i];
     
//       maxi=max(maxi,profit);}
//           }
//         }
//         return maxi;


// OPTIMAL APPROACH 
int mini=prices[0];
int maxi=0;
int profit =0;
for (int i=1;i<prices.size();i++){
profit =prices[i]-mini;
maxi=max(profit,maxi);
mini=min(mini,prices[i]);
}
return maxi;
    }
};