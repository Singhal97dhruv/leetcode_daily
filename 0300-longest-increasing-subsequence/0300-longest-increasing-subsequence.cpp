class Solution {
public:
    vector<vector<int>>dp;
    int recur(vector<int>&nums,int idx,int prevIdx){
        if(idx>=nums.size())return 0;
        if(dp[idx][prevIdx+1]!=-1)return dp[idx][prevIdx+1];
        
        if(prevIdx==-1 || nums[idx]>nums[prevIdx]){
            return dp[idx][prevIdx+1]= max(1+recur(nums,idx+1,idx),recur(nums,idx+1,prevIdx));
        }
        
        return dp[idx][prevIdx+1]= recur(nums,idx+1,prevIdx);
        
    }
    
    int lengthOfLIS(vector<int>& nums) {
         int n = nums.size();
        // vector<int> dp(n, 1);
        // for (int i = 0; i < n; ++i)
        //     for (int j = 0; j < i; ++j)
        //         if (nums[i] > nums[j] && dp[i] < dp[j] + 1)
        //             dp[i] = dp[j] + 1;
        // return *max_element(dp.begin(), dp.end());
        
        // dp.resize(nums.size(),vector<int>(nums.size()+1,-1));
        // return recur(nums,0,-1);
        
        vector<int>dp(n+1,1);
        dp[n]=0;
        int res=1;
        for(int i=n-1;i>=0;i--){
            for(int j=i+1;j<n;j++){
                if(nums[i]<nums[j]){
                    dp[i]=max(dp[i],1+dp[j]);res=max(res,dp[i]);
                }
            }
        }
        
        return res;
        
    }
};