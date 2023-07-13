class Solution {
public:
    bool canJump(vector<int>& nums) {
//         int n=0,i=0;
        
//         for(;i<=n;i++){
//             n=max(n,i+nums[i]);
//             if(n>=nums.size()-1)return true;
//         }
//         return false;
        
        
        int jmpLen=0;
        for(int i=0;i<=jmpLen;i++){
            jmpLen=max(jmpLen,nums[i]+i);
            if(jmpLen>=nums.size()-1)return true;
        }
       return false;
        
    }
};