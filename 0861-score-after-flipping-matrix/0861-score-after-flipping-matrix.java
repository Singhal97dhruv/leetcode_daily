class Solution {
    public int matrixScore(int[][] grid) {
        
        int m=grid.length,n=grid[0].length,res=0;
        
        res+=(1<<(n-1))*m;
        
        for(int j=1;j<n;j++){
            int sm=0;
            for(int i=0;i<m;i++){
               sm+= grid[i][0]==grid[i][j]?1:0;
            }
            res+=(1<<(n-1-j))*Math.max(sm,m-sm);
        }
        return res;
    }
}