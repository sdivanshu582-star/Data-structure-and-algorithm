class Solution {
public:
    bool isAnagram(string s, string t) {
       sort(s.begin(),s.end()) ;
        sort(t.begin(),t.end()) ;
        int n =s.length();
        int i=0;
        int m=t.length();
        if(m!=n){
            return false;
        }
        while(i<n){
if(s[i]!=t[i]){
    return false;
}
i++;
        }
        return true;
    }
};