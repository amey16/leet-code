class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size()-1;
        while(n>=0 && digits[n]+1>=10){
            digits[n]=0;
            n--;
        }
        vector<int> a;
        if(n==-1){
            a.push_back(1);
            for(int i=0;i<digits.size();i++)
                a.push_back(digits[i]);
            return a;
        }
        digits[n]+=1;
        return digits;
    }
};