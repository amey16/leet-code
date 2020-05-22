class Solution {
public:
    bool validMountainArray(vector<int>& A) {
        if(A.size()==0 || A.size()==1)
            return false;
        if(A[0]>A[1])
            return false;
        if(A[A.size()-1]>A[A.size()-2])
            return false;
        int c=0;
        int i;
        for(i=1;i<A.size()-1;i++){
            if(A[i]==A[i-1])
                return false;
            else if(A[i]>A[i-1])
                continue;
            else
                break;
        }
        int k;
        for(k=i;k<A.size();k++){
            if(A[k]==A[k-1])
                return false;
            else if(A[k]>A[k-1])
                break;
            else
                continue;
        }
        if(k==A.size())
            return true;
        return false;
    }
};