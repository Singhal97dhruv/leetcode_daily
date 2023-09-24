class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
//      vector<double>res(102);
//         res[0]=poured;
//         for(int i=0;i<query_row;i++){
//             for(int j=i;j>=0;j--){
//                 res[j+1]+=res[j]= max(0.0,(res[j]-1)/2);
//             }
//         }
        
//         return min(res[query_glass],1.0);
        
        
        vector<double>dp(102);
        dp[0]=poured;
        for(int i=0;i<query_row;i++){
            for(int j=i;j>=0;j--){
                dp[j+1]+=dp[j]=max(0.0,(dp[j]-1)/2);
            }
        }
        return min(1.0,dp[query_glass]);
    }
};