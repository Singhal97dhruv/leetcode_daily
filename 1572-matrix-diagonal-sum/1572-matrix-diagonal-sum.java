class Solution {
    public int diagonalSum(int[][] mat) {
        int sum=0,n=mat.length;
        for(int i=0;i<mat.length;i++){
            if(i==n-i-1)sum+=mat[i][i];
            else{
                sum+=mat[i][i]+mat[i][n-i-1];
            }
        }
        return sum;
    }
}