class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> b,a(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            a[nums[i]-1]=1;
        }
        int cnt=0;
        for(int i=0;i<a.size();i++){
            if(a[i]==0)
                b.push_back(i+1);
        }
        return b;
    }
};