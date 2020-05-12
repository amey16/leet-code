class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0)
            return "";
        int max=0;
        for(int i=0;i<strs.size();i++)
            if(max<strs[i].length())
                max=strs[i].length();
        int k=0;
        while(k<max){
            int i;
            for(i=1;i<strs.size();i++)
                if(strs[i][k]!=strs[0][k])
                    break;
            if(i!=strs.size())
                break;
            k++;
        }
        return strs[0].substr(0,k);
    }
};