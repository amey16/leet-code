class Solution {
public:
    bool chk_valid(vector<vector<char>>& board,char no,int ci,int cj){
        for(int i=0;i<board.size();i++){
            if(ci!=i && board[i][cj]==no)
                return false;
        }
        for(int i=0;i<board[0].size();i++){
            if(cj!=i && board[ci][i]==no)
                return false;
        }
        for(int i=3*(ci/3);i<3*(ci/3+1);i++){
            for(int j=3*(cj/3);j<3*(cj/3+1);j++){
                if(i!=ci && j!=cj && board[i][j]==no)
                    return false;
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[i].size();j++){
                if(board[i][j]=='.')
                    continue;
                else if(chk_valid(board,board[i][j],i,j))
                    continue;
                else
                    return false;
            }
        }
        return true;
    }
};