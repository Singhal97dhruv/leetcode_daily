class Solution {
public:
    
    int dp[100001];
    
    bool recur(int idx,vector<int>&nums){
        
        if(idx>=nums.size())return true;
        if(dp[idx]!=-1)return dp[idx];
        bool ans=false;
        
        if(idx+1<nums.size() && nums[idx]==nums[idx+1]){

            ans=ans||recur(idx+2,nums);
            
            if(idx+2<nums.size() && nums[idx+1]==nums[idx+2]){
                ans=ans||recur(idx+3,nums);
            }
            
        }
        
        
        if(idx+2<nums.size() && nums[idx]+1==nums[idx+1] && nums[idx+1]+1==nums[idx+2]){
                ans=ans|| recur(idx+3,nums);
        }
        return dp[idx]= ans;
    }
    
    bool validPartition(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return recur(0,nums);
    }
};