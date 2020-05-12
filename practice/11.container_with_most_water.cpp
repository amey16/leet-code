class Solution {
public:
    int maxArea(vector<int>& height) {
        // int max=0;
        // for(int i=0;i<height.size();i++){
        //     for(int j=i+1;j<height.size();j++){
        //         int breath=j-i;
        //         int length=min(height[i],height[j]);
        //         if(max<length*breath)
        //             max=length*breath;
        //     }
        // }
        // return max;
        int l=0,r=height.size()-1,maxa=0;
        while(l<r){
            maxa=max(maxa,min(height[l],height[r])*(r-l));
            if(height[r]>height[l])
                l++;
            else
                r--;
        }
        return maxa;
    }
};