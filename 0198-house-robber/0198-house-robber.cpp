class Solution {
public:
//     int dp[101]={[0 ... 100]=-1};
//     int recur(vector<int>&nums,int idx){
        
//         if(idx>=nums.size())return 0;
        
//         if(dp[idx]!=-1)return dp[idx];
        
//         return dp[idx]= max(nums[idx]+recur(nums,idx+2),recur(nums,idx+1));
        
//     }
    int dp[101]={[0 ... 100]=-1};
    int recur(int idx,vector<int>&nums){
        if(idx>=nums.size())return 0;
        if(dp[idx]!=-1)return dp[idx];
        int ans=0;
        ans=nums[idx]+recur(idx+2,nums);
        
        ans=max(nums[idx]+recur(idx+2,nums),recur(idx+1,nums));
        return dp[idx]=ans;
    }
    
    
    int rob(vector<int>& nums) {
        // if(nums.size()==0)return 0;
        // int n1=0,n2=0;
        // for(int n:nums){
        //     int temp=n1;
        //     n1=max(n2+n,n1);
        //     n2=temp;
        // }
        // return n1;
        
        // return recur(nums,0);
        
//         vector<int>dp(nums.size()+2,0);
        
        
//         for(int i=nums.size()-1;i>=0;i--){
//             dp[i]=max(dp[i+1],nums[i]+dp[i+2]);
//         }
//         return dp[0];
        return recur(0,nums);
        
        
    }
};