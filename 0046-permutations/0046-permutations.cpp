class Solution {
public:
    
    vector<vector<int>>res;
    
//     void permute(int st,vector<int>&nums){
//         if(st==nums.size()){
//             res.push_back(nums);
//             return;
//         }
        
//         for(int i=st;i<nums.size();i++){
            
//             swap(nums[i],nums[st]);
//             permute(st+1,nums);
            
//             swap(nums[i],nums[st]);
//         }
        
    
//     }
    
//     void permute(int st,vector<int>&nums){
//         if(st==nums.size()){
//             res.push_back(nums);return;
//         }
        
//         for(int i=st;i<nums.size();i++){
//             swap(nums[i],nums[st]);
//             permute(st+1,nums);
//             swap(nums[i],nums[st]);
//         }
        
//     }
    
    void permute(vector<int>&nums,int idx){
        if(idx>=nums.size()){
            res.push_back(nums);return;
        }
        
        for(int i=idx;i<nums.size();i++){
            swap(nums[i],nums[idx]);
            permute(nums,idx+1);
            swap(nums[i],nums[idx]);
        }
        
    }
    
    
    vector<vector<int>> permute(vector<int>& nums) {
        
        permute(nums,0);
        return res;
        
    }
};