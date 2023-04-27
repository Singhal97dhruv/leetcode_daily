class Solution {
    
    int [][]dp;
    
    public int memo(String s1,String s2,int i,int j){
        int ans=0;
        if(i==s1.length()){
            for(int k=j;k<s2.length();k++)
                ans+=(int)s2.charAt(k);
            return ans;
        }
        if(j==s2.length()){
            for(int k=i;k<s1.length();k++)
                ans+=(int)s1.charAt(k);
            return ans;
        }
        if(dp[i][j]!=-1)return dp[i][j];
        
        if(s1.charAt(i)==s2.charAt(j))return dp[i][j]=memo(s1,s2,i+1,j+1);
        
        return dp[i][j]=Math.min((int)s1.charAt(i) +memo(s1,s2,i+1,j),(int)s2.charAt(j)+memo(s1,s2,i,j+1));
    }
    
    public int minimumDeleteSum(String s1, String s2) {
        int m=s1.length(),n=s2.length();
        dp=new int[m][n];
        for(int[]i:dp)
            Arrays.fill(i,-1);
        return memo(s1,s2,0,0);
    }
}