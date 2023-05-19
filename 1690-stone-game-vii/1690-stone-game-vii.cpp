class Solution {
public:
    // int dp[1001][1001];
    // int memo(int i,int j,int sum,vector<int>&v){
    //     if(i>=j)return 0;
    //     if(dp[i][j]!=-1)return dp[i][j];
    // return dp[i][j]=max(sum-v[i]-memo(i+1,j,sum-v[i],v),sum-v[j]-memo(i,j-1,sum-v[j],v));
    // }
    int stoneGameVII(vector<int>& stones) {
        // memset(dp,-1,sizeof(dp));
        // return memo(0,stones.size()-1,accumulate(stones.begin(),stones.end(),0),stones);
        int n=stones.size();
        vector<int>sum(n+1,0);
        for(int i=0;i<stones.size();i++)sum[i+1]=sum[i]+stones[i];
        vector<vector<int>>dp(n+1,vector<int>(n+1));
        for(int i=n-1;i>=0;i--){
            for(int j=i+1;j<n;j++){
                dp[i][j]=max(sum[j+1]-sum[i+1]-dp[i+1][j],sum[j]-sum[i]-dp[i][j-1]);
            }
        }
        return dp[0][n-1];
    }
};