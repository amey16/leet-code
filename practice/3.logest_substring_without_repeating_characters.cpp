class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int a[96],max=0,curr=0;
        for(int i=0;i<96;i++)
            a[i]=0;
        int k=0;
        for(int i=0;i<s.length();i++){
            a[(int)(s[i]-' ')]++;
            curr+=1;
            if(a[(int)(s[i]-' ')]>1){
                // for(int i=0;i<96;i++)
                //     a[i]=0;
                // a[(int)(s[i]-' ')]++;
                if(max<curr-1)
                    max=curr-1;
                while(s[k]!=s[i] && k<s.length()){
                    curr-=1;
                    a[(int)(s[k]-' ')]--;
                    k++;
                }
                curr-=1;
                a[(int)(s[k]-' ')]--;
                k++;
                if(max<curr)
                    max=curr;
            }
        }
        if(max<curr)
                max=curr;
        return max;
    }
};