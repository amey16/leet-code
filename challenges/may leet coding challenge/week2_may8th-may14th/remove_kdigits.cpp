class Solution {
public:
    string removeKdigits(string s, int k) {
        if(s.length()==k)
            return "0";
        for(int i=0;i<s.length() && k>0;i++){
            if(i==s.length()-1 || s[i+1]<s[i]){
                s.erase(i,1);   
                i-=2;k--;
                if(i<-1) i=-1;
            }
        }   
        int c=0;
        while(s[c]=='0')
            c++;
        if(c==s.length())
            return "0";
        // a+=s[s.length()-1];
        s=s.substr(c,s.length()-c);
        return s;
    }
};