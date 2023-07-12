class Solution {
public:
    int dp[101]={[0 ... 100]=-1};
    int recur(vector<int>&nums,int idx){
        
        if(idx>=nums.size())return 0;
        
        if(dp[idx]!=-1)return dp[idx];
        
        return dp[idx]= max(nums[idx]+recur(nums,idx+2),recur(nums,idx+1));
        
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
        
        return recur(nums,0);
        
    }
};