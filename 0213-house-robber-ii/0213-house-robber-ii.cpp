class Solution {
public:
    int dp[101][2];
    int memo(vector<int>&nums,int i,bool firstTaken){
        if(i>=nums.size() || (i==nums.size()-1 && firstTaken))return 0;
        if(dp[i][firstTaken]!=-1)return dp[i][firstTaken];
        if(i==0)return dp[i][firstTaken]= max(nums[i]+memo(nums,i+2,true),memo(nums,i+1,false));
        
        return dp[i][firstTaken]= max(nums[i]+memo(nums,i+2,firstTaken),memo(nums,i+1,firstTaken));
        
    }
    
    int rob(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return memo(nums,0,false);
    }
};