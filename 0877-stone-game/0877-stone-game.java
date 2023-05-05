class Solution {
    int [][][]dp;
    public int memo(int[]piles,int st,int end,int Alice){
        if(st>end)return 0;
        if(dp[st][end][Alice]!=-1)return dp[st][end][Alice];
        if(Alice==1){
            return dp[st][end][Alice]= Math.max(piles[st]+memo(piles,st+1,end,0),piles[end]+memo(piles,st,end-1,0));
        }
        else 
            return dp[st][end][Alice]= Math.min(-piles[st]+memo(piles,st+1,end,1),-piles[end]+memo(piles,st,end-1,1));
    }
    public boolean stoneGame(int[] piles) {
        dp=new int[piles.length][piles.length][2];
        for(int [][]i:dp)
            for(int []j:i)
                Arrays.fill(j,-1);
        return memo(piles,0,piles.length-1,1)>0?true:false;
    }
}