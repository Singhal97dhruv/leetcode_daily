class Solution {
    int []dp=new int[20];
    public int memo(int n){
        dp[0]=dp[1]=1;
        for(int i=2;i<=n;i++){
            for(int j=1;j<=i;j++){
                dp[i]+=dp[j-1]*dp[i-j];
            }
        }
      
        return dp[n];
    }
    public int numTrees(int n) {
        return memo(n);
    }
}