class Solution {
    int mod=1_000_000_007;
    long dp[][];
    public long memo(int i,int movesLeft,int n){
        if(i==0 && movesLeft==0)return 1;
        if(i<0 || i>=n || movesLeft<0 || i>movesLeft)return 0;
        if(dp[movesLeft][i]!=-1)return dp[movesLeft][i];
        
        long ans=0;
        ans+=memo(i+1,movesLeft-1,n)%mod;
        ans+=memo(i-1,movesLeft-1,n)%mod;
        ans+=memo(i,movesLeft-1,n)%mod;
        
        return dp[movesLeft][i]=ans%mod;
            
    }
    public int numWays(int steps, int arrLen) {
        dp=new long[steps+1][steps/2+1];
        for(long []i:dp)
            Arrays.fill(i,-1);
        return (int)memo(0,steps,arrLen);
        
    }
}