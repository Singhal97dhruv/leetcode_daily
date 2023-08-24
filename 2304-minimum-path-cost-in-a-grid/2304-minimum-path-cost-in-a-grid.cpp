class Solution {
public:
    
    int dp[51][51];
    int recur(int idx,int J,vector<vector<int>>&grid,vector<vector<int>>&moveCost){
        
        if(idx>=grid.size())return 0;
        if(dp[idx][J]!=-1)return dp[idx][J];
        int ans=INT_MAX;
        int prev=grid[idx-1][J];
        for(int j=0;j<grid[0].size();j++){
            ans=min(ans,grid[idx][j]+moveCost[prev][j]+recur(idx+1,j,grid,moveCost));
        }
        return dp[idx][J]= ans;
        
    }
    
    
    int minPathCost(vector<vector<int>>& grid, vector<vector<int>>& moveCost) {
        
        int ans=INT_MAX;
        memset(dp,-1,sizeof(dp));
        for(int j=0;j<grid[0].size();j++){
            ans=min(ans,grid[0][j]+recur(1,j,grid,moveCost));
        }
        
        return ans;
    }
};