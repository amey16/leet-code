class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int first=0,second=INT_MIN,third=INT_MAX,flag=0,v;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>first)
                first=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>first)
                first=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            if((nums[i]>second)&&(nums[i]!=first))
                second=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            if((nums[i]!=first)&&(nums[i]!=second)){
                v=nums[i];
                if(third==INT_MAX)
                    third =v;
                else if(v>third)
                    third=v;
            }
        }
        if(third==INT_MAX)
            return first;
        else if(second==INT_MIN)
            return first;
        else
            return third;   
    }
};