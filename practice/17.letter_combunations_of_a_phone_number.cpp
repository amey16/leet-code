// #include<unordered_map>
// #include<string>
class Solution {
public:
    // unordered_map<string,string> phone;
    string phone[8]={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string> final={};
    void combine(string cur,string digits){
        // if(digits.length()==1){
        //     cur+=digits;
        // }
        if(digits.length()==0){
            final.push_back(cur);
            return;
        }
        else{
            string s=phone[(int)(digits[0]-'2')];
            for(int i=0;i<s.length();i++)
                combine(cur+s[i],digits.substr(1,digits.length()-1));
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits=="")
            return {};
        else{
            combine("",digits);
            return final;
        }
    }
};