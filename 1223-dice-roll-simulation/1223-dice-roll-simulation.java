class Solution {
    int MOD=1000000007;
    int [][][]dp;
    public int memo(int last ,int[] rollMax,int len,int n){
        if(n==0){
            return 1;
        }
        if(last>=0 && dp[n][last][len]!=0)return dp[n][last][len];
        int ans=0;
        for(int i=0;i<6;i++){
            if(i==last && len==rollMax[i])continue;
            ans=(ans+memo(i,rollMax,i==last?len+1:1,n-1))%MOD;
        }
        if(last>=0)dp[n][last][len]=ans;
        return ans;
    }
    
    
    public int dieSimulator(int n, int[] rollMax) {
        dp=new int[5000][6][16];
       return memo(-1,rollMax,0,n);
    }
}