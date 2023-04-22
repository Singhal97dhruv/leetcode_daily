class Solution {
    int [][]reln={{1},{0,2},{0,1,3,4},{2,4},{0}};
    long [][]dp;
    int mod=1_000_000_007;
    public long memo(int prev,int n){
        if(n==1)return 1;
        if(dp[n][prev]!=-1)return dp[n][prev];
        
        long ans=0;
        for(int v:reln[prev]){
            ans+=memo(v,n-1);
        }
        return dp[n][prev]=ans%mod;
    }
    
    public int countVowelPermutation(int n) {
        dp=new long[n+1][5];
        for(long []i:dp)
            Arrays.fill(i,-1);
        int ans=0;
        for(int i=0;i<5;i++){
            ans+=(int)memo(i,n);
            ans%=mod;
        }
        return ans;
    }
}