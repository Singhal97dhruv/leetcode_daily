class Solution {
    
    int []dp;
    // Top DOWN approach
    int memo(int []stones,int idx)
    {
        if(idx==stones.length-1)return stones[idx];
        if(dp[idx]!=Integer.MIN_VALUE)return dp[idx];
        return dp[idx]= Math.max(memo(stones,idx+1),stones[idx]-memo(stones,idx+1));
    }
    
    public int stoneGameVIII(int[] stones) {
        int n=stones.length;
        for(int i=1;i<n;i++)stones[i]+=stones[i-1];
        dp=new int[n];
        Arrays.fill(dp,Integer.MIN_VALUE);
        return memo(stones,1);
    }
}