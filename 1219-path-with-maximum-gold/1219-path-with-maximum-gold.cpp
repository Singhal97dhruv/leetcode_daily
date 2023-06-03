class Solution {
public:
    int dfs(int i,int j,vector<vector<int>>&grid){
         if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j]==0)return 0;
        
        int temp=grid[i][j];
        grid[i][j]=0;
        
        
        
        int ans=temp+ max({dfs(i+1,j,grid),dfs(i,j+1,grid),dfs(i,j-1,grid),dfs(i-1,j,grid)});
        grid[i][j]=temp;
        return ans;
            
    }
    
    int getMaximumGold(vector<vector<int>>& grid) {
       
        int mx=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                mx=max(mx,dfs(i,j,grid));
                
            }
        }
        return mx;
    }
};