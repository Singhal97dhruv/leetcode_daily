class Solution {
public:
    
    bool check(vector<vector<char>>&board,int i,int j,char ch){
        int i1=i-i%3;
        int j1=j-j%3;
        
        for(int x=0;x<9;x++){
            if(board[x][j]==ch)return false;
        }
        
        for(int y=0;y<9;y++){
            if(board[i][y]==ch)return false;
        }
        
        for(int x=0;x<3;x++){
            for(int y=0;y<3;y++){
                if(board[i1+x][j1+y]==ch)return false;
            }
        }
        return true;
    }    
    
    bool solve(vector<vector<char>>&board,int i,int j){
         if(i==9)return true;
        if(j==9)return solve(board,i+1,0);
        if(board[i][j]!='.')return solve(board,i,j+1);
        
          for(char c='1';c<='9';c++){
            if(check(board,i,j,c)){
                
                board[i][j]=c;
                if(solve(board,i,j+1))return true;
                board[i][j]='.';
            }
        }
        return false;
        
    }
    
    void solveSudoku(vector<vector<char>>& board) {
      
        solve(board,0,0);
        
        
        
    }
};