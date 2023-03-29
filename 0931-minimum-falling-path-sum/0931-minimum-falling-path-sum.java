class Solution {
    public int minFallingPathSum(int[][] matrix) {
        
        int n=matrix.length;
        // int [][]dp=new int[n][n];
        // for(int j=0;j<n;j++)dp[0][j]=matrix[0][j];
        
        for(int i=1;i<n;i++){
            for(int j=0;j<n;j++){
                if(j==0){
                    // dp[i][j]=Math.min(dp[i-1][j],dp[i-1][j+1])+matrix[i][j];
                    matrix[i][j]=Math.min(matrix[i-1][j],matrix[i-1][j+1])+matrix[i][j];
                }
                else if(j==n-1)
                    // dp[i][j]=Math.min(dp[i-1][j],dp[i-1][j-1])+matrix[i][j];
                    matrix[i][j]=Math.min(matrix[i-1][j],matrix[i-1][j-1])+matrix[i][j];
                else
                    // dp[i][j]=Math.min(dp[i-1][j],Math.min(dp[i-1][j+1],dp[i-1][j-1]))+matrix[i][j];
                matrix[i][j]=Math.min(matrix[i-1][j],Math.min(matrix[i-1][j+1],matrix[i-1][j-1]))+matrix[i][j];
            }
        }
        
        int res=Integer.MAX_VALUE;
        for(int j=0;j<n;j++)
            res=Math.min(res,matrix[n-1][j]);
        return res;
        
    }
}