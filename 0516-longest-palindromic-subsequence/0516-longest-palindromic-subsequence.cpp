class Solution {
public:
//     int lps_length(int startIdx,int endIdx,string s){
//         if(startIdx==endIdx)return 1;
//         if(startIdx>endIdx)return 0;
//         if(vect[startIdx][endIdx])return vect[startIdx][endIdx];
//         return vect[startIdx][endIdx]=s[startIdx]==s[endIdx]?2+lps_length(startIdx+1,endIdx-1,s): max(lps_length(startIdx+1,endIdx,s),lps_length(startIdx,endIdx-1,s));
            
//     }
    
    int longestPalindromeSubseq(string s) {
        
        // dp.resize(s.size(),vector<int>(s.size()-1));
        // return lps_length(0,s.size()-1,s);
        int n=s.size();
         vector<vector<int>> dp(n+1,vector<int>(n));
        for(int i=0;i<n;i++) dp[1][i]=1;
        for(int i=2;i<=n;i++) 
            for(int j=0;j<n-i+1;j++) { 
                dp[i][j] = s[j]==s[i+j-1]?2+dp[i-2][j+1]:max(dp[i-1][j],dp[i-1][j+1]);
            }
                return dp[n][0];
    }
};