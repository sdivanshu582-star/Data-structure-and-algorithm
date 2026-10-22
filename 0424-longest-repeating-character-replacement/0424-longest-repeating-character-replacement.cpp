
class Solution {
public:
    int characterReplacement(string s, int k) {
        //BRUTE FORCE <--but will show TLE bcz of n^2-->
//        int n =s.length();
//       int maxilen=0;
//        for(int i=0;i<n;i++){
//        int hash[26]={0};
//        int maxifreq=0;
//         for(int j=i;j<n;j++){
//            hash[s[j]-'A']++;
// maxifreq=max(maxifreq,hash[s[j]-'A']);
// int len=j-i+1;
// int replacement=len-maxifreq;
// if(replacement<=k){
// maxilen=max(maxilen,len);
// }
//         }
//        }
//        return maxilen;

//OPTIMAL APPROACH 

int n=s.length();
int maxilen=0;
int hash[26]={0};
int r=0;
int l=0;
 int maxifreq=0;
while(r<n){
    
hash[s[r]-'A']++;
maxifreq=max(maxifreq,hash[s[r]-'A']);

    while((r-l+1)-maxifreq>k){
        hash[s[l]-'A']--;
       maxifreq=0;
       for(int i=0;i<26;i++){
        maxifreq=max(maxifreq,hash[i]);
       }
l++;
    }

    maxilen=max(maxilen,r-l+1);

r++;
    }
    return maxilen;
    }
};

