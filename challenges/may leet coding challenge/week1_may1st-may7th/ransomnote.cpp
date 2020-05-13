class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        sort(ransomNote.begin(),ransomNote.end());
        sort(magazine.begin(),magazine.end());
        int ri=0,mi=0;
        while(ri<ransomNote.length() && mi<magazine.length()){
            if(ransomNote[ri]==magazine[mi]){
                mi++;ri++;
            }
            else if(ransomNote[ri]>magazine[mi]){
                mi++;
            }
            else
                return false;
        }
        return ri==ransomNote.length();
    }
    
};