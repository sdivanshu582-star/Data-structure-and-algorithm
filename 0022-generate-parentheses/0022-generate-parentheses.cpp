class Solution {
public:
 void generate(int x,int open,int close,string current,vector<string>&ans){
    if(current.length()==2*x){
        ans.push_back(current);
    }
    if(open<x){
    generate(x,open+1,close,current+"(",ans);
    }
    if(open>close){
        generate(x,open,close+1,current+")",ans);
    }

 }
    vector<string> generateParenthesis(int n) {
        int open=0;
        int close=0;
        vector<string>ans;
        int x=n;
        string current;
         generate(x,open,close,"",ans);
         return ans;
    }
};