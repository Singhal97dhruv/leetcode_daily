class Solution {
public:
    vector<int>offset{0,1,0,-1,0};
//     bool dfs(int i,int j,int idx, vector<vector<char>>&board,string word){
//         if(idx>=word.size())return true;
//         if(i<0 || j<0 || i>=board.size() || j>=board[0].size() || board[i][j]=='*' || board[i][j]!=word[idx])return false;
        
//         char c=board[i][j];
//         board[i][j]='*';
//         bool ans=false;
//         for(int k=0;k<4;k++){
//             ans= ans|| dfs(i+offset[k],j+offset[k+1],idx+1,board,word);
//         }
//         board[i][j]=c;
//         return ans;
        
        
//     }
    
    bool dfs(int i,int j,int idx,vector<vector<char>>&board,string word){
        if(idx>=word.size())return true;
        if(i<0 || j<0 || i>=board.size() || j>=board[0].size() || board[i][j]=='*' || board[i][j]!=word[idx])return false;
        char c=board[i][j];
        board[i][j]='*';
        bool ans=false;
        for(int k=0;k<4;k++){
           ans=ans||dfs(i+offset[k],j+offset[k+1],idx+1,board,word);
        }
        board[i][j]=c;
        return ans;
        
        
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        
        bool ans=false;
        
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]==word[0])ans=dfs(i,j,0,board,word);
                if(ans)return true;
            }
        }
        return false;
        
    }
};