class Solution {
public:
    bool isAnagram(string s, string t) {
//        sort(s.begin(),s.end()) ;
//         sort(t.begin(),t.end()) ;
//         int n =s.length();
//         int i=0;
//         int m=t.length();
//         if(m!=n){
//             return false;
//         }
//         while(i<n){
// if(s[i]!=t[i]){
//     return false;
// }
// i++;
//         }
//         return true;
//OPTIMAL APPROACH

int freq1[26]={0};
int  freq2[26]={0};
 int n =s.length();
        int m=t.length();
        if(n!=m){
            return false;
        }
        int i=0;
while (i<n){
   
    freq1[s[i]-'a']+=1;
    i++;
}
i=0;
while (i<m){
   
    freq2[t[i]-'a']+=1;
    i++;
}
i=0;
while(i<=25){
    if(freq1[i]!=freq2[i]){
        return false;
    }
    i++;
}
return true;
    }
};