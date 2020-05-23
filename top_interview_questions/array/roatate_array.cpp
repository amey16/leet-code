class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=(k+nums.size())%nums.size();
        vector<int> a;
        for(int i=nums.size()-k;i<nums.size();i++)
            a.push_back(nums[i]);
        for(int i=0;i<nums.size()-k;i++)
            a.push_back(nums[i]);
        nums=a;
    }
};