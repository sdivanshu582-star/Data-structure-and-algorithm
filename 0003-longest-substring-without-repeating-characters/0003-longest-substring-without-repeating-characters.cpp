class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       
        int n=s.length();
        int maxlen=0;
        int len;
for(int i=0;i<n;i++){
int mp[256]={0};
    len=0;
    for(int j=i;j<n;j++){
        if(mp[s[j]]==1){
            break;
        }
        len=j-i+1;
maxlen=max(maxlen,len);
mp[s[j]]=1;
    }
}
return maxlen;
    }
};