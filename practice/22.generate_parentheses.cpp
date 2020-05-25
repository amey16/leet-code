class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> a;
        combo(a,"",0,0,n);
        return a;
    }
    void combo(vector<string> &a,string curr,int s,int e,int m){
        if(curr.length()==2*m){
            a.push_back(curr);
            return;
        }
        if(s<m)
            combo(a,curr+'(',s+1,e,m);
        if(e<s)
            combo(a,curr+')',s,e+1,m);
    }
};