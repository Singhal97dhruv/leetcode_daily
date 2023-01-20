class Solution {
public:
    
    set<vector<int>>res;
    
    void backtracking(vector<int>&nums,int st,vector<int>&temp){
       if(st>=nums.size()){ 
        if(temp.size()>=2){
            res.insert(temp);
        }
        return;
    }
        
        if(temp.size()==0|| temp.back()<=nums[st]){
            temp.push_back(nums[st]);
            backtracking(nums,st+1,temp);
            temp.pop_back();
        }
        backtracking(nums,st+1,temp);
        
        
    }
    
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<int>temp;
        backtracking(nums,0,temp);
        return vector(res.begin(),res.end());
    }
};