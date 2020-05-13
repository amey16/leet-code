class Solution {
public:
    int findComplement(int num) {
        int n=0,p=0;
        while(num!=0){
            int d=((num%2)+1)%2;
            if(d==1)
                n+=pow(2,p);
            p++;
            num/=2;
        }
        return n;
    }
};