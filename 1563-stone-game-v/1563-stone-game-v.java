class Solution {
    
    int [][]dp;
    
    public int memo(int st,int end,int[] stones){
        if(st>end)return 0;
        if(dp[st][end]!=-1)return dp[st][end];
        int rsum=0;
        for(int i=st;i<=end;i++)rsum+=stones[i];
        int lsum=0,ans=0;
        for(int i=st;i<end;i++){
            lsum+=stones[i];
            rsum-=stones[i];
            if(lsum<rsum){
                ans=Math.max(ans,lsum+memo(st,i,stones));
            }
            if(lsum==rsum){
                ans=Math.max(ans,Math.max(lsum+memo(st,i,stones),rsum+memo(i+1,end,stones)));
            }
            if(rsum<lsum){
                ans=Math.max(ans,rsum+memo(i+1,end,stones));
            }
        }
        return dp[st][end]=ans;
    }
    
    public int stoneGameV(int[] stoneValue) {
        int n=stoneValue.length;
        dp=new int[n+1][n+1];
        for(int []i:dp)
            Arrays.fill(i,-1);
        return memo(0,stoneValue.length-1,stoneValue);
    }
}