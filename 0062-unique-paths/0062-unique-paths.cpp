class Solution {
public:
   
    int uniquePaths(int m, int n) {
        // int N = (m+n)-2;
//         int r = m - 1;
//         double ans = 1;
        
//         for(int i =1;i<=r;i++)
//         {
//             ans = ans * (N-r+i)/i;
//         }
//         return ans;
    
        
        // vector<vector<int>>vect(m,vector<int>(n,1));
    //     for(int i=1;i<m;i++){
    //         for(int j=1;j<n;j++){
    //             vect[i][j]=vect[i-1][j]+vect[i][j-1];
    //         }
    //     }
    //     return vect[m-1][n-1];
    
        vector<vector<int>>dp(m,vector<int>(n,1));
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
        }
        return dp[m-1][n-1];
    }
};