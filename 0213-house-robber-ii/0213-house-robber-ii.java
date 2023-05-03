class Solution {
    int [][]dp;
    public int memo(int[] nums,int i,int firstTaken){
        if(i>=nums.length ||(i==nums.length-1 && firstTaken==1))return 0;
        if(dp[i][firstTaken]!=-1)return dp[i][firstTaken];
        
        if(i==0)
            return dp[i][firstTaken]=Math.max(nums[i]+memo(nums,i+2,1),memo(nums,i+1,0));
        return dp[i][firstTaken]=Math.max(nums[i]+memo(nums,i+2,firstTaken),memo(nums,i+1,firstTaken));
    }
    public int rob(int[] nums) {
        int n=nums.length;
        dp=new int[n+1][2];
        for(int []i:dp)
            Arrays.fill(i,-1);
        return memo(nums,0,0);
    }
}