class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        
        // vector<vector<int>>dp(triangle.size(),vector<int>(triangle.size()));
        // dp[0][0]=triangle[0][0];
        // for(int i=1;i<triangle.size();i++){
        //     for(int j=0;j<triangle[i].size();j++){
        //         if(j==0)dp[i][j]=dp[i-1][j]+triangle[i][j];
        //         else if(j==triangle[i].size()-1)dp[i][j]=dp[i-1][j-1]+triangle[i][j];
        //         else dp[i][j]=triangle[i][j]+min(dp[i-1][j-1],dp[i-1][j]);
        //     }
        // }
        // return *min_element(dp[triangle.size()-1].begin(),dp[triangle.size()-1].end());
        int n=triangle.size();
        vector<int>currRow(n+1,0);
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<triangle[i].size();j++){
                currRow[j]=min(currRow[j],currRow[j+1])+triangle[i][j];
            }
        }
        return currRow[0];
        
    }
};