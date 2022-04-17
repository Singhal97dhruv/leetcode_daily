Given two n x n binary matrices mat and target, return true if it is possible to make mat equal to target by rotating mat in 90-degree increments, or false otherwise.

 
  class Solution {
    public boolean findRotation(int[][] mat, int[][] target) {
        if(Arrays.equal(mat,target))return true;
        for(int i=0;i<3;i++){
            for(int j=0;j<mat.length;j++){
                for(int k=0;k<j;k++)
                    Collections.swap(mat,mat[j][k],mat[k][j]);
            }
        }
        
    }
}
