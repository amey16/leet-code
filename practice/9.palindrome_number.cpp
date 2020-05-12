class Solution {
public:
    bool isPalindrome(long int x) {
        if(x<0)
            return false;
        long int n=0,num=x;
        while(num!=0){
            n=n*10+num%10;
            num/=10;
        }
        if(n==x)
            return true;
        return false;
    }
};