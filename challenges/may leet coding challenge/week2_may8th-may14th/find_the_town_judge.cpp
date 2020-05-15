class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        unordered_set<int> st;
        int judge=0,count=0;
        if(N==1 && trust.empty())
            return 1;
        for(int i=0;i<trust.size();i++)
            st.insert(trust[i][0]);        
        for(int i=0;i<trust.size();i++)
            if(st.find(trust[i][1])==st.end()){
                judge = trust[i][1];
                break;
            }
        for(int i=0;i<trust.size();i++)
            if(trust[i][1]==judge)
                count++;
        if(st.size()!=N-1 || count!=N-1)
            return -1;
        return judge;
    }
};