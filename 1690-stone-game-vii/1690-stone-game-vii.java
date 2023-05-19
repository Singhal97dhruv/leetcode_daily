class Solution {
//     int [][]dp;
//     public int memo(int i,int j,int[] stones,int sum){
//         if(i>=j)return 0;
//         if(dp[i][j]!=-1)return dp[i][j];
//         return dp[i][j]= Math.max(sum-stones[i]-memo(i+1,j,stones,sum-stones[i]),sum-stones[j]-memo(i,j-1,stones,sum-stones[j]));
        
//     }
    
    public int stoneGameVII(int[] stones) {
        // int sum=0;
        // int n=stones.length;
        // dp=new int[n][n];
        // for(int []i:dp)
        //     Arrays.fill(i,-1);
        // for(int i:stones)sum+=i;
        // return memo(0,n-1,stones,sum);
        
        int n=stones.length;
        int []sum=new int[n+1];
        int [][]dp=new int[n][n];
        for(int i=0;i<n;i++)sum[i+1]=sum[i]+stones[i];
        
        for(int i=n-2;i>=0;i--){
            for(int j=i+1;j<n;j++){
                dp[i][j]=Math.max(sum[j+1]-sum[i+1]-dp[i+1][j],sum[j]-sum[i]-dp[i][j-1]);
            }
        }
        return dp[0][n-1];
    }
}