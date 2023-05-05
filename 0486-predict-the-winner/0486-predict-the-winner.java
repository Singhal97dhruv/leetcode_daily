class Solution {
    int [][]dp;
    public int memo(int[]nums,int st,int end){
        if(st>end)return 0;
        else if(st==end)return nums[st];
        
        if(dp[st][end]!=-1)return dp[st][end];
        
        return Math.max(nums[st]+Math.min(memo(nums,st+2,end),memo(nums,st+1,end-1)),nums[end]+Math.min(memo(nums,st,end-2),memo(nums,st+1,end-1)));
        
    }
    public boolean PredictTheWinner(int[] nums) {
        int n=nums.length;
        int totalScore=0;
        for(int i:nums)totalScore+=i;
        dp=new int[n][n];
        for(int []i:dp)
            Arrays.fill(i,-1);
        return totalScore-2*memo(nums,0,n-1)<=0?true:false;
    }
}