class Solution {
public:
    int dp[1001][1001];
    int memo(int i,int j,int sum,vector<int>&v){
        if(i>=j)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
    return dp[i][j]=max(sum-v[i]-memo(i+1,j,sum-v[i],v),sum-v[j]-memo(i,j-1,sum-v[j],v));
    }
    int stoneGameVII(vector<int>& stones) {
        memset(dp,-1,sizeof(dp));
        return memo(0,stones.size()-1,accumulate(stones.begin(),stones.end(),0),stones);
    }
};