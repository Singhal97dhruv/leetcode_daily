class Solution {
public:
    int dp[100001][3][2];
    int memo(vector<int>&prices,int i,bool buy,int k){
        if(i==prices.size() || k<0)return 0;
        if(dp[i][k][buy]!=-1)return dp[i][k][buy];
        if(buy){
            return dp[i][k][buy]= max(-prices[i]+memo(prices,i+1,false,k-1),memo(prices,i+1,true,k));
        }
        else{
            return dp[i][k][buy]= max(prices[i]+memo(prices,i+1,true,k),memo(prices,i+1,false,k));
        }
        
    }
    
    int maxProfit(vector<int>& prices) {
        memset(dp,-1,sizeof(dp));
        return memo(prices,0,true,2);
    }
};