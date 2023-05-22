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
        // Arrays.fill(dp,Integer.MIN_VALUE);
        // return memo(stones,1);
        
        //Bottom UP Approach
        dp[n-1]=stones[n-1];
        for(int i=n-2;i>0;i--){
            dp[i]=Math.max(stones[i]-dp[i+1],dp[i+1]);
        }
        return dp[1];
    }
}