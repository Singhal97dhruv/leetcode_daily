class Solution {
    int [][]dp;
    public int recur(int i,int j,int[] n1,int []n2){
        if(i>=n1.length || j>=n2.length)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        if(n1[i]==n2[j])return dp[i][j]= 1+recur(i+1,j+1,n1,n2);
        
        return dp[i][j]= Math.max(recur(i+1,j,n1,n2),recur(i,j+1,n1,n2));
    }
    
    public int maxUncrossedLines(int[] nums1, int[] nums2) {
        dp=new int[501][501];
        for(int []i:dp)
            Arrays.fill(i,-1);
        return recur(0,0,nums1,nums2);
    }
}