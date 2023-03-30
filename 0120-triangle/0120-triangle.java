class Solution {
    
//     public int memorization(int i,int j,int n,int [][]mem,List<List<Integer>>triangle){
//         if(i==n)return 0;

//         if(mem[i][j]!=-1)return mem[i][j];
        
//         int left=triangle.get(i).get(j)+memorization(i+1,j,n,mem,triangle);
//         int right=triangle.get(i).get(j)+memorization(i+1,j+1,n,mem,triangle);
//         return mem[i][j]=Math.min(left,right);
        
//     }
    
    public int minimumTotal(List<List<Integer>> triangle) {
        int n=triangle.size();
        // int [][]dp=new int[n][n];
        // for(int[]d:dp)
            // Arrays.fill(d,-1);
        
        // return memorization(0,0,n,dp,triangle);

        // for(int j=0;j<n;j++)dp[n-1][j]=triangle.get(n-1).get(j);
        
        // for(int i=n-2;i>=0;i--){
        //     for(int j=0;j<=i;j++){
        //         dp[i][j]=Math.min(dp[i+1][j]+triangle.get(i).get(j),dp[i+1][j+1]+triangle.get(i).get(j));
        //     }
        // }
        // return dp[0][0];
        
        int []nextRow=new int[n+1];

        for(int i=n-1;i>=0;i--){
            for(int j=0;j<triangle.get(i).size();j++){
                
                int left=nextRow[j]+triangle.get(i).get(j);
                int right=nextRow[j+1]+triangle.get(i).get(j);
                nextRow[j]=Math.min(left,right);
                
            }
        }
        
        return nextRow[0];
        
    }
}