class Solution {
    public int uniquePathsWithObstacles(int[][] obstacleGrid) {
        int m=obstacleGrid.length,n=obstacleGrid[0].length;
        int [][]grid=new int[m][n];
        if(obstacleGrid[0][0]==0)grid[0][0]=1;
        else return 0;
        for(int i=1;i<m;i++){
            if(obstacleGrid[i][0]==1)break;
            grid[i][0]=1;
        }
        for(int j=1;j<n;j++){
            if(obstacleGrid[0][j]==1)break;
            grid[0][j]=1;
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(obstacleGrid[i][j]==1)continue;
                grid[i][j]=grid[i][j-1]+grid[i-1][j];
            }
        }
        return grid[m-1][n-1];
    }
}