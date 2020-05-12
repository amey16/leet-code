class Solution {
public:
    long int reverse(long int x) {
        long int n=0,num=x;
        while(num!=0){
            n=(n*10)+(num%10);
            num/=10;
        }
        if(n>INT_MAX || n<INT_MIN)
            return 0;
        return n;
    }
};