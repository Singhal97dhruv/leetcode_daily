class Solution {
public:
    
    int mod=1e9+7;
    int dp[10001]={[0 ... 10000]=-1};
    int recur(int idx,int n){
        
        if(idx>=n)return 1;
        if(dp[idx]!=-1)return dp[idx];
        return dp[idx]= ((recur(idx+2,n))+recur(idx+1,n))%mod;
        
        
    }
    
    
    int countHousePlacements(int n) {
        int ans=recur(0,n);
        return (1LL*ans*ans)%mod;
    }
};