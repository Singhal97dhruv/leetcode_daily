class Solution {
    int [][]dp;
//     public int lps(String s,int i,int j){
//         if(i>j)return 0;
//         if(i==j)return 1;
//         if(s.charAt(i)==s.charAt(j))return 2+lps(s,i+1,j-1);
//         if(dp[i][j]!=-1)return dp[i][j];
        
//         return dp[i][j]=Math.max(lps(s,i+1,j),lps(s,i,j-1));
        
//     }
    
    
    public int longestPalindromeSubseq(String s) {
        int n=s.length();
        dp=new int[n+1][n+1];
        // for(int []i:dp)
        //     Arrays.fill(i,-1);
        // return lps(s,0,s.length()-1);
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(s.charAt(i-1)==s.charAt(n-j))
                    dp[i][j]=1+dp[i-1][j-1];
                else 
                    dp[i][j]=Math.max(dp[i-1][j],dp[i][j-1]);
            }
        } 
        return dp[n][n];
    }
}