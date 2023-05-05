class Solution {
    public boolean stoneGame(int[] piles) {
        int n=piles.length;
        int dp[][]=new int[n][n];
        // int sum=iota(piles.begin(),piles.end(),0);
        int sum=0;
            for(int i:piles)sum+=i;
        // for(int i=0;i<n;i++)dp[i][i]=piles[i];
        for(int d=0;d<n;d++){
            for(int i=0,j=d;j<n;i++,j++){
                if(d==0){
                    dp[i][j]=piles[i];
                }
                else if(d==1){
                    dp[i][j]=Math.max(piles[i],piles[j]);
                }
                else{
                    dp[i][j]=Math.max(piles[i]+Math.min(dp[i+2][j],dp[i+1][j-1]),piles[j]+Math.min(dp[i+1][j-1],dp[i][j-2]));
                }
            }
        }
        return dp[0][n-1]*2>sum?true:false;
    }
}