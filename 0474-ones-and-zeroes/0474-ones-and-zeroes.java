class Solution {
    public int findMaxForm(String[] strs, int m, int n) {
     
        int nZ,nO;
        int[][]dp=new int[m+1][n+1];
        for(String s: strs){
            nZ=nO=0;
            for(char c:s.toCharArray()){
                if(c=='0')nZ++;
                else nO++;
            }
            
            for(int i=m;i>=nZ;i--){
                for(int j=n;j>=nO;j--){
                    dp[i][j]=Math.max(dp[i][j],1+dp[i-nZ][j-nO]);
                }
            }
            
        }
        return dp[m][n];
    }
}