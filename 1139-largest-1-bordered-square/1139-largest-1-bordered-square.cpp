class Solution {
public:
    int largest1BorderedSquare(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        vector<vector<pair<int,int>>>dp(m,vector<pair<int,int>>(n,{0,0}));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    dp[i][j].first= j==0?1:dp[i][j-1].first+1;
                    dp[i][j].second= i==0?1:dp[i-1][j].second+1;
                }
            }
        }
        
        int mxLen=0,res=0;
        for(int i=m-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                int mn=min(dp[i][j].first,dp[i][j].second);
                while(mn>mxLen){
                    if(dp[i][j-mn+1].second>=mn && dp[i-mn+1][j].first>=mn)
                        mxLen=mn;
                    mn--;
                }
            }
        }
        return mxLen*mxLen;
        
    }
};