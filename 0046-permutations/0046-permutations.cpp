class Solution {
public:
    
    vector<vector<int>>res;
    
    void permute(int st,vector<int>&nums){
        if(st==nums.size()){
            res.push_back(nums);
            return;
        }
        
        for(int i=st;i<nums.size();i++){
            
            swap(nums[i],nums[st]);
            permute(st+1,nums);
            
            swap(nums[i],nums[st]);
        }
        
    
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        
        permute(0,nums);
        return res;
        
    }
};