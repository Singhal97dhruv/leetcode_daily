class Solution {
    
    long[][][]dp;
    int mod=1_000_000_007;
    public long memo(int i,int j,int m,int n,int movesLeft){
        if(movesLeft<0)return 0;
        if(i<0||j<0||i>=m||j>=n)return 1;
        if(dp[movesLeft][i][j]!=-1)return dp[movesLeft][i][j];
        
        long ans=0;
        
            ans=(ans+memo(i+1,j,m,n,movesLeft-1)%mod); 
            ans=(ans+ memo(i-1,j,m,n,movesLeft-1)%mod); 
            ans=(ans+ memo(i,j+1,m,n,movesLeft-1)%mod); 
            ans=(ans+ memo(i,j-1,m,n,movesLeft-1)%mod);

        return dp[movesLeft][i][j]=ans%mod;
        
    }
    
    
    public int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        
        dp=new long[maxMove+1][m][n];
        for(long [][]i:dp){
            for(long []j:i){
                Arrays.fill(j,-1);
            }
        }
        
        return (int)memo(startRow,startColumn,m,n,maxMove);
    }
}