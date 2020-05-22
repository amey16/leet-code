class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                for(int j=i+1;j<nums.size();j++){
                    swap(nums[j],nums[j-1]);
                }
                i--;
                n--;
            }
        }
    }
};