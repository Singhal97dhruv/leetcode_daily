class Solution {
public:
    vector<vector<int>> generate(int numRows) {
//         vector<vector<int>>dp;
//         // for(int i=0;i<numRows;i++){
//         //     dp[i][0]=1;
//         // }
//         for(int i=0;i<numRows;i++){
//             vector<int>med(i+1,1);
//             for(int j=1;j<i;j++){
//                 med[j]=dp[i-1][j-1]+dp[i-1][j];
//             }
//             dp.push_back(med);
//         }
//         return dp;
        
        vector<vector<int>>dp;
        for(int i=0;i<numRows;i++){
            vector<int>med(i+1,1);
            for(int j=1;j<i;j++){
                med[j]=dp[i-1][j-1]+dp[i-1][j];
            }
            dp.push_back(med);
        }
        return dp;
        
        
    }
};