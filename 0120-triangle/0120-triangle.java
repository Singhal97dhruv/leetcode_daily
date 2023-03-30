class Solution {
    
    public int memorization(int i,int j,int n,int [][]mem,List<List<Integer>>triangle){
        if(i==n)return 0;

        if(mem[i][j]!=-1)return mem[i][j];
        
        int left=triangle.get(i).get(j)+memorization(i+1,j,n,mem,triangle);
        int right=triangle.get(i).get(j)+memorization(i+1,j+1,n,mem,triangle);
        return mem[i][j]=Math.min(left,right);
        
    }
    
    public int minimumTotal(List<List<Integer>> triangle) {
        int n=triangle.size();
        int [][]dp=new int[n][n];
        for(int[]d:dp)
            Arrays.fill(d,-1);
        
        return memorization(0,0,n,dp,triangle);
        
        
    }
}