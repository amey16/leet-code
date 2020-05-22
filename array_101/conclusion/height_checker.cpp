class Solution {
public:
    int heightChecker(vector<int>& heights){
        vector <int> a; 
        a=heights;
        sort(a.begin(),a.end());
        int k=0;
        for(int i=0;i<heights.size();i++)
            if(a[i]!=heights[i])
                k++;
        return k ;
    }
};