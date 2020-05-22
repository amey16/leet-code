class Solution {
public:
    int cald(int n){
        int t=0;
        while(n!=0){
            t++;
            n/=10;
        }
        return t;
    }
    int findNumbers(vector<int>& nums) {
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(cald(nums[i])%2==0)
               cnt++;
        }
        return cnt;
    }
};