class Solution {
    int mod=1_000_000_007;
    long [][][]dp;
    public long memo(int idx,int currProfit,int n,int minProfit,int[]group,int[]profit){
        
        if(idx==profit.length || n<=0){
            if(currProfit>=minProfit && n>=0)return 1;
            return 0;
        }
        if(dp[idx][n][currProfit]!=-1)return dp[idx][n][currProfit];
        
        long notConsidering=memo(idx+1,currProfit,n,minProfit,group,profit);
        long Considering=memo(idx+1,Math.min(currProfit+profit[idx],minProfit),n-group[idx],minProfit,group,profit);
        
        return dp[idx][n][currProfit]= (notConsidering+Considering)%mod;
        
    }
    
    public int profitableSchemes(int n, int minProfit, int[] group, int[] profit) {
        dp=new long[102][102][102];
        for(long [][]i:dp){
            for(long []j:i){
                Arrays.fill(j,-1);
            }
        }
        return (int)memo(0,0,n,minProfit,group,profit);
    }
}