class Solution {
public:
   int dp[10000 + 1][12 + 1];
    
    
    int tabulation(vector<int> wt, int w, int n)
    {
        for (int i = 0; i < w + 1; i++)
            for (int j = 0; j < n + 1; j++)
                if (i == 0 || j == 0)
                    dp[i][j] = (i == 0) ? 0 : INT_MAX - 1;
        
        for (int i = 1; i < w + 1; i++) {
            for (int j = 1; j < n + 1; j++) {
                if (wt[j - 1] > i) 
                    dp[i][j] = 0 + dp[i - 0][j - 1];
                else 
                    dp[i][j] = min(0 + dp[i - 0][j - 1], 1 + dp[i - wt[j - 1]][j - 0]);
            }
        }
        
        return dp[w][n];
    }

    
    
    
    int coinChange(vector<int>& coins, int amount) 
    {
        // memset(dp, -1, sizeof(dp));
        // int minCoins = tabulation(coins, amount, coins.size());
        // return minCoins == INT_MAX - 1 ? -1 : minCoins;    
        
        // int Max=amount+1;
        // vector<int>dp(amount+1,Max);
        // dp[0]=0;
        // for(int i=1;i<=amount;i++){
        //     for(int j=0;j<coins.size();j++){
        //         if(i>=coins[j]){
        //             dp[i]=min(dp[i],dp[i-coins[j]]+1);
        //         }
        //     }
        // }
        // return dp[amount]>amount?-1:dp[amount];
        
        int Mx=amount+1;
        vector<int>dp(amount+1,Mx);
        dp[0]=0;
        for(int i=1;i<=amount;i++){
            for(int j:coins){
                if(j<=i){
                    dp[i]=min(dp[i],dp[i-j]+1);
                }
            }
        }
        
        return dp[amount]==Mx?-1:dp[amount];
    }

};