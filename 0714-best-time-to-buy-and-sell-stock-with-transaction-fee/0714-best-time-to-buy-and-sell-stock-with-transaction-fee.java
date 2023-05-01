class Solution {
    int [][]dp;
    public int memo(int []prices,int fee,int i,int buy){
        if(i==prices.length)return 0;
        
        if(dp[i][buy]!=-1)return dp[i][buy];
        
        if(buy==1){
            return dp[i][buy]=Math.max(-prices[i]+memo(prices,fee,i+1,0),memo(prices,fee,i+1,1));
        }
        else{
            return dp[i][buy]=Math.max(prices[i]-fee+memo(prices,fee,i+1,1),memo(prices,fee,i+1,0));
        }
        
    }
    public int maxProfit(int[] prices, int fee) {
        int n=prices.length;
        dp=new int[n+1][2];
        for(int []i:dp)
            Arrays.fill(i,-1);
        return memo(prices,fee,0,1);
    }
}