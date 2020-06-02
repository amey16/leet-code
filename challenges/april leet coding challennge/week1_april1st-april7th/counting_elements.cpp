class Solution {
public:
    int countElements(vector<int>& arr) {
        vector <int> b;
        int res=0;
        for(int i=0;i<arr.size();i++){
            b.push_back(arr[i]+1);
        }
        for(int i=0;i<arr.size();i++){
            auto it=find(arr.begin(),arr.end(),b[i]);
            if(it!=arr.end())
                res++;
        }
        return res;
    }
};