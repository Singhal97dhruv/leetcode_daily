class Solution {
    int [][]dp;
    public int memo(int idx,int M,int []piles){
        if(idx>=piles.length)return 0;
        if(dp[idx][M]!=-1)return dp[idx][M];
        int ans=Integer.MIN_VALUE,temp=0;
        for(int i=0;i<2*M && i+idx<piles.length;i++){
            temp+=piles[idx+i];
            ans=Math.max(ans,temp-memo(idx+i+1,Math.max(i+1,M),piles));
        }
        return dp[idx][M]=ans;
    }
    public int stoneGameII(int[] piles) {
        dp=new int[101][201];
        for(int []i:dp)
            Arrays.fill(i,-1);
        int total=0;
        for(int i:piles)total+=i;
        int diff=memo(0,1,piles);
        return (diff+total)/2;
    }
}