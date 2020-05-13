class Solution {
public:
    bool isPerfectSquare(long long int n) {
        long long int i=1;
        while(i*i<=n) i++;
        i--;
        if(i*i==n) return true;
        return false;
    }
};