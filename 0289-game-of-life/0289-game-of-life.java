class Solution {
    public void gameOfLife(int[][] board) {
        int m=board.length,n=board[0].length;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int cnt=0;
                for(int ii=Math.max(0,i-1);ii<Math.min(i+2,m);ii++){
                    for(int jj=Math.max(0,j-1);jj<Math.min(j+2,n);jj++){
                        cnt+=board[ii][jj]&1;
                    }
                }
                if(cnt==3 || cnt-board[i][j]==3)board[i][j]|=2;
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                board[i][j]>>=1;
            }
        }
    }
}