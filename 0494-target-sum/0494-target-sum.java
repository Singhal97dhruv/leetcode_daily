class Solution {
    public int findTargetSumWays(int[] nums, int target) {
        
        int sum=0;
        for(int i:nums)sum+=i;
        target=Math.abs(target);
        if(sum<target || (sum+target)%2!=0)return 0;
        target=(sum+target)/2;
        int[][]dp=new int[nums.length+1][target+1];
        for(int i=0;i<=nums.length;i++)dp[i][0]=1;
        
        for(int i=1;i<=nums.length;i++){
            for(int j=0;j<=target;j++){
                dp[i][j]=dp[i-1][j];
                if(nums[i-1]<=j){
                    dp[i][j]+=dp[i-1][j-nums[i-1]];
                }
            }
        }
        return dp[dp.length-1][dp[0].length-1];
    }
}