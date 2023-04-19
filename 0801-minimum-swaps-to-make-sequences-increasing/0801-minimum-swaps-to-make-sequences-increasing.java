class Solution {
    
    int [][]dp;
    
    public int memo(int[]nums1,int[]nums2,int idx,int prev1,int prev2,int isSwapped){
        if(idx==nums1.length)return 0;
        if(dp[idx][isSwapped]!=-1)return dp[idx][isSwapped];
        int ans=Integer.MAX_VALUE;
        if(nums1[idx]>prev1 && nums2[idx]>prev2){
            ans=memo(nums1,nums2,idx+1,nums1[idx],nums2[idx],0);
        }
        if(nums1[idx]>prev2 && nums2[idx]>prev1){
             ans=Math.min(ans,1+memo(nums1,nums2,idx+1,nums2[idx],nums1[idx],1));

        }
        return dp[idx][isSwapped]=ans;
    }
    
    
    public int minSwap(int[] nums1, int[] nums2) {
        dp=new int[nums1.length][2];
        for(int []i:dp){
            Arrays.fill(i,-1);
        }
        return memo(nums1,nums2,0,-1,-1,0);
    }
}