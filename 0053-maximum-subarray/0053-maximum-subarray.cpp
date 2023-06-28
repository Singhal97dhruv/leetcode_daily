class Solution {
public:
    
//     int recur(vector<int>nums,int i,int bo_val,vector<vector<int>>&mem){
//         if(i >= nums.size()) return bo_val ? 0 : -1e5;
//         if(mem[i][bo_val]!=-1)return mem[i][bo_val];
//         if(bo_val){
//             return mem[i][bo_val]= max(0,nums[i]+recur(nums,i+1,true,mem));
//         }
//         else{
//             return mem[i][bo_val]= max(nums[i]+recur(nums,i+1,true,mem),recur(nums,i+1,false,mem));
//         }
        
//     }
    
    int dp[100001][2];
    
    int recur(vector<int>&nums,int i,bool taken){

        if(i>=nums.size())return taken?0:-1e5;
        if(dp[i][taken]!=-1)return dp[i][taken];
        if(taken)return dp[i][taken]= max(0,nums[i]+recur(nums,i+1,true));
        
        else return dp[i][taken]= max(recur(nums,i+1,false),nums[i]+recur(nums,i+1,true));
        
    }
    
    
    int maxSubArray(vector<int>& nums) {
        // vector<vector<int>>mem(nums.size()+1,vector<int>(2,-1));
 // return recur(nums,0,false,mem);
// return mem[nums.size(),true];
        
//         vector<vector<int>>dp(2,vector<int>(nums.size()));
//         dp[1][0]=dp[0][0]=nums[0];
//         for(int i=1;i<nums.size();i++){
//             dp[1][i]=max(dp[1][i-1]+nums[i],nums[i]);
//             dp[0][i]=max(dp[0][i-1],dp[1][i]);
//         }
//         return dp[0][nums.size()-1];
        
        memset(dp,-1,sizeof(dp));
        return recur(nums,0,false);
        
    }
};