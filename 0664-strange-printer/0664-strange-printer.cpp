class Solution {
public:
    int dp[101][101];
    int recur(int i,int j,string &s){
        if(i==j)return 1;
        if(dp[i][j]!=-1)return dp[i][j];
        int ans=0;
        
        if(s[i]==s[j] || s[j-1]==s[j])ans=recur(i,j-1,s);
        
        else if(s[i+1]==s[i])ans=recur(i+1,j,s);
        
        else{
            ans=1+recur(i+1,j,s);
            
            for(int k=i+1;k<j;k++){
                ans=min(ans,recur(i,k,s)+recur(k+1,j,s));
            }
        }
        return dp[i][j]= ans;
        
    }
    
    int strangePrinter(string s) {
        memset(dp,-1,sizeof(dp));
        return recur(0,s.size()-1,s);
    }
};