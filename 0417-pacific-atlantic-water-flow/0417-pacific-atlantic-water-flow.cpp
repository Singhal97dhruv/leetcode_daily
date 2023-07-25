class Solution {
public:
    
    vector<vector<int>>atlantic,pacific;
    vector<vector<int>>ans;
    
    void dfs(int i,int j,vector<vector<int>>&vis,vector<vector<int>>&h){
    
        if(vis[i][j])return ;
        vis[i][j]=1;
        if(pacific[i][j]== atlantic[i][j])ans.push_back({i,j});
        
        if(i+1<h.size() && h[i][j]<=h[i+1][j])dfs(i+1,j,vis,h);
        if(i-1>=0 && h[i][j]<=h[i-1][j])dfs(i-1,j,vis,h);
        if(j+1<h[0].size() && h[i][j]<=h[i][j+1])dfs(i,j+1,vis,h);
        if(j-1>=0 && h[i][j]<=h[i][j-1])dfs(i,j-1,vis,h);

    }
    
    
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
    
        int m=heights.size(),n=heights[0].size();
        pacific.resize(m,vector<int>(n,0));
        atlantic.resize(m,vector<int>(n,0));

        for(int i=0;i<m;i++)dfs(i,0,pacific,heights),dfs(i,n-1,atlantic,heights);
        for(int j=0;j<n;j++)dfs(0,j,pacific,heights),dfs(m-1,j,atlantic,heights);
        
        return ans;
    }
};