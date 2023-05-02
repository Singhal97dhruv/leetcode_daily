class Solution {
    int [][][]dp;
//     public int memo(int []prices,int i,int buy,int k){
//         if(i==prices.length || k<0)return 0;
//         if(dp[i][k][buy]!=-1)return dp[i][k][buy];
        
//         if(buy==1){
//             return dp[i][k][buy]= Math.max(-prices[i]+memo(prices,i+1,0,k-1),memo(prices,i+1,1,k));
//         }
//         else{
//             return dp[i][k][buy]= Math.max(prices[i]+memo(prices,i+1,1,k),memo(prices,i+1,0,k));
//         }
//     }
    public int maxProfit(int[] prices) {
        int n=prices.length;
        // dp=new int[n+1][3][2];
        // for(int [][]i:dp)
        //     for(int []j:i)
        //         Arrays.fill(j,-1);
        // return memo(prices,0,1,2);
        
        dp = new int[n+1][2][3];
        for(int i=n-1;i>=0;i--){
            for(int buy=0;buy<=1;buy++){
                for(int k=1;k<=2;k++){
                    if(buy==1){
                        dp[i][buy][k]=Math.max(-prices[i]+dp[i+1][0][k],dp[i+1][1][k]);
                    }
                    else dp[i][buy][k]=Math.max(prices[i]+dp[i+1][1][k-1],dp[i+1][0][k]);
                }
            }
        }
        return dp[0][1][2];
        
    }
}