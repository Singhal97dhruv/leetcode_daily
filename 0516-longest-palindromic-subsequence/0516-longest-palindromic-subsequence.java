class Solution {
    int [][]dp;
    public int lps(String s,int i,int j){
        if(i>j)return 0;
        if(i==j)return 1;
        if(s.charAt(i)==s.charAt(j))return 2+lps(s,i+1,j-1);
        if(dp[i][j]!=-1)return dp[i][j];
        
        return dp[i][j]=Math.max(lps(s,i+1,j),lps(s,i,j-1));
        
    }
    
    
    public int longestPalindromeSubseq(String s) {
        int n=s.length();
        dp=new int[n][n];
        for(int []i:dp)
            Arrays.fill(i,-1);
        return lps(s,0,s.length()-1);
    }
}