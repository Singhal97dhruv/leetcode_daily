class Solution {
//     int dp[][];
//     public int memo(String s,int i,int j){
//         if(i>=j)return 0;
    
//         if(dp[i][j]!=-1)return dp[i][j];
        
//         if(s.charAt(i)==s.charAt(j))return dp[i][j]= memo(s,i+1,j-1);
        
//         return dp[i][j]= 1+Math.min(memo(s,i+1,j),memo(s,i,j-1));
//     }
    
    int [][]dp;
    public int lps(String s,int i,int j){
        if(i==j)return 1;
        if(i>j)return 0;
        
        if(dp[i][j]!=-1)return dp[i][j];
        if(s.charAt(i)==s.charAt(j))return dp[i][j]=2+lps(s,i+1,j-1);
        return dp[i][j]=Math.max(lps(s,i+1,j),lps(s,i,j-1));
    }
    
    public int minInsertions(String s) {
        int n=s.length();
        dp=new int[n][n];
        for(int []i:dp)
            Arrays.fill(i,-1);
        return n-lps(s,0,n-1);
    }
}