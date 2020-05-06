class Solution {
public:
    bool isMatch(string s, string p) {
        bool a[s.length()+1][p.length()+1];
        a[0][0]=true;
        if(p.length()==0 && s.length()>0)
            return false;
        if(p.length()==0 && s.length()==0)
            return true;
        a[0][1]=false;
        for(int i=2;i<p.length()+1;i++){
            if(p[i-1]=='*' && a[0][i-2]==true)
                a[0][i]=true;
            else 
                a[0][i]=false;
        }
        for(int i=1;i<s.length()+1;i++){
            a[i][0]=false;
        }
        for(int i=1;i<s.length()+1;i++){
            for(int j=1;j<p.length()+1;j++){
                if(p[j-1]==s[i-1] || p[j-1]=='.')
                    a[i][j]=a[i-1][j-1];
                else if(p[j-1]=='*'){
                    if(a[i][j-2]==true)
                        a[i][j]=true;
                    else if(p[j-2]==s[i-1] || p[j-2]=='.' && a[i][j-2]==false)
                        a[i][j]=a[i-1][j];
                    else
                        a[i][j]=a[i][j-2];
                }
                else
                    a[i][j]=false;
            }
        }
        // for(int i=0;i<s.length()+1;i++){
        //     for(int j=0;j<p.length()+1;j++)
        //         cout<<a[i][j]<<" ";
        //     cout<<endl;
        // }
        return a[s.length()][p.length()];
    }
};