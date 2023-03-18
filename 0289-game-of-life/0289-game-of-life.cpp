class Solution {
public:
//     int R,C;
    
//     int liveneighs(vector<vector<int>>&vect,int row, int col){
        
//         int count=0;
//         row-1>=0 && vect[row-1][col]==1?++count:count;
//         row+1<R && vect[row+1][col]==1?++count:count;
//         row+1<R && col-1>=0 && vect[row+1][col-1]==1?++count:count;
//         row+1<R && col+1<C && vect[row+1][col+1]==1?++count:count;
//         row-1>=0 && col-1>=0 && vect[row-1][col-1]==1?++count:count;
//         row-1>=0 && col+1<C && vect[row-1][col+1]==1?++count:count;
//         col-1>=0 && vect[row][col-1]==1?++count:count;
//         col+1<C && vect[row][col+1]==1?++count:count;
//         return count;
        
//     }
    
    void gameOfLife(vector<vector<int>>& board) {
        // R=board.size(),C=board[0].size();
        // vector<vector<int>>t=board;
        // for(int i=0;i<R;i++){
        //     for(int j=0;j<C;j++){
        //         int temp=liveneighs(t,i,j);
        //         if(board[i][j]==1 && (temp<2 || temp>3))board[i][j]=0;
        //         // else if(board[i][j]==1 &&(temp>3))board[i][j]=0;
        //         else if(board[i][j]==0 && temp==3)board[i][j]=1;
        //     }
        // }
        
        int m=board.size(),n=board[0].size();
          
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int cnt=0;
                for(int ii=max(0,i-1);ii<min(m,i+2);ii++){
                    for(int jj=max(0,j-1);jj<min(n,j+2);jj++){
                        cnt+=board[ii][jj]&1;
                    }
                }
                if(cnt==3 || cnt-board[i][j]==3)board[i][j]=board[i][j]|2;
            }
        }
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                board[i][j]>>=1;
            }
        }
    }
};