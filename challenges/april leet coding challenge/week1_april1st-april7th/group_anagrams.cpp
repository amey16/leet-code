class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if(strs.size()==0)
            return {};
        map<string,vector<string>> a;
        vector<vector<string>> s;
        for(string str:strs){
            string k=str;
            sort(k.begin(),k.end());
            if(a.find(k)==a.end()){
                auto h=pair<string,vector<string>>(k,{});
                a.insert(h);
            }
            a[k].push_back(str);
        }
        for(auto &i:a){
            s.push_back(i.second);
        }
        return s;
    }
};