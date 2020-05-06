class Solution {
public:
    string longestPalindrome(string s) {
        if(s.length()<1)
            return "";
        int t=0,end=0,start=0;
        for(int i=0;i<s.length();i++){
            int len1=expandAroundCenter(s,i,i);
            int len2=expandAroundCenter(s,i,i+1);
            int len=max(len1,len2);
            if (len>end-start) {
                start=i-(len-1)/2;
                end=i+len/2;
                t=len;
            }
        }   
        return s.substr(start,t);
    }
    int expandAroundCenter(string s,int left,int right){
        while(left>=0 && right<s.length() && s[left]==s[right]){
            left--;
            right++;
        }
        return right-left-1;
    }
};