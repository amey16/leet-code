class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums,int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> final={};
        if(nums.size()<4)
            return {};
        for(int k=0;k<nums.size()-3;k++){
            if(k>0 && nums[k]==nums[k-1])
                    continue;
            for(int i=k+1;i<nums.size()-2;i++){
                if(i!=k+1 && i>0 && nums[i]==nums[i-1])
                    continue;
                int sum=nums[i]+nums[k];
                int l=i+1,r=nums.size()-1;
                while(l<r){
                    if(r<=nums.size()-2 && nums[r]==nums[r+1]){
                        r--;
                        continue;
                    }
                    if(nums[l]+nums[r]+sum==target){
                        vector<int> temp={};
                        temp.push_back(nums[k]);
                        temp.push_back(nums[i]);
                        temp.push_back(nums[l]);
                        temp.push_back(nums[r]);
                        final.push_back(temp);
                        r--;
                        l++;
                    }
                    else if(nums[l]+nums[r]>-sum+target)
                        r--;
                    else if(nums[l]+nums[r]<-sum+target)
                        l++;
                }
            }
        }
        return final;
    }
};