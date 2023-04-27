class Solution {
public:
//     int dp[1001][1001];
//     int recur(string s,string t,int i,int j){
//         if(j==t.size())return 1;
//         if(i==s.size())return 0;
        
//         if(dp[i][j]!=-1)return dp[i][j];
        
//         if(s[i]==t[j])
//             return dp[i][j]= recur(s,t,i+1,j+1)+recur(s,t,i+1,j);
//         return dp[i][j]= recur(s,t,i+1,j);
//     }
    
    int numDistinct(string s, string t) {
        // memset(dp,-1,sizeof(dp));
        // return recur(s,t,0,0);
        
        int m=s.size(),n=t.size();
        vector<vector<unsigned >>dp(m+1,vector<unsigned>(n+1));
        for(int i=0;i<=m;i++)
            dp[i][n]=1;
        
        for(int i=m-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                if(s[i]==t[j])
                    dp[i][j]=dp[i+1][j]+dp[i+1][j+1];
                else dp[i][j]=dp[i+1][j];
                dp[i][j]%=INT_MAX;
            }
        }
        
        return dp[0][0];
    }
};