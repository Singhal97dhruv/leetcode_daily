class Solution {
public:
    int dp[50001][2];
    int recur(vector<int>&prices,int fee,int i,bool buy){
            if(i==prices.size())return 0;
            if(dp[i][buy]!=-1)return dp[i][buy];
        if(buy){
            return dp[i][buy]= max(-prices[i]+recur(prices,fee,i+1,false),recur(prices,fee,i+1,true));
        }
        else{
            return dp[i][buy]= max(prices[i]-fee+recur(prices,fee,i+1,true),recur(prices,fee,i+1,false));
        }
        
        
    }
    
    int maxProfit(vector<int>& prices, int fee) {
        memset(dp,-1,sizeof(dp));
        return recur(prices,fee,0,true);
    }
};