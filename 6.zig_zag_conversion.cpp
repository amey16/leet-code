class Solution {
public:
    string convert(string s, int numRows) {
        string a="";
        int k=1;
        if(numRows==1)
            return s;
        for(int i=0;i<numRows;i++){
            int curr=i;
            if(i==0 || i==numRows-1){
                while(curr<s.length()){
                    a+=s[curr];
                    curr+=(2*numRows-2);
                }
            }
            else{
                while(curr<s.length()){
                    a+=s[curr];
                    if(2*numRows-2-k+curr-i<s.length())
                            a+=s[2*numRows-2-k+curr-i];
                    curr+=(2*numRows-2);
                }
                k++;
            }
        }
        return a;
    }
};