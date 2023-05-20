class Solution {
    public int[] findDiagonalOrder(int[][] mat) {
        int m=mat.length,n=mat[0].length;
        int []res=new int[m*n];
        boolean up=true;
        int row=0,col=0,i=0;
        while(row<m && col<n){
            if(up){
                while(row>0 && col<n-1){
                    res[i++]=mat[row][col];
                    row--;
                    col++;
                }
                res[i++]=mat[row][col];
                if(col==n-1)row++;
                else col++;
            }
            else{
                while(col>0 && row<m-1){
                    res[i++]=mat[row][col];
                    col--;
                    row++;
                }
                res[i++]=mat[row][col];
                if(row==m-1)col++;
                else row++;
            }
            up=!up;
        }
        return res;
    }
}