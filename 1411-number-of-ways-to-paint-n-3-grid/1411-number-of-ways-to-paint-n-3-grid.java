class Solution {
    
    int [][][][]dp;
    int mod=1_000_000_007;
    public int memo(int n,int A,int B,int C){
        if(n<0)return 1;
        if(dp[n][A][B][C]!=-1)return dp[n][A][B][C];
        
        int ans=0;
        
        int []arr= {1,2,3};
        
        for(int a:arr){
            if(a==A)continue;
            for(int b:arr){
                if(b==B || b==a)continue;
                for(int c:arr){
                    if(c==C || c==b)continue;
                    ans=(ans+memo(n-1,a,b,c))%mod;
                }
            }
        }
        return dp[n][A][B][C]=ans;
    }
    
    public int numOfWays(int n) {
        dp=new int[n][4][4][4];
        for(int [][][]i:dp)
            for(int [][]j:i)
                for(int []k:j)
                    Arrays.fill(k,-1);
        return memo(n-1,0,0,0);
    }
}