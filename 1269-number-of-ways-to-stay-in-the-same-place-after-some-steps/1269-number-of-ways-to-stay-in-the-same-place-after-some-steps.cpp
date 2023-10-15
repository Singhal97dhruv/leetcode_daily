class Solution {
public:
    int mod=1e9+7;
    vector<vector<int>>dp;
    int memo(int i,int movesLeft,int n){
        if(i==0 && movesLeft==0)return 1;
        if(i<0 || i>=n || movesLeft==0||i>movesLeft)return 0;
        if(dp[movesLeft][i]!=-1)return dp[movesLeft][i];
        int ans=0;
        ans=(ans+memo(i+1,movesLeft-1,n))%mod;
        ans=(ans+memo(i,movesLeft-1,n))%mod;
        ans=(ans+memo(i-1,movesLeft-1,n))%mod;
        return dp[movesLeft][i]=ans%mod;
    }
    
    
    int numWays(int steps, int arrLen) {
        dp.resize(steps+1,vector<int>(steps/2+1,-1));
       return memo(0,steps,arrLen);
    }
};