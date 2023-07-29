class Solution {
public:
    
//     bool reach(int idx,int jump,vector<int>&nums){
//         if(idx+jump>=nums.size()-1)return true;
//         bool ans=false;
//         for(int i=idx+1;i<=idx+jump;i++){
//             ans=ans|| reach(i,nums[i],nums);
//         }
//         return ans;
//     }
    
    
    bool canJump(vector<int>& nums) {
//         int n=0,i=0;
        
//         for(;i<=n;i++){
//             n=max(n,i+nums[i]);
//             if(n>=nums.size()-1)return true;
//         }
//         return false;
        
        
       //  int jmpLen=0;
       //  for(int i=0;i<=jmpLen;i++){
       //      jmpLen=max(jmpLen,nums[i]+i);
       //      if(jmpLen>=nums.size()-1)return true;
       //  }
       // return false;
        // return reach(0,nums[0],nums);
       
        int mx=0;
        for(int i=0;i<=mx;i++){
            mx=max(mx,i+nums[i]);
            if(mx>=nums.size()-1)return true;
        }
        return false;
    }
};