class Solution {
public:
    int myAtoi(string str) {
        if(str.length()<1)
            return 0;
        int i=0,sigh=1;
        while(i<str.length() && str[i]==' ')
            i++;
        if(i==str.length())
            return 0;
        if(str[i]=='+' || str[i]=='-')
            sigh=str[i++]=='+'?1:-1;
        long res=0;
        while(i<str.length() && (int)(str[i]-'0')>=0 && (int)(str[i]-'0')<=9){
            res=res*10+(int)(str[i]-'0');
            if(res*sigh<INT_MIN)
                return INT_MIN;
            if(res*sigh>INT_MAX)
                return INT_MAX;
            i++;
        }
        return res*sigh;
    }
};