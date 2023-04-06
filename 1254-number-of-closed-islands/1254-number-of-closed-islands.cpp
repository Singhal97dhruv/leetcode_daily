class Solution {
public:
    
    int flag=0;
    
    void dfs(vector<vector<int>>& grid,int i,int j){
        if((i==0 || j==0 || i==grid.size()-1 || j==grid[0].size()-1)&& grid[i][j]==0){
        flag=0;
            return;
        }
        if(grid[i][j]==1)return ;
        grid[i][j]=1;
        dfs(grid,i+1,j);
        dfs(grid,i-1,j);
        dfs(grid,i,j+1);
        dfs(grid,i,j-1);

    }
    
    
    int closedIsland(vector<vector<int>>& grid) {
        int count=0;
        for(int i=1;i<grid.size()-1;i++){
            for(int j=1;j<grid[0].size()-1;j++){
                if(grid[i][j]==0){
                    flag=1;
                dfs(grid,i,j);
                    if(flag)count++;
                }
                
            }
        }
        return count;
    }
};