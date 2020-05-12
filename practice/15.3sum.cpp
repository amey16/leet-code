class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> final={};
        for(int i=0;i<nums.size();i++){
            int sum=nums[i];
            int l=i+1,r=nums.size()-1;
            if(i>0 && nums[i]==nums[i-1])
                continue;
            while(l<r){
                if(r<=nums.size()-2 && nums[r]==nums[r+1]){
                    r--;
                    continue;
                }
                if(nums[l]+nums[r]+sum==0){
                    vector<int> temp={};
                    temp.push_back(nums[i]);
                    temp.push_back(nums[l]);
                    temp.push_back(nums[r]);
                    final.push_back(temp);
                    r--;
                    l++;
                }
                else if(nums[l]+nums[r]>-sum)
                    r--;
                else if(nums[l]+nums[r]<-sum)
                    l++;
            }
        }
        return final;
    }
};