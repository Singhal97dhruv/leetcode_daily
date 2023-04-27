class Solution {
    int [][]dp;
//     public int memo(String w1,String w2,int i,int j){
//         if(i==w1.length())return w2.length()-j;
//         if(j==w2.length())return w1.length()-i;
//         if(dp[i][j]!=-1)return dp[i][j];

//         if(w1.charAt(i)==w2.charAt(j))return memo(w1,w2,i+1,j+1);
        
//             int insert=1+memo(w1,w2,i,j+1);
//             int delete=1+memo(w1,w2,i+1,j);
//             int replace=1+memo(w1,w2,i+1,j+1);
//             return dp[i][j]=Math.min(Math.min(insert,delete),replace);
        
        
//     }
    
    public int minDistance(String word1, String word2) {
        int m=word1.length(),n=word2.length();
        if(m==0)return n;
        else if(n==0)return m;
        // dp=new int[m][n];
        // for(int []i:dp)
        //     Arrays.fill(i,-1);
        // return memo(word1,word2,0,0);
        
        dp=new int[m+1][n+1];
        for(int i=m;i>=0;i--){
            dp[i][n]=m-i;
        }
        for(int j=n;j>=0;j--){
            dp[m][j]=n-j;
        }
        
        for(int i=m-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                if(word1.charAt(i)==word2.charAt(j))dp[i][j]=dp[i+1][j+1];
                else
                    dp[i][j]=1+Math.min(Math.min(dp[i][j+1],dp[i+1][j]),dp[i+1][j+1]);
            }
        }
        return dp[0][0];
        
    }
}