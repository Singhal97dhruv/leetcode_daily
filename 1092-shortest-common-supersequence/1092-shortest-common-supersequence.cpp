class Solution {
public:
    string shortestCommonSupersequence(string str1, string str2) {
        
        int m=str1.size(),n=str2.size();
        vector<vector<int>>dp(m+1,vector<int>(n+1));
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(str1[i-1]==str2[j-1]){
                    dp[i][j]=dp[i-1][j-1]+1;
                }
                else{
                    dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
                }
            }
        }
        cout<<dp[m][n];
        
        int i=m,j=n;
        string s;
       
        while(i>0 && j>0){
            if(str1[i-1]==str2[j-1]){
                s+=str1[i-1];
                i--;j--;
            }
            else{
                if(dp[i-1][j]<dp[i][j]){
                    s+=str2[j-1];
                    j--;
                }
                else{
                    s+=str1[i-1];
                    i--;
                }
            }
        }
        while(i>0){
            s+=str1[i-1];
            i--;
        }
        while(j>0){
            s+=str2[j-1];
            j--;
        }
        reverse(s.begin(),s.end());
        return s;
        
        
        
    }
};