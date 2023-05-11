class Solution {
    Boolean []dp=new Boolean[100001];
    public boolean winnerSquareGame(int n) {
        
        if(n==0)return false;
        if(dp[n]!=null)return dp[n];
        for(int i=1;i*i<=n;i++){
            if(winnerSquareGame(n-i*i)==false)return dp[n]= true;
        }
        return dp[n]= false;
        
    }
}