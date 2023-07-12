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
        //  int n = nums.size();
        // vector<int> dp(n, 1);
        // for (int i = 0; i < n; ++i)
        //     for (int j = 0; j < i; ++j)
        //         if (nums[i] > nums[j] && dp[i] < dp[j] + 1)
        //             dp[i] = dp[j] + 1;
        // return *max_element(dp.begin(), dp.end());
        
        dp.resize(nums.size(),vector<int>(nums.size()+1,-1));
        return recur(nums,0,-1);
        
        
    }
};