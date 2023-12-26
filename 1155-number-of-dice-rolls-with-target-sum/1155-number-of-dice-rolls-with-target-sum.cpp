class Solution {
public:
    int mod=1e9+7;
    int dp[31][1001];
    int backtrack(int sum,int n,int k,int target){
        if(sum==target && n==0)return 1;
        if(n==0 || sum==target)return 0;
        if(dp[n][sum]!=-1)return dp[n][sum];
        int ans=0;
        
        for(int i=1;i<=k;i++){
            if(sum+i>target)break;
            ans=(ans+backtrack(sum+i,n-1,k,target)%mod)%mod;
        }
        
        return dp[n][sum]= ans;
        
    }
    
    int numRollsToTarget(int n, int k, int target) {
        memset(dp,-1,sizeof(dp));
        return backtrack(0,n,k, target);
        
    }
};