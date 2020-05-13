class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size()/2;
        unordered_map<int,int> array;
        for(auto& i:nums)
            array[i]++;
        auto ip=std::unique(nums.begin(),nums.end());
        nums.resize(std::distance(nums.begin(),ip));
        for(int i=0;i<nums.size();i++){
            if(array[nums[i]]>n)
                return nums[i];
        }
        return 0;
    }
};