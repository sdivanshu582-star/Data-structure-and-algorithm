class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      //BRUTE FORCE  
//         int n=s.length();
//         int maxlen=0;
//         int len;
// for(int i=0;i<n;i++){
// int mp[256]={0};
//     len=0;
//     for(int j=i;j<n;j++){
//         if(mp[s[j]]==1){
//             break;
//         }

//         len++;
// maxlen=max(maxlen,len);
// mp[s[j]]=1;
//     }
// }
// return maxlen;

//OPTIMAL SOLUTION
int n=s.length();
int maxlen=0;
int len;int l=0;
int r=0;
unordered_map<char,int>mp;
while(r<n){
    if(mp.find(s[r])!=mp.end()){
        //if the l is already in the large positon and and moving the l with in the window 
      if(mp[s[r]]>=l){
        l=mp[s[r]]+1;
      }
    }
     len=r-l+1;
    mp[s[r]]=r;
    
    maxlen=max(maxlen,len);
    r++;
}

return maxlen;
    }
};