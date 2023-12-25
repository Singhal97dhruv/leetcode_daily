class Solution {
public:
    
    int backtracking(int idx,vector<int>&nums,int k,unordered_map<int,int>&freq){
        if(idx>=nums.size())return 1;
        
        int ans=backtracking(idx+1,nums,k,freq);
        
      
        if(!freq[nums[idx]-k] && !freq[nums[idx]+k]){
            freq[nums[idx]]++;
            ans+=backtracking(idx+1,nums,k,freq);
            freq[nums[idx]]--;
        }
            
        
        return ans;
        
    }
    
    int beautifulSubsets(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        return backtracking(0,nums,k,freq)-1;
    }
};