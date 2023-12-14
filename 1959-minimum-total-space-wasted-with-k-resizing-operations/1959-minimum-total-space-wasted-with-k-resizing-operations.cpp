class Solution {
public:
    int n,INF=200*1e6;
    int dp[200][200]={};
    
    int recur(int idx,vector<int>&nums, int k){
        if(idx>=nums.size())return 0;
        if(k==-1)return INF;
        if(dp[idx][k]!=-1)return dp[idx][k];
        int ans=INF,totalSum=0;

        int mx=nums[idx];
        for(int i=idx;i<nums.size();i++){
            mx=max(mx,nums[i]);
            totalSum+=nums[i];
            int wasted=(i-idx+1)*mx - totalSum;
            ans= min(ans,recur(i+1,nums,k-1)+wasted);
        }
        return dp[idx][k]= ans;
    }
    
    
    int minSpaceWastedKResizing(vector<int>& nums, int k) {
        memset(dp,-1,sizeof(dp));
       return recur(0,nums,k);
        
    }
};