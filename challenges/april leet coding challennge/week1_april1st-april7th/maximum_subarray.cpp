class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int a=INT_MIN;
        if(nums.size()==0)
            return 0;
        int sum=0,n=0;
        for(int i=0;i<nums.size();i++){
            n+=1;
            sum+=nums[i];
            a=max(a,sum);
            if(sum<0)
                sum=0;
        }
        return a;
        
    }
};