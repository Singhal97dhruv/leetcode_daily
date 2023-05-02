class Solution {
    
    int [][]dp;
    public int memo(int[] prices,int i,int buy){
        if(i==prices.length)return 0;
        if(dp[i][buy]!=-1)return dp[i][buy];
        
        if(buy==1){
           return dp[i][buy]=Math.max(-prices[i]+memo(prices,i+1,0),memo(prices,i+1,1));
        }
        return dp[i][buy]=Math.max(prices[i]+memo(prices,i+1,1),memo(prices,i+1,0));
        
    }
    
    public int maxProfit(int[] prices) {
        int n=prices.length;
        dp=new int[n+1][2];
        for(int []i:dp)
            Arrays.fill(i,-1);
        return memo(prices,0,1);
    }
}