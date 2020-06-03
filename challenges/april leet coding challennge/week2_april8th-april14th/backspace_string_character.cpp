class Solution {
public:
    bool backspaceCompare(string S, string T) {
        stack<char> a;
        stack<char> b;
        for(int i=0;i<S.length();i++){
            if(S[i]=='#' && a.empty()!=true){
                a.pop();
            }
            else if(S[i]!='#'){
                a.push(S[i]);
            }
        }
        
        for(int i=0;i<T.length();i++){
            if(T[i]=='#' && b.empty()!=true){
                b.pop();
            }
            else if(T[i]!='#'){
                b.push(T[i]);
            }
        }
        
        return (a==b);
    }
};