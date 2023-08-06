class Solution {
public:
    #define ll long long
    int mod=1e9+7;
    int dp[101][101];
    ll memo(int n,int goal,int k){
        if(n==0 && goal==0)return 1;
        if(n==0 || goal==0)return 0;
        if(dp[n][goal]!=-1)return dp[n][goal];
        ll pick = memo(n - 1, goal - 1, k) * n;
        ll notpick = memo(n, goal - 1, k) * max(n - k, 0);
        return dp[n][goal]= (pick+notpick)%mod;
        
    }
    
    int numMusicPlaylists(int n, int goal, int k) {
        memset(dp,-1,sizeof(dp));
        return memo(n,goal,k);
    }
};