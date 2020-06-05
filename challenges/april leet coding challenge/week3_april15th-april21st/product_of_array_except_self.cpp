class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int cnt=0,p=1;
        for(int i=0;i<nums.size();i++)
            if(nums[i]==0)
                cnt++;
        if(cnt>1)
            p=0;
        else{
            if(cnt==0)
                for(int i=0;i<nums.size();i++)
                    p*=nums[i];
            else
               for(int i=0;i<nums.size();i++){
                   if(nums[i]==0)
                       continue;
                    p*=nums[i];
               }
        }
        for(int i=0;i<nums.size();i++){
            if(cnt>1)
                nums[i]=0;
            else if(nums[i]==0 && cnt==1)
                nums[i]=p;
            else if(nums[i]!=0 && cnt==1)
                nums[i]=0;
            else
                nums[i]=p/nums[i];
        }
        return nums;
    }
};