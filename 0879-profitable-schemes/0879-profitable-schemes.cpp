class Solution {
public:
    int dp[102][102][102];
    int mod=1e9+7;
    int recur(int idx,int curr_profit,int n,int minProfit,vector<int>& group, vector<int>& profit){
        if(idx==profit.size()){
            if(curr_profit>=minProfit && n>=0)return 1;
            return 0;
        }
        else if(n<=0){
            if(n==0 && curr_profit>=minProfit)return 1;
            return 0;
        } 
        if(dp[idx][curr_profit][n]!=-1)return dp[idx][curr_profit][n];
        
        int notConsidering=recur(idx+1,curr_profit,n,minProfit,group,profit);
        int considering=recur(idx+1,min(curr_profit+profit[idx],minProfit),n-group[idx],minProfit,group,profit);
        return dp[idx][curr_profit][n]= (notConsidering%mod + considering%mod)%mod;
        
    }
    
    int profitableSchemes(int n, int minProfit, vector<int>& group, vector<int>& profit) {
        memset(dp,-1,sizeof(dp));
        return recur(0,0,n,minProfit,group,profit);
    }
};