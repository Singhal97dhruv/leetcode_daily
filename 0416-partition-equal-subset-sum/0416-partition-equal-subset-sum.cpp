class Solution {
public:
    bool canPartition(vector<int>& nums) {
        
//         int sum=0,n=nums.size();
//         for(int i:nums)sum+=i;
//         if((sum&1)==1)return false;
//         sum/=2;
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
        
//         bitset<10001>dp(1);
//         for(int i:nums){
//             dp|=dp<<i;
//         }
//         return dp[sum];
     
//         int sum =accumulate(nums.begin(),nums.end(),0);
//         int target=sum/2;
//         if(sum&1)return false;
//         bitset<10001>dp(1);
//         for(int i:nums){
//             dp|=dp<<i;
//         }
//         return dp[target];
        
        int sum=accumulate(nums.begin(),nums.end(),0);
        int target=sum/2;
        // vector<int>dp(target+1,0);
        // dp[0]=1;
        if(sum&1)return false;
        // for(int i:nums){
        //     for(int j=target;j>=i;j--){
        //         if(dp[j-i])
        //             dp[j]=1;
        //     }
        // }
        // return dp[target];
        
        bitset<10001>dp(1);
        for(int i:nums){
            dp|= dp<<i;
        }
        return dp[target];
        
        
    }
};