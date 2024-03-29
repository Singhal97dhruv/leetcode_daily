class Solution {
    int [][]dp;
//     public int recur(String text1,String text2,int i,int j){
//         if(i>=text1.length() || j>=text2.length())return 0;
        
//         if(text1.charAt(i)==text2.charAt(j)){
//             return 1+recur(text1,text2,i+1,j+1);
//         }
//         if(dp[i][j]!=-1)return dp[i][j];
//         int ans=0;
//         ans+=Math.max(recur(text1,text2,i+1,j),recur(text1,text2,i,j+1));
//         return dp[i][j]=ans;
//     }
    
    public int longestCommonSubsequence(String text1, String text2) {
        int m=text1.length(),n=text2.length();
        // dp=new int[m][n];
        // for(int []i:dp)
        //     Arrays.fill(i,-1);
        // return recur(text1,text2,0,0);
        
        dp=new int[m+1][n+1];
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(text1.charAt(i-1)==text2.charAt(j-1))
                    dp[i][j]=dp[i-1][j-1]+1;
                else
                    dp[i][j]=Math.max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[m][n];
        
    }
}