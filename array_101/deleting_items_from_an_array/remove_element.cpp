class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // int i=0,n=nums.size();
        // while(i<n){
        //     if(nums[i]==val){
        //         nums.erase(nums.begin()+i);
        //         n--;
        //     }
        // }
        // return nums.size();
        return distance(nums.begin(),remove(nums.begin(),nums.end(),val));
    }
};