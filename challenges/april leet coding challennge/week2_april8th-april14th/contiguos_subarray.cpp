class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        vector<int> arr(2*nums.size()+1,-2);
        arr[nums.size()]=-1;
        int maxlen=0,count=0;
        for(int i=0;i<nums.size();i++){
            count=count+(nums[i]==0?-1:1);
            if(arr[count+nums.size()]>=-1)
                maxlen=max(maxlen,i-arr[count+nums.size()]);
            else
                arr[count+nums.size()]=i;

        }
        return maxlen;
    }
};