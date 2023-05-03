class Solution {
public:
    int dp[102][2];
//     int memo(vector<int>&nums,int i,bool firstTaken){
//         if(i>=nums.size() || (i==nums.size()-1 && firstTaken))return 0;
//         if(dp[i][firstTaken]!=-1)return dp[i][firstTaken];
//         if(i==0)return dp[i][firstTaken]= max(nums[i]+memo(nums,i+2,true),memo(nums,i+1,false));
        
//         return dp[i][firstTaken]= max(nums[i]+memo(nums,i+2,firstTaken),memo(nums,i+1,firstTaken));
        
//     }
    
    int rob(vector<int>& nums) {
        // memset(dp,-1,sizeof(dp));
        // return memo(nums,0,false);
        int n=nums.size();
        dp[n-1][0]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            if(i==0)dp[i][0]=dp[i+1][0];
            else dp[i][0]=max(nums[i]+dp[i+2][0],dp[i+1][0]);
            dp[i][1]=max(nums[i]+dp[i+2][1],dp[i+1][1]);
        }
        return max(dp[0][1],dp[0][0]);
    }
};