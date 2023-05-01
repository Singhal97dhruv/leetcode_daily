class Solution {
    
    int []dp;
    // public int recur(int []nums,int i){
    //     if(i>=nums.length)return 0;
    //     if(dp[i]!=-1)return dp[i];
    //     return dp[i]=Math.max(nums[i]+recur(nums,i+2),recur(nums,i+1));
    // }
    
    public int rob(int[] nums) {
        int n=nums.length;
        dp=new int[n+2];
        // Arrays.fill(dp,-1);
        // return recur(nums,0);
        
        dp[n]=dp[n+1]=0;
        
        for(int i=n-1;i>=0;i--){
            dp[i]=Math.max(nums[i]+dp[i+2],dp[i+1]);
        }
        return dp[0];
        
        
    }
}