class Solution {
    int [][]dp;
    public int memo(int[]values,int stVertex,int endVertex){
        if(stVertex+1==endVertex)return 0;
        int ans=Integer.MAX_VALUE;
        if(dp[stVertex][endVertex]!=-1)return dp[stVertex][endVertex];
        for(int k=stVertex+1;k<endVertex;k++){
            ans=Math.min(ans,memo(values,stVertex,k)+memo(values,k,endVertex)+values[stVertex]*values[endVertex]*values[k]);
        }
        return dp[stVertex][endVertex]=ans;
    }
    public int minScoreTriangulation(int[] values) {
        int n=values.length;
        dp=new int[n][n];
        for(int[]a:dp)
            Arrays.fill(a,-1);
        return memo(values,0,values.length-1);
    }
}