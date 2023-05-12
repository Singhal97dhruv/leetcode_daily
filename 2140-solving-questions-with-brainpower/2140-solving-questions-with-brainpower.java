class Solution {
    long []dp;
    public long memo(int idx,int[][] q){
        if(idx>=q.length)return 0;
        if(dp[idx]!=-1)return dp[idx];
        return dp[idx]= Math.max(q[idx][0]+memo(idx+1+q[idx][1],q),memo(idx+1,q));
    }
    public long mostPoints(int[][] questions) {
        int n=questions.length;
        dp=new long[n+1];
        // Arrays.fill(dp,-1);
        // return memo(0,questions);
        for(int i=n-1;i>=0;i--){
            dp[i]=Math.max(questions[i][0]+dp[(i+questions[i][1]+1)<n?(i+questions[i][1]+1):n],dp[i+1]);
        }
        
        return dp[0];

        }
}