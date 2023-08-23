class Solution {
public:
    
    bool check(int i1,int j1,vector<vector<int>>&board){
        
        for(int i=i1-1;i>=0;i--){
            if(board[i][j1]==1)return false;
        }
        
        for(int i=i1-1,j=j1-1;i>=0 && j>=0;i--,j--){
            if(board[i][j]==1)return false;
        }
        for(int i=i1-1,j=j1+1;i>=0 && j<board[0].size();i--,j++){
            if(board[i][j]==1)return false;
        }
        return true;
    }
    int cnt=0;
    void solve(int idx,int n,vector<vector<int>>&board){
        if(idx==n){
            cnt++;return;
        }
        
        for(int j=0;j<n;j++){
            if(check(idx,j,board)){
                board[idx][j]=1;
                solve(idx+1,n,board);
                board[idx][j]=0;
            }
            
        }
        
    }
    
    int totalNQueens(int n) {
     
        vector<vector<int>>board(n,vector<int>(n,0));
        solve(0,n,board);
        return cnt;
        
        
    }
};