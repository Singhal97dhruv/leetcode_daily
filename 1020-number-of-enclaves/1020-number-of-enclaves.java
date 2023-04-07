class Solution {
    
    
    public int dfs(int row,int col,int[][]grid){
        if(row<0 || col<0 ||row>=grid.length ||col>=grid[0].length|| grid[row][col]==0)return 0;
            grid[row][col]=0;
        return 1+ dfs(row+1,col,grid)+dfs(row,col+1,grid)+dfs(row-1,col,grid)+dfs(row,col-1,grid);
        
        
        
    }
    
    public int numEnclaves(int[][] grid) {
        
        int totalOnes=0;
        for(int i=0;i<grid.length;i++){
            for(int j=0;j<grid[0].length;j++){
                totalOnes+=grid[i][j]==1?1:0;
            }
        }
        int outsideOnes=0;
        for(int i=0;i<grid.length;i++){
            for(int j=0;j<grid[0].length;j++){
                if(i==0 || j==0 || i==grid.length-1|| j==grid[0].length-1){
                    outsideOnes+=dfs(i,j,grid);
                }
            }
        }
        return totalOnes-outsideOnes;
        
    }
}