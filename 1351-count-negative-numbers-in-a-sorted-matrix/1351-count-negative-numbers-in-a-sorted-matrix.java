class Solution {
    public int countNegatives(int[][] grid) {
        int m=grid.length,n=grid[0].length;
        int cnt=0;
        
        for(int i=0;i<m;i++){
            for(int j=n-1;j>=0;j--){
                if(grid[i][j]>=0)break;
                cnt++;
            }
        }
        return cnt;
    }
}