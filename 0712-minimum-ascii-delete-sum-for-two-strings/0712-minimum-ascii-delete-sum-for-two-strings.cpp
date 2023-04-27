class Solution {
public:
//     int dp[1001][1001];
//     int memo(string s,string t,int i,int j){
//         int ans=0;
//         if(i==s.size()){
//             for( j;j<t.size();j++)ans+=t[j];
//             return ans;
//         }
//         if(j==t.size()){
//             for( i;i<s.size();i++)ans+=s[i];
//             return ans;
//         }
//         if(dp[i][j]!=-1)return dp[i][j];
        
//         if(s[i]!=t[j])
//             return dp[i][j]=min(s[i]+memo(s,t,i+1,j),t[j]+memo(s,t,i,j+1));
//         else return dp[i][j]= memo(s,t,i+1,j+1);
        
//     }
    
    int minimumDeleteSum(string s1, string s2) {
        // memset(dp,-1,sizeof(dp));
        // return memo(s1,s2,0,0);
        int m=s1.size(),n=s2.size();
        vector<vector<int>>dp(m+1,vector<int>(n+1,0));
     
    
        for(int i=1;i<=m;i++)
            dp[i][0]=dp[i-1][0]+s1[i-1];
        for(int j=1;j<=n;j++)
            dp[0][j]=dp[0][j-1]+s2[j-1];
        
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(s1[i-1]==s2[j-1])
                    dp[i][j]=dp[i-1][j-1];
                else
                    dp[i][j]=min(dp[i-1][j]+s1[i-1],dp[i][j-1]+s2[j-1]);
            }
        }
        return dp[m][n];
    }
};