class Solution {
public:
    

//     int recur(int l,bool taken,vector<int>&nums){
//         if(l>=nums.size())return 0;
        
//         if(taken){
//             return max(0,nums[l]+recur(l+1,taken,nums));
//         }
        
//         return max(nums[l]+recur(l+1,true,nums),recur(l+1,false,nums));       
        
//     }
    
    
    // int dp[100001][2];
    
//     int recur(vector<int>&nums,int i,bool taken){

//         if(i>=nums.size())return taken?0:-1e5;
//         if(dp[i][taken]!=-1)return dp[i][taken];
//         if(taken)return dp[i][taken]= max(0,nums[i]+recur(nums,i+1,true));
        
//         else return dp[i][taken]= max(recur(nums,i+1,false),nums[i]+recur(nums,i+1,true));
        
//     }
    // int dp[100001][2];
    // int memo(int i,bool taken,vector<int>&nums){
    //     if(i==nums.size())return taken?0:-1e5;
    //     if(dp[i][taken]!=-1)return dp[i][taken];
    //     if(taken){
    //         return dp[i][taken]= max(0,nums[i] + memo(i+1,taken,nums));
    //     }
    //         return dp[i][taken]= max(nums[i]+memo(i+1,true,nums),memo(i+1,false,nums));
    // }
    
    int dp[2][100001];
    
    
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
        
        // memset(dp,-1,sizeof(dp));
        // return recur(nums,0,false);
        // int n=nums.size();
        // vector<vector<int>>dp(2,vector<int>(nums.size()+1));
        // dp[0][n]=-1e5;
        // dp[1][n]=0;
        // for(int i=n-1;i>=0;i--){
        //     dp[0][i]=max(dp[0][i+1],nums[i]+dp[1][i+1]);
        //     dp[1][i]=max(0,nums[i]+dp[1][i+1]);
        // }
        // return max(dp[0][0],dp[0][1]);
        // memset(dp,-1,sizeof(dp));
        // return memo(0,false,nums);
        
//         int n=nums.size();
//         memset(dp,0,sizeof(dp));

//         dp[0][n]=-1e5;
//         dp[1][n]=0;
//         for(int i=n-1;i>=0;i--){
//             dp[0][i]=max(dp[0][i+1],nums[i]+dp[1][i+1]);
//             dp[1][i]=max(0,nums[i]+dp[1][i+1]);
//         }
        
//         return max(dp[0][0],dp[0][1]);
        
        // return recur(0,false,nums);
        
        vector<vector<int>>dp(2,vector<int>(nums.size()));
        dp[0][0]=dp[1][0]=nums[0];
        // dp[1][0]=-1e5;
        int n=nums.size();
        for(int i=1;i<nums.size();i++){
            dp[0][i]=max(nums[i],nums[i]+dp[0][i-1]);
            dp[1][i]=max(dp[1][i-1],dp[0][i]);
        }
        
        return max(dp[0][n-1],dp[1][n-1]);
    }
};