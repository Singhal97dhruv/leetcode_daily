class Solution {
    
    int[][]offset=new int[][]{{2,-1},{2,1},{-2,1},{-2,-1},{1,2},{-1,2},{1,-2},{-1,-2}};
    double [][][]dp;
    public double memo(int n,int k,int row,int col){
        if(row<0||col<0||row>=n||col>=n)return 0;
        if(k==0)return 1;
        if(dp[row][col][k]!=0)return dp[row][col][k];
        double temp=0;
        for(int i=0;i<8;i++){
            temp+=0.125*memo(n,k-1,row+offset[i][0],col+offset[i][1]);
        }
        return dp[row][col][k]=temp;
    }
    
    public double knightProbability(int n, int k, int row, int column) {
        dp=new double[n][n][k+1];
        return memo(n,k,row,column);
    }
}