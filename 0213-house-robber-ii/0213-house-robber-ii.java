class Solution {
    int [][]dp;
//     public int memo(int[] nums,int i,int firstTaken){
//         if(i>=nums.length ||(i==nums.length-1 && firstTaken==1))return 0;
//         if(dp[i][firstTaken]!=-1)return dp[i][firstTaken];
        
//         if(i==0)
//             return dp[i][firstTaken]=Math.max(nums[i]+memo(nums,i+2,1),memo(nums,i+1,0));
//         return dp[i][firstTaken]=Math.max(nums[i]+memo(nums,i+2,firstTaken),memo(nums,i+1,firstTaken));
//     }
    public int rob(int[] nums) {
        int n=nums.length;
        dp=new int[n+1][2];
        // for(int []i:dp)
            // Arrays.fill(i,-1);
        // return memo(nums,0,0);
        dp[n-1][0]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            if(i==0)
                dp[i][0]=dp[i+1][0];
            else 
                dp[i][0]=Math.max(nums[i]+dp[i+2][0],dp[i+1][0]);
            dp[i][1]=Math.max(nums[i]+dp[i+2][1],dp[i+1][1]);
        }
        return Math.max(dp[0][0],dp[0][1]);
    }
}