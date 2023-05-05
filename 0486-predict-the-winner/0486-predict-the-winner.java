class Solution {
    int [][]dp;
//     public int memo(int[]nums,int st,int end){
//         if(st>end)return 0;
//         else if(st==end)return nums[st];
        
//         if(dp[st][end]!=-1)return dp[st][end];
        
//         return Math.max(nums[st]+Math.min(memo(nums,st+2,end),memo(nums,st+1,end-1)),nums[end]+Math.min(memo(nums,st,end-2),memo(nums,st+1,end-1)));
        
//     }
    public boolean PredictTheWinner(int[] nums) {
        int n=nums.length;
        int totalScore=0;
        for(int i:nums)totalScore+=i;
        dp=new int[n][n];
        // for(int []i:dp)
        //     Arrays.fill(i,-1);
        // return totalScore-2*memo(nums,0,n-1)<=0?true:false;
        
        for(int d=0;d<n;d++){
            for(int i=0,j=d;j<n;i++,j++){
                if(d==0)dp[j][j]=nums[j];
                else if(d==1)dp[i][j]=Math.max(dp[i][j-1],dp[i+1][j]);
                else
                    dp[i][j]=Math.max(nums[i]+Math.min(dp[i+2][j],dp[i+1][j-1]),nums[j]+Math.min(dp[i][j-2],dp[i+1][j-1]));
            }
        }
        return totalScore-2*dp[0][n-1]<=0?true:false;
    }
}