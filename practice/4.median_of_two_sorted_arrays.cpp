class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        if(m>n){
            int temp=m;
            m=n;
            n=temp;
            vector<int> t=nums1;
            nums1=nums2;
            nums2=t;
        }
        int imin=0,imax=m,halfl=(m+n+1)/2;
        while(imin<=imax){
            int i=(imin+imax)/2;
            int j=halfl-i;
            if(i<imax && nums1[i]<nums2[j-1])
                imin=i+1;
            else if(i>imin && nums1[i-1]>nums2[j])
                imax=i-1;
            else{
                int maxleft=0;
                if(i==0)
                    maxleft=nums2[j-1];
                else if(j==0)
                    maxleft=nums1[i-1];
                else
                    maxleft=max(nums1[i-1],nums2[j-1]);
                if((m+n)%2==1)
                    return maxleft;
                int minright=0;
                if(i==m)
                    minright=nums2[j];
                else if(j==n)
                    minright=nums1[i];
                else
                    minright=min(nums1[i],nums2[j]);
                return (minright+maxleft)/2.0;
            }
        }
        return 0.0;
    }
};