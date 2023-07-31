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
    int dp[1001][1001];
    int recur(int i,int j,string s1,string s2){
        if(i==s1.size()){
            int ans=0;
            for(int k=j;k<s2.size();k++)ans+=s2[k];
            return ans;
        }
         if(j==s2.size()){
            int ans=0;
            for(int k=i;k<s1.size();k++)ans+=s1[k];
             return ans;
        }
        if(dp[i][j]!=-1)return dp[i][j];
        
        if(s1[i]==s2[j])return dp[i][j]= recur(i+1,j+1,s1,s2);
        return dp[i][j]= min(s1[i]+recur(i+1,j,s1,s2),s2[j]+recur(i,j+1,s1,s2));
        
    }
    
    int minimumDeleteSum(string s1, string s2) {
        // memset(dp,-1,sizeof(dp));
        // return memo(s1,s2,0,0);
//         int m=s1.size(),n=s2.size();
//         vector<vector<int>>dp(m+1,vector<int>(n+1,0));
     
    
//         for(int i=1;i<=m;i++)
//             dp[i][0]=dp[i-1][0]+s1[i-1];
//         for(int j=1;j<=n;j++)
//             dp[0][j]=dp[0][j-1]+s2[j-1];
        
//         for(int i=1;i<=m;i++){
//             for(int j=1;j<=n;j++){
//                 if(s1[i-1]==s2[j-1])
//                     dp[i][j]=dp[i-1][j-1];
//                 else
//                     dp[i][j]=min(dp[i-1][j]+s1[i-1],dp[i][j-1]+s2[j-1]);
//             }
//         }
//         return dp[m][n];
        // memset(dp,-1,sizeof(dp));
        // return recur(0,0,s1,s2);
        memset(dp,0,sizeof(dp));
        
        for(int i=1;i<=s1.size();i++)
            dp[i][0]=dp[i-1][0]+s1[i-1];
        for(int j=1;j<=s2.size();j++)
            dp[0][j]=dp[0][j-1]+s2[j-1];
        
        for(int i=1;i<=s1.size();i++){
            for(int j=1;j<=s2.size();j++){
                if(s1[i-1]==s2[j-1])dp[i][j]=dp[i-1][j-1];
                else dp[i][j]=min(s1[i-1]+dp[i-1][j],s2[j-1]+dp[i][j-1]);
            }
        }
        return dp[s1.size()][s2.size()];
    }
};