class Solution {
    // Boolean []dp=new Boolean[100001];
    public boolean winnerSquareGame(int n) {
        
        // if(n==0)return false;
        // if(dp[n]!=null)return dp[n];
        // for(int i=1;i*i<=n;i++){
        //     if(winnerSquareGame(n-i*i)==false)return dp[n]= true;
        // }
        // return dp[n]= false;
        
        boolean []dp=new boolean[n+1];
        for(int i=1;i<=n;i++){
            for(int j=1;j*j<=i;j++){
                if(!dp[i-j*j]){
                    dp[i]=true;
                    break;
                }
            }
        }
        return dp[n];
    }
}