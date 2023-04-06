class Solution {
public:
    bool canPartition(vector<int>& nums) {
        
        int sum=0,n=nums.size();
        for(int i:nums)sum+=i;
        if((sum&1)==1)return false;
        sum/=2;
//         vector<vector<bool>>dp(n+1,vector<bool>(sum+1));
        
//         dp[0][0]=true;
        
//         for(int i=1;i<=n;i++){
//             for(int j=1;j<=sum;j++){
//                 dp[i][j]=dp[i-1][j];
//                 if(j>=nums[i-1]){
//                     dp[i][j]=dp[i][j]||dp[i-1][j-nums[i-1]];
//                 }
//             }
//         }
//         return dp[n][sum];
        
        bitset<10001>dp(1);
        for(int i:nums){
            dp|=dp<<i;
        }
        return dp[sum];
        
    }
};