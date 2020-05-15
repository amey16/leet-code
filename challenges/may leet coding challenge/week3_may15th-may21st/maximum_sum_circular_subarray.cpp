class Solution {
public:
    int maxSubarraySumCircular(vector<int>& A) {
        if(A.size()==0)
            return 0;
        int mth=A[0],mit=A[0],minth=A[0],minit=A[0],sum=A[0];
        for(int i=1;i<A.size();i++){
            if(mth+A[i]>A[i])
                mth+=A[i];
            else
                mth=A[i];
            mit=max(mit,mth);
            
            if(minth+A[i]<A[i])
                minth+=A[i];
            else
                minth=A[i];
            minit=min(minit,minth);
            
            sum+=A[i];
        }
        cout<<sum<<endl;
        if(sum==minit)
            return mit;
        return max(sum-minit,mit);
    }
};