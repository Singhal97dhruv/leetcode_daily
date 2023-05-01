class Solution {
public:
    int dp[50001][2];
//     int recur(vector<int>&prices,int fee,int i,bool buy){
//             if(i==prices.size())return 0;
//             if(dp[i][buy]!=-1)return dp[i][buy];
//         if(buy){
//             return dp[i][buy]= max(-prices[i]+recur(prices,fee,i+1,false),recur(prices,fee,i+1,true));
//         }
//         else{
//             return dp[i][buy]= max(prices[i]-fee+recur(prices,fee,i+1,true),recur(prices,fee,i+1,false));
//         }
        
        
//     }
    
    int maxProfit(vector<int>& prices, int fee) {
        // memset(dp,-1,sizeof(dp));
        // return recur(prices,fee,0,true);
        int n=prices.size();
        dp[n-1][1]=-fee+prices[n-1];
        for(int i=n-2;i>=0;i--){
            dp[i][0]=max(-prices[i]+dp[i+1][1],dp[i+1][0]);    // buy
            dp[i][1]=max(prices[i]-fee+dp[i+1][0],dp[i+1][1]); //sell
        }
        return dp[0][0];
    }
};