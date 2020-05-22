class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        for(int i=0;i<arr.size()-1;i++){
            int max=arr[i+1];
            for(int j=i+2;j<arr.size();j++){
                if(arr[j]>max)
                    max=arr[j];
            }
            arr[i]=max;
        }
        arr[arr.size()-1]=-1;
        return arr;
    }
};