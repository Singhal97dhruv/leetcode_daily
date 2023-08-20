class Solution {
public:
//     void dfs(vector<vector<char>>& matrix, int i,int j){
//         if(i<0 || i>=matrix.size() || j<0 || j>=matrix[0].size() || matrix[i][j]!='O')return;
//         matrix[i][j]='A';
//         dfs(matrix,i+1,j);
//         dfs(matrix,i,j+1);
//         dfs(matrix,i-1,j);
//         dfs(matrix,i,j-1);

        
//     }
    
    void dfs(vector<vector<char>>&board,int i,int j){
        if(i<0 || j<0 || i>=board.size() || j>=board[0].size() || board[i][j]!='O')return ;
        board[i][j]='A';
        dfs(board,i+1,j);
        dfs(board,i,j+1);
        dfs(board,i,j-1);
        dfs(board,i-1,j);

    }
    
    
    void solve(vector<vector<char>>& board) {
        
        int m=board.size(),n=board[0].size();
        
        for(int i=0;i<m;i++){
            if(board[i][0]=='O')dfs(board,i,0);
            if(board[i][n-1]=='O')dfs(board,i,n-1);
        }
        for(int j=0;j<n;j++){
            if(board[0][j]=='O')dfs(board,0,j);
            if(board[m-1][j]=='O')dfs(board,m-1,j);
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='O')board[i][j]='X';
                else if(board[i][j]=='A')board[i][j]='O';
            }
        }
        
       
//         for(int i=0;i<board.size();i++){
//             if(board[i][0]=='O')dfs(board,i,0);
//             if(board[i][board[0].size()-1]=='O')dfs(board,i,board[0].size()-1);
//         }
//         for(int j=0;j<board[0].size();j++){
//             if(board[0][j]=='O')dfs(board,0,j);
//             if(board[board.size()-1][j]=='O')dfs(board,board.size()-1,j);
//         }
        
        
//         for(int i=0;i<board.size();i++){
//             for(int j=0;j<board[0].size();j++){
//                 if(board[i][j]=='O')board[i][j]='X';
//                 else if(board[i][j]=='A')board[i][j]='O';
//             }
//         }
        
    }
};