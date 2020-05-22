class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]>=0){
                for(int j=i+1;j<arr.size();j++){
                    if(arr[j]>2*arr[i])
                        break;
                    if(arr[j]==2*arr[i])
                        return true;
                }
            }
            else{
                if(i==0)
                    continue;
                for(int j=i-1;j>=0;j--){
                    if(arr[j]<2*arr[i])
                        break;
                    if(arr[j]==2*arr[i])
                        return true;
                }
            }
        }
        return false;
    }
};