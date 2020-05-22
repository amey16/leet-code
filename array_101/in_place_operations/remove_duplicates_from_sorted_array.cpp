#include<iterator>
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size(),i=1;
        while(i<n){
            if(nums[i]==nums[i-1]){
                nums.erase(nums.begin()+i);
                n--;
                continue;
            }
            i++;
        }
        return nums.size();
    }
};