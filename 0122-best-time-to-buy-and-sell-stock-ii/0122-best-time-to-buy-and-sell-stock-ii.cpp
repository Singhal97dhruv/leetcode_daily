class Solution {
public:
    int dp[30001][2];
    int recur(int idx,vector<int>&prices,bool buy){
        if(idx>=prices.size())return 0;
        if(dp[idx][buy]!=-1)return dp[idx][buy];
        if(buy){
            return dp[idx][buy]= max(prices[idx]+recur(idx+1,prices,!buy),recur(idx+1,prices,buy));
        }
        return dp[idx][buy]= max(-prices[idx]+recur(idx+1,prices,true),recur(idx+1,prices,buy));
        
    }
    

    int maxProfit(vector<int>& prices) {
//         int n=prices.size();
//         vector<vector<int>>dp(n+1,vector<int>(2));
    
//         for(int i=n-1;i>=0;i--){
//             for(int buy=0;buy<=1;buy++){
//                 if(buy)
//                     dp[i][buy]=max(-prices[i]+dp[i+1][0],dp[i+1][1]);
//                 else
//                     dp[i][buy]=max(prices[i]+dp[i+1][1],dp[i+1][0]);
//             }
//         }
//         return dp[0][1];
        memset(dp,-1,sizeof(dp));
        return recur(0,prices,false);
        
    }
};