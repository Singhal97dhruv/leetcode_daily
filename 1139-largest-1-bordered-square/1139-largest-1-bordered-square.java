class Solution {
    public int largest1BorderedSquare(int[][] grid) {
        int m=grid.length,n=grid[0].length;
        int [][]rowOnes=new int[m][n],colOnes=new int[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    rowOnes[i][j]=j==0?1:rowOnes[i][j-1]+1;
                    colOnes[i][j]=i==0?1:colOnes[i-1][j]+1;
                }
            }
        }
        
        int mxLen=0;
        for(int i=m-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                int tempLen=Math.min(rowOnes[i][j],colOnes[i][j]);
                while(tempLen>mxLen){
                    if(rowOnes[i-tempLen+1][j]>=tempLen && colOnes[i][j-tempLen+1]>=tempLen)
                        mxLen=tempLen;
                    tempLen--;
                }
            }
        }
        return mxLen*mxLen;
        
    }
}