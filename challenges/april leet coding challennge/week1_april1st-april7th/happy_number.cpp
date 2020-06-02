class Solution {
public:
    int sumsquare(int n){
        int final=0;
        while(n){
            int d=n%10;
            final+=(d*d);
            n/=10;
        }
        return final;
    }
    bool isHappy(int n){
        if(n==1 || n==7)
            return true;
        int num=n;
        while(num>9){
            num=sumsquare(num);
            if(num==1)
                return true;
        }
        if(num==7)
            return true;
        return false;
    }
};