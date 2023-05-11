class Solution {
    int [][]dp;
//     public int recur(int i,int j,int[] n1,int []n2){
//         if(i>=n1.length || j>=n2.length)return 0;
//         if(dp[i][j]!=-1)return dp[i][j];
//         if(n1[i]==n2[j])return dp[i][j]= 1+recur(i+1,j+1,n1,n2);
        
//         return dp[i][j]= Math.max(recur(i+1,j,n1,n2),recur(i,j+1,n1,n2));
//     }
    
    public int maxUncrossedLines(int[] nums1, int[] nums2) {
        dp=new int[501][501];
        // for(int []i:dp)
        //     Arrays.fill(i,-1);
        // return recur(0,0,nums1,nums2);
        int m=nums1.length,n=nums2.length;
        for(int i=m-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                if(nums1[i]==nums2[j])dp[i][j]=1+dp[i+1][j+1];
                else
                    dp[i][j]=Math.max(dp[i][j+1],dp[i+1][j]);
            }
        }
        return dp[0][0];
        
    }
}