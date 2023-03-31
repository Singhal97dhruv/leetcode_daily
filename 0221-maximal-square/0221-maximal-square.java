class Solution {
    public int maximalSquare(char[][] matrix) {
//         int m=matrix.length,n=matrix[0].length,mx=0;
//         int [][]dp=new int[m][n];
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++)
//             {
//                 if(i==0||j==0||matrix[i][j]=='0')
//                     dp[i][j]=matrix[i][j]-'0';
//                 else
//                     dp[i][j]=Math.min(dp[i-1][j-1],Math.min(dp[i-1][j],dp[i][j-1]))+1;
//                 mx=Math.max(mx,dp[i][j]);
//             }
            
//         }
//         return mx*mx;
        int m=matrix.length,n=matrix[0].length,res=0;
        int []curr=new int[n];
        int []pre=new int[n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0|| j==0|| matrix[i][j]=='0')
                    curr[j]=matrix[i][j]-'0';
                else 
                    curr[j]=Math.min(pre[j-1],Math.min(pre[j],curr[j-1]))+1;
                res=Math.max(res,curr[j]);
                
            }
            pre=Arrays.copyOf(curr,curr.length);
            Arrays.fill(curr,0);
        }
        return res*res;
    }
}