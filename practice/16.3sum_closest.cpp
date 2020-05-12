class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int min=INT_MAX,res=0;
        for(int i=0;i<nums.size()-2;i++){
            int l=i+1,r=nums.size()-1;
            while(l<r){
                if(nums[i]+nums[l]+nums[r]==target)
                    return target;
                else if(nums[l]+nums[r]+nums[i]>target){
                    if((nums[l]+nums[r]+nums[i]-target)<min){
                        min=nums[l]+nums[r]+nums[i]-target;
                        res=nums[i]+nums[l]+nums[r];
                    }
                    r--;
                }          
                else{
                    if((target-nums[l]-nums[r]-nums[i])<min){
                        min=target-nums[l]-nums[r]-nums[i];
                        res=nums[i]+nums[l]+nums[r];
                    }
                    l++;
                }
            }
            while(i<nums.size()-1 && nums[i]==nums[i+1])
                i++;
        }
        return res;
    }   
};