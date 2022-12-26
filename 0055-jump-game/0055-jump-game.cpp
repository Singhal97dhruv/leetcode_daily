class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=0,i=0;
        
        for(;i<=n;i++){
            n=max(n,i+nums[i]);
            if(n>=nums.size()-1)return true;
        }
        return false;
       
        
    }
};