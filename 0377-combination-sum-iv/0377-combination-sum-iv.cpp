class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        
        // int dp[target+1]={};
        // vector<unsigned int>dp(target+1,0);
        // dp[0]=1;
        // for(int i=1;i<=target;i++)
        // {
        //     for(int j:nums){
        //         if(j<=i){
        //             dp[i]+=dp[i-j];
        //         }
        //     }
        // }
        // return dp[target];
        
        // vector<unsigned int>dp(target+1,0);
        // dp[0]=1;
        //  for(int i=1;i<=target;i++){
        //     for(int j:nums){
        //         if(j<=i){
        //             dp[i]+=dp[i-j];
        //         }
        //     }
        // }
        // return dp[target];
        
        vector<uint32_t>dp(target+1,0);
        dp[0]=1;
        for(int i=1;i<=target;i++){
            for(int j: nums){
                if(j<=i){
                    dp[i]+=dp[i-j];
                }
            }
        }
        return dp[target];
    }
};