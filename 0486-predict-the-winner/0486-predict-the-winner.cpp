class Solution {
public:
    int dp[20][20];
    int recur(vector<int>&nums,int st,int end){
        if(st>end)return 0;
        if(st==end)return nums[st];
        if(dp[st][end]!=-1)return dp[st][end];
        
        return dp[st][end]= max(nums[st]+min(recur(nums,st+2,end),recur(nums,st+1,end-1)),nums[end]+min(recur(nums,st,end-2),recur(nums,st+1,end-1)));
        
    }
    
    bool PredictTheWinner(vector<int>& nums) {
        int totalScore=accumulate(nums.begin(),nums.end(),0);
        memset(dp,-1,sizeof(dp));
        return recur(nums,0,nums.size()-1)*2-totalScore>=0?true:false;
    }
};