class Solution {
    
    int []offset= {0,1,0,-1,0};
    
    public int dfs(int i,int j,int [][]grid){
        
        if(i<0 || j<0 || i>=grid.length ||j>=grid[0].length || grid[i][j]==0)return 0;
        
        int temp=grid[i][j];
        
        grid[i][j]=0;
        
        int ans=0;
        
        for(int k=0;k<4;k++){
            ans=Math.max(ans,dfs(i+offset[k],j+offset[k+1],grid));
        }
        
        grid[i][j]=temp;
        
        return ans+temp;
        
    }
    
    public int getMaximumGold(int[][] grid) {
        int m=grid.length,n=grid[0].length;
        
        int mx=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                mx=Math.max(mx,dfs(i,j,grid));
            }
        }
        return mx;
    }
}